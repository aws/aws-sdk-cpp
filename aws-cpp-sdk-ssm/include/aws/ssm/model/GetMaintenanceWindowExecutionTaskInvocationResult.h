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
#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_SSM_API GetMaintenanceWindowExecutionTaskInvocationResult
  {
  public:
    GetMaintenanceWindowExecutionTaskInvocationResult();
    GetMaintenanceWindowExecutionTaskInvocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMaintenanceWindowExecutionTaskInvocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The maintenance window execution ID.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }

    /**
     * <p>The maintenance window execution ID.</p>
     */
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionId = value; }

    /**
     * <p>The maintenance window execution ID.</p>
     */
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionId = std::move(value); }

    /**
     * <p>The maintenance window execution ID.</p>
     */
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionId.assign(value); }

    /**
     * <p>The maintenance window execution ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The maintenance window execution ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(std::move(value)); return *this;}

    /**
     * <p>The maintenance window execution ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}


    /**
     * <p>The task execution ID.</p>
     */
    inline const Aws::String& GetTaskExecutionId() const{ return m_taskExecutionId; }

    /**
     * <p>The task execution ID.</p>
     */
    inline void SetTaskExecutionId(const Aws::String& value) { m_taskExecutionId = value; }

    /**
     * <p>The task execution ID.</p>
     */
    inline void SetTaskExecutionId(Aws::String&& value) { m_taskExecutionId = std::move(value); }

    /**
     * <p>The task execution ID.</p>
     */
    inline void SetTaskExecutionId(const char* value) { m_taskExecutionId.assign(value); }

    /**
     * <p>The task execution ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithTaskExecutionId(const Aws::String& value) { SetTaskExecutionId(value); return *this;}

    /**
     * <p>The task execution ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithTaskExecutionId(Aws::String&& value) { SetTaskExecutionId(std::move(value)); return *this;}

    /**
     * <p>The task execution ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithTaskExecutionId(const char* value) { SetTaskExecutionId(value); return *this;}


    /**
     * <p>The invocation ID.</p>
     */
    inline const Aws::String& GetInvocationId() const{ return m_invocationId; }

    /**
     * <p>The invocation ID.</p>
     */
    inline void SetInvocationId(const Aws::String& value) { m_invocationId = value; }

    /**
     * <p>The invocation ID.</p>
     */
    inline void SetInvocationId(Aws::String&& value) { m_invocationId = std::move(value); }

    /**
     * <p>The invocation ID.</p>
     */
    inline void SetInvocationId(const char* value) { m_invocationId.assign(value); }

    /**
     * <p>The invocation ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithInvocationId(const Aws::String& value) { SetInvocationId(value); return *this;}

    /**
     * <p>The invocation ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithInvocationId(Aws::String&& value) { SetInvocationId(std::move(value)); return *this;}

    /**
     * <p>The invocation ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithInvocationId(const char* value) { SetInvocationId(value); return *this;}


    /**
     * <p>The execution ID.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The execution ID.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }

    /**
     * <p>The execution ID.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }

    /**
     * <p>The execution ID.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }

    /**
     * <p>The execution ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The execution ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The execution ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>Retrieves the task type for a maintenance window. Task types include the
     * following: LAMBDA, STEP_FUNCTION, AUTOMATION, RUN_COMMAND.</p>
     */
    inline const MaintenanceWindowTaskType& GetTaskType() const{ return m_taskType; }

    /**
     * <p>Retrieves the task type for a maintenance window. Task types include the
     * following: LAMBDA, STEP_FUNCTION, AUTOMATION, RUN_COMMAND.</p>
     */
    inline void SetTaskType(const MaintenanceWindowTaskType& value) { m_taskType = value; }

    /**
     * <p>Retrieves the task type for a maintenance window. Task types include the
     * following: LAMBDA, STEP_FUNCTION, AUTOMATION, RUN_COMMAND.</p>
     */
    inline void SetTaskType(MaintenanceWindowTaskType&& value) { m_taskType = std::move(value); }

    /**
     * <p>Retrieves the task type for a maintenance window. Task types include the
     * following: LAMBDA, STEP_FUNCTION, AUTOMATION, RUN_COMMAND.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithTaskType(const MaintenanceWindowTaskType& value) { SetTaskType(value); return *this;}

    /**
     * <p>Retrieves the task type for a maintenance window. Task types include the
     * following: LAMBDA, STEP_FUNCTION, AUTOMATION, RUN_COMMAND.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithTaskType(MaintenanceWindowTaskType&& value) { SetTaskType(std::move(value)); return *this;}


    /**
     * <p>The parameters used at the time that the task ran.</p>
     */
    inline const Aws::String& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters used at the time that the task ran.</p>
     */
    inline void SetParameters(const Aws::String& value) { m_parameters = value; }

    /**
     * <p>The parameters used at the time that the task ran.</p>
     */
    inline void SetParameters(Aws::String&& value) { m_parameters = std::move(value); }

    /**
     * <p>The parameters used at the time that the task ran.</p>
     */
    inline void SetParameters(const char* value) { m_parameters.assign(value); }

    /**
     * <p>The parameters used at the time that the task ran.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters used at the time that the task ran.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithParameters(Aws::String&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters used at the time that the task ran.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithParameters(const char* value) { SetParameters(value); return *this;}


    /**
     * <p>The task status for an invocation.</p>
     */
    inline const MaintenanceWindowExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The task status for an invocation.</p>
     */
    inline void SetStatus(const MaintenanceWindowExecutionStatus& value) { m_status = value; }

    /**
     * <p>The task status for an invocation.</p>
     */
    inline void SetStatus(MaintenanceWindowExecutionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The task status for an invocation.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithStatus(const MaintenanceWindowExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The task status for an invocation.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithStatus(MaintenanceWindowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The details explaining the status. Details are only available for certain
     * status values.</p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>The details explaining the status. Details are only available for certain
     * status values.</p>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetails = value; }

    /**
     * <p>The details explaining the status. Details are only available for certain
     * status values.</p>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetails = std::move(value); }

    /**
     * <p>The details explaining the status. Details are only available for certain
     * status values.</p>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetails.assign(value); }

    /**
     * <p>The details explaining the status. Details are only available for certain
     * status values.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>The details explaining the status. Details are only available for certain
     * status values.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>The details explaining the status. Details are only available for certain
     * status values.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}


    /**
     * <p>The time that the task started running on the target.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time that the task started running on the target.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The time that the task started running on the target.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The time that the task started running on the target.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time that the task started running on the target.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time that the task finished running on the target.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that the task finished running on the target.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The time that the task finished running on the target.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The time that the task finished running on the target.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that the task finished running on the target.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>User-provided value to be included in any CloudWatch events raised while
     * running tasks for these targets in this maintenance window. </p>
     */
    inline const Aws::String& GetOwnerInformation() const{ return m_ownerInformation; }

    /**
     * <p>User-provided value to be included in any CloudWatch events raised while
     * running tasks for these targets in this maintenance window. </p>
     */
    inline void SetOwnerInformation(const Aws::String& value) { m_ownerInformation = value; }

    /**
     * <p>User-provided value to be included in any CloudWatch events raised while
     * running tasks for these targets in this maintenance window. </p>
     */
    inline void SetOwnerInformation(Aws::String&& value) { m_ownerInformation = std::move(value); }

    /**
     * <p>User-provided value to be included in any CloudWatch events raised while
     * running tasks for these targets in this maintenance window. </p>
     */
    inline void SetOwnerInformation(const char* value) { m_ownerInformation.assign(value); }

    /**
     * <p>User-provided value to be included in any CloudWatch events raised while
     * running tasks for these targets in this maintenance window. </p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>User-provided value to be included in any CloudWatch events raised while
     * running tasks for these targets in this maintenance window. </p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(std::move(value)); return *this;}

    /**
     * <p>User-provided value to be included in any CloudWatch events raised while
     * running tasks for these targets in this maintenance window. </p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}


    /**
     * <p>The maintenance window target ID.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }

    /**
     * <p>The maintenance window target ID.</p>
     */
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetId = value; }

    /**
     * <p>The maintenance window target ID.</p>
     */
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetId = std::move(value); }

    /**
     * <p>The maintenance window target ID.</p>
     */
    inline void SetWindowTargetId(const char* value) { m_windowTargetId.assign(value); }

    /**
     * <p>The maintenance window target ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}

    /**
     * <p>The maintenance window target ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(std::move(value)); return *this;}

    /**
     * <p>The maintenance window target ID.</p>
     */
    inline GetMaintenanceWindowExecutionTaskInvocationResult& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}

  private:

    Aws::String m_windowExecutionId;

    Aws::String m_taskExecutionId;

    Aws::String m_invocationId;

    Aws::String m_executionId;

    MaintenanceWindowTaskType m_taskType;

    Aws::String m_parameters;

    MaintenanceWindowExecutionStatus m_status;

    Aws::String m_statusDetails;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::String m_ownerInformation;

    Aws::String m_windowTargetId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
