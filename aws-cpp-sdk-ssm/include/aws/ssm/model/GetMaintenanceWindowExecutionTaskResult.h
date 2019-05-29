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
#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/MaintenanceWindowTaskParameterValueExpression.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class AWS_SSM_API GetMaintenanceWindowExecutionTaskResult
  {
  public:
    GetMaintenanceWindowExecutionTaskResult();
    GetMaintenanceWindowExecutionTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMaintenanceWindowExecutionTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the maintenance window execution that includes the task.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }

    /**
     * <p>The ID of the maintenance window execution that includes the task.</p>
     */
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionId = value; }

    /**
     * <p>The ID of the maintenance window execution that includes the task.</p>
     */
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionId = std::move(value); }

    /**
     * <p>The ID of the maintenance window execution that includes the task.</p>
     */
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionId.assign(value); }

    /**
     * <p>The ID of the maintenance window execution that includes the task.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The ID of the maintenance window execution that includes the task.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window execution that includes the task.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}


    /**
     * <p>The ID of the specific task execution in the maintenance window task that was
     * retrieved.</p>
     */
    inline const Aws::String& GetTaskExecutionId() const{ return m_taskExecutionId; }

    /**
     * <p>The ID of the specific task execution in the maintenance window task that was
     * retrieved.</p>
     */
    inline void SetTaskExecutionId(const Aws::String& value) { m_taskExecutionId = value; }

    /**
     * <p>The ID of the specific task execution in the maintenance window task that was
     * retrieved.</p>
     */
    inline void SetTaskExecutionId(Aws::String&& value) { m_taskExecutionId = std::move(value); }

    /**
     * <p>The ID of the specific task execution in the maintenance window task that was
     * retrieved.</p>
     */
    inline void SetTaskExecutionId(const char* value) { m_taskExecutionId.assign(value); }

    /**
     * <p>The ID of the specific task execution in the maintenance window task that was
     * retrieved.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskExecutionId(const Aws::String& value) { SetTaskExecutionId(value); return *this;}

    /**
     * <p>The ID of the specific task execution in the maintenance window task that was
     * retrieved.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskExecutionId(Aws::String&& value) { SetTaskExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the specific task execution in the maintenance window task that was
     * retrieved.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskExecutionId(const char* value) { SetTaskExecutionId(value); return *this;}


    /**
     * <p>The ARN of the task that ran.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The ARN of the task that ran.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }

    /**
     * <p>The ARN of the task that ran.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }

    /**
     * <p>The ARN of the task that ran.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }

    /**
     * <p>The ARN of the task that ran.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task that ran.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task that ran.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The role that was assumed when running the task.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The role that was assumed when running the task.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRole = value; }

    /**
     * <p>The role that was assumed when running the task.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRole = std::move(value); }

    /**
     * <p>The role that was assumed when running the task.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRole.assign(value); }

    /**
     * <p>The role that was assumed when running the task.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The role that was assumed when running the task.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The role that was assumed when running the task.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The type of task that was run.</p>
     */
    inline const MaintenanceWindowTaskType& GetType() const{ return m_type; }

    /**
     * <p>The type of task that was run.</p>
     */
    inline void SetType(const MaintenanceWindowTaskType& value) { m_type = value; }

    /**
     * <p>The type of task that was run.</p>
     */
    inline void SetType(MaintenanceWindowTaskType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of task that was run.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithType(const MaintenanceWindowTaskType& value) { SetType(value); return *this;}

    /**
     * <p>The type of task that was run.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithType(MaintenanceWindowTaskType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The parameters passed to the task when it was run.</p> <note> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The
     * map has the following format:</p> <p>Key: string, between 1 and 255
     * characters</p> <p>Value: an array of strings, each string is between 1 and 255
     * characters</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>& GetTaskParameters() const{ return m_taskParameters; }

    /**
     * <p>The parameters passed to the task when it was run.</p> <note> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The
     * map has the following format:</p> <p>Key: string, between 1 and 255
     * characters</p> <p>Value: an array of strings, each string is between 1 and 255
     * characters</p>
     */
    inline void SetTaskParameters(const Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>& value) { m_taskParameters = value; }

    /**
     * <p>The parameters passed to the task when it was run.</p> <note> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The
     * map has the following format:</p> <p>Key: string, between 1 and 255
     * characters</p> <p>Value: an array of strings, each string is between 1 and 255
     * characters</p>
     */
    inline void SetTaskParameters(Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>&& value) { m_taskParameters = std::move(value); }

    /**
     * <p>The parameters passed to the task when it was run.</p> <note> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The
     * map has the following format:</p> <p>Key: string, between 1 and 255
     * characters</p> <p>Value: an array of strings, each string is between 1 and 255
     * characters</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskParameters(const Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>& value) { SetTaskParameters(value); return *this;}

    /**
     * <p>The parameters passed to the task when it was run.</p> <note> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The
     * map has the following format:</p> <p>Key: string, between 1 and 255
     * characters</p> <p>Value: an array of strings, each string is between 1 and 255
     * characters</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskParameters(Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>&& value) { SetTaskParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters passed to the task when it was run.</p> <note> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The
     * map has the following format:</p> <p>Key: string, between 1 and 255
     * characters</p> <p>Value: an array of strings, each string is between 1 and 255
     * characters</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& AddTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { m_taskParameters.push_back(value); return *this; }

    /**
     * <p>The parameters passed to the task when it was run.</p> <note> <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> </note> <p>The
     * map has the following format:</p> <p>Key: string, between 1 and 255
     * characters</p> <p>Value: an array of strings, each string is between 1 and 255
     * characters</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& AddTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { m_taskParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The priority of the task.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the task.</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p>The priority of the task.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The defined maximum number of task executions that could be run in
     * parallel.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The defined maximum number of task executions that could be run in
     * parallel.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrency = value; }

    /**
     * <p>The defined maximum number of task executions that could be run in
     * parallel.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrency = std::move(value); }

    /**
     * <p>The defined maximum number of task executions that could be run in
     * parallel.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrency.assign(value); }

    /**
     * <p>The defined maximum number of task executions that could be run in
     * parallel.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The defined maximum number of task executions that could be run in
     * parallel.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The defined maximum number of task executions that could be run in
     * parallel.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The defined maximum number of task execution errors allowed before scheduling
     * of the task execution would have been stopped.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The defined maximum number of task execution errors allowed before scheduling
     * of the task execution would have been stopped.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrors = value; }

    /**
     * <p>The defined maximum number of task execution errors allowed before scheduling
     * of the task execution would have been stopped.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrors = std::move(value); }

    /**
     * <p>The defined maximum number of task execution errors allowed before scheduling
     * of the task execution would have been stopped.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrors.assign(value); }

    /**
     * <p>The defined maximum number of task execution errors allowed before scheduling
     * of the task execution would have been stopped.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The defined maximum number of task execution errors allowed before scheduling
     * of the task execution would have been stopped.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The defined maximum number of task execution errors allowed before scheduling
     * of the task execution would have been stopped.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>The status of the task.</p>
     */
    inline const MaintenanceWindowExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task.</p>
     */
    inline void SetStatus(const MaintenanceWindowExecutionStatus& value) { m_status = value; }

    /**
     * <p>The status of the task.</p>
     */
    inline void SetStatus(MaintenanceWindowExecutionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the task.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithStatus(const MaintenanceWindowExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithStatus(MaintenanceWindowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetails = value; }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetails = std::move(value); }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetails.assign(value); }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}


    /**
     * <p>The time the task execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the task execution started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The time the task execution started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The time the task execution started.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the task execution started.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the task execution completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time the task execution completed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The time the task execution completed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The time the task execution completed.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time the task execution completed.</p>
     */
    inline GetMaintenanceWindowExecutionTaskResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_windowExecutionId;

    Aws::String m_taskExecutionId;

    Aws::String m_taskArn;

    Aws::String m_serviceRole;

    MaintenanceWindowTaskType m_type;

    Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>> m_taskParameters;

    int m_priority;

    Aws::String m_maxConcurrency;

    Aws::String m_maxErrors;

    MaintenanceWindowExecutionStatus m_status;

    Aws::String m_statusDetails;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
