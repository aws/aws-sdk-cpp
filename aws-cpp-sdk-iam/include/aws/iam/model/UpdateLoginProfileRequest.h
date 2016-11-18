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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API UpdateLoginProfileRequest : public IAMRequest
  {
  public:
    UpdateLoginProfileRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the user whose password you want to update.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user whose password you want to update.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user whose password you want to update.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user whose password you want to update.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user whose password you want to update.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline UpdateLoginProfileRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user whose password you want to update.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline UpdateLoginProfileRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user whose password you want to update.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline UpdateLoginProfileRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The new password for the specified IAM user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D). However, the format can be further restricted by the
     * account administrator by setting a password policy on the AWS account. For more
     * information, see <a>UpdateAccountPasswordPolicy</a>.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The new password for the specified IAM user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D). However, the format can be further restricted by the
     * account administrator by setting a password policy on the AWS account. For more
     * information, see <a>UpdateAccountPasswordPolicy</a>.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The new password for the specified IAM user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D). However, the format can be further restricted by the
     * account administrator by setting a password policy on the AWS account. For more
     * information, see <a>UpdateAccountPasswordPolicy</a>.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The new password for the specified IAM user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D). However, the format can be further restricted by the
     * account administrator by setting a password policy on the AWS account. For more
     * information, see <a>UpdateAccountPasswordPolicy</a>.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The new password for the specified IAM user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D). However, the format can be further restricted by the
     * account administrator by setting a password policy on the AWS account. For more
     * information, see <a>UpdateAccountPasswordPolicy</a>.</p>
     */
    inline UpdateLoginProfileRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The new password for the specified IAM user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D). However, the format can be further restricted by the
     * account administrator by setting a password policy on the AWS account. For more
     * information, see <a>UpdateAccountPasswordPolicy</a>.</p>
     */
    inline UpdateLoginProfileRequest& WithPassword(Aws::String&& value) { SetPassword(value); return *this;}

    /**
     * <p>The new password for the specified IAM user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D). However, the format can be further restricted by the
     * account administrator by setting a password policy on the AWS account. For more
     * information, see <a>UpdateAccountPasswordPolicy</a>.</p>
     */
    inline UpdateLoginProfileRequest& WithPassword(const char* value) { SetPassword(value); return *this;}

    /**
     * <p>Allows this new password to be used only once by requiring the specified IAM
     * user to set a new password on next sign-in.</p>
     */
    inline bool GetPasswordResetRequired() const{ return m_passwordResetRequired; }

    /**
     * <p>Allows this new password to be used only once by requiring the specified IAM
     * user to set a new password on next sign-in.</p>
     */
    inline void SetPasswordResetRequired(bool value) { m_passwordResetRequiredHasBeenSet = true; m_passwordResetRequired = value; }

    /**
     * <p>Allows this new password to be used only once by requiring the specified IAM
     * user to set a new password on next sign-in.</p>
     */
    inline UpdateLoginProfileRequest& WithPasswordResetRequired(bool value) { SetPasswordResetRequired(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_password;
    bool m_passwordHasBeenSet;
    bool m_passwordResetRequired;
    bool m_passwordResetRequiredHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
