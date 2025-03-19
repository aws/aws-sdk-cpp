/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateGroupRequest : public IAMRequest
  {
  public:
    AWS_IAM_API UpdateGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroup"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Name of the IAM group to update. If you're changing the name of the group,
     * this is the original name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    UpdateGroupRequest& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>New path for the IAM group. Only include this if changing the group's
     * path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (<code>\u0021</code>) through the DEL character
     * (<code>\u007F</code>), including most punctuation characters, digits, and upper
     * and lowercased letters.</p>
     */
    inline const Aws::String& GetNewPath() const { return m_newPath; }
    inline bool NewPathHasBeenSet() const { return m_newPathHasBeenSet; }
    template<typename NewPathT = Aws::String>
    void SetNewPath(NewPathT&& value) { m_newPathHasBeenSet = true; m_newPath = std::forward<NewPathT>(value); }
    template<typename NewPathT = Aws::String>
    UpdateGroupRequest& WithNewPath(NewPathT&& value) { SetNewPath(std::forward<NewPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>New name for the IAM group. Only include this if changing the group's
     * name.</p> <p>IAM user, group, role, and policy names must be unique within the
     * account. Names are not distinguished by case. For example, you cannot create
     * resources named both "MyResource" and "myresource".</p>
     */
    inline const Aws::String& GetNewGroupName() const { return m_newGroupName; }
    inline bool NewGroupNameHasBeenSet() const { return m_newGroupNameHasBeenSet; }
    template<typename NewGroupNameT = Aws::String>
    void SetNewGroupName(NewGroupNameT&& value) { m_newGroupNameHasBeenSet = true; m_newGroupName = std::forward<NewGroupNameT>(value); }
    template<typename NewGroupNameT = Aws::String>
    UpdateGroupRequest& WithNewGroupName(NewGroupNameT&& value) { SetNewGroupName(std::forward<NewGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_newPath;
    bool m_newPathHasBeenSet = false;

    Aws::String m_newGroupName;
    bool m_newGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
