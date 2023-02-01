/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ResourcePermission.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/ResourceTypeFilter.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Filters to determine which monitored resources you want to retrieve. You can
   * filter by resource type or resource permission status. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListMonitoredResourcesFilters">AWS
   * API Reference</a></p>
   */
  class ListMonitoredResourcesFilters
  {
  public:
    AWS_DEVOPSGURU_API ListMonitoredResourcesFilters();
    AWS_DEVOPSGURU_API ListMonitoredResourcesFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ListMonitoredResourcesFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The permission status of a resource. </p>
     */
    inline const ResourcePermission& GetResourcePermission() const{ return m_resourcePermission; }

    /**
     * <p> The permission status of a resource. </p>
     */
    inline bool ResourcePermissionHasBeenSet() const { return m_resourcePermissionHasBeenSet; }

    /**
     * <p> The permission status of a resource. </p>
     */
    inline void SetResourcePermission(const ResourcePermission& value) { m_resourcePermissionHasBeenSet = true; m_resourcePermission = value; }

    /**
     * <p> The permission status of a resource. </p>
     */
    inline void SetResourcePermission(ResourcePermission&& value) { m_resourcePermissionHasBeenSet = true; m_resourcePermission = std::move(value); }

    /**
     * <p> The permission status of a resource. </p>
     */
    inline ListMonitoredResourcesFilters& WithResourcePermission(const ResourcePermission& value) { SetResourcePermission(value); return *this;}

    /**
     * <p> The permission status of a resource. </p>
     */
    inline ListMonitoredResourcesFilters& WithResourcePermission(ResourcePermission&& value) { SetResourcePermission(std::move(value)); return *this;}


    /**
     * <p> The type of resource that you wish to retrieve, such as log groups. </p>
     */
    inline const Aws::Vector<ResourceTypeFilter>& GetResourceTypeFilters() const{ return m_resourceTypeFilters; }

    /**
     * <p> The type of resource that you wish to retrieve, such as log groups. </p>
     */
    inline bool ResourceTypeFiltersHasBeenSet() const { return m_resourceTypeFiltersHasBeenSet; }

    /**
     * <p> The type of resource that you wish to retrieve, such as log groups. </p>
     */
    inline void SetResourceTypeFilters(const Aws::Vector<ResourceTypeFilter>& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters = value; }

    /**
     * <p> The type of resource that you wish to retrieve, such as log groups. </p>
     */
    inline void SetResourceTypeFilters(Aws::Vector<ResourceTypeFilter>&& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters = std::move(value); }

    /**
     * <p> The type of resource that you wish to retrieve, such as log groups. </p>
     */
    inline ListMonitoredResourcesFilters& WithResourceTypeFilters(const Aws::Vector<ResourceTypeFilter>& value) { SetResourceTypeFilters(value); return *this;}

    /**
     * <p> The type of resource that you wish to retrieve, such as log groups. </p>
     */
    inline ListMonitoredResourcesFilters& WithResourceTypeFilters(Aws::Vector<ResourceTypeFilter>&& value) { SetResourceTypeFilters(std::move(value)); return *this;}

    /**
     * <p> The type of resource that you wish to retrieve, such as log groups. </p>
     */
    inline ListMonitoredResourcesFilters& AddResourceTypeFilters(const ResourceTypeFilter& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters.push_back(value); return *this; }

    /**
     * <p> The type of resource that you wish to retrieve, such as log groups. </p>
     */
    inline ListMonitoredResourcesFilters& AddResourceTypeFilters(ResourceTypeFilter&& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters.push_back(std::move(value)); return *this; }

  private:

    ResourcePermission m_resourcePermission;
    bool m_resourcePermissionHasBeenSet = false;

    Aws::Vector<ResourceTypeFilter> m_resourceTypeFilters;
    bool m_resourceTypeFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
