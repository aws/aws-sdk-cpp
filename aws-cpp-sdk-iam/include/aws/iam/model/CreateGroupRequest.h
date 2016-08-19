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
  class AWS_IAM_API CreateGroupRequest : public IAMRequest
  {
  public:
    CreateGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p> The path to the group. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p> The path to the group. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p> The path to the group. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p> The path to the group. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p> The path to the group. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline CreateGroupRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p> The path to the group. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline CreateGroupRequest& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    /**
     * <p> The path to the group. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline CreateGroupRequest& WithPath(const char* value) { SetPath(value); return *this;}

    /**
     * <p>The name of the group to create. Do not include the path in this value.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-. The group name must be unique within the account.
     * Group names are not distinguished by case. For example, you cannot create groups
     * named both "ADMINS" and "admins".</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group to create. Do not include the path in this value.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-. The group name must be unique within the account.
     * Group names are not distinguished by case. For example, you cannot create groups
     * named both "ADMINS" and "admins".</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group to create. Do not include the path in this value.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-. The group name must be unique within the account.
     * Group names are not distinguished by case. For example, you cannot create groups
     * named both "ADMINS" and "admins".</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group to create. Do not include the path in this value.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-. The group name must be unique within the account.
     * Group names are not distinguished by case. For example, you cannot create groups
     * named both "ADMINS" and "admins".</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the group to create. Do not include the path in this value.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-. The group name must be unique within the account.
     * Group names are not distinguished by case. For example, you cannot create groups
     * named both "ADMINS" and "admins".</p>
     */
    inline CreateGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group to create. Do not include the path in this value.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-. The group name must be unique within the account.
     * Group names are not distinguished by case. For example, you cannot create groups
     * named both "ADMINS" and "admins".</p>
     */
    inline CreateGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group to create. Do not include the path in this value.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this
     * parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-. The group name must be unique within the account.
     * Group names are not distinguished by case. For example, you cannot create groups
     * named both "ADMINS" and "admins".</p>
     */
    inline CreateGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}

  private:
    Aws::String m_path;
    bool m_pathHasBeenSet;
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
