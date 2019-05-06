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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API CreateLoginProfileRequest : public IAMRequest
  {
  public:
    CreateLoginProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoginProfile"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the IAM user to create a password for. The user must already
     * exist.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user to create a password for. The user must already
     * exist.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the IAM user to create a password for. The user must already
     * exist.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user to create a password for. The user must already
     * exist.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the IAM user to create a password for. The user must already
     * exist.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user to create a password for. The user must already
     * exist.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline CreateLoginProfileRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user to create a password for. The user must already
     * exist.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline CreateLoginProfileRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM user to create a password for. The user must already
     * exist.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline CreateLoginProfileRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The new password for the user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of characters. That string can include
     * almost any printable ASCII character from the space (\u0020) through the end of
     * the ASCII character range (\u00FF). You can also include the tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D) characters. Any of these characters
     * are valid in a password. However, many tools, such as the AWS Management
     * Console, might restrict the ability to type certain characters because they have
     * special meaning within that tool.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The new password for the user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of characters. That string can include
     * almost any printable ASCII character from the space (\u0020) through the end of
     * the ASCII character range (\u00FF). You can also include the tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D) characters. Any of these characters
     * are valid in a password. However, many tools, such as the AWS Management
     * Console, might restrict the ability to type certain characters because they have
     * special meaning within that tool.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The new password for the user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of characters. That string can include
     * almost any printable ASCII character from the space (\u0020) through the end of
     * the ASCII character range (\u00FF). You can also include the tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D) characters. Any of these characters
     * are valid in a password. However, many tools, such as the AWS Management
     * Console, might restrict the ability to type certain characters because they have
     * special meaning within that tool.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The new password for the user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of characters. That string can include
     * almost any printable ASCII character from the space (\u0020) through the end of
     * the ASCII character range (\u00FF). You can also include the tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D) characters. Any of these characters
     * are valid in a password. However, many tools, such as the AWS Management
     * Console, might restrict the ability to type certain characters because they have
     * special meaning within that tool.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The new password for the user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of characters. That string can include
     * almost any printable ASCII character from the space (\u0020) through the end of
     * the ASCII character range (\u00FF). You can also include the tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D) characters. Any of these characters
     * are valid in a password. However, many tools, such as the AWS Management
     * Console, might restrict the ability to type certain characters because they have
     * special meaning within that tool.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The new password for the user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of characters. That string can include
     * almost any printable ASCII character from the space (\u0020) through the end of
     * the ASCII character range (\u00FF). You can also include the tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D) characters. Any of these characters
     * are valid in a password. However, many tools, such as the AWS Management
     * Console, might restrict the ability to type certain characters because they have
     * special meaning within that tool.</p>
     */
    inline CreateLoginProfileRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The new password for the user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of characters. That string can include
     * almost any printable ASCII character from the space (\u0020) through the end of
     * the ASCII character range (\u00FF). You can also include the tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D) characters. Any of these characters
     * are valid in a password. However, many tools, such as the AWS Management
     * Console, might restrict the ability to type certain characters because they have
     * special meaning within that tool.</p>
     */
    inline CreateLoginProfileRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The new password for the user.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of characters. That string can include
     * almost any printable ASCII character from the space (\u0020) through the end of
     * the ASCII character range (\u00FF). You can also include the tab (\u0009), line
     * feed (\u000A), and carriage return (\u000D) characters. Any of these characters
     * are valid in a password. However, many tools, such as the AWS Management
     * Console, might restrict the ability to type certain characters because they have
     * special meaning within that tool.</p>
     */
    inline CreateLoginProfileRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>Specifies whether the user is required to set a new password on next
     * sign-in.</p>
     */
    inline bool GetPasswordResetRequired() const{ return m_passwordResetRequired; }

    /**
     * <p>Specifies whether the user is required to set a new password on next
     * sign-in.</p>
     */
    inline bool PasswordResetRequiredHasBeenSet() const { return m_passwordResetRequiredHasBeenSet; }

    /**
     * <p>Specifies whether the user is required to set a new password on next
     * sign-in.</p>
     */
    inline void SetPasswordResetRequired(bool value) { m_passwordResetRequiredHasBeenSet = true; m_passwordResetRequired = value; }

    /**
     * <p>Specifies whether the user is required to set a new password on next
     * sign-in.</p>
     */
    inline CreateLoginProfileRequest& WithPasswordResetRequired(bool value) { SetPasswordResetRequired(value); return *this;}

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
