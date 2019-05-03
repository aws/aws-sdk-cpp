/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOIDENTITYPROVIDER_API PasswordPolicyType
  {
  public:
    PasswordPolicyType();
    PasswordPolicyType(Aws::Utils::Json::JsonView jsonValue);
    PasswordPolicyType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum length of the password policy that you have set. Cannot be less
     * than 6.</p>
     */
    inline int GetMinimumLength() const{ return m_minimumLength; }

    /**
     * <p>The minimum length of the password policy that you have set. Cannot be less
     * than 6.</p>
     */
    inline bool MinimumLengthHasBeenSet() const { return m_minimumLengthHasBeenSet; }

    /**
     * <p>The minimum length of the password policy that you have set. Cannot be less
     * than 6.</p>
     */
    inline void SetMinimumLength(int value) { m_minimumLengthHasBeenSet = true; m_minimumLength = value; }

    /**
     * <p>The minimum length of the password policy that you have set. Cannot be less
     * than 6.</p>
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


    
    inline int GetTemporaryPasswordValidityDays() const{ return m_temporaryPasswordValidityDays; }

    
    inline bool TemporaryPasswordValidityDaysHasBeenSet() const { return m_temporaryPasswordValidityDaysHasBeenSet; }

    
    inline void SetTemporaryPasswordValidityDays(int value) { m_temporaryPasswordValidityDaysHasBeenSet = true; m_temporaryPasswordValidityDays = value; }

    
    inline PasswordPolicyType& WithTemporaryPasswordValidityDays(int value) { SetTemporaryPasswordValidityDays(value); return *this;}

  private:

    int m_minimumLength;
    bool m_minimumLengthHasBeenSet;

    bool m_requireUppercase;
    bool m_requireUppercaseHasBeenSet;

    bool m_requireLowercase;
    bool m_requireLowercaseHasBeenSet;

    bool m_requireNumbers;
    bool m_requireNumbersHasBeenSet;

    bool m_requireSymbols;
    bool m_requireSymbolsHasBeenSet;

    int m_temporaryPasswordValidityDays;
    bool m_temporaryPasswordValidityDaysHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
