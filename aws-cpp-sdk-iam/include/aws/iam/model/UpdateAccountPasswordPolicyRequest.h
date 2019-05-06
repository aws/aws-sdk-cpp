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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountPasswordPolicy"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The minimum number of characters allowed in an IAM user password.</p> <p>If
     * you do not specify a value for this parameter, then the operation uses the
     * default value of <code>6</code>.</p>
     */
    inline int GetMinimumPasswordLength() const{ return m_minimumPasswordLength; }

    /**
     * <p>The minimum number of characters allowed in an IAM user password.</p> <p>If
     * you do not specify a value for this parameter, then the operation uses the
     * default value of <code>6</code>.</p>
     */
    inline bool MinimumPasswordLengthHasBeenSet() const { return m_minimumPasswordLengthHasBeenSet; }

    /**
     * <p>The minimum number of characters allowed in an IAM user password.</p> <p>If
     * you do not specify a value for this parameter, then the operation uses the
     * default value of <code>6</code>.</p>
     */
    inline void SetMinimumPasswordLength(int value) { m_minimumPasswordLengthHasBeenSet = true; m_minimumPasswordLength = value; }

    /**
     * <p>The minimum number of characters allowed in an IAM user password.</p> <p>If
     * you do not specify a value for this parameter, then the operation uses the
     * default value of <code>6</code>.</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithMinimumPasswordLength(int value) { SetMinimumPasswordLength(value); return *this;}


    /**
     * <p>Specifies whether IAM user passwords must contain at least one of the
     * following non-alphanumeric characters:</p> <p>! @ # $ % ^ &amp; * ( ) _ + - = [
     * ] { } | '</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>false</code>. The result is that
     * passwords do not require at least one symbol character.</p>
     */
    inline bool GetRequireSymbols() const{ return m_requireSymbols; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one of the
     * following non-alphanumeric characters:</p> <p>! @ # $ % ^ &amp; * ( ) _ + - = [
     * ] { } | '</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>false</code>. The result is that
     * passwords do not require at least one symbol character.</p>
     */
    inline bool RequireSymbolsHasBeenSet() const { return m_requireSymbolsHasBeenSet; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one of the
     * following non-alphanumeric characters:</p> <p>! @ # $ % ^ &amp; * ( ) _ + - = [
     * ] { } | '</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>false</code>. The result is that
     * passwords do not require at least one symbol character.</p>
     */
    inline void SetRequireSymbols(bool value) { m_requireSymbolsHasBeenSet = true; m_requireSymbols = value; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one of the
     * following non-alphanumeric characters:</p> <p>! @ # $ % ^ &amp; * ( ) _ + - = [
     * ] { } | '</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>false</code>. The result is that
     * passwords do not require at least one symbol character.</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithRequireSymbols(bool value) { SetRequireSymbols(value); return *this;}


    /**
     * <p>Specifies whether IAM user passwords must contain at least one numeric
     * character (0 to 9).</p> <p>If you do not specify a value for this parameter,
     * then the operation uses the default value of <code>false</code>. The result is
     * that passwords do not require at least one numeric character.</p>
     */
    inline bool GetRequireNumbers() const{ return m_requireNumbers; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one numeric
     * character (0 to 9).</p> <p>If you do not specify a value for this parameter,
     * then the operation uses the default value of <code>false</code>. The result is
     * that passwords do not require at least one numeric character.</p>
     */
    inline bool RequireNumbersHasBeenSet() const { return m_requireNumbersHasBeenSet; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one numeric
     * character (0 to 9).</p> <p>If you do not specify a value for this parameter,
     * then the operation uses the default value of <code>false</code>. The result is
     * that passwords do not require at least one numeric character.</p>
     */
    inline void SetRequireNumbers(bool value) { m_requireNumbersHasBeenSet = true; m_requireNumbers = value; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one numeric
     * character (0 to 9).</p> <p>If you do not specify a value for this parameter,
     * then the operation uses the default value of <code>false</code>. The result is
     * that passwords do not require at least one numeric character.</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithRequireNumbers(bool value) { SetRequireNumbers(value); return *this;}


    /**
     * <p>Specifies whether IAM user passwords must contain at least one uppercase
     * character from the ISO basic Latin alphabet (A to Z).</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>false</code>. The result is that passwords do not require at least one
     * uppercase character.</p>
     */
    inline bool GetRequireUppercaseCharacters() const{ return m_requireUppercaseCharacters; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one uppercase
     * character from the ISO basic Latin alphabet (A to Z).</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>false</code>. The result is that passwords do not require at least one
     * uppercase character.</p>
     */
    inline bool RequireUppercaseCharactersHasBeenSet() const { return m_requireUppercaseCharactersHasBeenSet; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one uppercase
     * character from the ISO basic Latin alphabet (A to Z).</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>false</code>. The result is that passwords do not require at least one
     * uppercase character.</p>
     */
    inline void SetRequireUppercaseCharacters(bool value) { m_requireUppercaseCharactersHasBeenSet = true; m_requireUppercaseCharacters = value; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one uppercase
     * character from the ISO basic Latin alphabet (A to Z).</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>false</code>. The result is that passwords do not require at least one
     * uppercase character.</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithRequireUppercaseCharacters(bool value) { SetRequireUppercaseCharacters(value); return *this;}


    /**
     * <p>Specifies whether IAM user passwords must contain at least one lowercase
     * character from the ISO basic Latin alphabet (a to z).</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>false</code>. The result is that passwords do not require at least one
     * lowercase character.</p>
     */
    inline bool GetRequireLowercaseCharacters() const{ return m_requireLowercaseCharacters; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one lowercase
     * character from the ISO basic Latin alphabet (a to z).</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>false</code>. The result is that passwords do not require at least one
     * lowercase character.</p>
     */
    inline bool RequireLowercaseCharactersHasBeenSet() const { return m_requireLowercaseCharactersHasBeenSet; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one lowercase
     * character from the ISO basic Latin alphabet (a to z).</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>false</code>. The result is that passwords do not require at least one
     * lowercase character.</p>
     */
    inline void SetRequireLowercaseCharacters(bool value) { m_requireLowercaseCharactersHasBeenSet = true; m_requireLowercaseCharacters = value; }

    /**
     * <p>Specifies whether IAM user passwords must contain at least one lowercase
     * character from the ISO basic Latin alphabet (a to z).</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>false</code>. The result is that passwords do not require at least one
     * lowercase character.</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithRequireLowercaseCharacters(bool value) { SetRequireLowercaseCharacters(value); return *this;}


    /**
     * <p> Allows all IAM users in your account to use the AWS Management Console to
     * change their own passwords. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/HowToPwdIAMUser.html">Letting
     * IAM Users Change Their Own Passwords</a> in the <i>IAM User Guide</i>.</p> <p>If
     * you do not specify a value for this parameter, then the operation uses the
     * default value of <code>false</code>. The result is that IAM users in the account
     * do not automatically have permissions to change their own password.</p>
     */
    inline bool GetAllowUsersToChangePassword() const{ return m_allowUsersToChangePassword; }

    /**
     * <p> Allows all IAM users in your account to use the AWS Management Console to
     * change their own passwords. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/HowToPwdIAMUser.html">Letting
     * IAM Users Change Their Own Passwords</a> in the <i>IAM User Guide</i>.</p> <p>If
     * you do not specify a value for this parameter, then the operation uses the
     * default value of <code>false</code>. The result is that IAM users in the account
     * do not automatically have permissions to change their own password.</p>
     */
    inline bool AllowUsersToChangePasswordHasBeenSet() const { return m_allowUsersToChangePasswordHasBeenSet; }

    /**
     * <p> Allows all IAM users in your account to use the AWS Management Console to
     * change their own passwords. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/HowToPwdIAMUser.html">Letting
     * IAM Users Change Their Own Passwords</a> in the <i>IAM User Guide</i>.</p> <p>If
     * you do not specify a value for this parameter, then the operation uses the
     * default value of <code>false</code>. The result is that IAM users in the account
     * do not automatically have permissions to change their own password.</p>
     */
    inline void SetAllowUsersToChangePassword(bool value) { m_allowUsersToChangePasswordHasBeenSet = true; m_allowUsersToChangePassword = value; }

    /**
     * <p> Allows all IAM users in your account to use the AWS Management Console to
     * change their own passwords. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/HowToPwdIAMUser.html">Letting
     * IAM Users Change Their Own Passwords</a> in the <i>IAM User Guide</i>.</p> <p>If
     * you do not specify a value for this parameter, then the operation uses the
     * default value of <code>false</code>. The result is that IAM users in the account
     * do not automatically have permissions to change their own password.</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithAllowUsersToChangePassword(bool value) { SetAllowUsersToChangePassword(value); return *this;}


    /**
     * <p>The number of days that an IAM user password is valid.</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>0</code>. The result is that IAM user passwords never expire.</p>
     */
    inline int GetMaxPasswordAge() const{ return m_maxPasswordAge; }

    /**
     * <p>The number of days that an IAM user password is valid.</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>0</code>. The result is that IAM user passwords never expire.</p>
     */
    inline bool MaxPasswordAgeHasBeenSet() const { return m_maxPasswordAgeHasBeenSet; }

    /**
     * <p>The number of days that an IAM user password is valid.</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>0</code>. The result is that IAM user passwords never expire.</p>
     */
    inline void SetMaxPasswordAge(int value) { m_maxPasswordAgeHasBeenSet = true; m_maxPasswordAge = value; }

    /**
     * <p>The number of days that an IAM user password is valid.</p> <p>If you do not
     * specify a value for this parameter, then the operation uses the default value of
     * <code>0</code>. The result is that IAM user passwords never expire.</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithMaxPasswordAge(int value) { SetMaxPasswordAge(value); return *this;}


    /**
     * <p>Specifies the number of previous passwords that IAM users are prevented from
     * reusing.</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>0</code>. The result is that IAM users
     * are not prevented from reusing previous passwords.</p>
     */
    inline int GetPasswordReusePrevention() const{ return m_passwordReusePrevention; }

    /**
     * <p>Specifies the number of previous passwords that IAM users are prevented from
     * reusing.</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>0</code>. The result is that IAM users
     * are not prevented from reusing previous passwords.</p>
     */
    inline bool PasswordReusePreventionHasBeenSet() const { return m_passwordReusePreventionHasBeenSet; }

    /**
     * <p>Specifies the number of previous passwords that IAM users are prevented from
     * reusing.</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>0</code>. The result is that IAM users
     * are not prevented from reusing previous passwords.</p>
     */
    inline void SetPasswordReusePrevention(int value) { m_passwordReusePreventionHasBeenSet = true; m_passwordReusePrevention = value; }

    /**
     * <p>Specifies the number of previous passwords that IAM users are prevented from
     * reusing.</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>0</code>. The result is that IAM users
     * are not prevented from reusing previous passwords.</p>
     */
    inline UpdateAccountPasswordPolicyRequest& WithPasswordReusePrevention(int value) { SetPasswordReusePrevention(value); return *this;}


    /**
     * <p>Prevents IAM users from setting a new password after their password has
     * expired. The IAM user cannot be accessed until an administrator resets the
     * password.</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>false</code>. The result is that IAM
     * users can change their passwords after they expire and continue to sign in as
     * the user.</p>
     */
    inline bool GetHardExpiry() const{ return m_hardExpiry; }

    /**
     * <p>Prevents IAM users from setting a new password after their password has
     * expired. The IAM user cannot be accessed until an administrator resets the
     * password.</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>false</code>. The result is that IAM
     * users can change their passwords after they expire and continue to sign in as
     * the user.</p>
     */
    inline bool HardExpiryHasBeenSet() const { return m_hardExpiryHasBeenSet; }

    /**
     * <p>Prevents IAM users from setting a new password after their password has
     * expired. The IAM user cannot be accessed until an administrator resets the
     * password.</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>false</code>. The result is that IAM
     * users can change their passwords after they expire and continue to sign in as
     * the user.</p>
     */
    inline void SetHardExpiry(bool value) { m_hardExpiryHasBeenSet = true; m_hardExpiry = value; }

    /**
     * <p>Prevents IAM users from setting a new password after their password has
     * expired. The IAM user cannot be accessed until an administrator resets the
     * password.</p> <p>If you do not specify a value for this parameter, then the
     * operation uses the default value of <code>false</code>. The result is that IAM
     * users can change their passwords after they expire and continue to sign in as
     * the user.</p>
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
