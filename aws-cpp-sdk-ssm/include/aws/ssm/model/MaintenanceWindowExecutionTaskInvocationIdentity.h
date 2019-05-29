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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes the information about a task invocation for a particular target as
   * part of a task execution performed as part of a maintenance window
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowExecutionTaskInvocationIdentity">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowExecutionTaskInvocationIdentity
  {
  public:
    MaintenanceWindowExecutionTaskInvocationIdentity();
    MaintenanceWindowExecutionTaskInvocationIdentity(Aws::Utils::Json::JsonView jsonValue);
    MaintenanceWindowExecutionTaskInvocationIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the maintenance window execution that ran the task.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }

    /**
     * <p>The ID of the maintenance window execution that ran the task.</p>
     */
    inline bool WindowExecutionIdHasBeenSet() const { return m_windowExecutionIdHasBeenSet; }

    /**
     * <p>The ID of the maintenance window execution that ran the task.</p>
     */
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = value; }

    /**
     * <p>The ID of the maintenance window execution that ran the task.</p>
     */
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = std::move(value); }

    /**
     * <p>The ID of the maintenance window execution that ran the task.</p>
     */
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId.assign(value); }

    /**
     * <p>The ID of the maintenance window execution that ran the task.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The ID of the maintenance window execution that ran the task.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window execution that ran the task.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}


    /**
     * <p>The ID of the specific task execution in the maintenance window
     * execution.</p>
     */
    inline const Aws::String& GetTaskExecutionId() const{ return m_taskExecutionId; }

    /**
     * <p>The ID of the specific task execution in the maintenance window
     * execution.</p>
     */
    inline bool TaskExecutionIdHasBeenSet() const { return m_taskExecutionIdHasBeenSet; }

    /**
     * <p>The ID of the specific task execution in the maintenance window
     * execution.</p>
     */
    inline void SetTaskExecutionId(const Aws::String& value) { m_taskExecutionIdHasBeenSet = true; m_taskExecutionId = value; }

    /**
     * <p>The ID of the specific task execution in the maintenance window
     * execution.</p>
     */
    inline void SetTaskExecutionId(Aws::String&& value) { m_taskExecutionIdHasBeenSet = true; m_taskExecutionId = std::move(value); }

    /**
     * <p>The ID of the specific task execution in the maintenance window
     * execution.</p>
     */
    inline void SetTaskExecutionId(const char* value) { m_taskExecutionIdHasBeenSet = true; m_taskExecutionId.assign(value); }

    /**
     * <p>The ID of the specific task execution in the maintenance window
     * execution.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithTaskExecutionId(const Aws::String& value) { SetTaskExecutionId(value); return *this;}

    /**
     * <p>The ID of the specific task execution in the maintenance window
     * execution.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithTaskExecutionId(Aws::String&& value) { SetTaskExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the specific task execution in the maintenance window
     * execution.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithTaskExecutionId(const char* value) { SetTaskExecutionId(value); return *this;}


    /**
     * <p>The ID of the task invocation.</p>
     */
    inline const Aws::String& GetInvocationId() const{ return m_invocationId; }

    /**
     * <p>The ID of the task invocation.</p>
     */
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }

    /**
     * <p>The ID of the task invocation.</p>
     */
    inline void SetInvocationId(const Aws::String& value) { m_invocationIdHasBeenSet = true; m_invocationId = value; }

    /**
     * <p>The ID of the task invocation.</p>
     */
    inline void SetInvocationId(Aws::String&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::move(value); }

    /**
     * <p>The ID of the task invocation.</p>
     */
    inline void SetInvocationId(const char* value) { m_invocationIdHasBeenSet = true; m_invocationId.assign(value); }

    /**
     * <p>The ID of the task invocation.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithInvocationId(const Aws::String& value) { SetInvocationId(value); return *this;}

    /**
     * <p>The ID of the task invocation.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithInvocationId(Aws::String&& value) { SetInvocationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task invocation.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithInvocationId(const char* value) { SetInvocationId(value); return *this;}


    /**
     * <p>The ID of the action performed in the service that actually handled the task
     * invocation. If the task type is RUN_COMMAND, this value is the command ID.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The ID of the action performed in the service that actually handled the task
     * invocation. If the task type is RUN_COMMAND, this value is the command ID.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>The ID of the action performed in the service that actually handled the task
     * invocation. If the task type is RUN_COMMAND, this value is the command ID.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>The ID of the action performed in the service that actually handled the task
     * invocation. If the task type is RUN_COMMAND, this value is the command ID.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>The ID of the action performed in the service that actually handled the task
     * invocation. If the task type is RUN_COMMAND, this value is the command ID.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>The ID of the action performed in the service that actually handled the task
     * invocation. If the task type is RUN_COMMAND, this value is the command ID.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The ID of the action performed in the service that actually handled the task
     * invocation. If the task type is RUN_COMMAND, this value is the command ID.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the action performed in the service that actually handled the task
     * invocation. If the task type is RUN_COMMAND, this value is the command ID.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>The task type.</p>
     */
    inline const MaintenanceWindowTaskType& GetTaskType() const{ return m_taskType; }

    /**
     * <p>The task type.</p>
     */
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }

    /**
     * <p>The task type.</p>
     */
    inline void SetTaskType(const MaintenanceWindowTaskType& value) { m_taskTypeHasBeenSet = true; m_taskType = value; }

    /**
     * <p>The task type.</p>
     */
    inline void SetTaskType(MaintenanceWindowTaskType&& value) { m_taskTypeHasBeenSet = true; m_taskType = std::move(value); }

    /**
     * <p>The task type.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithTaskType(const MaintenanceWindowTaskType& value) { SetTaskType(value); return *this;}

    /**
     * <p>The task type.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithTaskType(MaintenanceWindowTaskType&& value) { SetTaskType(std::move(value)); return *this;}


    /**
     * <p>The parameters that were provided for the invocation when it was run.</p>
     */
    inline const Aws::String& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters that were provided for the invocation when it was run.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters that were provided for the invocation when it was run.</p>
     */
    inline void SetParameters(const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters that were provided for the invocation when it was run.</p>
     */
    inline void SetParameters(Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters that were provided for the invocation when it was run.</p>
     */
    inline void SetParameters(const char* value) { m_parametersHasBeenSet = true; m_parameters.assign(value); }

    /**
     * <p>The parameters that were provided for the invocation when it was run.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters that were provided for the invocation when it was run.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithParameters(Aws::String&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters that were provided for the invocation when it was run.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithParameters(const char* value) { SetParameters(value); return *this;}


    /**
     * <p>The status of the task invocation.</p>
     */
    inline const MaintenanceWindowExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task invocation.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the task invocation.</p>
     */
    inline void SetStatus(const MaintenanceWindowExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the task invocation.</p>
     */
    inline void SetStatus(MaintenanceWindowExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the task invocation.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithStatus(const MaintenanceWindowExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task invocation.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithStatus(MaintenanceWindowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The details explaining the status of the task invocation. Only available for
     * certain Status values. </p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>The details explaining the status of the task invocation. Only available for
     * certain Status values. </p>
     */
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    /**
     * <p>The details explaining the status of the task invocation. Only available for
     * certain Status values. </p>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>The details explaining the status of the task invocation. Only available for
     * certain Status values. </p>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    /**
     * <p>The details explaining the status of the task invocation. Only available for
     * certain Status values. </p>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }

    /**
     * <p>The details explaining the status of the task invocation. Only available for
     * certain Status values. </p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>The details explaining the status of the task invocation. Only available for
     * certain Status values. </p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>The details explaining the status of the task invocation. Only available for
     * certain Status values. </p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}


    /**
     * <p>The time the invocation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the invocation started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time the invocation started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the invocation started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time the invocation started.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the invocation started.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the invocation finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time the invocation finished.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time the invocation finished.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time the invocation finished.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time the invocation finished.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time the invocation finished.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>User-provided value that was specified when the target was registered with
     * the maintenance window. This was also included in any CloudWatch events raised
     * during the task invocation.</p>
     */
    inline const Aws::String& GetOwnerInformation() const{ return m_ownerInformation; }

    /**
     * <p>User-provided value that was specified when the target was registered with
     * the maintenance window. This was also included in any CloudWatch events raised
     * during the task invocation.</p>
     */
    inline bool OwnerInformationHasBeenSet() const { return m_ownerInformationHasBeenSet; }

    /**
     * <p>User-provided value that was specified when the target was registered with
     * the maintenance window. This was also included in any CloudWatch events raised
     * during the task invocation.</p>
     */
    inline void SetOwnerInformation(const Aws::String& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = value; }

    /**
     * <p>User-provided value that was specified when the target was registered with
     * the maintenance window. This was also included in any CloudWatch events raised
     * during the task invocation.</p>
     */
    inline void SetOwnerInformation(Aws::String&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::move(value); }

    /**
     * <p>User-provided value that was specified when the target was registered with
     * the maintenance window. This was also included in any CloudWatch events raised
     * during the task invocation.</p>
     */
    inline void SetOwnerInformation(const char* value) { m_ownerInformationHasBeenSet = true; m_ownerInformation.assign(value); }

    /**
     * <p>User-provided value that was specified when the target was registered with
     * the maintenance window. This was also included in any CloudWatch events raised
     * during the task invocation.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>User-provided value that was specified when the target was registered with
     * the maintenance window. This was also included in any CloudWatch events raised
     * during the task invocation.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(std::move(value)); return *this;}

    /**
     * <p>User-provided value that was specified when the target was registered with
     * the maintenance window. This was also included in any CloudWatch events raised
     * during the task invocation.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}


    /**
     * <p>The ID of the target definition in this maintenance window the invocation was
     * performed for.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }

    /**
     * <p>The ID of the target definition in this maintenance window the invocation was
     * performed for.</p>
     */
    inline bool WindowTargetIdHasBeenSet() const { return m_windowTargetIdHasBeenSet; }

    /**
     * <p>The ID of the target definition in this maintenance window the invocation was
     * performed for.</p>
     */
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = value; }

    /**
     * <p>The ID of the target definition in this maintenance window the invocation was
     * performed for.</p>
     */
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = std::move(value); }

    /**
     * <p>The ID of the target definition in this maintenance window the invocation was
     * performed for.</p>
     */
    inline void SetWindowTargetId(const char* value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId.assign(value); }

    /**
     * <p>The ID of the target definition in this maintenance window the invocation was
     * performed for.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}

    /**
     * <p>The ID of the target definition in this maintenance window the invocation was
     * performed for.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target definition in this maintenance window the invocation was
     * performed for.</p>
     */
    inline MaintenanceWindowExecutionTaskInvocationIdentity& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}

  private:

    Aws::String m_windowExecutionId;
    bool m_windowExecutionIdHasBeenSet;

    Aws::String m_taskExecutionId;
    bool m_taskExecutionIdHasBeenSet;

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet;

    MaintenanceWindowTaskType m_taskType;
    bool m_taskTypeHasBeenSet;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet;

    MaintenanceWindowExecutionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_ownerInformation;
    bool m_ownerInformationHasBeenSet;

    Aws::String m_windowTargetId;
    bool m_windowTargetIdHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
