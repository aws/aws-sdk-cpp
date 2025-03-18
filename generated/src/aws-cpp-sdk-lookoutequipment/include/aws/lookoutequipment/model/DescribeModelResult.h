/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/LabelsInputConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/DataPreProcessingConfiguration.h>
#include <aws/lookoutequipment/model/ModelStatus.h>
#include <aws/lookoutequipment/model/ModelVersionStatus.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerStatus.h>
#include <aws/lookoutequipment/model/ModelDiagnosticsOutputConfiguration.h>
#include <aws/lookoutequipment/model/ModelQuality.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class DescribeModelResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeModelResult() = default;
    AWS_LOOKOUTEQUIPMENT_API DescribeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the machine learning model being described. </p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    DescribeModelResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model being described.
     * </p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    DescribeModelResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset being used by the machine learning being described.
     * </p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DescribeModelResult& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resouce Name (ARN) of the dataset used to create the machine
     * learning model being described. </p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DescribeModelResult& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    DescribeModelResult& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration information about the labels input, including its S3
     * location. </p>
     */
    inline const LabelsInputConfiguration& GetLabelsInputConfiguration() const { return m_labelsInputConfiguration; }
    template<typename LabelsInputConfigurationT = LabelsInputConfiguration>
    void SetLabelsInputConfiguration(LabelsInputConfigurationT&& value) { m_labelsInputConfigurationHasBeenSet = true; m_labelsInputConfiguration = std::forward<LabelsInputConfigurationT>(value); }
    template<typename LabelsInputConfigurationT = LabelsInputConfiguration>
    DescribeModelResult& WithLabelsInputConfiguration(LabelsInputConfigurationT&& value) { SetLabelsInputConfiguration(std::forward<LabelsInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of training data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataStartTime() const { return m_trainingDataStartTime; }
    template<typename TrainingDataStartTimeT = Aws::Utils::DateTime>
    void SetTrainingDataStartTime(TrainingDataStartTimeT&& value) { m_trainingDataStartTimeHasBeenSet = true; m_trainingDataStartTime = std::forward<TrainingDataStartTimeT>(value); }
    template<typename TrainingDataStartTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithTrainingDataStartTime(TrainingDataStartTimeT&& value) { SetTrainingDataStartTime(std::forward<TrainingDataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of training data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataEndTime() const { return m_trainingDataEndTime; }
    template<typename TrainingDataEndTimeT = Aws::Utils::DateTime>
    void SetTrainingDataEndTime(TrainingDataEndTimeT&& value) { m_trainingDataEndTimeHasBeenSet = true; m_trainingDataEndTime = std::forward<TrainingDataEndTimeT>(value); }
    template<typename TrainingDataEndTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithTrainingDataEndTime(TrainingDataEndTimeT&& value) { SetTrainingDataEndTime(std::forward<TrainingDataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of evaluation data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataStartTime() const { return m_evaluationDataStartTime; }
    template<typename EvaluationDataStartTimeT = Aws::Utils::DateTime>
    void SetEvaluationDataStartTime(EvaluationDataStartTimeT&& value) { m_evaluationDataStartTimeHasBeenSet = true; m_evaluationDataStartTime = std::forward<EvaluationDataStartTimeT>(value); }
    template<typename EvaluationDataStartTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithEvaluationDataStartTime(EvaluationDataStartTimeT&& value) { SetEvaluationDataStartTime(std::forward<EvaluationDataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of evaluation data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataEndTime() const { return m_evaluationDataEndTime; }
    template<typename EvaluationDataEndTimeT = Aws::Utils::DateTime>
    void SetEvaluationDataEndTime(EvaluationDataEndTimeT&& value) { m_evaluationDataEndTimeHasBeenSet = true; m_evaluationDataEndTime = std::forward<EvaluationDataEndTimeT>(value); }
    template<typename EvaluationDataEndTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithEvaluationDataEndTime(EvaluationDataEndTimeT&& value) { SetEvaluationDataEndTime(std::forward<EvaluationDataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the machine learning model being described. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeModelResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration is the <code>TargetSamplingRate</code>, which is the
     * sampling rate of the data after post processing by Amazon Lookout for Equipment.
     * For example, if you provide data that has been collected at a 1 second level and
     * you want the system to resample the data at a 1 minute rate before training, the
     * <code>TargetSamplingRate</code> is 1 minute.</p> <p>When providing a value for
     * the <code>TargetSamplingRate</code>, you must attach the prefix "PT" to the rate
     * you want. The value for a 1 second rate is therefore <i>PT1S</i>, the value for
     * a 15 minute rate is <i>PT15M</i>, and the value for a 1 hour rate is <i>PT1H</i>
     * </p>
     */
    inline const DataPreProcessingConfiguration& GetDataPreProcessingConfiguration() const { return m_dataPreProcessingConfiguration; }
    template<typename DataPreProcessingConfigurationT = DataPreProcessingConfiguration>
    void SetDataPreProcessingConfiguration(DataPreProcessingConfigurationT&& value) { m_dataPreProcessingConfigurationHasBeenSet = true; m_dataPreProcessingConfiguration = std::forward<DataPreProcessingConfigurationT>(value); }
    template<typename DataPreProcessingConfigurationT = DataPreProcessingConfiguration>
    DescribeModelResult& WithDataPreProcessingConfiguration(DataPreProcessingConfigurationT&& value) { SetDataPreProcessingConfiguration(std::forward<DataPreProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current status of the model being described. Status describes
     * the status of the most recent action of the model. </p>
     */
    inline ModelStatus GetStatus() const { return m_status; }
    inline void SetStatus(ModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeModelResult& WithStatus(ModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time at which the training of the machine learning model began.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingExecutionStartTime() const { return m_trainingExecutionStartTime; }
    template<typename TrainingExecutionStartTimeT = Aws::Utils::DateTime>
    void SetTrainingExecutionStartTime(TrainingExecutionStartTimeT&& value) { m_trainingExecutionStartTimeHasBeenSet = true; m_trainingExecutionStartTime = std::forward<TrainingExecutionStartTimeT>(value); }
    template<typename TrainingExecutionStartTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithTrainingExecutionStartTime(TrainingExecutionStartTimeT&& value) { SetTrainingExecutionStartTime(std::forward<TrainingExecutionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time at which the training of the machine learning model was
     * completed. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingExecutionEndTime() const { return m_trainingExecutionEndTime; }
    template<typename TrainingExecutionEndTimeT = Aws::Utils::DateTime>
    void SetTrainingExecutionEndTime(TrainingExecutionEndTimeT&& value) { m_trainingExecutionEndTimeHasBeenSet = true; m_trainingExecutionEndTime = std::forward<TrainingExecutionEndTimeT>(value); }
    template<typename TrainingExecutionEndTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithTrainingExecutionEndTime(TrainingExecutionEndTimeT&& value) { SetTrainingExecutionEndTime(std::forward<TrainingExecutionEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the training of the machine learning model failed, this indicates the
     * reason for that failure. </p>
     */
    inline const Aws::String& GetFailedReason() const { return m_failedReason; }
    template<typename FailedReasonT = Aws::String>
    void SetFailedReason(FailedReasonT&& value) { m_failedReasonHasBeenSet = true; m_failedReason = std::forward<FailedReasonT>(value); }
    template<typename FailedReasonT = Aws::String>
    DescribeModelResult& WithFailedReason(FailedReasonT&& value) { SetFailedReason(std::forward<FailedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Model Metrics show an aggregated summary of the model's performance
     * within the evaluation time range. This is the JSON content of the metrics
     * created when evaluating the model. </p>
     */
    inline const Aws::String& GetModelMetrics() const { return m_modelMetrics; }
    template<typename ModelMetricsT = Aws::String>
    void SetModelMetrics(ModelMetricsT&& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = std::forward<ModelMetricsT>(value); }
    template<typename ModelMetricsT = Aws::String>
    DescribeModelResult& WithModelMetrics(ModelMetricsT&& value) { SetModelMetrics(std::forward<ModelMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the last time the machine learning model was updated. The type of
     * update is not specified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time and date at which the machine learning model was created.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeModelResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const { return m_serverSideKmsKeyId; }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    void SetServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = std::forward<ServerSideKmsKeyIdT>(value); }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    DescribeModelResult& WithServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { SetServerSideKmsKeyId(std::forward<ServerSideKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline const Aws::String& GetOffCondition() const { return m_offCondition; }
    template<typename OffConditionT = Aws::String>
    void SetOffCondition(OffConditionT&& value) { m_offConditionHasBeenSet = true; m_offCondition = std::forward<OffConditionT>(value); }
    template<typename OffConditionT = Aws::String>
    DescribeModelResult& WithOffCondition(OffConditionT&& value) { SetOffCondition(std::forward<OffConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source model version. This field
     * appears if the active model version was imported.</p>
     */
    inline const Aws::String& GetSourceModelVersionArn() const { return m_sourceModelVersionArn; }
    template<typename SourceModelVersionArnT = Aws::String>
    void SetSourceModelVersionArn(SourceModelVersionArnT&& value) { m_sourceModelVersionArnHasBeenSet = true; m_sourceModelVersionArn = std::forward<SourceModelVersionArnT>(value); }
    template<typename SourceModelVersionArnT = Aws::String>
    DescribeModelResult& WithSourceModelVersionArn(SourceModelVersionArnT&& value) { SetSourceModelVersionArn(std::forward<SourceModelVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the import job was started. This field appears if the
     * active model version was imported.</p>
     */
    inline const Aws::Utils::DateTime& GetImportJobStartTime() const { return m_importJobStartTime; }
    template<typename ImportJobStartTimeT = Aws::Utils::DateTime>
    void SetImportJobStartTime(ImportJobStartTimeT&& value) { m_importJobStartTimeHasBeenSet = true; m_importJobStartTime = std::forward<ImportJobStartTimeT>(value); }
    template<typename ImportJobStartTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithImportJobStartTime(ImportJobStartTimeT&& value) { SetImportJobStartTime(std::forward<ImportJobStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the import job was completed. This field appears if
     * the active model version was imported.</p>
     */
    inline const Aws::Utils::DateTime& GetImportJobEndTime() const { return m_importJobEndTime; }
    template<typename ImportJobEndTimeT = Aws::Utils::DateTime>
    void SetImportJobEndTime(ImportJobEndTimeT&& value) { m_importJobEndTimeHasBeenSet = true; m_importJobEndTime = std::forward<ImportJobEndTimeT>(value); }
    template<typename ImportJobEndTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithImportJobEndTime(ImportJobEndTimeT&& value) { SetImportJobEndTime(std::forward<ImportJobEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model version used by the inference schedular when running a
     * scheduled inference execution.</p>
     */
    inline long long GetActiveModelVersion() const { return m_activeModelVersion; }
    inline void SetActiveModelVersion(long long value) { m_activeModelVersionHasBeenSet = true; m_activeModelVersion = value; }
    inline DescribeModelResult& WithActiveModelVersion(long long value) { SetActiveModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model version used by the inference
     * scheduler when running a scheduled inference execution.</p>
     */
    inline const Aws::String& GetActiveModelVersionArn() const { return m_activeModelVersionArn; }
    template<typename ActiveModelVersionArnT = Aws::String>
    void SetActiveModelVersionArn(ActiveModelVersionArnT&& value) { m_activeModelVersionArnHasBeenSet = true; m_activeModelVersionArn = std::forward<ActiveModelVersionArnT>(value); }
    template<typename ActiveModelVersionArnT = Aws::String>
    DescribeModelResult& WithActiveModelVersionArn(ActiveModelVersionArnT&& value) { SetActiveModelVersionArn(std::forward<ActiveModelVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the active model version was activated.</p>
     */
    inline const Aws::Utils::DateTime& GetModelVersionActivatedAt() const { return m_modelVersionActivatedAt; }
    template<typename ModelVersionActivatedAtT = Aws::Utils::DateTime>
    void SetModelVersionActivatedAt(ModelVersionActivatedAtT&& value) { m_modelVersionActivatedAtHasBeenSet = true; m_modelVersionActivatedAt = std::forward<ModelVersionActivatedAtT>(value); }
    template<typename ModelVersionActivatedAtT = Aws::Utils::DateTime>
    DescribeModelResult& WithModelVersionActivatedAt(ModelVersionActivatedAtT&& value) { SetModelVersionActivatedAt(std::forward<ModelVersionActivatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version that was set as the active model version prior to the
     * current active model version.</p>
     */
    inline long long GetPreviousActiveModelVersion() const { return m_previousActiveModelVersion; }
    inline void SetPreviousActiveModelVersion(long long value) { m_previousActiveModelVersionHasBeenSet = true; m_previousActiveModelVersion = value; }
    inline DescribeModelResult& WithPreviousActiveModelVersion(long long value) { SetPreviousActiveModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model version that was set as the active model version prior
     * to the current active model version.</p>
     */
    inline const Aws::String& GetPreviousActiveModelVersionArn() const { return m_previousActiveModelVersionArn; }
    template<typename PreviousActiveModelVersionArnT = Aws::String>
    void SetPreviousActiveModelVersionArn(PreviousActiveModelVersionArnT&& value) { m_previousActiveModelVersionArnHasBeenSet = true; m_previousActiveModelVersionArn = std::forward<PreviousActiveModelVersionArnT>(value); }
    template<typename PreviousActiveModelVersionArnT = Aws::String>
    DescribeModelResult& WithPreviousActiveModelVersionArn(PreviousActiveModelVersionArnT&& value) { SetPreviousActiveModelVersionArn(std::forward<PreviousActiveModelVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the previous active model version was activated.</p>
     */
    inline const Aws::Utils::DateTime& GetPreviousModelVersionActivatedAt() const { return m_previousModelVersionActivatedAt; }
    template<typename PreviousModelVersionActivatedAtT = Aws::Utils::DateTime>
    void SetPreviousModelVersionActivatedAt(PreviousModelVersionActivatedAtT&& value) { m_previousModelVersionActivatedAtHasBeenSet = true; m_previousModelVersionActivatedAt = std::forward<PreviousModelVersionActivatedAtT>(value); }
    template<typename PreviousModelVersionActivatedAtT = Aws::Utils::DateTime>
    DescribeModelResult& WithPreviousModelVersionActivatedAt(PreviousModelVersionActivatedAtT&& value) { SetPreviousModelVersionActivatedAt(std::forward<PreviousModelVersionActivatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the model version was retrained, this field shows a summary of the
     * performance of the prior model on the new training range. You can use the
     * information in this JSON-formatted object to compare the new model version and
     * the prior model version.</p>
     */
    inline const Aws::String& GetPriorModelMetrics() const { return m_priorModelMetrics; }
    template<typename PriorModelMetricsT = Aws::String>
    void SetPriorModelMetrics(PriorModelMetricsT&& value) { m_priorModelMetricsHasBeenSet = true; m_priorModelMetrics = std::forward<PriorModelMetricsT>(value); }
    template<typename PriorModelMetricsT = Aws::String>
    DescribeModelResult& WithPriorModelMetrics(PriorModelMetricsT&& value) { SetPriorModelMetrics(std::forward<PriorModelMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the model version was generated by retraining and the training failed,
     * this indicates the reason for that failure. </p>
     */
    inline const Aws::String& GetLatestScheduledRetrainingFailedReason() const { return m_latestScheduledRetrainingFailedReason; }
    template<typename LatestScheduledRetrainingFailedReasonT = Aws::String>
    void SetLatestScheduledRetrainingFailedReason(LatestScheduledRetrainingFailedReasonT&& value) { m_latestScheduledRetrainingFailedReasonHasBeenSet = true; m_latestScheduledRetrainingFailedReason = std::forward<LatestScheduledRetrainingFailedReasonT>(value); }
    template<typename LatestScheduledRetrainingFailedReasonT = Aws::String>
    DescribeModelResult& WithLatestScheduledRetrainingFailedReason(LatestScheduledRetrainingFailedReasonT&& value) { SetLatestScheduledRetrainingFailedReason(std::forward<LatestScheduledRetrainingFailedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline ModelVersionStatus GetLatestScheduledRetrainingStatus() const { return m_latestScheduledRetrainingStatus; }
    inline void SetLatestScheduledRetrainingStatus(ModelVersionStatus value) { m_latestScheduledRetrainingStatusHasBeenSet = true; m_latestScheduledRetrainingStatus = value; }
    inline DescribeModelResult& WithLatestScheduledRetrainingStatus(ModelVersionStatus value) { SetLatestScheduledRetrainingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the most recent model version that was generated by retraining.
     * </p>
     */
    inline long long GetLatestScheduledRetrainingModelVersion() const { return m_latestScheduledRetrainingModelVersion; }
    inline void SetLatestScheduledRetrainingModelVersion(long long value) { m_latestScheduledRetrainingModelVersionHasBeenSet = true; m_latestScheduledRetrainingModelVersion = value; }
    inline DescribeModelResult& WithLatestScheduledRetrainingModelVersion(long long value) { SetLatestScheduledRetrainingModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline const Aws::Utils::DateTime& GetLatestScheduledRetrainingStartTime() const { return m_latestScheduledRetrainingStartTime; }
    template<typename LatestScheduledRetrainingStartTimeT = Aws::Utils::DateTime>
    void SetLatestScheduledRetrainingStartTime(LatestScheduledRetrainingStartTimeT&& value) { m_latestScheduledRetrainingStartTimeHasBeenSet = true; m_latestScheduledRetrainingStartTime = std::forward<LatestScheduledRetrainingStartTimeT>(value); }
    template<typename LatestScheduledRetrainingStartTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithLatestScheduledRetrainingStartTime(LatestScheduledRetrainingStartTimeT&& value) { SetLatestScheduledRetrainingStartTime(std::forward<LatestScheduledRetrainingStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the number of days of data used in the most recent scheduled
     * retraining run. </p>
     */
    inline int GetLatestScheduledRetrainingAvailableDataInDays() const { return m_latestScheduledRetrainingAvailableDataInDays; }
    inline void SetLatestScheduledRetrainingAvailableDataInDays(int value) { m_latestScheduledRetrainingAvailableDataInDaysHasBeenSet = true; m_latestScheduledRetrainingAvailableDataInDays = value; }
    inline DescribeModelResult& WithLatestScheduledRetrainingAvailableDataInDays(int value) { SetLatestScheduledRetrainingAvailableDataInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the date and time that the next scheduled retraining run will start
     * on. Lookout for Equipment truncates the time you provide to the nearest UTC
     * day.</p>
     */
    inline const Aws::Utils::DateTime& GetNextScheduledRetrainingStartDate() const { return m_nextScheduledRetrainingStartDate; }
    template<typename NextScheduledRetrainingStartDateT = Aws::Utils::DateTime>
    void SetNextScheduledRetrainingStartDate(NextScheduledRetrainingStartDateT&& value) { m_nextScheduledRetrainingStartDateHasBeenSet = true; m_nextScheduledRetrainingStartDate = std::forward<NextScheduledRetrainingStartDateT>(value); }
    template<typename NextScheduledRetrainingStartDateT = Aws::Utils::DateTime>
    DescribeModelResult& WithNextScheduledRetrainingStartDate(NextScheduledRetrainingStartDateT&& value) { SetNextScheduledRetrainingStartDate(std::forward<NextScheduledRetrainingStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time of the inference data that has been accumulated.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetAccumulatedInferenceDataStartTime() const { return m_accumulatedInferenceDataStartTime; }
    template<typename AccumulatedInferenceDataStartTimeT = Aws::Utils::DateTime>
    void SetAccumulatedInferenceDataStartTime(AccumulatedInferenceDataStartTimeT&& value) { m_accumulatedInferenceDataStartTimeHasBeenSet = true; m_accumulatedInferenceDataStartTime = std::forward<AccumulatedInferenceDataStartTimeT>(value); }
    template<typename AccumulatedInferenceDataStartTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithAccumulatedInferenceDataStartTime(AccumulatedInferenceDataStartTimeT&& value) { SetAccumulatedInferenceDataStartTime(std::forward<AccumulatedInferenceDataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the end time of the inference data that has been accumulated. </p>
     */
    inline const Aws::Utils::DateTime& GetAccumulatedInferenceDataEndTime() const { return m_accumulatedInferenceDataEndTime; }
    template<typename AccumulatedInferenceDataEndTimeT = Aws::Utils::DateTime>
    void SetAccumulatedInferenceDataEndTime(AccumulatedInferenceDataEndTimeT&& value) { m_accumulatedInferenceDataEndTimeHasBeenSet = true; m_accumulatedInferenceDataEndTime = std::forward<AccumulatedInferenceDataEndTimeT>(value); }
    template<typename AccumulatedInferenceDataEndTimeT = Aws::Utils::DateTime>
    DescribeModelResult& WithAccumulatedInferenceDataEndTime(AccumulatedInferenceDataEndTimeT&& value) { SetAccumulatedInferenceDataEndTime(std::forward<AccumulatedInferenceDataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline RetrainingSchedulerStatus GetRetrainingSchedulerStatus() const { return m_retrainingSchedulerStatus; }
    inline void SetRetrainingSchedulerStatus(RetrainingSchedulerStatus value) { m_retrainingSchedulerStatusHasBeenSet = true; m_retrainingSchedulerStatus = value; }
    inline DescribeModelResult& WithRetrainingSchedulerStatus(RetrainingSchedulerStatus value) { SetRetrainingSchedulerStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the model's pointwise model diagnostics.</p>
     */
    inline const ModelDiagnosticsOutputConfiguration& GetModelDiagnosticsOutputConfiguration() const { return m_modelDiagnosticsOutputConfiguration; }
    template<typename ModelDiagnosticsOutputConfigurationT = ModelDiagnosticsOutputConfiguration>
    void SetModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfigurationT&& value) { m_modelDiagnosticsOutputConfigurationHasBeenSet = true; m_modelDiagnosticsOutputConfiguration = std::forward<ModelDiagnosticsOutputConfigurationT>(value); }
    template<typename ModelDiagnosticsOutputConfigurationT = ModelDiagnosticsOutputConfiguration>
    DescribeModelResult& WithModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfigurationT&& value) { SetModelDiagnosticsOutputConfiguration(std::forward<ModelDiagnosticsOutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a quality assessment for a model that uses labels. If Lookout for
     * Equipment determines that the model quality is poor based on training metrics,
     * the value is <code>POOR_QUALITY_DETECTED</code>. Otherwise, the value is
     * <code>QUALITY_THRESHOLD_MET</code>.</p> <p>If the model is unlabeled, the model
     * quality can't be assessed and the value of <code>ModelQuality</code> is
     * <code>CANNOT_DETERMINE_QUALITY</code>. In this situation, you can get a model
     * quality assessment by adding labels to the input dataset and retraining the
     * model.</p> <p>For information about using labels with your models, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-labeling.html">Understanding
     * labeling</a>.</p> <p>For information about improving the quality of a model, see
     * <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/best-practices.html">Best
     * practices with Amazon Lookout for Equipment</a>.</p>
     */
    inline ModelQuality GetModelQuality() const { return m_modelQuality; }
    inline void SetModelQuality(ModelQuality value) { m_modelQualityHasBeenSet = true; m_modelQuality = value; }
    inline DescribeModelResult& WithModelQuality(ModelQuality value) { SetModelQuality(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    LabelsInputConfiguration m_labelsInputConfiguration;
    bool m_labelsInputConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_trainingDataStartTime{};
    bool m_trainingDataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingDataEndTime{};
    bool m_trainingDataEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_evaluationDataStartTime{};
    bool m_evaluationDataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_evaluationDataEndTime{};
    bool m_evaluationDataEndTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    DataPreProcessingConfiguration m_dataPreProcessingConfiguration;
    bool m_dataPreProcessingConfigurationHasBeenSet = false;

    ModelStatus m_status{ModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_trainingExecutionStartTime{};
    bool m_trainingExecutionStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingExecutionEndTime{};
    bool m_trainingExecutionEndTimeHasBeenSet = false;

    Aws::String m_failedReason;
    bool m_failedReasonHasBeenSet = false;

    Aws::String m_modelMetrics;
    bool m_modelMetricsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_serverSideKmsKeyId;
    bool m_serverSideKmsKeyIdHasBeenSet = false;

    Aws::String m_offCondition;
    bool m_offConditionHasBeenSet = false;

    Aws::String m_sourceModelVersionArn;
    bool m_sourceModelVersionArnHasBeenSet = false;

    Aws::Utils::DateTime m_importJobStartTime{};
    bool m_importJobStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_importJobEndTime{};
    bool m_importJobEndTimeHasBeenSet = false;

    long long m_activeModelVersion{0};
    bool m_activeModelVersionHasBeenSet = false;

    Aws::String m_activeModelVersionArn;
    bool m_activeModelVersionArnHasBeenSet = false;

    Aws::Utils::DateTime m_modelVersionActivatedAt{};
    bool m_modelVersionActivatedAtHasBeenSet = false;

    long long m_previousActiveModelVersion{0};
    bool m_previousActiveModelVersionHasBeenSet = false;

    Aws::String m_previousActiveModelVersionArn;
    bool m_previousActiveModelVersionArnHasBeenSet = false;

    Aws::Utils::DateTime m_previousModelVersionActivatedAt{};
    bool m_previousModelVersionActivatedAtHasBeenSet = false;

    Aws::String m_priorModelMetrics;
    bool m_priorModelMetricsHasBeenSet = false;

    Aws::String m_latestScheduledRetrainingFailedReason;
    bool m_latestScheduledRetrainingFailedReasonHasBeenSet = false;

    ModelVersionStatus m_latestScheduledRetrainingStatus{ModelVersionStatus::NOT_SET};
    bool m_latestScheduledRetrainingStatusHasBeenSet = false;

    long long m_latestScheduledRetrainingModelVersion{0};
    bool m_latestScheduledRetrainingModelVersionHasBeenSet = false;

    Aws::Utils::DateTime m_latestScheduledRetrainingStartTime{};
    bool m_latestScheduledRetrainingStartTimeHasBeenSet = false;

    int m_latestScheduledRetrainingAvailableDataInDays{0};
    bool m_latestScheduledRetrainingAvailableDataInDaysHasBeenSet = false;

    Aws::Utils::DateTime m_nextScheduledRetrainingStartDate{};
    bool m_nextScheduledRetrainingStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_accumulatedInferenceDataStartTime{};
    bool m_accumulatedInferenceDataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_accumulatedInferenceDataEndTime{};
    bool m_accumulatedInferenceDataEndTimeHasBeenSet = false;

    RetrainingSchedulerStatus m_retrainingSchedulerStatus{RetrainingSchedulerStatus::NOT_SET};
    bool m_retrainingSchedulerStatusHasBeenSet = false;

    ModelDiagnosticsOutputConfiguration m_modelDiagnosticsOutputConfiguration;
    bool m_modelDiagnosticsOutputConfigurationHasBeenSet = false;

    ModelQuality m_modelQuality{ModelQuality::NOT_SET};
    bool m_modelQualityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
