/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ExecutionStatus.h>
#include <aws/sagemaker/model/MonitoringType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Summary of information about the last monitoring job to run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringExecutionSummary">AWS
   * API Reference</a></p>
   */
  class MonitoringExecutionSummary
  {
  public:
    AWS_SAGEMAKER_API MonitoringExecutionSummary();
    AWS_SAGEMAKER_API MonitoringExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = value; }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::move(value); }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName.assign(value); }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline MonitoringExecutionSummary& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline MonitoringExecutionSummary& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline MonitoringExecutionSummary& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}


    /**
     * <p>The time the monitoring job was scheduled.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTime() const{ return m_scheduledTime; }

    /**
     * <p>The time the monitoring job was scheduled.</p>
     */
    inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }

    /**
     * <p>The time the monitoring job was scheduled.</p>
     */
    inline void SetScheduledTime(const Aws::Utils::DateTime& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = value; }

    /**
     * <p>The time the monitoring job was scheduled.</p>
     */
    inline void SetScheduledTime(Aws::Utils::DateTime&& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = std::move(value); }

    /**
     * <p>The time the monitoring job was scheduled.</p>
     */
    inline MonitoringExecutionSummary& WithScheduledTime(const Aws::Utils::DateTime& value) { SetScheduledTime(value); return *this;}

    /**
     * <p>The time the monitoring job was scheduled.</p>
     */
    inline MonitoringExecutionSummary& WithScheduledTime(Aws::Utils::DateTime&& value) { SetScheduledTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the monitoring job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the monitoring job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time at which the monitoring job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time at which the monitoring job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time at which the monitoring job was created.</p>
     */
    inline MonitoringExecutionSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the monitoring job was created.</p>
     */
    inline MonitoringExecutionSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates the last time the monitoring job was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that indicates the last time the monitoring job was modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates the last time the monitoring job was modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that indicates the last time the monitoring job was modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates the last time the monitoring job was modified.</p>
     */
    inline MonitoringExecutionSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates the last time the monitoring job was modified.</p>
     */
    inline MonitoringExecutionSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The status of the monitoring job.</p>
     */
    inline const ExecutionStatus& GetMonitoringExecutionStatus() const{ return m_monitoringExecutionStatus; }

    /**
     * <p>The status of the monitoring job.</p>
     */
    inline bool MonitoringExecutionStatusHasBeenSet() const { return m_monitoringExecutionStatusHasBeenSet; }

    /**
     * <p>The status of the monitoring job.</p>
     */
    inline void SetMonitoringExecutionStatus(const ExecutionStatus& value) { m_monitoringExecutionStatusHasBeenSet = true; m_monitoringExecutionStatus = value; }

    /**
     * <p>The status of the monitoring job.</p>
     */
    inline void SetMonitoringExecutionStatus(ExecutionStatus&& value) { m_monitoringExecutionStatusHasBeenSet = true; m_monitoringExecutionStatus = std::move(value); }

    /**
     * <p>The status of the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithMonitoringExecutionStatus(const ExecutionStatus& value) { SetMonitoringExecutionStatus(value); return *this;}

    /**
     * <p>The status of the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithMonitoringExecutionStatus(ExecutionStatus&& value) { SetMonitoringExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring job.</p>
     */
    inline const Aws::String& GetProcessingJobArn() const{ return m_processingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring job.</p>
     */
    inline bool ProcessingJobArnHasBeenSet() const { return m_processingJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring job.</p>
     */
    inline void SetProcessingJobArn(const Aws::String& value) { m_processingJobArnHasBeenSet = true; m_processingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring job.</p>
     */
    inline void SetProcessingJobArn(Aws::String&& value) { m_processingJobArnHasBeenSet = true; m_processingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring job.</p>
     */
    inline void SetProcessingJobArn(const char* value) { m_processingJobArnHasBeenSet = true; m_processingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithProcessingJobArn(const Aws::String& value) { SetProcessingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithProcessingJobArn(Aws::String&& value) { SetProcessingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithProcessingJobArn(const char* value) { SetProcessingJobArn(value); return *this;}


    /**
     * <p>The name of the endpoint used to run the monitoring job.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint used to run the monitoring job.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint used to run the monitoring job.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint used to run the monitoring job.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint used to run the monitoring job.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint used to run the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint used to run the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint used to run the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>Contains the reason a monitoring job failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>Contains the reason a monitoring job failed, if it failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>Contains the reason a monitoring job failed, if it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>Contains the reason a monitoring job failed, if it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>Contains the reason a monitoring job failed, if it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>Contains the reason a monitoring job failed, if it failed.</p>
     */
    inline MonitoringExecutionSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>Contains the reason a monitoring job failed, if it failed.</p>
     */
    inline MonitoringExecutionSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>Contains the reason a monitoring job failed, if it failed.</p>
     */
    inline MonitoringExecutionSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The name of the monitoring job.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionName() const{ return m_monitoringJobDefinitionName; }

    /**
     * <p>The name of the monitoring job.</p>
     */
    inline bool MonitoringJobDefinitionNameHasBeenSet() const { return m_monitoringJobDefinitionNameHasBeenSet; }

    /**
     * <p>The name of the monitoring job.</p>
     */
    inline void SetMonitoringJobDefinitionName(const Aws::String& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = value; }

    /**
     * <p>The name of the monitoring job.</p>
     */
    inline void SetMonitoringJobDefinitionName(Aws::String&& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = std::move(value); }

    /**
     * <p>The name of the monitoring job.</p>
     */
    inline void SetMonitoringJobDefinitionName(const char* value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName.assign(value); }

    /**
     * <p>The name of the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithMonitoringJobDefinitionName(const Aws::String& value) { SetMonitoringJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithMonitoringJobDefinitionName(Aws::String&& value) { SetMonitoringJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithMonitoringJobDefinitionName(const char* value) { SetMonitoringJobDefinitionName(value); return *this;}


    /**
     * <p>The type of the monitoring job.</p>
     */
    inline const MonitoringType& GetMonitoringType() const{ return m_monitoringType; }

    /**
     * <p>The type of the monitoring job.</p>
     */
    inline bool MonitoringTypeHasBeenSet() const { return m_monitoringTypeHasBeenSet; }

    /**
     * <p>The type of the monitoring job.</p>
     */
    inline void SetMonitoringType(const MonitoringType& value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = value; }

    /**
     * <p>The type of the monitoring job.</p>
     */
    inline void SetMonitoringType(MonitoringType&& value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = std::move(value); }

    /**
     * <p>The type of the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithMonitoringType(const MonitoringType& value) { SetMonitoringType(value); return *this;}

    /**
     * <p>The type of the monitoring job.</p>
     */
    inline MonitoringExecutionSummary& WithMonitoringType(MonitoringType&& value) { SetMonitoringType(std::move(value)); return *this;}

  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTime;
    bool m_scheduledTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    ExecutionStatus m_monitoringExecutionStatus;
    bool m_monitoringExecutionStatusHasBeenSet = false;

    Aws::String m_processingJobArn;
    bool m_processingJobArnHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_monitoringJobDefinitionName;
    bool m_monitoringJobDefinitionNameHasBeenSet = false;

    MonitoringType m_monitoringType;
    bool m_monitoringTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
