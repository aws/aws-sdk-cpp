/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/InferenceInputConfiguration.h>
#include <aws/lookoutequipment/model/InferenceOutputConfiguration.h>
#include <aws/lookoutequipment/model/S3Object.h>
#include <aws/lookoutequipment/model/InferenceExecutionStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Contains information about the specific inference execution, including input
   * and output data configuration, inference scheduling information, status, and so
   * on. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/InferenceExecutionSummary">AWS
   * API Reference</a></p>
   */
  class InferenceExecutionSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API InferenceExecutionSummary();
    AWS_LOOKOUTEQUIPMENT_API InferenceExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InferenceExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the ML model being used for the inference execution. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the ML model being used for the inference execution. </p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the ML model being used for the inference execution. </p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the ML model being used for the inference execution. </p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the ML model being used for the inference execution. </p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the ML model being used for the inference execution. </p>
     */
    inline InferenceExecutionSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the ML model being used for the inference execution. </p>
     */
    inline InferenceExecutionSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the ML model being used for the inference execution. </p>
     */
    inline InferenceExecutionSummary& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the ML model used for the inference
     * execution. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model used for the inference
     * execution. </p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model used for the inference
     * execution. </p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model used for the inference
     * execution. </p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model used for the inference
     * execution. </p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model used for the inference
     * execution. </p>
     */
    inline InferenceExecutionSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model used for the inference
     * execution. </p>
     */
    inline InferenceExecutionSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model used for the inference
     * execution. </p>
     */
    inline InferenceExecutionSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The name of the inference scheduler being used for the inference execution.
     * </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }

    /**
     * <p>The name of the inference scheduler being used for the inference execution.
     * </p>
     */
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }

    /**
     * <p>The name of the inference scheduler being used for the inference execution.
     * </p>
     */
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = value; }

    /**
     * <p>The name of the inference scheduler being used for the inference execution.
     * </p>
     */
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::move(value); }

    /**
     * <p>The name of the inference scheduler being used for the inference execution.
     * </p>
     */
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName.assign(value); }

    /**
     * <p>The name of the inference scheduler being used for the inference execution.
     * </p>
     */
    inline InferenceExecutionSummary& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}

    /**
     * <p>The name of the inference scheduler being used for the inference execution.
     * </p>
     */
    inline InferenceExecutionSummary& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference scheduler being used for the inference execution.
     * </p>
     */
    inline InferenceExecutionSummary& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference execution. </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const{ return m_inferenceSchedulerArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference execution. </p>
     */
    inline bool InferenceSchedulerArnHasBeenSet() const { return m_inferenceSchedulerArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference execution. </p>
     */
    inline void SetInferenceSchedulerArn(const Aws::String& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference execution. </p>
     */
    inline void SetInferenceSchedulerArn(Aws::String&& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference execution. </p>
     */
    inline void SetInferenceSchedulerArn(const char* value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference execution. </p>
     */
    inline InferenceExecutionSummary& WithInferenceSchedulerArn(const Aws::String& value) { SetInferenceSchedulerArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference execution. </p>
     */
    inline InferenceExecutionSummary& WithInferenceSchedulerArn(Aws::String&& value) { SetInferenceSchedulerArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference execution. </p>
     */
    inline InferenceExecutionSummary& WithInferenceSchedulerArn(const char* value) { SetInferenceSchedulerArn(value); return *this;}


    /**
     * <p>Indicates the start time at which the inference scheduler began the specific
     * inference execution. </p>
     */
    inline const Aws::Utils::DateTime& GetScheduledStartTime() const{ return m_scheduledStartTime; }

    /**
     * <p>Indicates the start time at which the inference scheduler began the specific
     * inference execution. </p>
     */
    inline bool ScheduledStartTimeHasBeenSet() const { return m_scheduledStartTimeHasBeenSet; }

    /**
     * <p>Indicates the start time at which the inference scheduler began the specific
     * inference execution. </p>
     */
    inline void SetScheduledStartTime(const Aws::Utils::DateTime& value) { m_scheduledStartTimeHasBeenSet = true; m_scheduledStartTime = value; }

    /**
     * <p>Indicates the start time at which the inference scheduler began the specific
     * inference execution. </p>
     */
    inline void SetScheduledStartTime(Aws::Utils::DateTime&& value) { m_scheduledStartTimeHasBeenSet = true; m_scheduledStartTime = std::move(value); }

    /**
     * <p>Indicates the start time at which the inference scheduler began the specific
     * inference execution. </p>
     */
    inline InferenceExecutionSummary& WithScheduledStartTime(const Aws::Utils::DateTime& value) { SetScheduledStartTime(value); return *this;}

    /**
     * <p>Indicates the start time at which the inference scheduler began the specific
     * inference execution. </p>
     */
    inline InferenceExecutionSummary& WithScheduledStartTime(Aws::Utils::DateTime&& value) { SetScheduledStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * began. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTime() const{ return m_dataStartTime; }

    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * began. </p>
     */
    inline bool DataStartTimeHasBeenSet() const { return m_dataStartTimeHasBeenSet; }

    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * began. </p>
     */
    inline void SetDataStartTime(const Aws::Utils::DateTime& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = value; }

    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * began. </p>
     */
    inline void SetDataStartTime(Aws::Utils::DateTime&& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = std::move(value); }

    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * began. </p>
     */
    inline InferenceExecutionSummary& WithDataStartTime(const Aws::Utils::DateTime& value) { SetDataStartTime(value); return *this;}

    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * began. </p>
     */
    inline InferenceExecutionSummary& WithDataStartTime(Aws::Utils::DateTime&& value) { SetDataStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * stopped. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTime() const{ return m_dataEndTime; }

    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * stopped. </p>
     */
    inline bool DataEndTimeHasBeenSet() const { return m_dataEndTimeHasBeenSet; }

    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * stopped. </p>
     */
    inline void SetDataEndTime(const Aws::Utils::DateTime& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = value; }

    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * stopped. </p>
     */
    inline void SetDataEndTime(Aws::Utils::DateTime&& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = std::move(value); }

    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * stopped. </p>
     */
    inline InferenceExecutionSummary& WithDataEndTime(const Aws::Utils::DateTime& value) { SetDataEndTime(value); return *this;}

    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * stopped. </p>
     */
    inline InferenceExecutionSummary& WithDataEndTime(Aws::Utils::DateTime&& value) { SetDataEndTime(std::move(value)); return *this;}


    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline const InferenceInputConfiguration& GetDataInputConfiguration() const{ return m_dataInputConfiguration; }

    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline bool DataInputConfigurationHasBeenSet() const { return m_dataInputConfigurationHasBeenSet; }

    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline void SetDataInputConfiguration(const InferenceInputConfiguration& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = value; }

    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline void SetDataInputConfiguration(InferenceInputConfiguration&& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = std::move(value); }

    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline InferenceExecutionSummary& WithDataInputConfiguration(const InferenceInputConfiguration& value) { SetDataInputConfiguration(value); return *this;}

    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline InferenceExecutionSummary& WithDataInputConfiguration(InferenceInputConfiguration&& value) { SetDataInputConfiguration(std::move(value)); return *this;}


    /**
     * <p> Specifies configuration information for the output results from for the
     * inference execution, including the output Amazon S3 location. </p>
     */
    inline const InferenceOutputConfiguration& GetDataOutputConfiguration() const{ return m_dataOutputConfiguration; }

    /**
     * <p> Specifies configuration information for the output results from for the
     * inference execution, including the output Amazon S3 location. </p>
     */
    inline bool DataOutputConfigurationHasBeenSet() const { return m_dataOutputConfigurationHasBeenSet; }

    /**
     * <p> Specifies configuration information for the output results from for the
     * inference execution, including the output Amazon S3 location. </p>
     */
    inline void SetDataOutputConfiguration(const InferenceOutputConfiguration& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = value; }

    /**
     * <p> Specifies configuration information for the output results from for the
     * inference execution, including the output Amazon S3 location. </p>
     */
    inline void SetDataOutputConfiguration(InferenceOutputConfiguration&& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = std::move(value); }

    /**
     * <p> Specifies configuration information for the output results from for the
     * inference execution, including the output Amazon S3 location. </p>
     */
    inline InferenceExecutionSummary& WithDataOutputConfiguration(const InferenceOutputConfiguration& value) { SetDataOutputConfiguration(value); return *this;}

    /**
     * <p> Specifies configuration information for the output results from for the
     * inference execution, including the output Amazon S3 location. </p>
     */
    inline InferenceExecutionSummary& WithDataOutputConfiguration(InferenceOutputConfiguration&& value) { SetDataOutputConfiguration(std::move(value)); return *this;}


    /**
     * <p> </p>
     */
    inline const S3Object& GetCustomerResultObject() const{ return m_customerResultObject; }

    /**
     * <p> </p>
     */
    inline bool CustomerResultObjectHasBeenSet() const { return m_customerResultObjectHasBeenSet; }

    /**
     * <p> </p>
     */
    inline void SetCustomerResultObject(const S3Object& value) { m_customerResultObjectHasBeenSet = true; m_customerResultObject = value; }

    /**
     * <p> </p>
     */
    inline void SetCustomerResultObject(S3Object&& value) { m_customerResultObjectHasBeenSet = true; m_customerResultObject = std::move(value); }

    /**
     * <p> </p>
     */
    inline InferenceExecutionSummary& WithCustomerResultObject(const S3Object& value) { SetCustomerResultObject(value); return *this;}

    /**
     * <p> </p>
     */
    inline InferenceExecutionSummary& WithCustomerResultObject(S3Object&& value) { SetCustomerResultObject(std::move(value)); return *this;}


    /**
     * <p>Indicates the status of the inference execution. </p>
     */
    inline const InferenceExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the inference execution. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates the status of the inference execution. </p>
     */
    inline void SetStatus(const InferenceExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates the status of the inference execution. </p>
     */
    inline void SetStatus(InferenceExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates the status of the inference execution. </p>
     */
    inline InferenceExecutionSummary& WithStatus(const InferenceExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the inference execution. </p>
     */
    inline InferenceExecutionSummary& WithStatus(InferenceExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Specifies the reason for failure when an inference execution has failed.
     * </p>
     */
    inline const Aws::String& GetFailedReason() const{ return m_failedReason; }

    /**
     * <p> Specifies the reason for failure when an inference execution has failed.
     * </p>
     */
    inline bool FailedReasonHasBeenSet() const { return m_failedReasonHasBeenSet; }

    /**
     * <p> Specifies the reason for failure when an inference execution has failed.
     * </p>
     */
    inline void SetFailedReason(const Aws::String& value) { m_failedReasonHasBeenSet = true; m_failedReason = value; }

    /**
     * <p> Specifies the reason for failure when an inference execution has failed.
     * </p>
     */
    inline void SetFailedReason(Aws::String&& value) { m_failedReasonHasBeenSet = true; m_failedReason = std::move(value); }

    /**
     * <p> Specifies the reason for failure when an inference execution has failed.
     * </p>
     */
    inline void SetFailedReason(const char* value) { m_failedReasonHasBeenSet = true; m_failedReason.assign(value); }

    /**
     * <p> Specifies the reason for failure when an inference execution has failed.
     * </p>
     */
    inline InferenceExecutionSummary& WithFailedReason(const Aws::String& value) { SetFailedReason(value); return *this;}

    /**
     * <p> Specifies the reason for failure when an inference execution has failed.
     * </p>
     */
    inline InferenceExecutionSummary& WithFailedReason(Aws::String&& value) { SetFailedReason(std::move(value)); return *this;}

    /**
     * <p> Specifies the reason for failure when an inference execution has failed.
     * </p>
     */
    inline InferenceExecutionSummary& WithFailedReason(const char* value) { SetFailedReason(value); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    Aws::String m_inferenceSchedulerArn;
    bool m_inferenceSchedulerArnHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledStartTime;
    bool m_scheduledStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataStartTime;
    bool m_dataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataEndTime;
    bool m_dataEndTimeHasBeenSet = false;

    InferenceInputConfiguration m_dataInputConfiguration;
    bool m_dataInputConfigurationHasBeenSet = false;

    InferenceOutputConfiguration m_dataOutputConfiguration;
    bool m_dataOutputConfigurationHasBeenSet = false;

    S3Object m_customerResultObject;
    bool m_customerResultObjectHasBeenSet = false;

    InferenceExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failedReason;
    bool m_failedReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
