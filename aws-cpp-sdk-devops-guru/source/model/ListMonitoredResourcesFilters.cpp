/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListMonitoredResourcesFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

ListMonitoredResourcesFilters::ListMonitoredResourcesFilters() : 
    m_resourcePermission(ResourcePermission::NOT_SET),
    m_resourcePermissionHasBeenSet(false),
    m_resourceTypeFiltersHasBeenSet(false)
{
}

ListMonitoredResourcesFilters::ListMonitoredResourcesFilters(JsonView jsonValue) : 
    m_resourcePermission(ResourcePermission::NOT_SET),
    m_resourcePermissionHasBeenSet(false),
    m_resourceTypeFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

ListMonitoredResourcesFilters& ListMonitoredResourcesFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourcePermission"))
  {
    m_resourcePermission = ResourcePermissionMapper::GetResourcePermissionForName(jsonValue.GetString("ResourcePermission"));

    m_resourcePermissionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTypeFilters"))
  {
    Aws::Utils::Array<JsonView> resourceTypeFiltersJsonList = jsonValue.GetArray("ResourceTypeFilters");
    for(unsigned resourceTypeFiltersIndex = 0; resourceTypeFiltersIndex < resourceTypeFiltersJsonList.GetLength(); ++resourceTypeFiltersIndex)
    {
      m_resourceTypeFilters.push_back(ResourceTypeFilterMapper::GetResourceTypeFilterForName(resourceTypeFiltersJsonList[resourceTypeFiltersIndex].AsString()));
    }
    m_resourceTypeFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue ListMonitoredResourcesFilters::Jsonize() const
{
  JsonValue payload;

  if(m_resourcePermissionHasBeenSet)
  {
   payload.WithString("ResourcePermission", ResourcePermissionMapper::GetNameForResourcePermission(m_resourcePermission));
  }

  if(m_resourceTypeFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypeFiltersJsonList(m_resourceTypeFilters.size());
   for(unsigned resourceTypeFiltersIndex = 0; resourceTypeFiltersIndex < resourceTypeFiltersJsonList.GetLength(); ++resourceTypeFiltersIndex)
   {
     resourceTypeFiltersJsonList[resourceTypeFiltersIndex].AsString(ResourceTypeFilterMapper::GetNameForResourceTypeFilter(m_resourceTypeFilters[resourceTypeFiltersIndex]));
   }
   payload.WithArray("ResourceTypeFilters", std::move(resourceTypeFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
