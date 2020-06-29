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
  class AWS_RESOURCEGROUPS_API UpdateGroupQueryRequest : public ResourceGroupsRequest
  {
  public:
    UpdateGroupQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroupQuery"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the resource group for which you want to edit the query.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the resource group for which you want to edit the query.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the resource group for which you want to edit the query.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the resource group for which you want to edit the query.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the resource group for which you want to edit the query.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the resource group for which you want to edit the query.</p>
     */
    inline UpdateGroupQueryRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the resource group for which you want to edit the query.</p>
     */
    inline UpdateGroupQueryRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group for which you want to edit the query.</p>
     */
    inline UpdateGroupQueryRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The resource query that determines which AWS resources are members of the
     * resource group.</p>
     */
    inline const ResourceQuery& GetResourceQuery() const{ return m_resourceQuery; }

    /**
     * <p>The resource query that determines which AWS resources are members of the
     * resource group.</p>
     */
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }

    /**
     * <p>The resource query that determines which AWS resources are members of the
     * resource group.</p>
     */
    inline void SetResourceQuery(const ResourceQuery& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = value; }

    /**
     * <p>The resource query that determines which AWS resources are members of the
     * resource group.</p>
     */
    inline void SetResourceQuery(ResourceQuery&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::move(value); }

    /**
     * <p>The resource query that determines which AWS resources are members of the
     * resource group.</p>
     */
    inline UpdateGroupQueryRequest& WithResourceQuery(const ResourceQuery& value) { SetResourceQuery(value); return *this;}

    /**
     * <p>The resource query that determines which AWS resources are members of the
     * resource group.</p>
     */
    inline UpdateGroupQueryRequest& WithResourceQuery(ResourceQuery&& value) { SetResourceQuery(std::move(value)); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
