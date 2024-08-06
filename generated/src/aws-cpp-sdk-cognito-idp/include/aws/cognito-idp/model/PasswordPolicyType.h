/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The password policy type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/PasswordPolicyType">AWS
   * API Reference</a></p>
   */
  class PasswordPolicyType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API PasswordPolicyType();
    AWS_COGNITOIDENTITYPROVIDER_API PasswordPolicyType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API PasswordPolicyType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum length of the password in the policy that you have set. This
     * value can't be less than 6.</p>
     */
    inline int GetMinimumLength() const{ return m_minimumLength; }
    inline bool MinimumLengthHasBeenSet() const { return m_minimumLengthHasBeenSet; }
    inline void SetMinimumLength(int value) { m_minimumLengthHasBeenSet = true; m_minimumLength = value; }
    inline PasswordPolicyType& WithMinimumLength(int value) { SetMinimumLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one uppercase letter in their password.</p>
     */
    inline bool GetRequireUppercase() const{ return m_requireUppercase; }
    inline bool RequireUppercaseHasBeenSet() const { return m_requireUppercaseHasBeenSet; }
    inline void SetRequireUppercase(bool value) { m_requireUppercaseHasBeenSet = true; m_requireUppercase = value; }
    inline PasswordPolicyType& WithRequireUppercase(bool value) { SetRequireUppercase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one lowercase letter in their password.</p>
     */
    inline bool GetRequireLowercase() const{ return m_requireLowercase; }
    inline bool RequireLowercaseHasBeenSet() const { return m_requireLowercaseHasBeenSet; }
    inline void SetRequireLowercase(bool value) { m_requireLowercaseHasBeenSet = true; m_requireLowercase = value; }
    inline PasswordPolicyType& WithRequireLowercase(bool value) { SetRequireLowercase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one number in their password.</p>
     */
    inline bool GetRequireNumbers() const{ return m_requireNumbers; }
    inline bool RequireNumbersHasBeenSet() const { return m_requireNumbersHasBeenSet; }
    inline void SetRequireNumbers(bool value) { m_requireNumbersHasBeenSet = true; m_requireNumbers = value; }
    inline PasswordPolicyType& WithRequireNumbers(bool value) { SetRequireNumbers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one symbol in their password.</p>
     */
    inline bool GetRequireSymbols() const{ return m_requireSymbols; }
    inline bool RequireSymbolsHasBeenSet() const { return m_requireSymbolsHasBeenSet; }
    inline void SetRequireSymbols(bool value) { m_requireSymbolsHasBeenSet = true; m_requireSymbols = value; }
    inline PasswordPolicyType& WithRequireSymbols(bool value) { SetRequireSymbols(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of previous passwords that you want Amazon Cognito to restrict
     * each user from reusing. Users can't set a password that matches any of
     * <code>n</code> previous passwords, where <code>n</code> is the value of
     * <code>PasswordHistorySize</code>.</p> <p>Password history isn't enforced and
     * isn't displayed in <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPool.html">DescribeUserPool</a>
     * responses when you set this value to <code>0</code> or don't provide it. To
     * activate this setting, <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
     * advanced security features</a> must be active in your user pool.</p>
     */
    inline int GetPasswordHistorySize() const{ return m_passwordHistorySize; }
    inline bool PasswordHistorySizeHasBeenSet() const { return m_passwordHistorySizeHasBeenSet; }
    inline void SetPasswordHistorySize(int value) { m_passwordHistorySizeHasBeenSet = true; m_passwordHistorySize = value; }
    inline PasswordPolicyType& WithPasswordHistorySize(int value) { SetPasswordHistorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days a temporary password is valid in the password policy. If
     * the user doesn't sign in during this time, an administrator must reset their
     * password. Defaults to <code>7</code>. If you submit a value of <code>0</code>,
     * Amazon Cognito treats it as a null value and sets
     * <code>TemporaryPasswordValidityDays</code> to its default value.</p> 
     * <p>When you set <code>TemporaryPasswordValidityDays</code> for a user pool, you
     * can no longer set a value for the legacy <code>UnusedAccountValidityDays</code>
     * parameter in that user pool.</p> 
     */
    inline int GetTemporaryPasswordValidityDays() const{ return m_temporaryPasswordValidityDays; }
    inline bool TemporaryPasswordValidityDaysHasBeenSet() const { return m_temporaryPasswordValidityDaysHasBeenSet; }
    inline void SetTemporaryPasswordValidityDays(int value) { m_temporaryPasswordValidityDaysHasBeenSet = true; m_temporaryPasswordValidityDays = value; }
    inline PasswordPolicyType& WithTemporaryPasswordValidityDays(int value) { SetTemporaryPasswordValidityDays(value); return *this;}
    ///@}
  private:

    int m_minimumLength;
    bool m_minimumLengthHasBeenSet = false;

    bool m_requireUppercase;
    bool m_requireUppercaseHasBeenSet = false;

    bool m_requireLowercase;
    bool m_requireLowercaseHasBeenSet = false;

    bool m_requireNumbers;
    bool m_requireNumbersHasBeenSet = false;

    bool m_requireSymbols;
    bool m_requireSymbolsHasBeenSet = false;

    int m_passwordHistorySize;
    bool m_passwordHistorySizeHasBeenSet = false;

    int m_temporaryPasswordValidityDays;
    bool m_temporaryPasswordValidityDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
