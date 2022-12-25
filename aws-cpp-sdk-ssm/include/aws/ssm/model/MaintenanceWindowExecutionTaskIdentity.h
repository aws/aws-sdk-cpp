/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/MaintenanceWindowTaskType.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/AlarmStateInformation.h>
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
   * <p>Information about a task execution performed as part of a maintenance window
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowExecutionTaskIdentity">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowExecutionTaskIdentity
  {
  public:
    AWS_SSM_API MaintenanceWindowExecutionTaskIdentity();
    AWS_SSM_API MaintenanceWindowExecutionTaskIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowExecutionTaskIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline MaintenanceWindowExecutionTaskIdentity& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The ID of the maintenance window execution that ran the task.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window execution that ran the task.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}


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
    inline MaintenanceWindowExecutionTaskIdentity& WithTaskExecutionId(const Aws::String& value) { SetTaskExecutionId(value); return *this;}

    /**
     * <p>The ID of the specific task execution in the maintenance window
     * execution.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithTaskExecutionId(Aws::String&& value) { SetTaskExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the specific task execution in the maintenance window
     * execution.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithTaskExecutionId(const char* value) { SetTaskExecutionId(value); return *this;}


    /**
     * <p>The status of the task execution.</p>
     */
    inline const MaintenanceWindowExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task execution.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the task execution.</p>
     */
    inline void SetStatus(const MaintenanceWindowExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the task execution.</p>
     */
    inline void SetStatus(MaintenanceWindowExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the task execution.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithStatus(const MaintenanceWindowExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task execution.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithStatus(MaintenanceWindowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The details explaining the status of the task execution. Not available for
     * all status values.</p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>The details explaining the status of the task execution. Not available for
     * all status values.</p>
     */
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    /**
     * <p>The details explaining the status of the task execution. Not available for
     * all status values.</p>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>The details explaining the status of the task execution. Not available for
     * all status values.</p>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    /**
     * <p>The details explaining the status of the task execution. Not available for
     * all status values.</p>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }

    /**
     * <p>The details explaining the status of the task execution. Not available for
     * all status values.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>The details explaining the status of the task execution. Not available for
     * all status values.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>The details explaining the status of the task execution. Not available for
     * all status values.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}


    /**
     * <p>The time the task execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the task execution started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time the task execution started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the task execution started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time the task execution started.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the task execution started.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the task execution finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time the task execution finished.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time the task execution finished.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time the task execution finished.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time the task execution finished.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time the task execution finished.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the task that ran.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that ran.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that ran.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that ran.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that ran.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that ran.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that ran.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that ran.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The type of task that ran.</p>
     */
    inline const MaintenanceWindowTaskType& GetTaskType() const{ return m_taskType; }

    /**
     * <p>The type of task that ran.</p>
     */
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }

    /**
     * <p>The type of task that ran.</p>
     */
    inline void SetTaskType(const MaintenanceWindowTaskType& value) { m_taskTypeHasBeenSet = true; m_taskType = value; }

    /**
     * <p>The type of task that ran.</p>
     */
    inline void SetTaskType(MaintenanceWindowTaskType&& value) { m_taskTypeHasBeenSet = true; m_taskType = std::move(value); }

    /**
     * <p>The type of task that ran.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithTaskType(const MaintenanceWindowTaskType& value) { SetTaskType(value); return *this;}

    /**
     * <p>The type of task that ran.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithTaskType(MaintenanceWindowTaskType&& value) { SetTaskType(std::move(value)); return *this;}


    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }

    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }

    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }

    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}


    /**
     * <p>The CloudWatch alarm that was invoked by the maintenance window task.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const{ return m_triggeredAlarms; }

    /**
     * <p>The CloudWatch alarm that was invoked by the maintenance window task.</p>
     */
    inline bool TriggeredAlarmsHasBeenSet() const { return m_triggeredAlarmsHasBeenSet; }

    /**
     * <p>The CloudWatch alarm that was invoked by the maintenance window task.</p>
     */
    inline void SetTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = value; }

    /**
     * <p>The CloudWatch alarm that was invoked by the maintenance window task.</p>
     */
    inline void SetTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::move(value); }

    /**
     * <p>The CloudWatch alarm that was invoked by the maintenance window task.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { SetTriggeredAlarms(value); return *this;}

    /**
     * <p>The CloudWatch alarm that was invoked by the maintenance window task.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& WithTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { SetTriggeredAlarms(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch alarm that was invoked by the maintenance window task.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& AddTriggeredAlarms(const AlarmStateInformation& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(value); return *this; }

    /**
     * <p>The CloudWatch alarm that was invoked by the maintenance window task.</p>
     */
    inline MaintenanceWindowExecutionTaskIdentity& AddTriggeredAlarms(AlarmStateInformation&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_windowExecutionId;
    bool m_windowExecutionIdHasBeenSet = false;

    Aws::String m_taskExecutionId;
    bool m_taskExecutionIdHasBeenSet = false;

    MaintenanceWindowExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    MaintenanceWindowTaskType m_taskType;
    bool m_taskTypeHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    Aws::Vector<AlarmStateInformation> m_triggeredAlarms;
    bool m_triggeredAlarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
