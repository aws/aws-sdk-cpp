/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class UpdateGroupQueryRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API UpdateGroupQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroupQuery"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name or the ARN of the resource group to query.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name or the ARN of the resource group to query.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name or the ARN of the resource group to query.</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name or the ARN of the resource group to query.</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name or the ARN of the resource group to query.</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name or the ARN of the resource group to query.</p>
     */
    inline UpdateGroupQueryRequest& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name or the ARN of the resource group to query.</p>
     */
    inline UpdateGroupQueryRequest& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name or the ARN of the resource group to query.</p>
     */
    inline UpdateGroupQueryRequest& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>The resource query to determine which AWS resources are members of this
     * resource group.</p>  <p>A resource group can contain either a
     * <code>Configuration</code> or a <code>ResourceQuery</code>, but not both.</p>
     * 
     */
    inline const ResourceQuery& GetResourceQuery() const{ return m_resourceQuery; }

    /**
     * <p>The resource query to determine which AWS resources are members of this
     * resource group.</p>  <p>A resource group can contain either a
     * <code>Configuration</code> or a <code>ResourceQuery</code>, but not both.</p>
     * 
     */
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }

    /**
     * <p>The resource query to determine which AWS resources are members of this
     * resource group.</p>  <p>A resource group can contain either a
     * <code>Configuration</code> or a <code>ResourceQuery</code>, but not both.</p>
     * 
     */
    inline void SetResourceQuery(const ResourceQuery& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = value; }

    /**
     * <p>The resource query to determine which AWS resources are members of this
     * resource group.</p>  <p>A resource group can contain either a
     * <code>Configuration</code> or a <code>ResourceQuery</code>, but not both.</p>
     * 
     */
    inline void SetResourceQuery(ResourceQuery&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::move(value); }

    /**
     * <p>The resource query to determine which AWS resources are members of this
     * resource group.</p>  <p>A resource group can contain either a
     * <code>Configuration</code> or a <code>ResourceQuery</code>, but not both.</p>
     * 
     */
    inline UpdateGroupQueryRequest& WithResourceQuery(const ResourceQuery& value) { SetResourceQuery(value); return *this;}

    /**
     * <p>The resource query to determine which AWS resources are members of this
     * resource group.</p>  <p>A resource group can contain either a
     * <code>Configuration</code> or a <code>ResourceQuery</code>, but not both.</p>
     * 
     */
    inline UpdateGroupQueryRequest& WithResourceQuery(ResourceQuery&& value) { SetResourceQuery(std::move(value)); return *this;}

  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
