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


    /**
     * <p>The minimum length of the password in the policy that you have set. This
     * value can't be less than 6.</p>
     */
    inline int GetMinimumLength() const{ return m_minimumLength; }

    /**
     * <p>The minimum length of the password in the policy that you have set. This
     * value can't be less than 6.</p>
     */
    inline bool MinimumLengthHasBeenSet() const { return m_minimumLengthHasBeenSet; }

    /**
     * <p>The minimum length of the password in the policy that you have set. This
     * value can't be less than 6.</p>
     */
    inline void SetMinimumLength(int value) { m_minimumLengthHasBeenSet = true; m_minimumLength = value; }

    /**
     * <p>The minimum length of the password in the policy that you have set. This
     * value can't be less than 6.</p>
     */
    inline PasswordPolicyType& WithMinimumLength(int value) { SetMinimumLength(value); return *this;}


    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one uppercase letter in their password.</p>
     */
    inline bool GetRequireUppercase() const{ return m_requireUppercase; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one uppercase letter in their password.</p>
     */
    inline bool RequireUppercaseHasBeenSet() const { return m_requireUppercaseHasBeenSet; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one uppercase letter in their password.</p>
     */
    inline void SetRequireUppercase(bool value) { m_requireUppercaseHasBeenSet = true; m_requireUppercase = value; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one uppercase letter in their password.</p>
     */
    inline PasswordPolicyType& WithRequireUppercase(bool value) { SetRequireUppercase(value); return *this;}


    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one lowercase letter in their password.</p>
     */
    inline bool GetRequireLowercase() const{ return m_requireLowercase; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one lowercase letter in their password.</p>
     */
    inline bool RequireLowercaseHasBeenSet() const { return m_requireLowercaseHasBeenSet; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one lowercase letter in their password.</p>
     */
    inline void SetRequireLowercase(bool value) { m_requireLowercaseHasBeenSet = true; m_requireLowercase = value; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one lowercase letter in their password.</p>
     */
    inline PasswordPolicyType& WithRequireLowercase(bool value) { SetRequireLowercase(value); return *this;}


    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one number in their password.</p>
     */
    inline bool GetRequireNumbers() const{ return m_requireNumbers; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one number in their password.</p>
     */
    inline bool RequireNumbersHasBeenSet() const { return m_requireNumbersHasBeenSet; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one number in their password.</p>
     */
    inline void SetRequireNumbers(bool value) { m_requireNumbersHasBeenSet = true; m_requireNumbers = value; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one number in their password.</p>
     */
    inline PasswordPolicyType& WithRequireNumbers(bool value) { SetRequireNumbers(value); return *this;}


    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one symbol in their password.</p>
     */
    inline bool GetRequireSymbols() const{ return m_requireSymbols; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one symbol in their password.</p>
     */
    inline bool RequireSymbolsHasBeenSet() const { return m_requireSymbolsHasBeenSet; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one symbol in their password.</p>
     */
    inline void SetRequireSymbols(bool value) { m_requireSymbolsHasBeenSet = true; m_requireSymbols = value; }

    /**
     * <p>In the password policy that you have set, refers to whether you have required
     * users to use at least one symbol in their password.</p>
     */
    inline PasswordPolicyType& WithRequireSymbols(bool value) { SetRequireSymbols(value); return *this;}


    /**
     * <p>The number of days a temporary password is valid in the password policy. If
     * the user doesn't sign in during this time, an administrator must reset their
     * password.</p>  <p>When you set <code>TemporaryPasswordValidityDays</code>
     * for a user pool, you can no longer set a value for the legacy
     * <code>UnusedAccountValidityDays</code> parameter in that user pool.</p> 
     */
    inline int GetTemporaryPasswordValidityDays() const{ return m_temporaryPasswordValidityDays; }

    /**
     * <p>The number of days a temporary password is valid in the password policy. If
     * the user doesn't sign in during this time, an administrator must reset their
     * password.</p>  <p>When you set <code>TemporaryPasswordValidityDays</code>
     * for a user pool, you can no longer set a value for the legacy
     * <code>UnusedAccountValidityDays</code> parameter in that user pool.</p> 
     */
    inline bool TemporaryPasswordValidityDaysHasBeenSet() const { return m_temporaryPasswordValidityDaysHasBeenSet; }

    /**
     * <p>The number of days a temporary password is valid in the password policy. If
     * the user doesn't sign in during this time, an administrator must reset their
     * password.</p>  <p>When you set <code>TemporaryPasswordValidityDays</code>
     * for a user pool, you can no longer set a value for the legacy
     * <code>UnusedAccountValidityDays</code> parameter in that user pool.</p> 
     */
    inline void SetTemporaryPasswordValidityDays(int value) { m_temporaryPasswordValidityDaysHasBeenSet = true; m_temporaryPasswordValidityDays = value; }

    /**
     * <p>The number of days a temporary password is valid in the password policy. If
     * the user doesn't sign in during this time, an administrator must reset their
     * password.</p>  <p>When you set <code>TemporaryPasswordValidityDays</code>
     * for a user pool, you can no longer set a value for the legacy
     * <code>UnusedAccountValidityDays</code> parameter in that user pool.</p> 
     */
    inline PasswordPolicyType& WithTemporaryPasswordValidityDays(int value) { SetTemporaryPasswordValidityDays(value); return *this;}

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

    int m_temporaryPasswordValidityDays;
    bool m_temporaryPasswordValidityDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
