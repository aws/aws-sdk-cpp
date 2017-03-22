/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Target.h>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API RegisterTargetWithMaintenanceWindowRequest : public SSMRequest
  {
  public:
    RegisterTargetWithMaintenanceWindowRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Maintenance Window the target should be registered with.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the Maintenance Window the target should be registered with.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window the target should be registered with.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window the target should be registered with.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the Maintenance Window the target should be registered with.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window the target should be registered with.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window the target should be registered with.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}

    /**
     * <p>The type of target being registered with the Maintenance Window.</p>
     */
    inline const MaintenanceWindowResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of target being registered with the Maintenance Window.</p>
     */
    inline void SetResourceType(const MaintenanceWindowResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of target being registered with the Maintenance Window.</p>
     */
    inline void SetResourceType(MaintenanceWindowResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of target being registered with the Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithResourceType(const MaintenanceWindowResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of target being registered with the Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithResourceType(MaintenanceWindowResourceType&& value) { SetResourceType(value); return *this;}

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
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

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
    inline void SetOwnerInformation(Aws::String&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = value; }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline void SetOwnerInformation(const char* value) { m_ownerInformationHasBeenSet = true; m_ownerInformation.assign(value); }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:
    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;
    MaintenanceWindowResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;
    Aws::String m_ownerInformation;
    bool m_ownerInformationHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
