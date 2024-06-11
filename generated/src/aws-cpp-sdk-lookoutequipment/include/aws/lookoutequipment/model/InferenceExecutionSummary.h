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


    ///@{
    /**
     * <p>The name of the machine learning model being used for the inference
     * execution. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline InferenceExecutionSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline InferenceExecutionSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline InferenceExecutionSummary& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model used for the
     * inference execution. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline InferenceExecutionSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline InferenceExecutionSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline InferenceExecutionSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inference scheduler being used for the inference execution.
     * </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = value; }
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::move(value); }
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName.assign(value); }
    inline InferenceExecutionSummary& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}
    inline InferenceExecutionSummary& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}
    inline InferenceExecutionSummary& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference execution. </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const{ return m_inferenceSchedulerArn; }
    inline bool InferenceSchedulerArnHasBeenSet() const { return m_inferenceSchedulerArnHasBeenSet; }
    inline void SetInferenceSchedulerArn(const Aws::String& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = value; }
    inline void SetInferenceSchedulerArn(Aws::String&& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = std::move(value); }
    inline void SetInferenceSchedulerArn(const char* value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn.assign(value); }
    inline InferenceExecutionSummary& WithInferenceSchedulerArn(const Aws::String& value) { SetInferenceSchedulerArn(value); return *this;}
    inline InferenceExecutionSummary& WithInferenceSchedulerArn(Aws::String&& value) { SetInferenceSchedulerArn(std::move(value)); return *this;}
    inline InferenceExecutionSummary& WithInferenceSchedulerArn(const char* value) { SetInferenceSchedulerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time at which the inference scheduler began the specific
     * inference execution. </p>
     */
    inline const Aws::Utils::DateTime& GetScheduledStartTime() const{ return m_scheduledStartTime; }
    inline bool ScheduledStartTimeHasBeenSet() const { return m_scheduledStartTimeHasBeenSet; }
    inline void SetScheduledStartTime(const Aws::Utils::DateTime& value) { m_scheduledStartTimeHasBeenSet = true; m_scheduledStartTime = value; }
    inline void SetScheduledStartTime(Aws::Utils::DateTime&& value) { m_scheduledStartTimeHasBeenSet = true; m_scheduledStartTime = std::move(value); }
    inline InferenceExecutionSummary& WithScheduledStartTime(const Aws::Utils::DateTime& value) { SetScheduledStartTime(value); return *this;}
    inline InferenceExecutionSummary& WithScheduledStartTime(Aws::Utils::DateTime&& value) { SetScheduledStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * began. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTime() const{ return m_dataStartTime; }
    inline bool DataStartTimeHasBeenSet() const { return m_dataStartTimeHasBeenSet; }
    inline void SetDataStartTime(const Aws::Utils::DateTime& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = value; }
    inline void SetDataStartTime(Aws::Utils::DateTime&& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = std::move(value); }
    inline InferenceExecutionSummary& WithDataStartTime(const Aws::Utils::DateTime& value) { SetDataStartTime(value); return *this;}
    inline InferenceExecutionSummary& WithDataStartTime(Aws::Utils::DateTime&& value) { SetDataStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * stopped. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTime() const{ return m_dataEndTime; }
    inline bool DataEndTimeHasBeenSet() const { return m_dataEndTimeHasBeenSet; }
    inline void SetDataEndTime(const Aws::Utils::DateTime& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = value; }
    inline void SetDataEndTime(Aws::Utils::DateTime&& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = std::move(value); }
    inline InferenceExecutionSummary& WithDataEndTime(const Aws::Utils::DateTime& value) { SetDataEndTime(value); return *this;}
    inline InferenceExecutionSummary& WithDataEndTime(Aws::Utils::DateTime&& value) { SetDataEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline const InferenceInputConfiguration& GetDataInputConfiguration() const{ return m_dataInputConfiguration; }
    inline bool DataInputConfigurationHasBeenSet() const { return m_dataInputConfigurationHasBeenSet; }
    inline void SetDataInputConfiguration(const InferenceInputConfiguration& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = value; }
    inline void SetDataInputConfiguration(InferenceInputConfiguration&& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = std::move(value); }
    inline InferenceExecutionSummary& WithDataInputConfiguration(const InferenceInputConfiguration& value) { SetDataInputConfiguration(value); return *this;}
    inline InferenceExecutionSummary& WithDataInputConfiguration(InferenceInputConfiguration&& value) { SetDataInputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies configuration information for the output results from for the
     * inference execution, including the output Amazon S3 location. </p>
     */
    inline const InferenceOutputConfiguration& GetDataOutputConfiguration() const{ return m_dataOutputConfiguration; }
    inline bool DataOutputConfigurationHasBeenSet() const { return m_dataOutputConfigurationHasBeenSet; }
    inline void SetDataOutputConfiguration(const InferenceOutputConfiguration& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = value; }
    inline void SetDataOutputConfiguration(InferenceOutputConfiguration&& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = std::move(value); }
    inline InferenceExecutionSummary& WithDataOutputConfiguration(const InferenceOutputConfiguration& value) { SetDataOutputConfiguration(value); return *this;}
    inline InferenceExecutionSummary& WithDataOutputConfiguration(InferenceOutputConfiguration&& value) { SetDataOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 object that the inference execution results were uploaded to.</p>
     */
    inline const S3Object& GetCustomerResultObject() const{ return m_customerResultObject; }
    inline bool CustomerResultObjectHasBeenSet() const { return m_customerResultObjectHasBeenSet; }
    inline void SetCustomerResultObject(const S3Object& value) { m_customerResultObjectHasBeenSet = true; m_customerResultObject = value; }
    inline void SetCustomerResultObject(S3Object&& value) { m_customerResultObjectHasBeenSet = true; m_customerResultObject = std::move(value); }
    inline InferenceExecutionSummary& WithCustomerResultObject(const S3Object& value) { SetCustomerResultObject(value); return *this;}
    inline InferenceExecutionSummary& WithCustomerResultObject(S3Object&& value) { SetCustomerResultObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the inference execution. </p>
     */
    inline const InferenceExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InferenceExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InferenceExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline InferenceExecutionSummary& WithStatus(const InferenceExecutionStatus& value) { SetStatus(value); return *this;}
    inline InferenceExecutionSummary& WithStatus(InferenceExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the reason for failure when an inference execution has failed.
     * </p>
     */
    inline const Aws::String& GetFailedReason() const{ return m_failedReason; }
    inline bool FailedReasonHasBeenSet() const { return m_failedReasonHasBeenSet; }
    inline void SetFailedReason(const Aws::String& value) { m_failedReasonHasBeenSet = true; m_failedReason = value; }
    inline void SetFailedReason(Aws::String&& value) { m_failedReasonHasBeenSet = true; m_failedReason = std::move(value); }
    inline void SetFailedReason(const char* value) { m_failedReasonHasBeenSet = true; m_failedReason.assign(value); }
    inline InferenceExecutionSummary& WithFailedReason(const Aws::String& value) { SetFailedReason(value); return *this;}
    inline InferenceExecutionSummary& WithFailedReason(Aws::String&& value) { SetFailedReason(std::move(value)); return *this;}
    inline InferenceExecutionSummary& WithFailedReason(const char* value) { SetFailedReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version used for the inference execution.</p>
     */
    inline long long GetModelVersion() const{ return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    inline void SetModelVersion(long long value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }
    inline InferenceExecutionSummary& WithModelVersion(long long value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the model version used for the inference
     * execution.</p>
     */
    inline const Aws::String& GetModelVersionArn() const{ return m_modelVersionArn; }
    inline bool ModelVersionArnHasBeenSet() const { return m_modelVersionArnHasBeenSet; }
    inline void SetModelVersionArn(const Aws::String& value) { m_modelVersionArnHasBeenSet = true; m_modelVersionArn = value; }
    inline void SetModelVersionArn(Aws::String&& value) { m_modelVersionArnHasBeenSet = true; m_modelVersionArn = std::move(value); }
    inline void SetModelVersionArn(const char* value) { m_modelVersionArnHasBeenSet = true; m_modelVersionArn.assign(value); }
    inline InferenceExecutionSummary& WithModelVersionArn(const Aws::String& value) { SetModelVersionArn(value); return *this;}
    inline InferenceExecutionSummary& WithModelVersionArn(Aws::String&& value) { SetModelVersionArn(std::move(value)); return *this;}
    inline InferenceExecutionSummary& WithModelVersionArn(const char* value) { SetModelVersionArn(value); return *this;}
    ///@}
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

    long long m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_modelVersionArn;
    bool m_modelVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
