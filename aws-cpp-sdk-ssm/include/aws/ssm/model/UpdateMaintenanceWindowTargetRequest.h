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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Target.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API UpdateMaintenanceWindowTargetRequest : public SSMRequest
  {
  public:
    UpdateMaintenanceWindowTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMaintenanceWindowTarget"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maintenance window ID with which to modify the target.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The maintenance window ID with which to modify the target.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The maintenance window ID with which to modify the target.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The maintenance window ID with which to modify the target.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The maintenance window ID with which to modify the target.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The maintenance window ID with which to modify the target.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The maintenance window ID with which to modify the target.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The maintenance window ID with which to modify the target.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The target ID to modify.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }

    /**
     * <p>The target ID to modify.</p>
     */
    inline bool WindowTargetIdHasBeenSet() const { return m_windowTargetIdHasBeenSet; }

    /**
     * <p>The target ID to modify.</p>
     */
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = value; }

    /**
     * <p>The target ID to modify.</p>
     */
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = std::move(value); }

    /**
     * <p>The target ID to modify.</p>
     */
    inline void SetWindowTargetId(const char* value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId.assign(value); }

    /**
     * <p>The target ID to modify.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}

    /**
     * <p>The target ID to modify.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(std::move(value)); return *this;}

    /**
     * <p>The target ID to modify.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}


    /**
     * <p>The targets to add or replace.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets to add or replace.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets to add or replace.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets to add or replace.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets to add or replace.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets to add or replace.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets to add or replace.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets to add or replace.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this maintenance window.</p>
     */
    inline const Aws::String& GetOwnerInformation() const{ return m_ownerInformation; }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this maintenance window.</p>
     */
    inline bool OwnerInformationHasBeenSet() const { return m_ownerInformationHasBeenSet; }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this maintenance window.</p>
     */
    inline void SetOwnerInformation(const Aws::String& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = value; }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this maintenance window.</p>
     */
    inline void SetOwnerInformation(Aws::String&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::move(value); }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this maintenance window.</p>
     */
    inline void SetOwnerInformation(const char* value) { m_ownerInformationHasBeenSet = true; m_ownerInformation.assign(value); }

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this maintenance window.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this maintenance window.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(std::move(value)); return *this;}

    /**
     * <p>User-provided value that will be included in any CloudWatch events raised
     * while running tasks for these targets in this maintenance window.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}


    /**
     * <p>A name for the update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the update.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the update.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the update.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description for the update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the update.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the update.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the update.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>If True, then all fields that are required by the
     * RegisterTargetWithMaintenanceWindow action are also required for this API
     * request. Optional fields that are not specified are set to null.</p>
     */
    inline bool GetReplace() const{ return m_replace; }

    /**
     * <p>If True, then all fields that are required by the
     * RegisterTargetWithMaintenanceWindow action are also required for this API
     * request. Optional fields that are not specified are set to null.</p>
     */
    inline bool ReplaceHasBeenSet() const { return m_replaceHasBeenSet; }

    /**
     * <p>If True, then all fields that are required by the
     * RegisterTargetWithMaintenanceWindow action are also required for this API
     * request. Optional fields that are not specified are set to null.</p>
     */
    inline void SetReplace(bool value) { m_replaceHasBeenSet = true; m_replace = value; }

    /**
     * <p>If True, then all fields that are required by the
     * RegisterTargetWithMaintenanceWindow action are also required for this API
     * request. Optional fields that are not specified are set to null.</p>
     */
    inline UpdateMaintenanceWindowTargetRequest& WithReplace(bool value) { SetReplace(value); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;

    Aws::String m_windowTargetId;
    bool m_windowTargetIdHasBeenSet;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;

    Aws::String m_ownerInformation;
    bool m_ownerInformationHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_replace;
    bool m_replaceHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
