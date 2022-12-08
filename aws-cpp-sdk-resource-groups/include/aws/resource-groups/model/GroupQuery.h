/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A mapping of a query attached to a resource group that determines the AWS
   * resources that are members of the group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupQuery">AWS
   * API Reference</a></p>
   */
  class GroupQuery
  {
  public:
    AWS_RESOURCEGROUPS_API GroupQuery();
    AWS_RESOURCEGROUPS_API GroupQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API GroupQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the resource group that is associated with the specified resource
     * query.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the resource group that is associated with the specified resource
     * query.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the resource group that is associated with the specified resource
     * query.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the resource group that is associated with the specified resource
     * query.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the resource group that is associated with the specified resource
     * query.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the resource group that is associated with the specified resource
     * query.</p>
     */
    inline GroupQuery& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the resource group that is associated with the specified resource
     * query.</p>
     */
    inline GroupQuery& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group that is associated with the specified resource
     * query.</p>
     */
    inline GroupQuery& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The resource query that determines which AWS resources are members of the
     * associated resource group.</p>
     */
    inline const ResourceQuery& GetResourceQuery() const{ return m_resourceQuery; }

    /**
     * <p>The resource query that determines which AWS resources are members of the
     * associated resource group.</p>
     */
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }

    /**
     * <p>The resource query that determines which AWS resources are members of the
     * associated resource group.</p>
     */
    inline void SetResourceQuery(const ResourceQuery& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = value; }

    /**
     * <p>The resource query that determines which AWS resources are members of the
     * associated resource group.</p>
     */
    inline void SetResourceQuery(ResourceQuery&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::move(value); }

    /**
     * <p>The resource query that determines which AWS resources are members of the
     * associated resource group.</p>
     */
    inline GroupQuery& WithResourceQuery(const ResourceQuery& value) { SetResourceQuery(value); return *this;}

    /**
     * <p>The resource query that determines which AWS resources are members of the
     * associated resource group.</p>
     */
    inline GroupQuery& WithResourceQuery(ResourceQuery&& value) { SetResourceQuery(std::move(value)); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
