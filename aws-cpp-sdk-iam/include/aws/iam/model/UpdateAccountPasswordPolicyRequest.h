/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API UpdateAccountPasswordPolicyRequest : public IAMRequest
  {
  public:
    UpdateAccountPasswordPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The minimum number of characters allowed in an IAM user password.</p>
     * <p>Default value: 6</p>
     */
    inline int GetMinimumPasswordLength() const{ return m_minimumPasswordLength; }

    /**
     * <p>The minimum number of characters allowed in an IAM user password.</p>
     * <p>Default value: 6</p>
     */
    inline void SetMinimumPasswordLength(int value) { m_minimumPasswordLengthHasBeenSet = true; m_minimumPasswordLength = value; }

    /**
     * <p>The minimum number of characters allowed in an IAM user password.</p>
     * <p>Default value: 6</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithMinimumPasswordLength(int value) { SetMinimumPasswordLength(value); return *this;}

    /**
     * <p>Specifies whether IAM user passwords must contain at least one of the
     * following non-alphanumeric characters:</p> <p>! @ # $ % ^ &amp;amp; * ( ) _ + -
     * = [ ] { } | '</p> <p>Default value: false</p>
     */
    inline bool GetRequireSymbols() const{ return m_requireSymbols; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one of the
     * following non-alphanumeric characters:</p> <p>! @ # $ % ^ &amp;amp; * ( ) _ + -
     * = [ ] { } | '</p> <p>Default value: false</p>
     */
    inline void SetRequireSymbols(bool value) { m_requireSymbolsHasBeenSet = true; m_requireSymbols = value; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one of the
     * following non-alphanumeric characters:</p> <p>! @ # $ % ^ &amp;amp; * ( ) _ + -
     * = [ ] { } | '</p> <p>Default value: false</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithRequireSymbols(bool value) { SetRequireSymbols(value); return *this;}

    /**
     * <p>Specifies whether IAM user passwords must contain at least one numeric
     * character (0 to 9).</p> <p>Default value: false</p>
     */
    inline bool GetRequireNumbers() const{ return m_requireNumbers; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one numeric
     * character (0 to 9).</p> <p>Default value: false</p>
     */
    inline void SetRequireNumbers(bool value) { m_requireNumbersHasBeenSet = true; m_requireNumbers = value; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one numeric
     * character (0 to 9).</p> <p>Default value: false</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithRequireNumbers(bool value) { SetRequireNumbers(value); return *this;}

    /**
     * <p>Specifies whether IAM user passwords must contain at least one uppercase
     * character from the ISO basic Latin alphabet (A to Z).</p> <p>Default value:
     * false</p>
     */
    inline bool GetRequireUppercaseCharacters() const{ return m_requireUppercaseCharacters; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one uppercase
     * character from the ISO basic Latin alphabet (A to Z).</p> <p>Default value:
     * false</p>
     */
    inline void SetRequireUppercaseCharacters(bool value) { m_requireUppercaseCharactersHasBeenSet = true; m_requireUppercaseCharacters = value; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one uppercase
     * character from the ISO basic Latin alphabet (A to Z).</p> <p>Default value:
     * false</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithRequireUppercaseCharacters(bool value) { SetRequireUppercaseCharacters(value); return *this;}

    /**
     * <p>Specifies whether IAM user passwords must contain at least one lowercase
     * character from the ISO basic Latin alphabet (a to z).</p> <p>Default value:
     * false</p>
     */
    inline bool GetRequireLowercaseCharacters() const{ return m_requireLowercaseCharacters; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one lowercase
     * character from the ISO basic Latin alphabet (a to z).</p> <p>Default value:
     * false</p>
     */
    inline void SetRequireLowercaseCharacters(bool value) { m_requireLowercaseCharactersHasBeenSet = true; m_requireLowercaseCharacters = value; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one lowercase
     * character from the ISO basic Latin alphabet (a to z).</p> <p>Default value:
     * false</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithRequireLowercaseCharacters(bool value) { SetRequireLowercaseCharacters(value); return *this;}

    /**
     * <p> Allows all IAM users in your account to use the AWS Management Console to
     * change their own passwords. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/HowToPwdIAMUser.html">Letting
     * IAM Users Change Their Own Passwords</a> in the <i>IAM User Guide</i>.</p>
     * <p>Default value: false</p>
     */
    inline bool GetAllowUsersToChangePassword() const{ return m_allowUsersToChangePassword; }

    /**
     * <p> Allows all IAM users in your account to use the AWS Management Console to
     * change their own passwords. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/HowToPwdIAMUser.html">Letting
     * IAM Users Change Their Own Passwords</a> in the <i>IAM User Guide</i>.</p>
     * <p>Default value: false</p>
     */
    inline void SetAllowUsersToChangePassword(bool value) { m_allowUsersToChangePasswordHasBeenSet = true; m_allowUsersToChangePassword = value; }

    /**
     * <p> Allows all IAM users in your account to use the AWS Management Console to
     * change their own passwords. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/HowToPwdIAMUser.html">Letting
     * IAM Users Change Their Own Passwords</a> in the <i>IAM User Guide</i>.</p>
     * <p>Default value: false</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithAllowUsersToChangePassword(bool value) { SetAllowUsersToChangePassword(value); return *this;}

    /**
     * <p>The number of days that an IAM user password is valid. The default value of 0
     * means IAM user passwords never expire.</p> <p>Default value: 0</p>
     */
    inline int GetMaxPasswordAge() const{ return m_maxPasswordAge; }

    /**
     * <p>The number of days that an IAM user password is valid. The default value of 0
     * means IAM user passwords never expire.</p> <p>Default value: 0</p>
     */
    inline void SetMaxPasswordAge(int value) { m_maxPasswordAgeHasBeenSet = true; m_maxPasswordAge = value; }

    /**
     * <p>The number of days that an IAM user password is valid. The default value of 0
     * means IAM user passwords never expire.</p> <p>Default value: 0</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithMaxPasswordAge(int value) { SetMaxPasswordAge(value); return *this;}

    /**
     * <p>Specifies the number of previous passwords that IAM users are prevented from
     * reusing. The default value of 0 means IAM users are not prevented from reusing
     * previous passwords.</p> <p>Default value: 0</p>
     */
    inline int GetPasswordReusePrevention() const{ return m_passwordReusePrevention; }

    /**
     * <p>Specifies the number of previous passwords that IAM users are prevented from
     * reusing. The default value of 0 means IAM users are not prevented from reusing
     * previous passwords.</p> <p>Default value: 0</p>
     */
    inline void SetPasswordReusePrevention(int value) { m_passwordReusePreventionHasBeenSet = true; m_passwordReusePrevention = value; }

    /**
     * <p>Specifies the number of previous passwords that IAM users are prevented from
     * reusing. The default value of 0 means IAM users are not prevented from reusing
     * previous passwords.</p> <p>Default value: 0</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithPasswordReusePrevention(int value) { SetPasswordReusePrevention(value); return *this;}

    /**
     * <p>Prevents IAM users from setting a new password after their password has
     * expired.</p> <p>Default value: false</p>
     */
    inline bool GetHardExpiry() const{ return m_hardExpiry; }

    /**
     * <p>Prevents IAM users from setting a new password after their password has
     * expired.</p> <p>Default value: false</p>
     */
    inline void SetHardExpiry(bool value) { m_hardExpiryHasBeenSet = true; m_hardExpiry = value; }

    /**
     * <p>Prevents IAM users from setting a new password after their password has
     * expired.</p> <p>Default value: false</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithHardExpiry(bool value) { SetHardExpiry(value); return *this;}

  private:
    int m_minimumPasswordLength;
    bool m_minimumPasswordLengthHasBeenSet;
    bool m_requireSymbols;
    bool m_requireSymbolsHasBeenSet;
    bool m_requireNumbers;
    bool m_requireNumbersHasBeenSet;
    bool m_requireUppercaseCharacters;
    bool m_requireUppercaseCharactersHasBeenSet;
    bool m_requireLowercaseCharacters;
    bool m_requireLowercaseCharactersHasBeenSet;
    bool m_allowUsersToChangePassword;
    bool m_allowUsersToChangePasswordHasBeenSet;
    int m_maxPasswordAge;
    bool m_maxPasswordAgeHasBeenSet;
    int m_passwordReusePrevention;
    bool m_passwordReusePreventionHasBeenSet;
    bool m_hardExpiry;
    bool m_hardExpiryHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
