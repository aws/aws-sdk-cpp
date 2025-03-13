/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/ModelVersionStatus.h>
#include <aws/lookoutequipment/model/ModelVersionSourceType.h>
#include <aws/lookoutequipment/model/LabelsInputConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/DataPreProcessingConfiguration.h>
#include <aws/lookoutequipment/model/AutoPromotionResult.h>
#include <aws/lookoutequipment/model/ModelDiagnosticsOutputConfiguration.h>
#include <aws/lookoutequipment/model/S3Object.h>
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
  class DescribeModelVersionResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeModelVersionResult() = default;
    AWS_LOOKOUTEQUIPMENT_API DescribeModelVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeModelVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the machine learning model that this version belongs to.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    DescribeModelVersionResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the parent machine learning model that this
     * version belong to.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    DescribeModelVersionResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the machine learning model.</p>
     */
    inline long long GetModelVersion() const { return m_modelVersion; }
    inline void SetModelVersion(long long value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }
    inline DescribeModelVersionResult& WithModelVersion(long long value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model version.</p>
     */
    inline const Aws::String& GetModelVersionArn() const { return m_modelVersionArn; }
    template<typename ModelVersionArnT = Aws::String>
    void SetModelVersionArn(ModelVersionArnT&& value) { m_modelVersionArnHasBeenSet = true; m_modelVersionArn = std::forward<ModelVersionArnT>(value); }
    template<typename ModelVersionArnT = Aws::String>
    DescribeModelVersionResult& WithModelVersionArn(ModelVersionArnT&& value) { SetModelVersionArn(std::forward<ModelVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the model version.</p>
     */
    inline ModelVersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(ModelVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeModelVersionResult& WithStatus(ModelVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this model version was created by training or by
     * importing.</p>
     */
    inline ModelVersionSourceType GetSourceType() const { return m_sourceType; }
    inline void SetSourceType(ModelVersionSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline DescribeModelVersionResult& WithSourceType(ModelVersionSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset used to train the model version.</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DescribeModelVersionResult& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset used to train the model
     * version.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DescribeModelVersionResult& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema of the data used to train the model version.</p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    DescribeModelVersionResult& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LabelsInputConfiguration& GetLabelsInputConfiguration() const { return m_labelsInputConfiguration; }
    template<typename LabelsInputConfigurationT = LabelsInputConfiguration>
    void SetLabelsInputConfiguration(LabelsInputConfigurationT&& value) { m_labelsInputConfigurationHasBeenSet = true; m_labelsInputConfiguration = std::forward<LabelsInputConfigurationT>(value); }
    template<typename LabelsInputConfigurationT = LabelsInputConfiguration>
    DescribeModelVersionResult& WithLabelsInputConfiguration(LabelsInputConfigurationT&& value) { SetLabelsInputConfiguration(std::forward<LabelsInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the training data began being gathered. If you imported the
     * version, this is the date that the training data in the source version began
     * being gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataStartTime() const { return m_trainingDataStartTime; }
    template<typename TrainingDataStartTimeT = Aws::Utils::DateTime>
    void SetTrainingDataStartTime(TrainingDataStartTimeT&& value) { m_trainingDataStartTimeHasBeenSet = true; m_trainingDataStartTime = std::forward<TrainingDataStartTimeT>(value); }
    template<typename TrainingDataStartTimeT = Aws::Utils::DateTime>
    DescribeModelVersionResult& WithTrainingDataStartTime(TrainingDataStartTimeT&& value) { SetTrainingDataStartTime(std::forward<TrainingDataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the training data finished being gathered. If you imported
     * the version, this is the date that the training data in the source version
     * finished being gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataEndTime() const { return m_trainingDataEndTime; }
    template<typename TrainingDataEndTimeT = Aws::Utils::DateTime>
    void SetTrainingDataEndTime(TrainingDataEndTimeT&& value) { m_trainingDataEndTimeHasBeenSet = true; m_trainingDataEndTime = std::forward<TrainingDataEndTimeT>(value); }
    template<typename TrainingDataEndTimeT = Aws::Utils::DateTime>
    DescribeModelVersionResult& WithTrainingDataEndTime(TrainingDataEndTimeT&& value) { SetTrainingDataEndTime(std::forward<TrainingDataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version began being gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataStartTime() const { return m_evaluationDataStartTime; }
    template<typename EvaluationDataStartTimeT = Aws::Utils::DateTime>
    void SetEvaluationDataStartTime(EvaluationDataStartTimeT&& value) { m_evaluationDataStartTimeHasBeenSet = true; m_evaluationDataStartTime = std::forward<EvaluationDataStartTimeT>(value); }
    template<typename EvaluationDataStartTimeT = Aws::Utils::DateTime>
    DescribeModelVersionResult& WithEvaluationDataStartTime(EvaluationDataStartTimeT&& value) { SetEvaluationDataStartTime(std::forward<EvaluationDataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version finished being gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataEndTime() const { return m_evaluationDataEndTime; }
    template<typename EvaluationDataEndTimeT = Aws::Utils::DateTime>
    void SetEvaluationDataEndTime(EvaluationDataEndTimeT&& value) { m_evaluationDataEndTimeHasBeenSet = true; m_evaluationDataEndTime = std::forward<EvaluationDataEndTimeT>(value); }
    template<typename EvaluationDataEndTimeT = Aws::Utils::DateTime>
    DescribeModelVersionResult& WithEvaluationDataEndTime(EvaluationDataEndTimeT&& value) { SetEvaluationDataEndTime(std::forward<EvaluationDataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role that was used to train the model
     * version.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeModelVersionResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataPreProcessingConfiguration& GetDataPreProcessingConfiguration() const { return m_dataPreProcessingConfiguration; }
    template<typename DataPreProcessingConfigurationT = DataPreProcessingConfiguration>
    void SetDataPreProcessingConfiguration(DataPreProcessingConfigurationT&& value) { m_dataPreProcessingConfigurationHasBeenSet = true; m_dataPreProcessingConfiguration = std::forward<DataPreProcessingConfigurationT>(value); }
    template<typename DataPreProcessingConfigurationT = DataPreProcessingConfiguration>
    DescribeModelVersionResult& WithDataPreProcessingConfiguration(DataPreProcessingConfigurationT&& value) { SetDataPreProcessingConfiguration(std::forward<DataPreProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the training of the version began.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingExecutionStartTime() const { return m_trainingExecutionStartTime; }
    template<typename TrainingExecutionStartTimeT = Aws::Utils::DateTime>
    void SetTrainingExecutionStartTime(TrainingExecutionStartTimeT&& value) { m_trainingExecutionStartTimeHasBeenSet = true; m_trainingExecutionStartTime = std::forward<TrainingExecutionStartTimeT>(value); }
    template<typename TrainingExecutionStartTimeT = Aws::Utils::DateTime>
    DescribeModelVersionResult& WithTrainingExecutionStartTime(TrainingExecutionStartTimeT&& value) { SetTrainingExecutionStartTime(std::forward<TrainingExecutionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the training of the version completed.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingExecutionEndTime() const { return m_trainingExecutionEndTime; }
    template<typename TrainingExecutionEndTimeT = Aws::Utils::DateTime>
    void SetTrainingExecutionEndTime(TrainingExecutionEndTimeT&& value) { m_trainingExecutionEndTimeHasBeenSet = true; m_trainingExecutionEndTime = std::forward<TrainingExecutionEndTimeT>(value); }
    template<typename TrainingExecutionEndTimeT = Aws::Utils::DateTime>
    DescribeModelVersionResult& WithTrainingExecutionEndTime(TrainingExecutionEndTimeT&& value) { SetTrainingExecutionEndTime(std::forward<TrainingExecutionEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure message if the training of the model version failed.</p>
     */
    inline const Aws::String& GetFailedReason() const { return m_failedReason; }
    template<typename FailedReasonT = Aws::String>
    void SetFailedReason(FailedReasonT&& value) { m_failedReasonHasBeenSet = true; m_failedReason = std::forward<FailedReasonT>(value); }
    template<typename FailedReasonT = Aws::String>
    DescribeModelVersionResult& WithFailedReason(FailedReasonT&& value) { SetFailedReason(std::forward<FailedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows an aggregated summary, in JSON format, of the model's performance
     * within the evaluation time range. These metrics are created when evaluating the
     * model.</p>
     */
    inline const Aws::String& GetModelMetrics() const { return m_modelMetrics; }
    template<typename ModelMetricsT = Aws::String>
    void SetModelMetrics(ModelMetricsT&& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = std::forward<ModelMetricsT>(value); }
    template<typename ModelMetricsT = Aws::String>
    DescribeModelVersionResult& WithModelMetrics(ModelMetricsT&& value) { SetModelMetrics(std::forward<ModelMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the last time the machine learning model version was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DescribeModelVersionResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time and date at which the machine learning model version was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeModelVersionResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS key key used to encrypt model version data by
     * Amazon Lookout for Equipment.</p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const { return m_serverSideKmsKeyId; }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    void SetServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = std::forward<ServerSideKmsKeyIdT>(value); }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    DescribeModelVersionResult& WithServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { SetServerSideKmsKeyId(std::forward<ServerSideKmsKeyIdT>(value)); return *this;}
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
    DescribeModelVersionResult& WithOffCondition(OffConditionT&& value) { SetOffCondition(std::forward<OffConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If model version was imported, then this field is the arn of the source model
     * version.</p>
     */
    inline const Aws::String& GetSourceModelVersionArn() const { return m_sourceModelVersionArn; }
    template<typename SourceModelVersionArnT = Aws::String>
    void SetSourceModelVersionArn(SourceModelVersionArnT&& value) { m_sourceModelVersionArnHasBeenSet = true; m_sourceModelVersionArn = std::forward<SourceModelVersionArnT>(value); }
    template<typename SourceModelVersionArnT = Aws::String>
    DescribeModelVersionResult& WithSourceModelVersionArn(SourceModelVersionArnT&& value) { SetSourceModelVersionArn(std::forward<SourceModelVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the import job began. This field appears if the model
     * version was imported.</p>
     */
    inline const Aws::Utils::DateTime& GetImportJobStartTime() const { return m_importJobStartTime; }
    template<typename ImportJobStartTimeT = Aws::Utils::DateTime>
    void SetImportJobStartTime(ImportJobStartTimeT&& value) { m_importJobStartTimeHasBeenSet = true; m_importJobStartTime = std::forward<ImportJobStartTimeT>(value); }
    template<typename ImportJobStartTimeT = Aws::Utils::DateTime>
    DescribeModelVersionResult& WithImportJobStartTime(ImportJobStartTimeT&& value) { SetImportJobStartTime(std::forward<ImportJobStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the import job completed. This field appears if the
     * model version was imported.</p>
     */
    inline const Aws::Utils::DateTime& GetImportJobEndTime() const { return m_importJobEndTime; }
    template<typename ImportJobEndTimeT = Aws::Utils::DateTime>
    void SetImportJobEndTime(ImportJobEndTimeT&& value) { m_importJobEndTimeHasBeenSet = true; m_importJobEndTime = std::forward<ImportJobEndTimeT>(value); }
    template<typename ImportJobEndTimeT = Aws::Utils::DateTime>
    DescribeModelVersionResult& WithImportJobEndTime(ImportJobEndTimeT&& value) { SetImportJobEndTime(std::forward<ImportJobEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size in bytes of the imported data. This field appears if the model
     * version was imported.</p>
     */
    inline long long GetImportedDataSizeInBytes() const { return m_importedDataSizeInBytes; }
    inline void SetImportedDataSizeInBytes(long long value) { m_importedDataSizeInBytesHasBeenSet = true; m_importedDataSizeInBytes = value; }
    inline DescribeModelVersionResult& WithImportedDataSizeInBytes(long long value) { SetImportedDataSizeInBytes(value); return *this;}
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
    DescribeModelVersionResult& WithPriorModelMetrics(PriorModelMetricsT&& value) { SetPriorModelMetrics(std::forward<PriorModelMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the number of days of data used in the most recent scheduled
     * retraining run. </p>
     */
    inline int GetRetrainingAvailableDataInDays() const { return m_retrainingAvailableDataInDays; }
    inline void SetRetrainingAvailableDataInDays(int value) { m_retrainingAvailableDataInDaysHasBeenSet = true; m_retrainingAvailableDataInDays = value; }
    inline DescribeModelVersionResult& WithRetrainingAvailableDataInDays(int value) { SetRetrainingAvailableDataInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the model version was promoted to be the active version
     * after retraining or if there was an error with or cancellation of the
     * retraining. </p>
     */
    inline AutoPromotionResult GetAutoPromotionResult() const { return m_autoPromotionResult; }
    inline void SetAutoPromotionResult(AutoPromotionResult value) { m_autoPromotionResultHasBeenSet = true; m_autoPromotionResult = value; }
    inline DescribeModelVersionResult& WithAutoPromotionResult(AutoPromotionResult value) { SetAutoPromotionResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason for the <code>AutoPromotionResult</code>. For example, a
     * model might not be promoted if its performance was worse than the active
     * version, if there was an error during training, or if the retraining scheduler
     * was using <code>MANUAL</code> promote mode. The model will be promoted in
     * <code>MANAGED</code> promote mode if the performance is better than the previous
     * model. </p>
     */
    inline const Aws::String& GetAutoPromotionResultReason() const { return m_autoPromotionResultReason; }
    template<typename AutoPromotionResultReasonT = Aws::String>
    void SetAutoPromotionResultReason(AutoPromotionResultReasonT&& value) { m_autoPromotionResultReasonHasBeenSet = true; m_autoPromotionResultReason = std::forward<AutoPromotionResultReasonT>(value); }
    template<typename AutoPromotionResultReasonT = Aws::String>
    DescribeModelVersionResult& WithAutoPromotionResultReason(AutoPromotionResultReasonT&& value) { SetAutoPromotionResultReason(std::forward<AutoPromotionResultReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location where Amazon Lookout for Equipment saves the pointwise
     * model diagnostics for the model version.</p>
     */
    inline const ModelDiagnosticsOutputConfiguration& GetModelDiagnosticsOutputConfiguration() const { return m_modelDiagnosticsOutputConfiguration; }
    template<typename ModelDiagnosticsOutputConfigurationT = ModelDiagnosticsOutputConfiguration>
    void SetModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfigurationT&& value) { m_modelDiagnosticsOutputConfigurationHasBeenSet = true; m_modelDiagnosticsOutputConfiguration = std::forward<ModelDiagnosticsOutputConfigurationT>(value); }
    template<typename ModelDiagnosticsOutputConfigurationT = ModelDiagnosticsOutputConfiguration>
    DescribeModelVersionResult& WithModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfigurationT&& value) { SetModelDiagnosticsOutputConfiguration(std::forward<ModelDiagnosticsOutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 output prefix for where Lookout for Equipment saves the
     * pointwise model diagnostics for the model version.</p>
     */
    inline const S3Object& GetModelDiagnosticsResultsObject() const { return m_modelDiagnosticsResultsObject; }
    template<typename ModelDiagnosticsResultsObjectT = S3Object>
    void SetModelDiagnosticsResultsObject(ModelDiagnosticsResultsObjectT&& value) { m_modelDiagnosticsResultsObjectHasBeenSet = true; m_modelDiagnosticsResultsObject = std::forward<ModelDiagnosticsResultsObjectT>(value); }
    template<typename ModelDiagnosticsResultsObjectT = S3Object>
    DescribeModelVersionResult& WithModelDiagnosticsResultsObject(ModelDiagnosticsResultsObjectT&& value) { SetModelDiagnosticsResultsObject(std::forward<ModelDiagnosticsResultsObjectT>(value)); return *this;}
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
    inline DescribeModelVersionResult& WithModelQuality(ModelQuality value) { SetModelQuality(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    long long m_modelVersion{0};
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_modelVersionArn;
    bool m_modelVersionArnHasBeenSet = false;

    ModelVersionStatus m_status{ModelVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ModelVersionSourceType m_sourceType{ModelVersionSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

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

    long long m_importedDataSizeInBytes{0};
    bool m_importedDataSizeInBytesHasBeenSet = false;

    Aws::String m_priorModelMetrics;
    bool m_priorModelMetricsHasBeenSet = false;

    int m_retrainingAvailableDataInDays{0};
    bool m_retrainingAvailableDataInDaysHasBeenSet = false;

    AutoPromotionResult m_autoPromotionResult{AutoPromotionResult::NOT_SET};
    bool m_autoPromotionResultHasBeenSet = false;

    Aws::String m_autoPromotionResultReason;
    bool m_autoPromotionResultReasonHasBeenSet = false;

    ModelDiagnosticsOutputConfiguration m_modelDiagnosticsOutputConfiguration;
    bool m_modelDiagnosticsOutputConfigurationHasBeenSet = false;

    S3Object m_modelDiagnosticsResultsObject;
    bool m_modelDiagnosticsResultsObjectHasBeenSet = false;

    ModelQuality m_modelQuality{ModelQuality::NOT_SET};
    bool m_modelQualityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
