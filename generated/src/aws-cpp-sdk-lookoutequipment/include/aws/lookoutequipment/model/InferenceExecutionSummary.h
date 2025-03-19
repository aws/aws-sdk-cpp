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
    AWS_LOOKOUTEQUIPMENT_API InferenceExecutionSummary() = default;
    AWS_LOOKOUTEQUIPMENT_API InferenceExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InferenceExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the machine learning model being used for the inference
     * execution. </p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    InferenceExecutionSummary& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model used for the
     * inference execution. </p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    InferenceExecutionSummary& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inference scheduler being used for the inference execution.
     * </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const { return m_inferenceSchedulerName; }
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }
    template<typename InferenceSchedulerNameT = Aws::String>
    void SetInferenceSchedulerName(InferenceSchedulerNameT&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::forward<InferenceSchedulerNameT>(value); }
    template<typename InferenceSchedulerNameT = Aws::String>
    InferenceExecutionSummary& WithInferenceSchedulerName(InferenceSchedulerNameT&& value) { SetInferenceSchedulerName(std::forward<InferenceSchedulerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference execution. </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const { return m_inferenceSchedulerArn; }
    inline bool InferenceSchedulerArnHasBeenSet() const { return m_inferenceSchedulerArnHasBeenSet; }
    template<typename InferenceSchedulerArnT = Aws::String>
    void SetInferenceSchedulerArn(InferenceSchedulerArnT&& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = std::forward<InferenceSchedulerArnT>(value); }
    template<typename InferenceSchedulerArnT = Aws::String>
    InferenceExecutionSummary& WithInferenceSchedulerArn(InferenceSchedulerArnT&& value) { SetInferenceSchedulerArn(std::forward<InferenceSchedulerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time at which the inference scheduler began the specific
     * inference execution. </p>
     */
    inline const Aws::Utils::DateTime& GetScheduledStartTime() const { return m_scheduledStartTime; }
    inline bool ScheduledStartTimeHasBeenSet() const { return m_scheduledStartTimeHasBeenSet; }
    template<typename ScheduledStartTimeT = Aws::Utils::DateTime>
    void SetScheduledStartTime(ScheduledStartTimeT&& value) { m_scheduledStartTimeHasBeenSet = true; m_scheduledStartTime = std::forward<ScheduledStartTimeT>(value); }
    template<typename ScheduledStartTimeT = Aws::Utils::DateTime>
    InferenceExecutionSummary& WithScheduledStartTime(ScheduledStartTimeT&& value) { SetScheduledStartTime(std::forward<ScheduledStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * began. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTime() const { return m_dataStartTime; }
    inline bool DataStartTimeHasBeenSet() const { return m_dataStartTimeHasBeenSet; }
    template<typename DataStartTimeT = Aws::Utils::DateTime>
    void SetDataStartTime(DataStartTimeT&& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = std::forward<DataStartTimeT>(value); }
    template<typename DataStartTimeT = Aws::Utils::DateTime>
    InferenceExecutionSummary& WithDataStartTime(DataStartTimeT&& value) { SetDataStartTime(std::forward<DataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time reference in the dataset at which the inference execution
     * stopped. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTime() const { return m_dataEndTime; }
    inline bool DataEndTimeHasBeenSet() const { return m_dataEndTimeHasBeenSet; }
    template<typename DataEndTimeT = Aws::Utils::DateTime>
    void SetDataEndTime(DataEndTimeT&& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = std::forward<DataEndTimeT>(value); }
    template<typename DataEndTimeT = Aws::Utils::DateTime>
    InferenceExecutionSummary& WithDataEndTime(DataEndTimeT&& value) { SetDataEndTime(std::forward<DataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline const InferenceInputConfiguration& GetDataInputConfiguration() const { return m_dataInputConfiguration; }
    inline bool DataInputConfigurationHasBeenSet() const { return m_dataInputConfigurationHasBeenSet; }
    template<typename DataInputConfigurationT = InferenceInputConfiguration>
    void SetDataInputConfiguration(DataInputConfigurationT&& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = std::forward<DataInputConfigurationT>(value); }
    template<typename DataInputConfigurationT = InferenceInputConfiguration>
    InferenceExecutionSummary& WithDataInputConfiguration(DataInputConfigurationT&& value) { SetDataInputConfiguration(std::forward<DataInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies configuration information for the output results from for the
     * inference execution, including the output Amazon S3 location. </p>
     */
    inline const InferenceOutputConfiguration& GetDataOutputConfiguration() const { return m_dataOutputConfiguration; }
    inline bool DataOutputConfigurationHasBeenSet() const { return m_dataOutputConfigurationHasBeenSet; }
    template<typename DataOutputConfigurationT = InferenceOutputConfiguration>
    void SetDataOutputConfiguration(DataOutputConfigurationT&& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = std::forward<DataOutputConfigurationT>(value); }
    template<typename DataOutputConfigurationT = InferenceOutputConfiguration>
    InferenceExecutionSummary& WithDataOutputConfiguration(DataOutputConfigurationT&& value) { SetDataOutputConfiguration(std::forward<DataOutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 object that the inference execution results were uploaded to.</p>
     */
    inline const S3Object& GetCustomerResultObject() const { return m_customerResultObject; }
    inline bool CustomerResultObjectHasBeenSet() const { return m_customerResultObjectHasBeenSet; }
    template<typename CustomerResultObjectT = S3Object>
    void SetCustomerResultObject(CustomerResultObjectT&& value) { m_customerResultObjectHasBeenSet = true; m_customerResultObject = std::forward<CustomerResultObjectT>(value); }
    template<typename CustomerResultObjectT = S3Object>
    InferenceExecutionSummary& WithCustomerResultObject(CustomerResultObjectT&& value) { SetCustomerResultObject(std::forward<CustomerResultObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the inference execution. </p>
     */
    inline InferenceExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InferenceExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline InferenceExecutionSummary& WithStatus(InferenceExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the reason for failure when an inference execution has failed.
     * </p>
     */
    inline const Aws::String& GetFailedReason() const { return m_failedReason; }
    inline bool FailedReasonHasBeenSet() const { return m_failedReasonHasBeenSet; }
    template<typename FailedReasonT = Aws::String>
    void SetFailedReason(FailedReasonT&& value) { m_failedReasonHasBeenSet = true; m_failedReason = std::forward<FailedReasonT>(value); }
    template<typename FailedReasonT = Aws::String>
    InferenceExecutionSummary& WithFailedReason(FailedReasonT&& value) { SetFailedReason(std::forward<FailedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version used for the inference execution.</p>
     */
    inline long long GetModelVersion() const { return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    inline void SetModelVersion(long long value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }
    inline InferenceExecutionSummary& WithModelVersion(long long value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the model version used for the inference
     * execution.</p>
     */
    inline const Aws::String& GetModelVersionArn() const { return m_modelVersionArn; }
    inline bool ModelVersionArnHasBeenSet() const { return m_modelVersionArnHasBeenSet; }
    template<typename ModelVersionArnT = Aws::String>
    void SetModelVersionArn(ModelVersionArnT&& value) { m_modelVersionArnHasBeenSet = true; m_modelVersionArn = std::forward<ModelVersionArnT>(value); }
    template<typename ModelVersionArnT = Aws::String>
    InferenceExecutionSummary& WithModelVersionArn(ModelVersionArnT&& value) { SetModelVersionArn(std::forward<ModelVersionArnT>(value)); return *this;}
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

    Aws::Utils::DateTime m_scheduledStartTime{};
    bool m_scheduledStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataStartTime{};
    bool m_dataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataEndTime{};
    bool m_dataEndTimeHasBeenSet = false;

    InferenceInputConfiguration m_dataInputConfiguration;
    bool m_dataInputConfigurationHasBeenSet = false;

    InferenceOutputConfiguration m_dataOutputConfiguration;
    bool m_dataOutputConfigurationHasBeenSet = false;

    S3Object m_customerResultObject;
    bool m_customerResultObjectHasBeenSet = false;

    InferenceExecutionStatus m_status{InferenceExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failedReason;
    bool m_failedReasonHasBeenSet = false;

    long long m_modelVersion{0};
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_modelVersionArn;
    bool m_modelVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
