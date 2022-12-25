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
    AWS_APPLICATIONINSIGHTS_API ApplicationComponent();
    AWS_APPLICATIONINSIGHTS_API ApplicationComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API ApplicationComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline ApplicationComponent& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline ApplicationComponent& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline ApplicationComponent& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p> If logging is supported for the resource type, indicates whether the
     * component has configured logs to be monitored. </p>
     */
    inline const Aws::String& GetComponentRemarks() const{ return m_componentRemarks; }

    /**
     * <p> If logging is supported for the resource type, indicates whether the
     * component has configured logs to be monitored. </p>
     */
    inline bool ComponentRemarksHasBeenSet() const { return m_componentRemarksHasBeenSet; }

    /**
     * <p> If logging is supported for the resource type, indicates whether the
     * component has configured logs to be monitored. </p>
     */
    inline void SetComponentRemarks(const Aws::String& value) { m_componentRemarksHasBeenSet = true; m_componentRemarks = value; }

    /**
     * <p> If logging is supported for the resource type, indicates whether the
     * component has configured logs to be monitored. </p>
     */
    inline void SetComponentRemarks(Aws::String&& value) { m_componentRemarksHasBeenSet = true; m_componentRemarks = std::move(value); }

    /**
     * <p> If logging is supported for the resource type, indicates whether the
     * component has configured logs to be monitored. </p>
     */
    inline void SetComponentRemarks(const char* value) { m_componentRemarksHasBeenSet = true; m_componentRemarks.assign(value); }

    /**
     * <p> If logging is supported for the resource type, indicates whether the
     * component has configured logs to be monitored. </p>
     */
    inline ApplicationComponent& WithComponentRemarks(const Aws::String& value) { SetComponentRemarks(value); return *this;}

    /**
     * <p> If logging is supported for the resource type, indicates whether the
     * component has configured logs to be monitored. </p>
     */
    inline ApplicationComponent& WithComponentRemarks(Aws::String&& value) { SetComponentRemarks(std::move(value)); return *this;}

    /**
     * <p> If logging is supported for the resource type, indicates whether the
     * component has configured logs to be monitored. </p>
     */
    inline ApplicationComponent& WithComponentRemarks(const char* value) { SetComponentRemarks(value); return *this;}


    /**
     * <p>The resource type. Supported resource types include EC2 instances, Auto
     * Scaling group, Classic ELB, Application ELB, and SQS Queue.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type. Supported resource types include EC2 instances, Auto
     * Scaling group, Classic ELB, Application ELB, and SQS Queue.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type. Supported resource types include EC2 instances, Auto
     * Scaling group, Classic ELB, Application ELB, and SQS Queue.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type. Supported resource types include EC2 instances, Auto
     * Scaling group, Classic ELB, Application ELB, and SQS Queue.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type. Supported resource types include EC2 instances, Auto
     * Scaling group, Classic ELB, Application ELB, and SQS Queue.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type. Supported resource types include EC2 instances, Auto
     * Scaling group, Classic ELB, Application ELB, and SQS Queue.</p>
     */
    inline ApplicationComponent& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type. Supported resource types include EC2 instances, Auto
     * Scaling group, Classic ELB, Application ELB, and SQS Queue.</p>
     */
    inline ApplicationComponent& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type. Supported resource types include EC2 instances, Auto
     * Scaling group, Classic ELB, Application ELB, and SQS Queue.</p>
     */
    inline ApplicationComponent& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p> The operating system of the component. </p>
     */
    inline const OsType& GetOsType() const{ return m_osType; }

    /**
     * <p> The operating system of the component. </p>
     */
    inline bool OsTypeHasBeenSet() const { return m_osTypeHasBeenSet; }

    /**
     * <p> The operating system of the component. </p>
     */
    inline void SetOsType(const OsType& value) { m_osTypeHasBeenSet = true; m_osType = value; }

    /**
     * <p> The operating system of the component. </p>
     */
    inline void SetOsType(OsType&& value) { m_osTypeHasBeenSet = true; m_osType = std::move(value); }

    /**
     * <p> The operating system of the component. </p>
     */
    inline ApplicationComponent& WithOsType(const OsType& value) { SetOsType(value); return *this;}

    /**
     * <p> The operating system of the component. </p>
     */
    inline ApplicationComponent& WithOsType(OsType&& value) { SetOsType(std::move(value)); return *this;}


    /**
     * <p>The stack tier of the application component.</p>
     */
    inline const Tier& GetTier() const{ return m_tier; }

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline void SetTier(const Tier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline void SetTier(Tier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline ApplicationComponent& WithTier(const Tier& value) { SetTier(value); return *this;}

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline ApplicationComponent& WithTier(Tier&& value) { SetTier(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the application component is monitored. </p>
     */
    inline bool GetMonitor() const{ return m_monitor; }

    /**
     * <p>Indicates whether the application component is monitored. </p>
     */
    inline bool MonitorHasBeenSet() const { return m_monitorHasBeenSet; }

    /**
     * <p>Indicates whether the application component is monitored. </p>
     */
    inline void SetMonitor(bool value) { m_monitorHasBeenSet = true; m_monitor = value; }

    /**
     * <p>Indicates whether the application component is monitored. </p>
     */
    inline ApplicationComponent& WithMonitor(bool value) { SetMonitor(value); return *this;}


    /**
     * <p> Workloads detected in the application component. </p>
     */
    inline const Aws::Map<Tier, Aws::Map<Aws::String, Aws::String>>& GetDetectedWorkload() const{ return m_detectedWorkload; }

    /**
     * <p> Workloads detected in the application component. </p>
     */
    inline bool DetectedWorkloadHasBeenSet() const { return m_detectedWorkloadHasBeenSet; }

    /**
     * <p> Workloads detected in the application component. </p>
     */
    inline void SetDetectedWorkload(const Aws::Map<Tier, Aws::Map<Aws::String, Aws::String>>& value) { m_detectedWorkloadHasBeenSet = true; m_detectedWorkload = value; }

    /**
     * <p> Workloads detected in the application component. </p>
     */
    inline void SetDetectedWorkload(Aws::Map<Tier, Aws::Map<Aws::String, Aws::String>>&& value) { m_detectedWorkloadHasBeenSet = true; m_detectedWorkload = std::move(value); }

    /**
     * <p> Workloads detected in the application component. </p>
     */
    inline ApplicationComponent& WithDetectedWorkload(const Aws::Map<Tier, Aws::Map<Aws::String, Aws::String>>& value) { SetDetectedWorkload(value); return *this;}

    /**
     * <p> Workloads detected in the application component. </p>
     */
    inline ApplicationComponent& WithDetectedWorkload(Aws::Map<Tier, Aws::Map<Aws::String, Aws::String>>&& value) { SetDetectedWorkload(std::move(value)); return *this;}

    /**
     * <p> Workloads detected in the application component. </p>
     */
    inline ApplicationComponent& AddDetectedWorkload(const Tier& key, const Aws::Map<Aws::String, Aws::String>& value) { m_detectedWorkloadHasBeenSet = true; m_detectedWorkload.emplace(key, value); return *this; }

    /**
     * <p> Workloads detected in the application component. </p>
     */
    inline ApplicationComponent& AddDetectedWorkload(Tier&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_detectedWorkloadHasBeenSet = true; m_detectedWorkload.emplace(std::move(key), value); return *this; }

    /**
     * <p> Workloads detected in the application component. </p>
     */
    inline ApplicationComponent& AddDetectedWorkload(const Tier& key, Aws::Map<Aws::String, Aws::String>&& value) { m_detectedWorkloadHasBeenSet = true; m_detectedWorkload.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Workloads detected in the application component. </p>
     */
    inline ApplicationComponent& AddDetectedWorkload(Tier&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_detectedWorkloadHasBeenSet = true; m_detectedWorkload.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentRemarks;
    bool m_componentRemarksHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    OsType m_osType;
    bool m_osTypeHasBeenSet = false;

    Tier m_tier;
    bool m_tierHasBeenSet = false;

    bool m_monitor;
    bool m_monitorHasBeenSet = false;

    Aws::Map<Tier, Aws::Map<Aws::String, Aws::String>> m_detectedWorkload;
    bool m_detectedWorkloadHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
