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
#include <aws/ssm/model/MaintenanceWindowTaskType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/MaintenanceWindowTaskInvocationParameters.h>
#include <aws/ssm/model/LoggingInfo.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/MaintenanceWindowTaskParameterValueExpression.h>
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
  class AWS_SSM_API RegisterTaskWithMaintenanceWindowRequest : public SSMRequest
  {
  public:
    RegisterTaskWithMaintenanceWindowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterTaskWithMaintenanceWindow"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the maintenance window the task should be added to.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window the task should be added to.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The ID of the maintenance window the task should be added to.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the maintenance window the task should be added to.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window the task should be added to.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window the task should be added to.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window the task should be added to.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window the task should be added to.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The targets (either instances or maintenance window targets).</p> <p>Specify
     * instances using the following format: </p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify maintenance window targets using the following format:</p> <p>
     * <code>Key=&lt;WindowTargetIds&gt;,Values=&lt;window-target-id-1&gt;,&lt;window-target-id-2&gt;</code>
     * </p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets (either instances or maintenance window targets).</p> <p>Specify
     * instances using the following format: </p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify maintenance window targets using the following format:</p> <p>
     * <code>Key=&lt;WindowTargetIds&gt;,Values=&lt;window-target-id-1&gt;,&lt;window-target-id-2&gt;</code>
     * </p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets (either instances or maintenance window targets).</p> <p>Specify
     * instances using the following format: </p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify maintenance window targets using the following format:</p> <p>
     * <code>Key=&lt;WindowTargetIds&gt;,Values=&lt;window-target-id-1&gt;,&lt;window-target-id-2&gt;</code>
     * </p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets (either instances or maintenance window targets).</p> <p>Specify
     * instances using the following format: </p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify maintenance window targets using the following format:</p> <p>
     * <code>Key=&lt;WindowTargetIds&gt;,Values=&lt;window-target-id-1&gt;,&lt;window-target-id-2&gt;</code>
     * </p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets (either instances or maintenance window targets).</p> <p>Specify
     * instances using the following format: </p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify maintenance window targets using the following format:</p> <p>
     * <code>Key=&lt;WindowTargetIds&gt;,Values=&lt;window-target-id-1&gt;,&lt;window-target-id-2&gt;</code>
     * </p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or maintenance window targets).</p> <p>Specify
     * instances using the following format: </p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify maintenance window targets using the following format:</p> <p>
     * <code>Key=&lt;WindowTargetIds&gt;,Values=&lt;window-target-id-1&gt;,&lt;window-target-id-2&gt;</code>
     * </p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets (either instances or maintenance window targets).</p> <p>Specify
     * instances using the following format: </p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify maintenance window targets using the following format:</p> <p>
     * <code>Key=&lt;WindowTargetIds&gt;,Values=&lt;window-target-id-1&gt;,&lt;window-target-id-2&gt;</code>
     * </p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets (either instances or maintenance window targets).</p> <p>Specify
     * instances using the following format: </p> <p>
     * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;</code>
     * </p> <p>Specify maintenance window targets using the following format:</p> <p>
     * <code>Key=&lt;WindowTargetIds&gt;,Values=&lt;window-target-id-1&gt;,&lt;window-target-id-2&gt;</code>
     * </p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the task to run.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The ARN of the task to run.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The ARN of the task to run.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The ARN of the task to run.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The ARN of the task to run.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The ARN of the task to run.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task to run.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task to run.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The ARN of the IAM service role for Systems Manager to assume when running a
     * maintenance window task. If you do not specify a service role ARN, Systems
     * Manager uses your account's service-linked role. If no service-linked role for
     * Systems Manager exists in your account, it is created when you run
     * <code>RegisterTaskWithMaintenanceWindow</code>.</p> <p>For more information, see
     * the following topics in the in the <i>AWS Systems Manager User Guide</i>:</p>
     * <ul> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/using-service-linked-roles.html#slr-permissions">Service-Linked
     * Role Permissions for Systems Manager</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-maintenance-permissions.html#maintenance-window-tasks-service-role">Should
     * I Use a Service-Linked Role or a Custom Service Role to Run Maintenance Window
     * Tasks? </a> </p> </li> </ul>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The ARN of the IAM service role for Systems Manager to assume when running a
     * maintenance window task. If you do not specify a service role ARN, Systems
     * Manager uses your account's service-linked role. If no service-linked role for
     * Systems Manager exists in your account, it is created when you run
     * <code>RegisterTaskWithMaintenanceWindow</code>.</p> <p>For more information, see
     * the following topics in the in the <i>AWS Systems Manager User Guide</i>:</p>
     * <ul> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/using-service-linked-roles.html#slr-permissions">Service-Linked
     * Role Permissions for Systems Manager</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-maintenance-permissions.html#maintenance-window-tasks-service-role">Should
     * I Use a Service-Linked Role or a Custom Service Role to Run Maintenance Window
     * Tasks? </a> </p> </li> </ul>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM service role for Systems Manager to assume when running a
     * maintenance window task. If you do not specify a service role ARN, Systems
     * Manager uses your account's service-linked role. If no service-linked role for
     * Systems Manager exists in your account, it is created when you run
     * <code>RegisterTaskWithMaintenanceWindow</code>.</p> <p>For more information, see
     * the following topics in the in the <i>AWS Systems Manager User Guide</i>:</p>
     * <ul> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/using-service-linked-roles.html#slr-permissions">Service-Linked
     * Role Permissions for Systems Manager</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-maintenance-permissions.html#maintenance-window-tasks-service-role">Should
     * I Use a Service-Linked Role or a Custom Service Role to Run Maintenance Window
     * Tasks? </a> </p> </li> </ul>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The ARN of the IAM service role for Systems Manager to assume when running a
     * maintenance window task. If you do not specify a service role ARN, Systems
     * Manager uses your account's service-linked role. If no service-linked role for
     * Systems Manager exists in your account, it is created when you run
     * <code>RegisterTaskWithMaintenanceWindow</code>.</p> <p>For more information, see
     * the following topics in the in the <i>AWS Systems Manager User Guide</i>:</p>
     * <ul> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/using-service-linked-roles.html#slr-permissions">Service-Linked
     * Role Permissions for Systems Manager</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-maintenance-permissions.html#maintenance-window-tasks-service-role">Should
     * I Use a Service-Linked Role or a Custom Service Role to Run Maintenance Window
     * Tasks? </a> </p> </li> </ul>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM service role for Systems Manager to assume when running a
     * maintenance window task. If you do not specify a service role ARN, Systems
     * Manager uses your account's service-linked role. If no service-linked role for
     * Systems Manager exists in your account, it is created when you run
     * <code>RegisterTaskWithMaintenanceWindow</code>.</p> <p>For more information, see
     * the following topics in the in the <i>AWS Systems Manager User Guide</i>:</p>
     * <ul> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/using-service-linked-roles.html#slr-permissions">Service-Linked
     * Role Permissions for Systems Manager</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-maintenance-permissions.html#maintenance-window-tasks-service-role">Should
     * I Use a Service-Linked Role or a Custom Service Role to Run Maintenance Window
     * Tasks? </a> </p> </li> </ul>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM service role for Systems Manager to assume when running a
     * maintenance window task. If you do not specify a service role ARN, Systems
     * Manager uses your account's service-linked role. If no service-linked role for
     * Systems Manager exists in your account, it is created when you run
     * <code>RegisterTaskWithMaintenanceWindow</code>.</p> <p>For more information, see
     * the following topics in the in the <i>AWS Systems Manager User Guide</i>:</p>
     * <ul> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/using-service-linked-roles.html#slr-permissions">Service-Linked
     * Role Permissions for Systems Manager</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-maintenance-permissions.html#maintenance-window-tasks-service-role">Should
     * I Use a Service-Linked Role or a Custom Service Role to Run Maintenance Window
     * Tasks? </a> </p> </li> </ul>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM service role for Systems Manager to assume when running a
     * maintenance window task. If you do not specify a service role ARN, Systems
     * Manager uses your account's service-linked role. If no service-linked role for
     * Systems Manager exists in your account, it is created when you run
     * <code>RegisterTaskWithMaintenanceWindow</code>.</p> <p>For more information, see
     * the following topics in the in the <i>AWS Systems Manager User Guide</i>:</p>
     * <ul> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/using-service-linked-roles.html#slr-permissions">Service-Linked
     * Role Permissions for Systems Manager</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-maintenance-permissions.html#maintenance-window-tasks-service-role">Should
     * I Use a Service-Linked Role or a Custom Service Role to Run Maintenance Window
     * Tasks? </a> </p> </li> </ul>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM service role for Systems Manager to assume when running a
     * maintenance window task. If you do not specify a service role ARN, Systems
     * Manager uses your account's service-linked role. If no service-linked role for
     * Systems Manager exists in your account, it is created when you run
     * <code>RegisterTaskWithMaintenanceWindow</code>.</p> <p>For more information, see
     * the following topics in the in the <i>AWS Systems Manager User Guide</i>:</p>
     * <ul> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/using-service-linked-roles.html#slr-permissions">Service-Linked
     * Role Permissions for Systems Manager</a> </p> </li> <li> <p> <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-maintenance-permissions.html#maintenance-window-tasks-service-role">Should
     * I Use a Service-Linked Role or a Custom Service Role to Run Maintenance Window
     * Tasks? </a> </p> </li> </ul>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>The type of task being registered.</p>
     */
    inline const MaintenanceWindowTaskType& GetTaskType() const{ return m_taskType; }

    /**
     * <p>The type of task being registered.</p>
     */
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }

    /**
     * <p>The type of task being registered.</p>
     */
    inline void SetTaskType(const MaintenanceWindowTaskType& value) { m_taskTypeHasBeenSet = true; m_taskType = value; }

    /**
     * <p>The type of task being registered.</p>
     */
    inline void SetTaskType(MaintenanceWindowTaskType&& value) { m_taskTypeHasBeenSet = true; m_taskType = std::move(value); }

    /**
     * <p>The type of task being registered.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskType(const MaintenanceWindowTaskType& value) { SetTaskType(value); return *this;}

    /**
     * <p>The type of task being registered.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskType(MaintenanceWindowTaskType&& value) { SetTaskType(std::move(value)); return *this;}


    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& GetTaskParameters() const{ return m_taskParameters; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline bool TaskParametersHasBeenSet() const { return m_taskParametersHasBeenSet; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline void SetTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { m_taskParametersHasBeenSet = true; m_taskParameters = value; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline void SetTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { m_taskParametersHasBeenSet = true; m_taskParameters = std::move(value); }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { SetTaskParameters(value); return *this;}

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { SetTaskParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(const Aws::String& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(Aws::String&& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(const Aws::String& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(Aws::String&& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(const char* key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> <note>
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(const char* key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, value); return *this; }


    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty. </p>
     */
    inline const MaintenanceWindowTaskInvocationParameters& GetTaskInvocationParameters() const{ return m_taskInvocationParameters; }

    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty. </p>
     */
    inline bool TaskInvocationParametersHasBeenSet() const { return m_taskInvocationParametersHasBeenSet; }

    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty. </p>
     */
    inline void SetTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { m_taskInvocationParametersHasBeenSet = true; m_taskInvocationParameters = value; }

    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty. </p>
     */
    inline void SetTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { m_taskInvocationParametersHasBeenSet = true; m_taskInvocationParameters = std::move(value); }

    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty. </p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { SetTaskInvocationParameters(value); return *this;}

    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty. </p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { SetTaskInvocationParameters(std::move(value)); return *this;}


    /**
     * <p>The priority of the task in the maintenance window, the lower the number the
     * higher the priority. Tasks in a maintenance window are scheduled in priority
     * order with tasks that have the same priority scheduled in parallel.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the task in the maintenance window, the lower the number the
     * higher the priority. Tasks in a maintenance window are scheduled in priority
     * order with tasks that have the same priority scheduled in parallel.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority of the task in the maintenance window, the lower the number the
     * higher the priority. Tasks in a maintenance window are scheduled in priority
     * order with tasks that have the same priority scheduled in parallel.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority of the task in the maintenance window, the lower the number the
     * higher the priority. Tasks in a maintenance window are scheduled in priority
     * order with tasks that have the same priority scheduled in parallel.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>A structure containing information about an Amazon S3 bucket to write
     * instance-level logs to. </p> <note> <p> <code>LoggingInfo</code> has been
     * deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }

    /**
     * <p>A structure containing information about an Amazon S3 bucket to write
     * instance-level logs to. </p> <note> <p> <code>LoggingInfo</code> has been
     * deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }

    /**
     * <p>A structure containing information about an Amazon S3 bucket to write
     * instance-level logs to. </p> <note> <p> <code>LoggingInfo</code> has been
     * deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }

    /**
     * <p>A structure containing information about an Amazon S3 bucket to write
     * instance-level logs to. </p> <note> <p> <code>LoggingInfo</code> has been
     * deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::move(value); }

    /**
     * <p>A structure containing information about an Amazon S3 bucket to write
     * instance-level logs to. </p> <note> <p> <code>LoggingInfo</code> has been
     * deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}

    /**
     * <p>A structure containing information about an Amazon S3 bucket to write
     * instance-level logs to. </p> <note> <p> <code>LoggingInfo</code> has been
     * deprecated. To specify an S3 bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}


    /**
     * <p>An optional name for the task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>An optional name for the task.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An optional name for the task.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An optional name for the task.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An optional name for the task.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>An optional name for the task.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>An optional name for the task.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>An optional name for the task.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description for the task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the task.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the task.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the task.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the task.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the task.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline RegisterTaskWithMaintenanceWindowRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;

    MaintenanceWindowTaskType m_taskType;
    bool m_taskTypeHasBeenSet;

    Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression> m_taskParameters;
    bool m_taskParametersHasBeenSet;

    MaintenanceWindowTaskInvocationParameters m_taskInvocationParameters;
    bool m_taskInvocationParametersHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet;

    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet;

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
