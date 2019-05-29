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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/MaintenanceWindowTaskInvocationParameters.h>
#include <aws/ssm/model/LoggingInfo.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/MaintenanceWindowTaskParameterValueExpression.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API UpdateMaintenanceWindowTaskRequest : public SSMRequest
  {
  public:
    UpdateMaintenanceWindowTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMaintenanceWindowTask"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maintenance window ID that contains the task to modify.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The maintenance window ID that contains the task to modify.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The maintenance window ID that contains the task to modify.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The maintenance window ID that contains the task to modify.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The maintenance window ID that contains the task to modify.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The maintenance window ID that contains the task to modify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The maintenance window ID that contains the task to modify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The maintenance window ID that contains the task to modify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The task ID to modify.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }

    /**
     * <p>The task ID to modify.</p>
     */
    inline bool WindowTaskIdHasBeenSet() const { return m_windowTaskIdHasBeenSet; }

    /**
     * <p>The task ID to modify.</p>
     */
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = value; }

    /**
     * <p>The task ID to modify.</p>
     */
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = std::move(value); }

    /**
     * <p>The task ID to modify.</p>
     */
    inline void SetWindowTaskId(const char* value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId.assign(value); }

    /**
     * <p>The task ID to modify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The task ID to modify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(std::move(value)); return *this;}

    /**
     * <p>The task ID to modify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}


    /**
     * <p>The targets (either instances or tags) to modify. Instances are specified
     * using Key=instanceids,Values=instanceID_1,instanceID_2. Tags are specified using
     * Key=tag_name,Values=tag_value. </p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets (either instances or tags) to modify. Instances are specified
     * using Key=instanceids,Values=instanceID_1,instanceID_2. Tags are specified using
     * Key=tag_name,Values=tag_value. </p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets (either instances or tags) to modify. Instances are specified
     * using Key=instanceids,Values=instanceID_1,instanceID_2. Tags are specified using
     * Key=tag_name,Values=tag_value. </p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets (either instances or tags) to modify. Instances are specified
     * using Key=instanceids,Values=instanceID_1,instanceID_2. Tags are specified using
     * Key=tag_name,Values=tag_value. </p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets (either instances or tags) to modify. Instances are specified
     * using Key=instanceids,Values=instanceID_1,instanceID_2. Tags are specified using
     * Key=tag_name,Values=tag_value. </p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or tags) to modify. Instances are specified
     * using Key=instanceids,Values=instanceID_1,instanceID_2. Tags are specified using
     * Key=tag_name,Values=tag_value. </p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets (either instances or tags) to modify. Instances are specified
     * using Key=instanceids,Values=instanceID_1,instanceID_2. Tags are specified using
     * Key=tag_name,Values=tag_value. </p>
     */
    inline UpdateMaintenanceWindowTaskRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets (either instances or tags) to modify. Instances are specified
     * using Key=instanceids,Values=instanceID_1,instanceID_2. Tags are specified using
     * Key=tag_name,Values=tag_value. </p>
     */
    inline UpdateMaintenanceWindowTaskRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The task ARN to modify.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The task ARN to modify.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The task ARN to modify.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The task ARN to modify.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The task ARN to modify.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The task ARN to modify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The task ARN to modify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The task ARN to modify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


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
    inline UpdateMaintenanceWindowTaskRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

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
    inline UpdateMaintenanceWindowTaskRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

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
    inline UpdateMaintenanceWindowTaskRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& GetTaskParameters() const{ return m_taskParameters; }

    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline bool TaskParametersHasBeenSet() const { return m_taskParametersHasBeenSet; }

    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline void SetTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { m_taskParametersHasBeenSet = true; m_taskParameters = value; }

    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline void SetTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { m_taskParametersHasBeenSet = true; m_taskParameters = std::move(value); }

    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { SetTaskParameters(value); return *this;}

    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { SetTaskParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(const Aws::String& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(Aws::String&& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(const Aws::String& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(Aws::String&& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(const char* key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters to modify.</p> <note> <p> <code>TaskParameters</code> has been
     * deprecated. To specify parameters to pass to a task when it runs, instead use
     * the <code>Parameters</code> option in the <code>TaskInvocationParameters</code>
     * structure. For information about how Systems Manager handles these options for
     * the supported maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The map has the
     * following format:</p> <p>Key: string, between 1 and 255 characters</p> <p>Value:
     * an array of strings, each string is between 1 and 255 characters</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& AddTaskParameters(const char* key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, value); return *this; }


    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty.</p>
     */
    inline const MaintenanceWindowTaskInvocationParameters& GetTaskInvocationParameters() const{ return m_taskInvocationParameters; }

    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty.</p>
     */
    inline bool TaskInvocationParametersHasBeenSet() const { return m_taskInvocationParametersHasBeenSet; }

    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty.</p>
     */
    inline void SetTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { m_taskInvocationParametersHasBeenSet = true; m_taskInvocationParameters = value; }

    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty.</p>
     */
    inline void SetTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { m_taskInvocationParametersHasBeenSet = true; m_taskInvocationParameters = std::move(value); }

    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { SetTaskInvocationParameters(value); return *this;}

    /**
     * <p>The parameters that the task should use during execution. Populate only the
     * fields that match the task type. All other fields should be empty.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { SetTaskInvocationParameters(std::move(value)); return *this;}


    /**
     * <p>The new task priority to specify. The lower the number, the higher the
     * priority. Tasks that have the same priority are scheduled in parallel.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The new task priority to specify. The lower the number, the higher the
     * priority. Tasks that have the same priority are scheduled in parallel.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The new task priority to specify. The lower the number, the higher the
     * priority. Tasks that have the same priority are scheduled in parallel.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The new task priority to specify. The lower the number, the higher the
     * priority. Tasks that have the same priority are scheduled in parallel.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The new <code>MaxConcurrency</code> value you want to specify.
     * <code>MaxConcurrency</code> is the number of targets that are allowed to run
     * this task in parallel.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The new <code>MaxConcurrency</code> value you want to specify.
     * <code>MaxConcurrency</code> is the number of targets that are allowed to run
     * this task in parallel.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The new <code>MaxConcurrency</code> value you want to specify.
     * <code>MaxConcurrency</code> is the number of targets that are allowed to run
     * this task in parallel.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The new <code>MaxConcurrency</code> value you want to specify.
     * <code>MaxConcurrency</code> is the number of targets that are allowed to run
     * this task in parallel.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }

    /**
     * <p>The new <code>MaxConcurrency</code> value you want to specify.
     * <code>MaxConcurrency</code> is the number of targets that are allowed to run
     * this task in parallel.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>The new <code>MaxConcurrency</code> value you want to specify.
     * <code>MaxConcurrency</code> is the number of targets that are allowed to run
     * this task in parallel.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The new <code>MaxConcurrency</code> value you want to specify.
     * <code>MaxConcurrency</code> is the number of targets that are allowed to run
     * this task in parallel.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The new <code>MaxConcurrency</code> value you want to specify.
     * <code>MaxConcurrency</code> is the number of targets that are allowed to run
     * this task in parallel.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The new <code>MaxErrors</code> value to specify. <code>MaxErrors</code> is
     * the maximum number of errors that are allowed before the task stops being
     * scheduled.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The new <code>MaxErrors</code> value to specify. <code>MaxErrors</code> is
     * the maximum number of errors that are allowed before the task stops being
     * scheduled.</p>
     */
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }

    /**
     * <p>The new <code>MaxErrors</code> value to specify. <code>MaxErrors</code> is
     * the maximum number of errors that are allowed before the task stops being
     * scheduled.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The new <code>MaxErrors</code> value to specify. <code>MaxErrors</code> is
     * the maximum number of errors that are allowed before the task stops being
     * scheduled.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }

    /**
     * <p>The new <code>MaxErrors</code> value to specify. <code>MaxErrors</code> is
     * the maximum number of errors that are allowed before the task stops being
     * scheduled.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }

    /**
     * <p>The new <code>MaxErrors</code> value to specify. <code>MaxErrors</code> is
     * the maximum number of errors that are allowed before the task stops being
     * scheduled.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The new <code>MaxErrors</code> value to specify. <code>MaxErrors</code> is
     * the maximum number of errors that are allowed before the task stops being
     * scheduled.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The new <code>MaxErrors</code> value to specify. <code>MaxErrors</code> is
     * the maximum number of errors that are allowed before the task stops being
     * scheduled.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>The new logging location in Amazon S3 to specify.</p> <note> <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket to contain
     * logs, instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }

    /**
     * <p>The new logging location in Amazon S3 to specify.</p> <note> <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket to contain
     * logs, instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }

    /**
     * <p>The new logging location in Amazon S3 to specify.</p> <note> <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket to contain
     * logs, instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }

    /**
     * <p>The new logging location in Amazon S3 to specify.</p> <note> <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket to contain
     * logs, instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::move(value); }

    /**
     * <p>The new logging location in Amazon S3 to specify.</p> <note> <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket to contain
     * logs, instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}

    /**
     * <p>The new logging location in Amazon S3 to specify.</p> <note> <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an S3 bucket to contain
     * logs, instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}


    /**
     * <p>The new task name to specify.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new task name to specify.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new task name to specify.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new task name to specify.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new task name to specify.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new task name to specify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new task name to specify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new task name to specify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The new task description to specify.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new task description to specify.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new task description to specify.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new task description to specify.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new task description to specify.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new task description to specify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new task description to specify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new task description to specify.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>If True, then all fields that are required by the
     * RegisterTaskWithMaintenanceWndow action are also required for this API request.
     * Optional fields that are not specified are set to null.</p>
     */
    inline bool GetReplace() const{ return m_replace; }

    /**
     * <p>If True, then all fields that are required by the
     * RegisterTaskWithMaintenanceWndow action are also required for this API request.
     * Optional fields that are not specified are set to null.</p>
     */
    inline bool ReplaceHasBeenSet() const { return m_replaceHasBeenSet; }

    /**
     * <p>If True, then all fields that are required by the
     * RegisterTaskWithMaintenanceWndow action are also required for this API request.
     * Optional fields that are not specified are set to null.</p>
     */
    inline void SetReplace(bool value) { m_replaceHasBeenSet = true; m_replace = value; }

    /**
     * <p>If True, then all fields that are required by the
     * RegisterTaskWithMaintenanceWndow action are also required for this API request.
     * Optional fields that are not specified are set to null.</p>
     */
    inline UpdateMaintenanceWindowTaskRequest& WithReplace(bool value) { SetReplace(value); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;

    Aws::String m_windowTaskId;
    bool m_windowTaskIdHasBeenSet;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;

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

    bool m_replace;
    bool m_replaceHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
