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
  class AWS_IAM_API UpdateGroupRequest : public IAMRequest
  {
  public:
    UpdateGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p> Name of the group to update. If you're changing the name of the group, this
     * is the original name. </p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p> Name of the group to update. If you're changing the name of the group, this
     * is the original name. </p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p> Name of the group to update. If you're changing the name of the group, this
     * is the original name. </p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p> Name of the group to update. If you're changing the name of the group, this
     * is the original name. </p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p> Name of the group to update. If you're changing the name of the group, this
     * is the original name. </p>
     */
    inline UpdateGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p> Name of the group to update. If you're changing the name of the group, this
     * is the original name. </p>
     */
    inline UpdateGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p> Name of the group to update. If you're changing the name of the group, this
     * is the original name. </p>
     */
    inline UpdateGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    /**
     * <p>New path for the group. Only include this if changing the group's path.</p>
     */
    inline const Aws::String& GetNewPath() const{ return m_newPath; }

    /**
     * <p>New path for the group. Only include this if changing the group's path.</p>
     */
    inline void SetNewPath(const Aws::String& value) { m_newPathHasBeenSet = true; m_newPath = value; }

    /**
     * <p>New path for the group. Only include this if changing the group's path.</p>
     */
    inline void SetNewPath(Aws::String&& value) { m_newPathHasBeenSet = true; m_newPath = value; }

    /**
     * <p>New path for the group. Only include this if changing the group's path.</p>
     */
    inline void SetNewPath(const char* value) { m_newPathHasBeenSet = true; m_newPath.assign(value); }

    /**
     * <p>New path for the group. Only include this if changing the group's path.</p>
     */
    inline UpdateGroupRequest& WithNewPath(const Aws::String& value) { SetNewPath(value); return *this;}

    /**
     * <p>New path for the group. Only include this if changing the group's path.</p>
     */
    inline UpdateGroupRequest& WithNewPath(Aws::String&& value) { SetNewPath(value); return *this;}

    /**
     * <p>New path for the group. Only include this if changing the group's path.</p>
     */
    inline UpdateGroupRequest& WithNewPath(const char* value) { SetNewPath(value); return *this;}

    /**
     * <p>New name for the group. Only include this if changing the group's name.</p>
     */
    inline const Aws::String& GetNewGroupName() const{ return m_newGroupName; }

    /**
     * <p>New name for the group. Only include this if changing the group's name.</p>
     */
    inline void SetNewGroupName(const Aws::String& value) { m_newGroupNameHasBeenSet = true; m_newGroupName = value; }

    /**
     * <p>New name for the group. Only include this if changing the group's name.</p>
     */
    inline void SetNewGroupName(Aws::String&& value) { m_newGroupNameHasBeenSet = true; m_newGroupName = value; }

    /**
     * <p>New name for the group. Only include this if changing the group's name.</p>
     */
    inline void SetNewGroupName(const char* value) { m_newGroupNameHasBeenSet = true; m_newGroupName.assign(value); }

    /**
     * <p>New name for the group. Only include this if changing the group's name.</p>
     */
    inline UpdateGroupRequest& WithNewGroupName(const Aws::String& value) { SetNewGroupName(value); return *this;}

    /**
     * <p>New name for the group. Only include this if changing the group's name.</p>
     */
    inline UpdateGroupRequest& WithNewGroupName(Aws::String&& value) { SetNewGroupName(value); return *this;}

    /**
     * <p>New name for the group. Only include this if changing the group's name.</p>
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
