/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_APPLICATIONINSIGHTS_API ApplicationComponent
  {
  public:
    ApplicationComponent();
    ApplicationComponent(Aws::Utils::Json::JsonView jsonValue);
    ApplicationComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The stack tier of the application component.</p>
     */
    inline const Aws::String& GetTier() const{ return m_tier; }

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline void SetTier(const Aws::String& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline void SetTier(Aws::String&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline void SetTier(const char* value) { m_tierHasBeenSet = true; m_tier.assign(value); }

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline ApplicationComponent& WithTier(const Aws::String& value) { SetTier(value); return *this;}

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline ApplicationComponent& WithTier(Aws::String&& value) { SetTier(std::move(value)); return *this;}

    /**
     * <p>The stack tier of the application component.</p>
     */
    inline ApplicationComponent& WithTier(const char* value) { SetTier(value); return *this;}


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

  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_tier;
    bool m_tierHasBeenSet;

    bool m_monitor;
    bool m_monitorHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
