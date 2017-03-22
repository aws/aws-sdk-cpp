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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MaintenanceWindowTaskType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/LoggingInfo.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/MaintenanceWindowTaskParameterValueExpression.h>
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
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The id of the Maintenance Window the task should be added to.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The id of the Maintenance Window the task should be added to.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The id of the Maintenance Window the task should be added to.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The id of the Maintenance Window the task should be added to.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The id of the Maintenance Window the task should be added to.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The id of the Maintenance Window the task should be added to.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(value); return *this;}

    /**
     * <p>The id of the Maintenance Window the task should be added to.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}

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
    inline RegisterTaskWithMaintenanceWindowRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The ARN of the task to execute </p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The ARN of the task to execute </p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The ARN of the task to execute </p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The ARN of the task to execute </p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The ARN of the task to execute </p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task to execute </p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskArn(Aws::String&& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task to execute </p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}

    /**
     * <p>The role that should be assumed when executing the task.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The role that should be assumed when executing the task.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The role that should be assumed when executing the task.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The role that should be assumed when executing the task.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The role that should be assumed when executing the task.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The role that should be assumed when executing the task.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The role that should be assumed when executing the task.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The type of task being registered.</p>
     */
    inline const MaintenanceWindowTaskType& GetTaskType() const{ return m_taskType; }

    /**
     * <p>The type of task being registered.</p>
     */
    inline void SetTaskType(const MaintenanceWindowTaskType& value) { m_taskTypeHasBeenSet = true; m_taskType = value; }

    /**
     * <p>The type of task being registered.</p>
     */
    inline void SetTaskType(MaintenanceWindowTaskType&& value) { m_taskTypeHasBeenSet = true; m_taskType = value; }

    /**
     * <p>The type of task being registered.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskType(const MaintenanceWindowTaskType& value) { SetTaskType(value); return *this;}

    /**
     * <p>The type of task being registered.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskType(MaintenanceWindowTaskType&& value) { SetTaskType(value); return *this;}

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& GetTaskParameters() const{ return m_taskParameters; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline void SetTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { m_taskParametersHasBeenSet = true; m_taskParameters = value; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline void SetTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { m_taskParametersHasBeenSet = true; m_taskParameters = value; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { SetTaskParameters(value); return *this;}

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { SetTaskParameters(value); return *this;}

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(const Aws::String& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters[key] = value; return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(Aws::String&& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters[key] = value; return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(const Aws::String& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters[key] = value; return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(Aws::String&& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters[key] = value; return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(const char* key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters[key] = value; return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& AddTaskParameters(const char* key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters[key] = value; return *this; }

    /**
     * <p>The priority of the task in the Maintenance Window, the lower the number the
     * higher the priority. Tasks in a Maintenance Window are scheduled in priority
     * order with tasks that have the same priority scheduled in parallel.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the task in the Maintenance Window, the lower the number the
     * higher the priority. Tasks in a Maintenance Window are scheduled in priority
     * order with tasks that have the same priority scheduled in parallel.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority of the task in the Maintenance Window, the lower the number the
     * higher the priority. Tasks in a Maintenance Window are scheduled in priority
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
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

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
    inline RegisterTaskWithMaintenanceWindowRequest& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(value); return *this;}

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
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

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
    inline RegisterTaskWithMaintenanceWindowRequest& WithMaxErrors(Aws::String&& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}

    /**
     * <p>A structure containing information about an Amazon S3 bucket to write
     * instance-level logs to. </p>
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }

    /**
     * <p>A structure containing information about an Amazon S3 bucket to write
     * instance-level logs to. </p>
     */
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }

    /**
     * <p>A structure containing information about an Amazon S3 bucket to write
     * instance-level logs to. </p>
     */
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }

    /**
     * <p>A structure containing information about an Amazon S3 bucket to write
     * instance-level logs to. </p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}

    /**
     * <p>A structure containing information about an Amazon S3 bucket to write
     * instance-level logs to. </p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(value); return *this;}

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
    inline RegisterTaskWithMaintenanceWindowRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline RegisterTaskWithMaintenanceWindowRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

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
    int m_priority;
    bool m_priorityHasBeenSet;
    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet;
    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet;
    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
