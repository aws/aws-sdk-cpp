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
  class AWS_IAM_API UpdateUserRequest : public IAMRequest
  {
  public:
    UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Name of the user to update. If you're changing the name of the user, this is
     * the original user name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>Name of the user to update. If you're changing the name of the user, this is
     * the original user name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>Name of the user to update. If you're changing the name of the user, this is
     * the original user name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>Name of the user to update. If you're changing the name of the user, this is
     * the original user name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>Name of the user to update. If you're changing the name of the user, this is
     * the original user name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>Name of the user to update. If you're changing the name of the user, this is
     * the original user name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline UpdateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>Name of the user to update. If you're changing the name of the user, this is
     * the original user name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline UpdateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>Name of the user to update. If you're changing the name of the user, this is
     * the original user name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline UpdateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>New path for the IAM user. Include this parameter only if you're changing the
     * user's path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline const Aws::String& GetNewPath() const{ return m_newPath; }

    /**
     * <p>New path for the IAM user. Include this parameter only if you're changing the
     * user's path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline bool NewPathHasBeenSet() const { return m_newPathHasBeenSet; }

    /**
     * <p>New path for the IAM user. Include this parameter only if you're changing the
     * user's path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetNewPath(const Aws::String& value) { m_newPathHasBeenSet = true; m_newPath = value; }

    /**
     * <p>New path for the IAM user. Include this parameter only if you're changing the
     * user's path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetNewPath(Aws::String&& value) { m_newPathHasBeenSet = true; m_newPath = std::move(value); }

    /**
     * <p>New path for the IAM user. Include this parameter only if you're changing the
     * user's path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetNewPath(const char* value) { m_newPathHasBeenSet = true; m_newPath.assign(value); }

    /**
     * <p>New path for the IAM user. Include this parameter only if you're changing the
     * user's path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline UpdateUserRequest& WithNewPath(const Aws::String& value) { SetNewPath(value); return *this;}

    /**
     * <p>New path for the IAM user. Include this parameter only if you're changing the
     * user's path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline UpdateUserRequest& WithNewPath(Aws::String&& value) { SetNewPath(std::move(value)); return *this;}

    /**
     * <p>New path for the IAM user. Include this parameter only if you're changing the
     * user's path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline UpdateUserRequest& WithNewPath(const char* value) { SetNewPath(value); return *this;}


    /**
     * <p>New name for the user. Include this parameter only if you're changing the
     * user's name.</p> <p>IAM user, group, role, and policy names must be unique
     * within the account. Names are not distinguished by case. For example, you cannot
     * create resources named both "MyResource" and "myresource".</p>
     */
    inline const Aws::String& GetNewUserName() const{ return m_newUserName; }

    /**
     * <p>New name for the user. Include this parameter only if you're changing the
     * user's name.</p> <p>IAM user, group, role, and policy names must be unique
     * within the account. Names are not distinguished by case. For example, you cannot
     * create resources named both "MyResource" and "myresource".</p>
     */
    inline bool NewUserNameHasBeenSet() const { return m_newUserNameHasBeenSet; }

    /**
     * <p>New name for the user. Include this parameter only if you're changing the
     * user's name.</p> <p>IAM user, group, role, and policy names must be unique
     * within the account. Names are not distinguished by case. For example, you cannot
     * create resources named both "MyResource" and "myresource".</p>
     */
    inline void SetNewUserName(const Aws::String& value) { m_newUserNameHasBeenSet = true; m_newUserName = value; }

    /**
     * <p>New name for the user. Include this parameter only if you're changing the
     * user's name.</p> <p>IAM user, group, role, and policy names must be unique
     * within the account. Names are not distinguished by case. For example, you cannot
     * create resources named both "MyResource" and "myresource".</p>
     */
    inline void SetNewUserName(Aws::String&& value) { m_newUserNameHasBeenSet = true; m_newUserName = std::move(value); }

    /**
     * <p>New name for the user. Include this parameter only if you're changing the
     * user's name.</p> <p>IAM user, group, role, and policy names must be unique
     * within the account. Names are not distinguished by case. For example, you cannot
     * create resources named both "MyResource" and "myresource".</p>
     */
    inline void SetNewUserName(const char* value) { m_newUserNameHasBeenSet = true; m_newUserName.assign(value); }

    /**
     * <p>New name for the user. Include this parameter only if you're changing the
     * user's name.</p> <p>IAM user, group, role, and policy names must be unique
     * within the account. Names are not distinguished by case. For example, you cannot
     * create resources named both "MyResource" and "myresource".</p>
     */
    inline UpdateUserRequest& WithNewUserName(const Aws::String& value) { SetNewUserName(value); return *this;}

    /**
     * <p>New name for the user. Include this parameter only if you're changing the
     * user's name.</p> <p>IAM user, group, role, and policy names must be unique
     * within the account. Names are not distinguished by case. For example, you cannot
     * create resources named both "MyResource" and "myresource".</p>
     */
    inline UpdateUserRequest& WithNewUserName(Aws::String&& value) { SetNewUserName(std::move(value)); return *this;}

    /**
     * <p>New name for the user. Include this parameter only if you're changing the
     * user's name.</p> <p>IAM user, group, role, and policy names must be unique
     * within the account. Names are not distinguished by case. For example, you cannot
     * create resources named both "MyResource" and "myresource".</p>
     */
    inline UpdateUserRequest& WithNewUserName(const char* value) { SetNewUserName(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_newPath;
    bool m_newPathHasBeenSet;

    Aws::String m_newUserName;
    bool m_newUserNameHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
