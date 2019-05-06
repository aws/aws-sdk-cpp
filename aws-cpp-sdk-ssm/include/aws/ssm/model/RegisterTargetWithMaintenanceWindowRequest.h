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
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Target.h>
#include <utility>
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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterTargetWithMaintenanceWindow"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Maintenance Window the target should be registered with.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the Maintenance Window the target should be registered with.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The ID of the Maintenance Window the target should be registered with.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window the target should be registered with.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

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
    inline RegisterTargetWithMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

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
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of target being registered with the Maintenance Window.</p>
     */
    inline void SetResourceType(const MaintenanceWindowResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of target being registered with the Maintenance Window.</p>
     */
    inline void SetResourceType(MaintenanceWindowResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of target being registered with the Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithResourceType(const MaintenanceWindowResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of target being registered with the Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithResourceType(MaintenanceWindowResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The targets (either instances or tags). </p> <p>Specify instances using the
     * following format:</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify tags using either of the following formats:</p> <p>
     * <code>Key=tag:&lt;tag-key&gt;,Values=&lt;tag-value-1&gt;,&lt;tag-value-2&gt;</code>
     * </p> <p> <code>Key=tag-key,Values=&lt;tag-key-1&gt;,&lt;tag-key-2&gt;</code>
     * </p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets (either instances or tags). </p> <p>Specify instances using the
     * following format:</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify tags using either of the following formats:</p> <p>
     * <code>Key=tag:&lt;tag-key&gt;,Values=&lt;tag-value-1&gt;,&lt;tag-value-2&gt;</code>
     * </p> <p> <code>Key=tag-key,Values=&lt;tag-key-1&gt;,&lt;tag-key-2&gt;</code>
     * </p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets (either instances or tags). </p> <p>Specify instances using the
     * following format:</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify tags using either of the following formats:</p> <p>
     * <code>Key=tag:&lt;tag-key&gt;,Values=&lt;tag-value-1&gt;,&lt;tag-value-2&gt;</code>
     * </p> <p> <code>Key=tag-key,Values=&lt;tag-key-1&gt;,&lt;tag-key-2&gt;</code>
     * </p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets (either instances or tags). </p> <p>Specify instances using the
     * following format:</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify tags using either of the following formats:</p> <p>
     * <code>Key=tag:&lt;tag-key&gt;,Values=&lt;tag-value-1&gt;,&lt;tag-value-2&gt;</code>
     * </p> <p> <code>Key=tag-key,Values=&lt;tag-key-1&gt;,&lt;tag-key-2&gt;</code>
     * </p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets (either instances or tags). </p> <p>Specify instances using the
     * following format:</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify tags using either of the following formats:</p> <p>
     * <code>Key=tag:&lt;tag-key&gt;,Values=&lt;tag-value-1&gt;,&lt;tag-value-2&gt;</code>
     * </p> <p> <code>Key=tag-key,Values=&lt;tag-key-1&gt;,&lt;tag-key-2&gt;</code>
     * </p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or tags). </p> <p>Specify instances using the
     * following format:</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify tags using either of the following formats:</p> <p>
     * <code>Key=tag:&lt;tag-key&gt;,Values=&lt;tag-value-1&gt;,&lt;tag-value-2&gt;</code>
     * </p> <p> <code>Key=tag-key,Values=&lt;tag-key-1&gt;,&lt;tag-key-2&gt;</code>
     * </p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets (either instances or tags). </p> <p>Specify instances using the
     * following format:</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify tags using either of the following formats:</p> <p>
     * <code>Key=tag:&lt;tag-key&gt;,Values=&lt;tag-value-1&gt;,&lt;tag-value-2&gt;</code>
     * </p> <p> <code>Key=tag-key,Values=&lt;tag-key-1&gt;,&lt;tag-key-2&gt;</code>
     * </p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets (either instances or tags). </p> <p>Specify instances using the
     * following format:</p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify tags using either of the following formats:</p> <p>
     * <code>Key=tag:&lt;tag-key&gt;,Values=&lt;tag-value-1&gt;,&lt;tag-value-2&gt;</code>
     * </p> <p> <code>Key=tag-key,Values=&lt;tag-key-1&gt;,&lt;tag-key-2&gt;</code>
     * </p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline const Aws::String& GetOwnerInformation() const{ return m_ownerInformation; }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline bool OwnerInformationHasBeenSet() const { return m_ownerInformationHasBeenSet; }

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
    inline RegisterTargetWithMaintenanceWindowRequest& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(std::move(value)); return *this;}

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}


    /**
     * <p>An optional name for the target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>An optional name for the target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An optional name for the target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An optional name for the target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An optional name for the target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>An optional name for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>An optional name for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>An optional name for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description for the target.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the target.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the target.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the target.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the target.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the target.</p>
     */
    inline RegisterTargetWithMaintenanceWindowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>User-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

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
    inline RegisterTargetWithMaintenanceWindowRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

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

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
