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
  class AWS_IAM_API ChangePasswordRequest : public IAMRequest
  {
  public:
    ChangePasswordRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The IAM user's current password.</p>
     */
    inline const Aws::String& GetOldPassword() const{ return m_oldPassword; }

    /**
     * <p>The IAM user's current password.</p>
     */
    inline void SetOldPassword(const Aws::String& value) { m_oldPasswordHasBeenSet = true; m_oldPassword = value; }

    /**
     * <p>The IAM user's current password.</p>
     */
    inline void SetOldPassword(Aws::String&& value) { m_oldPasswordHasBeenSet = true; m_oldPassword = value; }

    /**
     * <p>The IAM user's current password.</p>
     */
    inline void SetOldPassword(const char* value) { m_oldPasswordHasBeenSet = true; m_oldPassword.assign(value); }

    /**
     * <p>The IAM user's current password.</p>
     */
    inline ChangePasswordRequest& WithOldPassword(const Aws::String& value) { SetOldPassword(value); return *this;}

    /**
     * <p>The IAM user's current password.</p>
     */
    inline ChangePasswordRequest& WithOldPassword(Aws::String&& value) { SetOldPassword(value); return *this;}

    /**
     * <p>The IAM user's current password.</p>
     */
    inline ChangePasswordRequest& WithOldPassword(const char* value) { SetOldPassword(value); return *this;}

    /**
     * <p>The new password. The new password must conform to the AWS account's password
     * policy, if one exists.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of almost any printable ASCII character from the
     * space (\u0020) through the end of the ASCII character range (\u00FF). You can
     * also include the tab (\u0009), line feed (\u000A), and carriage return (\u000D)
     * characters. Although any of these characters are valid in a password, note that
     * many tools, such as the AWS Management Console, might restrict the ability to
     * enter certain characters because they have special meaning within that tool.</p>
     */
    inline const Aws::String& GetNewPassword() const{ return m_newPassword; }

    /**
     * <p>The new password. The new password must conform to the AWS account's password
     * policy, if one exists.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of almost any printable ASCII character from the
     * space (\u0020) through the end of the ASCII character range (\u00FF). You can
     * also include the tab (\u0009), line feed (\u000A), and carriage return (\u000D)
     * characters. Although any of these characters are valid in a password, note that
     * many tools, such as the AWS Management Console, might restrict the ability to
     * enter certain characters because they have special meaning within that tool.</p>
     */
    inline void SetNewPassword(const Aws::String& value) { m_newPasswordHasBeenSet = true; m_newPassword = value; }

    /**
     * <p>The new password. The new password must conform to the AWS account's password
     * policy, if one exists.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of almost any printable ASCII character from the
     * space (\u0020) through the end of the ASCII character range (\u00FF). You can
     * also include the tab (\u0009), line feed (\u000A), and carriage return (\u000D)
     * characters. Although any of these characters are valid in a password, note that
     * many tools, such as the AWS Management Console, might restrict the ability to
     * enter certain characters because they have special meaning within that tool.</p>
     */
    inline void SetNewPassword(Aws::String&& value) { m_newPasswordHasBeenSet = true; m_newPassword = value; }

    /**
     * <p>The new password. The new password must conform to the AWS account's password
     * policy, if one exists.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of almost any printable ASCII character from the
     * space (\u0020) through the end of the ASCII character range (\u00FF). You can
     * also include the tab (\u0009), line feed (\u000A), and carriage return (\u000D)
     * characters. Although any of these characters are valid in a password, note that
     * many tools, such as the AWS Management Console, might restrict the ability to
     * enter certain characters because they have special meaning within that tool.</p>
     */
    inline void SetNewPassword(const char* value) { m_newPasswordHasBeenSet = true; m_newPassword.assign(value); }

    /**
     * <p>The new password. The new password must conform to the AWS account's password
     * policy, if one exists.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of almost any printable ASCII character from the
     * space (\u0020) through the end of the ASCII character range (\u00FF). You can
     * also include the tab (\u0009), line feed (\u000A), and carriage return (\u000D)
     * characters. Although any of these characters are valid in a password, note that
     * many tools, such as the AWS Management Console, might restrict the ability to
     * enter certain characters because they have special meaning within that tool.</p>
     */
    inline ChangePasswordRequest& WithNewPassword(const Aws::String& value) { SetNewPassword(value); return *this;}

    /**
     * <p>The new password. The new password must conform to the AWS account's password
     * policy, if one exists.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of almost any printable ASCII character from the
     * space (\u0020) through the end of the ASCII character range (\u00FF). You can
     * also include the tab (\u0009), line feed (\u000A), and carriage return (\u000D)
     * characters. Although any of these characters are valid in a password, note that
     * many tools, such as the AWS Management Console, might restrict the ability to
     * enter certain characters because they have special meaning within that tool.</p>
     */
    inline ChangePasswordRequest& WithNewPassword(Aws::String&& value) { SetNewPassword(value); return *this;}

    /**
     * <p>The new password. The new password must conform to the AWS account's password
     * policy, if one exists.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of almost any printable ASCII character from the
     * space (\u0020) through the end of the ASCII character range (\u00FF). You can
     * also include the tab (\u0009), line feed (\u000A), and carriage return (\u000D)
     * characters. Although any of these characters are valid in a password, note that
     * many tools, such as the AWS Management Console, might restrict the ability to
     * enter certain characters because they have special meaning within that tool.</p>
     */
    inline ChangePasswordRequest& WithNewPassword(const char* value) { SetNewPassword(value); return *this;}

  private:
    Aws::String m_oldPassword;
    bool m_oldPasswordHasBeenSet;
    Aws::String m_newPassword;
    bool m_newPasswordHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
