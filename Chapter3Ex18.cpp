/*
File Name: Chapter3Ex18
Programmer: Simon Geesaman
Date: 09/25
Requirements:

Assuming there are no deposits other than the original investment, the
balance in a savings account after one vear may be calculated as

Amount = Principal x ((1 + Rate)/T)^T

Principal is the balance in the savings account, Rate is the interest
rate, and T is the number of times the interest is compounded during a
year (T is 4 if the interest is compounded quarterly).
Write a program that asks for the principal, the interest rate, and the
number of times the interest is compounded. It should display a report.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int times_compounded;
    float account_balance, rate, amount, interest;

    cout << "What is the your account balance? $";
    cin >> account_balance;
    cout << "What is the interest rate on your account? (in decimal) ";
    cin >> rate;
    cout << "How many times is the interest compounded per year? ";
    cin >> times_compounded;

    interest = account_balance * pow(((1 + rate) / times_compounded), times_compounded);
    amount = account_balance + interest;

    cout << "Interest rate:     " << setw(10) << rate << endl <<
        "Times compounded:  " << setw(10) << times_compounded << endl <<
        "Principal:         " << setw(10) << "$" << account_balance << endl <<
        "Interest:          " << setw(10) << "$" << interest << endl <<
        "Amount in savings: " << setw(10) << "$" << amount << endl;
}
