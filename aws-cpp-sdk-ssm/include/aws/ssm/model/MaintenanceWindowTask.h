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
#include <aws/ssm/model/MaintenanceWindowTaskType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/LoggingInfo.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/MaintenanceWindowTaskParameterValueExpression.h>
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
   * <p>Information about a task defined for a Maintenance Window.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowTask">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowTask
  {
  public:
    MaintenanceWindowTask();
    MaintenanceWindowTask(const Aws::Utils::Json::JsonValue& jsonValue);
    MaintenanceWindowTask& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Maintenance Window ID where the task is registered.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The Maintenance Window ID where the task is registered.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The Maintenance Window ID where the task is registered.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The Maintenance Window ID where the task is registered.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The Maintenance Window ID where the task is registered.</p>
     */
    inline MaintenanceWindowTask& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The Maintenance Window ID where the task is registered.</p>
     */
    inline MaintenanceWindowTask& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The Maintenance Window ID where the task is registered.</p>
     */
    inline MaintenanceWindowTask& WithWindowId(const char* value) { SetWindowId(value); return *this;}

    /**
     * <p>The task ID.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }

    /**
     * <p>The task ID.</p>
     */
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = value; }

    /**
     * <p>The task ID.</p>
     */
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = std::move(value); }

    /**
     * <p>The task ID.</p>
     */
    inline void SetWindowTaskId(const char* value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId.assign(value); }

    /**
     * <p>The task ID.</p>
     */
    inline MaintenanceWindowTask& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The task ID.</p>
     */
    inline MaintenanceWindowTask& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(std::move(value)); return *this;}

    /**
     * <p>The task ID.</p>
     */
    inline MaintenanceWindowTask& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The ARN of the task to execute.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The ARN of the task to execute.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The ARN of the task to execute.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The ARN of the task to execute.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The ARN of the task to execute.</p>
     */
    inline MaintenanceWindowTask& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task to execute.</p>
     */
    inline MaintenanceWindowTask& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task to execute.</p>
     */
    inline MaintenanceWindowTask& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}

    /**
     * <p>The type of task.</p>
     */
    inline const MaintenanceWindowTaskType& GetType() const{ return m_type; }

    /**
     * <p>The type of task.</p>
     */
    inline void SetType(const MaintenanceWindowTaskType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of task.</p>
     */
    inline void SetType(MaintenanceWindowTaskType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of task.</p>
     */
    inline MaintenanceWindowTask& WithType(const MaintenanceWindowTaskType& value) { SetType(value); return *this;}

    /**
     * <p>The type of task.</p>
     */
    inline MaintenanceWindowTask& WithType(MaintenanceWindowTaskType&& value) { SetType(std::move(value)); return *this;}

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
    inline MaintenanceWindowTask& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline MaintenanceWindowTask& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline MaintenanceWindowTask& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets (either instances or tags). Instances are specified using
     * Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;. Tags are
     * specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline MaintenanceWindowTask& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

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
    inline void SetTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { m_taskParametersHasBeenSet = true; m_taskParameters = std::move(value); }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline MaintenanceWindowTask& WithTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { SetTaskParameters(value); return *this;}

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline MaintenanceWindowTask& WithTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { SetTaskParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline MaintenanceWindowTask& AddTaskParameters(const Aws::String& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline MaintenanceWindowTask& AddTaskParameters(Aws::String&& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline MaintenanceWindowTask& AddTaskParameters(const Aws::String& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline MaintenanceWindowTask& AddTaskParameters(Aws::String&& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline MaintenanceWindowTask& AddTaskParameters(const char* key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is executed.</p>
     */
    inline MaintenanceWindowTask& AddTaskParameters(const char* key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, value); return *this; }

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
    inline MaintenanceWindowTask& WithPriority(int value) { SetPriority(value); return *this;}

    /**
     * <p>Information about an Amazon S3 bucket to write task-level logs to.</p>
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }

    /**
     * <p>Information about an Amazon S3 bucket to write task-level logs to.</p>
     */
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }

    /**
     * <p>Information about an Amazon S3 bucket to write task-level logs to.</p>
     */
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::move(value); }

    /**
     * <p>Information about an Amazon S3 bucket to write task-level logs to.</p>
     */
    inline MaintenanceWindowTask& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}

    /**
     * <p>Information about an Amazon S3 bucket to write task-level logs to.</p>
     */
    inline MaintenanceWindowTask& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}

    /**
     * <p>The role that should be assumed when executing the task</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The role that should be assumed when executing the task</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The role that should be assumed when executing the task</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>The role that should be assumed when executing the task</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The role that should be assumed when executing the task</p>
     */
    inline MaintenanceWindowTask& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The role that should be assumed when executing the task</p>
     */
    inline MaintenanceWindowTask& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The role that should be assumed when executing the task</p>
     */
    inline MaintenanceWindowTask& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}

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
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline MaintenanceWindowTask& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline MaintenanceWindowTask& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The maximum number of targets this task can be run for in parallel.</p>
     */
    inline MaintenanceWindowTask& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}

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
    inline MaintenanceWindowTask& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline MaintenanceWindowTask& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>
     */
    inline MaintenanceWindowTask& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}

  private:
    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;
    Aws::String m_windowTaskId;
    bool m_windowTaskIdHasBeenSet;
    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet;
    MaintenanceWindowTaskType m_type;
    bool m_typeHasBeenSet;
    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;
    Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression> m_taskParameters;
    bool m_taskParametersHasBeenSet;
    int m_priority;
    bool m_priorityHasBeenSet;
    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet;
    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;
    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet;
    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
