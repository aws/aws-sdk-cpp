/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetGroupConfigurationRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API GetGroupConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGroupConfiguration"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name or the ARN of the resource group.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name or the ARN of the resource group.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name or the ARN of the resource group.</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name or the ARN of the resource group.</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name or the ARN of the resource group.</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name or the ARN of the resource group.</p>
     */
    inline GetGroupConfigurationRequest& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name or the ARN of the resource group.</p>
     */
    inline GetGroupConfigurationRequest& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name or the ARN of the resource group.</p>
     */
    inline GetGroupConfigurationRequest& WithGroup(const char* value) { SetGroup(value); return *this;}

  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
