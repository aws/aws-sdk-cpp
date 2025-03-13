/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/OsType.h>
#include <aws/application-insights/model/Tier.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p>Describes a standalone resource or similarly grouped resources that the
   * application is made up of.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ApplicationComponent">AWS
   * API Reference</a></p>
   */
  class ApplicationComponent
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ApplicationComponent() = default;
    AWS_APPLICATIONINSIGHTS_API ApplicationComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API ApplicationComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    ApplicationComponent& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If logging is supported for the resource type, indicates whether the
     * component has configured logs to be monitored. </p>
     */
    inline const Aws::String& GetComponentRemarks() const { return m_componentRemarks; }
    inline bool ComponentRemarksHasBeenSet() const { return m_componentRemarksHasBeenSet; }
    template<typename ComponentRemarksT = Aws::String>
    void SetComponentRemarks(ComponentRemarksT&& value) { m_componentRemarksHasBeenSet = true; m_componentRemarks = std::forward<ComponentRemarksT>(value); }
    template<typename ComponentRemarksT = Aws::String>
    ApplicationComponent& WithComponentRemarks(ComponentRemarksT&& value) { SetComponentRemarks(std::forward<ComponentRemarksT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type. Supported resource types include EC2 instances, Auto
     * Scaling group, Classic ELB, Application ELB, and SQS Queue.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ApplicationComponent& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operating system of the component. </p>
     */
    inline OsType GetOsType() const { return m_osType; }
    inline bool OsTypeHasBeenSet() const { return m_osTypeHasBeenSet; }
    inline void SetOsType(OsType value) { m_osTypeHasBeenSet = true; m_osType = value; }
    inline ApplicationComponent& WithOsType(OsType value) { SetOsType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack tier of the application component.</p>
     */
    inline Tier GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(Tier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline ApplicationComponent& WithTier(Tier value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the application component is monitored. </p>
     */
    inline bool GetMonitor() const { return m_monitor; }
    inline bool MonitorHasBeenSet() const { return m_monitorHasBeenSet; }
    inline void SetMonitor(bool value) { m_monitorHasBeenSet = true; m_monitor = value; }
    inline ApplicationComponent& WithMonitor(bool value) { SetMonitor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Workloads detected in the application component. </p>
     */
    inline const Aws::Map<Tier, Aws::Map<Aws::String, Aws::String>>& GetDetectedWorkload() const { return m_detectedWorkload; }
    inline bool DetectedWorkloadHasBeenSet() const { return m_detectedWorkloadHasBeenSet; }
    template<typename DetectedWorkloadT = Aws::Map<Tier, Aws::Map<Aws::String, Aws::String>>>
    void SetDetectedWorkload(DetectedWorkloadT&& value) { m_detectedWorkloadHasBeenSet = true; m_detectedWorkload = std::forward<DetectedWorkloadT>(value); }
    template<typename DetectedWorkloadT = Aws::Map<Tier, Aws::Map<Aws::String, Aws::String>>>
    ApplicationComponent& WithDetectedWorkload(DetectedWorkloadT&& value) { SetDetectedWorkload(std::forward<DetectedWorkloadT>(value)); return *this;}
    inline ApplicationComponent& AddDetectedWorkload(Tier key, Aws::Map<Aws::String, Aws::String> value) {
      m_detectedWorkloadHasBeenSet = true; m_detectedWorkload.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentRemarks;
    bool m_componentRemarksHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    OsType m_osType{OsType::NOT_SET};
    bool m_osTypeHasBeenSet = false;

    Tier m_tier{Tier::NOT_SET};
    bool m_tierHasBeenSet = false;

    bool m_monitor{false};
    bool m_monitorHasBeenSet = false;

    Aws::Map<Tier, Aws::Map<Aws::String, Aws::String>> m_detectedWorkload;
    bool m_detectedWorkloadHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
