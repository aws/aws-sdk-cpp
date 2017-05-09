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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Target.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>The target registered with the Maintenance Window.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowTarget">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowTarget
  {
  public:
    MaintenanceWindowTarget();
    MaintenanceWindowTarget(const Aws::Utils::Json::JsonValue& jsonValue);
    MaintenanceWindowTarget& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Maintenance Window ID where the target is registered.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The Maintenance Window ID where the target is registered.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The Maintenance Window ID where the target is registered.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The Maintenance Window ID where the target is registered.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The Maintenance Window ID where the target is registered.</p>
     */
    inline MaintenanceWindowTarget& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The Maintenance Window ID where the target is registered.</p>
     */
    inline MaintenanceWindowTarget& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The Maintenance Window ID where the target is registered.</p>
     */
    inline MaintenanceWindowTarget& WithWindowId(const char* value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the target.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }

    /**
     * <p>The ID of the target.</p>
     */
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = value; }

    /**
     * <p>The ID of the target.</p>
     */
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = std::move(value); }

    /**
     * <p>The ID of the target.</p>
     */
    inline void SetWindowTargetId(const char* value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId.assign(value); }

    /**
     * <p>The ID of the target.</p>
     */
    inline MaintenanceWindowTarget& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}

    /**
     * <p>The ID of the target.</p>
     */
    inline MaintenanceWindowTarget& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target.</p>
     */
    inline MaintenanceWindowTarget& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}

    /**
     * <p>The type of target.</p>
     */
    inline const MaintenanceWindowResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of target.</p>
     */
    inline void SetResourceType(const MaintenanceWindowResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of target.</p>
     */
    inline void SetResourceType(MaintenanceWindowResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of target.</p>
     */
    inline MaintenanceWindowTarget& WithResourceType(const MaintenanceWindowResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of target.</p>
     */
    inline MaintenanceWindowTarget& WithResourceType(MaintenanceWindowResourceType&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline MaintenanceWindowTarget& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline MaintenanceWindowTarget& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline MaintenanceWindowTarget& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline MaintenanceWindowTarget& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline const Aws::String& GetOwnerInformation() const{ return m_ownerInformation; }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline void SetOwnerInformation(const Aws::String& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = value; }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline void SetOwnerInformation(Aws::String&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::move(value); }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline void SetOwnerInformation(const char* value) { m_ownerInformationHasBeenSet = true; m_ownerInformation.assign(value); }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline MaintenanceWindowTarget& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline MaintenanceWindowTarget& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(std::move(value)); return *this;}

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline MaintenanceWindowTarget& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}

  private:
    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;
    Aws::String m_windowTargetId;
    bool m_windowTargetIdHasBeenSet;
    MaintenanceWindowResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;
    Aws::String m_ownerInformation;
    bool m_ownerInformationHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
