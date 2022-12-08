/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/ResourcePermission.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devops-guru/model/ResourceCollection.h>
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
   * <p> Information about the resource that is being monitored, including the name
   * of the resource, the type of resource, and whether or not permission is given to
   * DevOps Guru to access that resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/MonitoredResourceIdentifier">AWS
   * API Reference</a></p>
   */
  class MonitoredResourceIdentifier
  {
  public:
    AWS_DEVOPSGURU_API MonitoredResourceIdentifier();
    AWS_DEVOPSGURU_API MonitoredResourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API MonitoredResourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline const Aws::String& GetMonitoredResourceName() const{ return m_monitoredResourceName; }

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline bool MonitoredResourceNameHasBeenSet() const { return m_monitoredResourceNameHasBeenSet; }

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline void SetMonitoredResourceName(const Aws::String& value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName = value; }

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline void SetMonitoredResourceName(Aws::String&& value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName = std::move(value); }

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline void SetMonitoredResourceName(const char* value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName.assign(value); }

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithMonitoredResourceName(const Aws::String& value) { SetMonitoredResourceName(value); return *this;}

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithMonitoredResourceName(Aws::String&& value) { SetMonitoredResourceName(std::move(value)); return *this;}

    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithMonitoredResourceName(const char* value) { SetMonitoredResourceName(value); return *this;}


    /**
     * <p> The type of resource being monitored. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> The type of resource being monitored. </p>
     */
    inline MonitoredResourceIdentifier& WithType(const char* value) { SetType(value); return *this;}


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
    inline MonitoredResourceIdentifier& WithResourcePermission(const ResourcePermission& value) { SetResourcePermission(value); return *this;}

    /**
     * <p> The permission status of a resource. </p>
     */
    inline MonitoredResourceIdentifier& WithResourcePermission(ResourcePermission&& value) { SetResourcePermission(std::move(value)); return *this;}


    /**
     * <p> The time at which DevOps Guru last updated this resource. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p> The time at which DevOps Guru last updated this resource. </p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p> The time at which DevOps Guru last updated this resource. </p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p> The time at which DevOps Guru last updated this resource. </p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p> The time at which DevOps Guru last updated this resource. </p>
     */
    inline MonitoredResourceIdentifier& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p> The time at which DevOps Guru last updated this resource. </p>
     */
    inline MonitoredResourceIdentifier& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline MonitoredResourceIdentifier& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}

    
    inline MonitoredResourceIdentifier& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}

  private:

    Aws::String m_monitoredResourceName;
    bool m_monitoredResourceNameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    ResourcePermission m_resourcePermission;
    bool m_resourcePermissionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
