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
    AWS_DEVOPSGURU_API MonitoredResourceIdentifier() = default;
    AWS_DEVOPSGURU_API MonitoredResourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API MonitoredResourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the resource being monitored. </p>
     */
    inline const Aws::String& GetMonitoredResourceName() const { return m_monitoredResourceName; }
    inline bool MonitoredResourceNameHasBeenSet() const { return m_monitoredResourceNameHasBeenSet; }
    template<typename MonitoredResourceNameT = Aws::String>
    void SetMonitoredResourceName(MonitoredResourceNameT&& value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName = std::forward<MonitoredResourceNameT>(value); }
    template<typename MonitoredResourceNameT = Aws::String>
    MonitoredResourceIdentifier& WithMonitoredResourceName(MonitoredResourceNameT&& value) { SetMonitoredResourceName(std::forward<MonitoredResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of resource being monitored. </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    MonitoredResourceIdentifier& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The permission status of a resource. </p>
     */
    inline ResourcePermission GetResourcePermission() const { return m_resourcePermission; }
    inline bool ResourcePermissionHasBeenSet() const { return m_resourcePermissionHasBeenSet; }
    inline void SetResourcePermission(ResourcePermission value) { m_resourcePermissionHasBeenSet = true; m_resourcePermission = value; }
    inline MonitoredResourceIdentifier& WithResourcePermission(ResourcePermission value) { SetResourcePermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which DevOps Guru last updated this resource. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    MonitoredResourceIdentifier& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const { return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    template<typename ResourceCollectionT = ResourceCollection>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = ResourceCollection>
    MonitoredResourceIdentifier& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitoredResourceName;
    bool m_monitoredResourceNameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    ResourcePermission m_resourcePermission{ResourcePermission::NOT_SET};
    bool m_resourcePermissionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
