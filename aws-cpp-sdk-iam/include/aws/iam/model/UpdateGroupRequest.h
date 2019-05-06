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
  class AWS_IAM_API UpdateGroupRequest : public IAMRequest
  {
  public:
    UpdateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Name of the IAM group to update. If you're changing the name of the group,
     * this is the original name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>Name of the IAM group to update. If you're changing the name of the group,
     * this is the original name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>Name of the IAM group to update. If you're changing the name of the group,
     * this is the original name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>Name of the IAM group to update. If you're changing the name of the group,
     * this is the original name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>Name of the IAM group to update. If you're changing the name of the group,
     * this is the original name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>Name of the IAM group to update. If you're changing the name of the group,
     * this is the original name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline UpdateGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>Name of the IAM group to update. If you're changing the name of the group,
     * this is the original name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline UpdateGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>Name of the IAM group to update. If you're changing the name of the group,
     * this is the original name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline UpdateGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>New path for the IAM group. Only include this if changing the group's
     * path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline const Aws::String& GetNewPath() const{ return m_newPath; }

    /**
     * <p>New path for the IAM group. Only include this if changing the group's
     * path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline bool NewPathHasBeenSet() const { return m_newPathHasBeenSet; }

    /**
     * <p>New path for the IAM group. Only include this if changing the group's
     * path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetNewPath(const Aws::String& value) { m_newPathHasBeenSet = true; m_newPath = value; }

    /**
     * <p>New path for the IAM group. Only include this if changing the group's
     * path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetNewPath(Aws::String&& value) { m_newPathHasBeenSet = true; m_newPath = std::move(value); }

    /**
     * <p>New path for the IAM group. Only include this if changing the group's
     * path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetNewPath(const char* value) { m_newPathHasBeenSet = true; m_newPath.assign(value); }

    /**
     * <p>New path for the IAM group. Only include this if changing the group's
     * path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline UpdateGroupRequest& WithNewPath(const Aws::String& value) { SetNewPath(value); return *this;}

    /**
     * <p>New path for the IAM group. Only include this if changing the group's
     * path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline UpdateGroupRequest& WithNewPath(Aws::String&& value) { SetNewPath(std::move(value)); return *this;}

    /**
     * <p>New path for the IAM group. Only include this if changing the group's
     * path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (\u0021) through the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline UpdateGroupRequest& WithNewPath(const char* value) { SetNewPath(value); return *this;}


    /**
     * <p>New name for the IAM group. Only include this if changing the group's
     * name.</p> <p>IAM user, group, role, and policy names must be unique within the
     * account. Names are not distinguished by case. For example, you cannot create
     * resources named both "MyResource" and "myresource".</p>
     */
    inline const Aws::String& GetNewGroupName() const{ return m_newGroupName; }

    /**
     * <p>New name for the IAM group. Only include this if changing the group's
     * name.</p> <p>IAM user, group, role, and policy names must be unique within the
     * account. Names are not distinguished by case. For example, you cannot create
     * resources named both "MyResource" and "myresource".</p>
     */
    inline bool NewGroupNameHasBeenSet() const { return m_newGroupNameHasBeenSet; }

    /**
     * <p>New name for the IAM group. Only include this if changing the group's
     * name.</p> <p>IAM user, group, role, and policy names must be unique within the
     * account. Names are not distinguished by case. For example, you cannot create
     * resources named both "MyResource" and "myresource".</p>
     */
    inline void SetNewGroupName(const Aws::String& value) { m_newGroupNameHasBeenSet = true; m_newGroupName = value; }

    /**
     * <p>New name for the IAM group. Only include this if changing the group's
     * name.</p> <p>IAM user, group, role, and policy names must be unique within the
     * account. Names are not distinguished by case. For example, you cannot create
     * resources named both "MyResource" and "myresource".</p>
     */
    inline void SetNewGroupName(Aws::String&& value) { m_newGroupNameHasBeenSet = true; m_newGroupName = std::move(value); }

    /**
     * <p>New name for the IAM group. Only include this if changing the group's
     * name.</p> <p>IAM user, group, role, and policy names must be unique within the
     * account. Names are not distinguished by case. For example, you cannot create
     * resources named both "MyResource" and "myresource".</p>
     */
    inline void SetNewGroupName(const char* value) { m_newGroupNameHasBeenSet = true; m_newGroupName.assign(value); }

    /**
     * <p>New name for the IAM group. Only include this if changing the group's
     * name.</p> <p>IAM user, group, role, and policy names must be unique within the
     * account. Names are not distinguished by case. For example, you cannot create
     * resources named both "MyResource" and "myresource".</p>
     */
    inline UpdateGroupRequest& WithNewGroupName(const Aws::String& value) { SetNewGroupName(value); return *this;}

    /**
     * <p>New name for the IAM group. Only include this if changing the group's
     * name.</p> <p>IAM user, group, role, and policy names must be unique within the
     * account. Names are not distinguished by case. For example, you cannot create
     * resources named both "MyResource" and "myresource".</p>
     */
    inline UpdateGroupRequest& WithNewGroupName(Aws::String&& value) { SetNewGroupName(std::move(value)); return *this;}

    /**
     * <p>New name for the IAM group. Only include this if changing the group's
     * name.</p> <p>IAM user, group, role, and policy names must be unique within the
     * account. Names are not distinguished by case. For example, you cannot create
     * resources named both "MyResource" and "myresource".</p>
     */
    inline UpdateGroupRequest& WithNewGroupName(const char* value) { SetNewGroupName(value); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_newPath;
    bool m_newPathHasBeenSet;

    Aws::String m_newGroupName;
    bool m_newGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
