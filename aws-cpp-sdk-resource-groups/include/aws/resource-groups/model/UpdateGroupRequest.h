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
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class AWS_RESOURCEGROUPS_API UpdateGroupRequest : public ResourceGroupsRequest
  {
  public:
    UpdateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the resource group for which you want to update its
     * description.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the resource group for which you want to update its
     * description.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the resource group for which you want to update its
     * description.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the resource group for which you want to update its
     * description.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the resource group for which you want to update its
     * description.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the resource group for which you want to update its
     * description.</p>
     */
    inline UpdateGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the resource group for which you want to update its
     * description.</p>
     */
    inline UpdateGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group for which you want to update its
     * description.</p>
     */
    inline UpdateGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline UpdateGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline UpdateGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the resource group. Descriptions can have a maximum of 511
     * characters, including letters, numbers, hyphens, underscores, punctuation, and
     * spaces.</p>
     */
    inline UpdateGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
