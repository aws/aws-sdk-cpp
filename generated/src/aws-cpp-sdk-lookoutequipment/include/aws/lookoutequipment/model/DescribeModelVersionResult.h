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
    AWS_LOOKOUTEQUIPMENT_API DescribeModelVersionResult();
    AWS_LOOKOUTEQUIPMENT_API DescribeModelVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeModelVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the machine learning model that this version belongs to.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the machine learning model that this version belongs to.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }

    /**
     * <p>The name of the machine learning model that this version belongs to.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }

    /**
     * <p>The name of the machine learning model that this version belongs to.</p>
     */
    inline void SetModelName(const char* value) { m_modelName.assign(value); }

    /**
     * <p>The name of the machine learning model that this version belongs to.</p>
     */
    inline DescribeModelVersionResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the machine learning model that this version belongs to.</p>
     */
    inline DescribeModelVersionResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the machine learning model that this version belongs to.</p>
     */
    inline DescribeModelVersionResult& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the parent machine learning model that this
     * version belong to.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the parent machine learning model that this
     * version belong to.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the parent machine learning model that this
     * version belong to.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the parent machine learning model that this
     * version belong to.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the parent machine learning model that this
     * version belong to.</p>
     */
    inline DescribeModelVersionResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the parent machine learning model that this
     * version belong to.</p>
     */
    inline DescribeModelVersionResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the parent machine learning model that this
     * version belong to.</p>
     */
    inline DescribeModelVersionResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The version of the machine learning model.</p>
     */
    inline long long GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the machine learning model.</p>
     */
    inline void SetModelVersion(long long value) { m_modelVersion = value; }

    /**
     * <p>The version of the machine learning model.</p>
     */
    inline DescribeModelVersionResult& WithModelVersion(long long value) { SetModelVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model version.</p>
     */
    inline const Aws::String& GetModelVersionArn() const{ return m_modelVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version.</p>
     */
    inline void SetModelVersionArn(const Aws::String& value) { m_modelVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version.</p>
     */
    inline void SetModelVersionArn(Aws::String&& value) { m_modelVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version.</p>
     */
    inline void SetModelVersionArn(const char* value) { m_modelVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version.</p>
     */
    inline DescribeModelVersionResult& WithModelVersionArn(const Aws::String& value) { SetModelVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version.</p>
     */
    inline DescribeModelVersionResult& WithModelVersionArn(Aws::String&& value) { SetModelVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version.</p>
     */
    inline DescribeModelVersionResult& WithModelVersionArn(const char* value) { SetModelVersionArn(value); return *this;}


    /**
     * <p>The current status of the model version.</p>
     */
    inline const ModelVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the model version.</p>
     */
    inline void SetStatus(const ModelVersionStatus& value) { m_status = value; }

    /**
     * <p>The current status of the model version.</p>
     */
    inline void SetStatus(ModelVersionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the model version.</p>
     */
    inline DescribeModelVersionResult& WithStatus(const ModelVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the model version.</p>
     */
    inline DescribeModelVersionResult& WithStatus(ModelVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates whether this model version was created by training or by
     * importing.</p>
     */
    inline const ModelVersionSourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>Indicates whether this model version was created by training or by
     * importing.</p>
     */
    inline void SetSourceType(const ModelVersionSourceType& value) { m_sourceType = value; }

    /**
     * <p>Indicates whether this model version was created by training or by
     * importing.</p>
     */
    inline void SetSourceType(ModelVersionSourceType&& value) { m_sourceType = std::move(value); }

    /**
     * <p>Indicates whether this model version was created by training or by
     * importing.</p>
     */
    inline DescribeModelVersionResult& WithSourceType(const ModelVersionSourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>Indicates whether this model version was created by training or by
     * importing.</p>
     */
    inline DescribeModelVersionResult& WithSourceType(ModelVersionSourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>The name of the dataset used to train the model version.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset used to train the model version.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetName = value; }

    /**
     * <p>The name of the dataset used to train the model version.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset used to train the model version.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset used to train the model version.</p>
     */
    inline DescribeModelVersionResult& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset used to train the model version.</p>
     */
    inline DescribeModelVersionResult& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset used to train the model version.</p>
     */
    inline DescribeModelVersionResult& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset used to train the model
     * version.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset used to train the model
     * version.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset used to train the model
     * version.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset used to train the model
     * version.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset used to train the model
     * version.</p>
     */
    inline DescribeModelVersionResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset used to train the model
     * version.</p>
     */
    inline DescribeModelVersionResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset used to train the model
     * version.</p>
     */
    inline DescribeModelVersionResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>The schema of the data used to train the model version.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema of the data used to train the model version.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schema = value; }

    /**
     * <p>The schema of the data used to train the model version.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }

    /**
     * <p>The schema of the data used to train the model version.</p>
     */
    inline void SetSchema(const char* value) { m_schema.assign(value); }

    /**
     * <p>The schema of the data used to train the model version.</p>
     */
    inline DescribeModelVersionResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema of the data used to train the model version.</p>
     */
    inline DescribeModelVersionResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema of the data used to train the model version.</p>
     */
    inline DescribeModelVersionResult& WithSchema(const char* value) { SetSchema(value); return *this;}


    
    inline const LabelsInputConfiguration& GetLabelsInputConfiguration() const{ return m_labelsInputConfiguration; }

    
    inline void SetLabelsInputConfiguration(const LabelsInputConfiguration& value) { m_labelsInputConfiguration = value; }

    
    inline void SetLabelsInputConfiguration(LabelsInputConfiguration&& value) { m_labelsInputConfiguration = std::move(value); }

    
    inline DescribeModelVersionResult& WithLabelsInputConfiguration(const LabelsInputConfiguration& value) { SetLabelsInputConfiguration(value); return *this;}

    
    inline DescribeModelVersionResult& WithLabelsInputConfiguration(LabelsInputConfiguration&& value) { SetLabelsInputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The date on which the training data began being gathered. If you imported the
     * version, this is the date that the training data in the source version began
     * being gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataStartTime() const{ return m_trainingDataStartTime; }

    /**
     * <p>The date on which the training data began being gathered. If you imported the
     * version, this is the date that the training data in the source version began
     * being gathered.</p>
     */
    inline void SetTrainingDataStartTime(const Aws::Utils::DateTime& value) { m_trainingDataStartTime = value; }

    /**
     * <p>The date on which the training data began being gathered. If you imported the
     * version, this is the date that the training data in the source version began
     * being gathered.</p>
     */
    inline void SetTrainingDataStartTime(Aws::Utils::DateTime&& value) { m_trainingDataStartTime = std::move(value); }

    /**
     * <p>The date on which the training data began being gathered. If you imported the
     * version, this is the date that the training data in the source version began
     * being gathered.</p>
     */
    inline DescribeModelVersionResult& WithTrainingDataStartTime(const Aws::Utils::DateTime& value) { SetTrainingDataStartTime(value); return *this;}

    /**
     * <p>The date on which the training data began being gathered. If you imported the
     * version, this is the date that the training data in the source version began
     * being gathered.</p>
     */
    inline DescribeModelVersionResult& WithTrainingDataStartTime(Aws::Utils::DateTime&& value) { SetTrainingDataStartTime(std::move(value)); return *this;}


    /**
     * <p>The date on which the training data finished being gathered. If you imported
     * the version, this is the date that the training data in the source version
     * finished being gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataEndTime() const{ return m_trainingDataEndTime; }

    /**
     * <p>The date on which the training data finished being gathered. If you imported
     * the version, this is the date that the training data in the source version
     * finished being gathered.</p>
     */
    inline void SetTrainingDataEndTime(const Aws::Utils::DateTime& value) { m_trainingDataEndTime = value; }

    /**
     * <p>The date on which the training data finished being gathered. If you imported
     * the version, this is the date that the training data in the source version
     * finished being gathered.</p>
     */
    inline void SetTrainingDataEndTime(Aws::Utils::DateTime&& value) { m_trainingDataEndTime = std::move(value); }

    /**
     * <p>The date on which the training data finished being gathered. If you imported
     * the version, this is the date that the training data in the source version
     * finished being gathered.</p>
     */
    inline DescribeModelVersionResult& WithTrainingDataEndTime(const Aws::Utils::DateTime& value) { SetTrainingDataEndTime(value); return *this;}

    /**
     * <p>The date on which the training data finished being gathered. If you imported
     * the version, this is the date that the training data in the source version
     * finished being gathered.</p>
     */
    inline DescribeModelVersionResult& WithTrainingDataEndTime(Aws::Utils::DateTime&& value) { SetTrainingDataEndTime(std::move(value)); return *this;}


    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version began being gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataStartTime() const{ return m_evaluationDataStartTime; }

    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version began being gathered.</p>
     */
    inline void SetEvaluationDataStartTime(const Aws::Utils::DateTime& value) { m_evaluationDataStartTime = value; }

    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version began being gathered.</p>
     */
    inline void SetEvaluationDataStartTime(Aws::Utils::DateTime&& value) { m_evaluationDataStartTime = std::move(value); }

    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version began being gathered.</p>
     */
    inline DescribeModelVersionResult& WithEvaluationDataStartTime(const Aws::Utils::DateTime& value) { SetEvaluationDataStartTime(value); return *this;}

    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version began being gathered.</p>
     */
    inline DescribeModelVersionResult& WithEvaluationDataStartTime(Aws::Utils::DateTime&& value) { SetEvaluationDataStartTime(std::move(value)); return *this;}


    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version finished being gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataEndTime() const{ return m_evaluationDataEndTime; }

    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version finished being gathered.</p>
     */
    inline void SetEvaluationDataEndTime(const Aws::Utils::DateTime& value) { m_evaluationDataEndTime = value; }

    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version finished being gathered.</p>
     */
    inline void SetEvaluationDataEndTime(Aws::Utils::DateTime&& value) { m_evaluationDataEndTime = std::move(value); }

    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version finished being gathered.</p>
     */
    inline DescribeModelVersionResult& WithEvaluationDataEndTime(const Aws::Utils::DateTime& value) { SetEvaluationDataEndTime(value); return *this;}

    /**
     * <p>The date on which the data in the evaluation set began being gathered. If you
     * imported the version, this is the date that the evaluation set data in the
     * source version finished being gathered.</p>
     */
    inline DescribeModelVersionResult& WithEvaluationDataEndTime(Aws::Utils::DateTime&& value) { SetEvaluationDataEndTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role that was used to train the model
     * version.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that was used to train the model
     * version.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that was used to train the model
     * version.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that was used to train the model
     * version.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that was used to train the model
     * version.</p>
     */
    inline DescribeModelVersionResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that was used to train the model
     * version.</p>
     */
    inline DescribeModelVersionResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that was used to train the model
     * version.</p>
     */
    inline DescribeModelVersionResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const DataPreProcessingConfiguration& GetDataPreProcessingConfiguration() const{ return m_dataPreProcessingConfiguration; }

    
    inline void SetDataPreProcessingConfiguration(const DataPreProcessingConfiguration& value) { m_dataPreProcessingConfiguration = value; }

    
    inline void SetDataPreProcessingConfiguration(DataPreProcessingConfiguration&& value) { m_dataPreProcessingConfiguration = std::move(value); }

    
    inline DescribeModelVersionResult& WithDataPreProcessingConfiguration(const DataPreProcessingConfiguration& value) { SetDataPreProcessingConfiguration(value); return *this;}

    
    inline DescribeModelVersionResult& WithDataPreProcessingConfiguration(DataPreProcessingConfiguration&& value) { SetDataPreProcessingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The time when the training of the version began.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingExecutionStartTime() const{ return m_trainingExecutionStartTime; }

    /**
     * <p>The time when the training of the version began.</p>
     */
    inline void SetTrainingExecutionStartTime(const Aws::Utils::DateTime& value) { m_trainingExecutionStartTime = value; }

    /**
     * <p>The time when the training of the version began.</p>
     */
    inline void SetTrainingExecutionStartTime(Aws::Utils::DateTime&& value) { m_trainingExecutionStartTime = std::move(value); }

    /**
     * <p>The time when the training of the version began.</p>
     */
    inline DescribeModelVersionResult& WithTrainingExecutionStartTime(const Aws::Utils::DateTime& value) { SetTrainingExecutionStartTime(value); return *this;}

    /**
     * <p>The time when the training of the version began.</p>
     */
    inline DescribeModelVersionResult& WithTrainingExecutionStartTime(Aws::Utils::DateTime&& value) { SetTrainingExecutionStartTime(std::move(value)); return *this;}


    /**
     * <p>The time when the training of the version completed.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingExecutionEndTime() const{ return m_trainingExecutionEndTime; }

    /**
     * <p>The time when the training of the version completed.</p>
     */
    inline void SetTrainingExecutionEndTime(const Aws::Utils::DateTime& value) { m_trainingExecutionEndTime = value; }

    /**
     * <p>The time when the training of the version completed.</p>
     */
    inline void SetTrainingExecutionEndTime(Aws::Utils::DateTime&& value) { m_trainingExecutionEndTime = std::move(value); }

    /**
     * <p>The time when the training of the version completed.</p>
     */
    inline DescribeModelVersionResult& WithTrainingExecutionEndTime(const Aws::Utils::DateTime& value) { SetTrainingExecutionEndTime(value); return *this;}

    /**
     * <p>The time when the training of the version completed.</p>
     */
    inline DescribeModelVersionResult& WithTrainingExecutionEndTime(Aws::Utils::DateTime&& value) { SetTrainingExecutionEndTime(std::move(value)); return *this;}


    /**
     * <p>The failure message if the training of the model version failed.</p>
     */
    inline const Aws::String& GetFailedReason() const{ return m_failedReason; }

    /**
     * <p>The failure message if the training of the model version failed.</p>
     */
    inline void SetFailedReason(const Aws::String& value) { m_failedReason = value; }

    /**
     * <p>The failure message if the training of the model version failed.</p>
     */
    inline void SetFailedReason(Aws::String&& value) { m_failedReason = std::move(value); }

    /**
     * <p>The failure message if the training of the model version failed.</p>
     */
    inline void SetFailedReason(const char* value) { m_failedReason.assign(value); }

    /**
     * <p>The failure message if the training of the model version failed.</p>
     */
    inline DescribeModelVersionResult& WithFailedReason(const Aws::String& value) { SetFailedReason(value); return *this;}

    /**
     * <p>The failure message if the training of the model version failed.</p>
     */
    inline DescribeModelVersionResult& WithFailedReason(Aws::String&& value) { SetFailedReason(std::move(value)); return *this;}

    /**
     * <p>The failure message if the training of the model version failed.</p>
     */
    inline DescribeModelVersionResult& WithFailedReason(const char* value) { SetFailedReason(value); return *this;}


    /**
     * <p>Shows an aggregated summary, in JSON format, of the model's performance
     * within the evaluation time range. These metrics are created when evaluating the
     * model.</p>
     */
    inline const Aws::String& GetModelMetrics() const{ return m_modelMetrics; }

    /**
     * <p>Shows an aggregated summary, in JSON format, of the model's performance
     * within the evaluation time range. These metrics are created when evaluating the
     * model.</p>
     */
    inline void SetModelMetrics(const Aws::String& value) { m_modelMetrics = value; }

    /**
     * <p>Shows an aggregated summary, in JSON format, of the model's performance
     * within the evaluation time range. These metrics are created when evaluating the
     * model.</p>
     */
    inline void SetModelMetrics(Aws::String&& value) { m_modelMetrics = std::move(value); }

    /**
     * <p>Shows an aggregated summary, in JSON format, of the model's performance
     * within the evaluation time range. These metrics are created when evaluating the
     * model.</p>
     */
    inline void SetModelMetrics(const char* value) { m_modelMetrics.assign(value); }

    /**
     * <p>Shows an aggregated summary, in JSON format, of the model's performance
     * within the evaluation time range. These metrics are created when evaluating the
     * model.</p>
     */
    inline DescribeModelVersionResult& WithModelMetrics(const Aws::String& value) { SetModelMetrics(value); return *this;}

    /**
     * <p>Shows an aggregated summary, in JSON format, of the model's performance
     * within the evaluation time range. These metrics are created when evaluating the
     * model.</p>
     */
    inline DescribeModelVersionResult& WithModelMetrics(Aws::String&& value) { SetModelMetrics(std::move(value)); return *this;}

    /**
     * <p>Shows an aggregated summary, in JSON format, of the model's performance
     * within the evaluation time range. These metrics are created when evaluating the
     * model.</p>
     */
    inline DescribeModelVersionResult& WithModelMetrics(const char* value) { SetModelMetrics(value); return *this;}


    /**
     * <p>Indicates the last time the machine learning model version was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>Indicates the last time the machine learning model version was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>Indicates the last time the machine learning model version was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>Indicates the last time the machine learning model version was updated.</p>
     */
    inline DescribeModelVersionResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>Indicates the last time the machine learning model version was updated.</p>
     */
    inline DescribeModelVersionResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the time and date at which the machine learning model version was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Indicates the time and date at which the machine learning model version was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Indicates the time and date at which the machine learning model version was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Indicates the time and date at which the machine learning model version was
     * created.</p>
     */
    inline DescribeModelVersionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Indicates the time and date at which the machine learning model version was
     * created.</p>
     */
    inline DescribeModelVersionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The identifier of the KMS key key used to encrypt model version data by
     * Amazon Lookout for Equipment.</p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const{ return m_serverSideKmsKeyId; }

    /**
     * <p>The identifier of the KMS key key used to encrypt model version data by
     * Amazon Lookout for Equipment.</p>
     */
    inline void SetServerSideKmsKeyId(const Aws::String& value) { m_serverSideKmsKeyId = value; }

    /**
     * <p>The identifier of the KMS key key used to encrypt model version data by
     * Amazon Lookout for Equipment.</p>
     */
    inline void SetServerSideKmsKeyId(Aws::String&& value) { m_serverSideKmsKeyId = std::move(value); }

    /**
     * <p>The identifier of the KMS key key used to encrypt model version data by
     * Amazon Lookout for Equipment.</p>
     */
    inline void SetServerSideKmsKeyId(const char* value) { m_serverSideKmsKeyId.assign(value); }

    /**
     * <p>The identifier of the KMS key key used to encrypt model version data by
     * Amazon Lookout for Equipment.</p>
     */
    inline DescribeModelVersionResult& WithServerSideKmsKeyId(const Aws::String& value) { SetServerSideKmsKeyId(value); return *this;}

    /**
     * <p>The identifier of the KMS key key used to encrypt model version data by
     * Amazon Lookout for Equipment.</p>
     */
    inline DescribeModelVersionResult& WithServerSideKmsKeyId(Aws::String&& value) { SetServerSideKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the KMS key key used to encrypt model version data by
     * Amazon Lookout for Equipment.</p>
     */
    inline DescribeModelVersionResult& WithServerSideKmsKeyId(const char* value) { SetServerSideKmsKeyId(value); return *this;}


    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline const Aws::String& GetOffCondition() const{ return m_offCondition; }

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline void SetOffCondition(const Aws::String& value) { m_offCondition = value; }

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline void SetOffCondition(Aws::String&& value) { m_offCondition = std::move(value); }

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline void SetOffCondition(const char* value) { m_offCondition.assign(value); }

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline DescribeModelVersionResult& WithOffCondition(const Aws::String& value) { SetOffCondition(value); return *this;}

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline DescribeModelVersionResult& WithOffCondition(Aws::String&& value) { SetOffCondition(std::move(value)); return *this;}

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline DescribeModelVersionResult& WithOffCondition(const char* value) { SetOffCondition(value); return *this;}


    /**
     * <p>If model version was imported, then this field is the arn of the source model
     * version.</p>
     */
    inline const Aws::String& GetSourceModelVersionArn() const{ return m_sourceModelVersionArn; }

    /**
     * <p>If model version was imported, then this field is the arn of the source model
     * version.</p>
     */
    inline void SetSourceModelVersionArn(const Aws::String& value) { m_sourceModelVersionArn = value; }

    /**
     * <p>If model version was imported, then this field is the arn of the source model
     * version.</p>
     */
    inline void SetSourceModelVersionArn(Aws::String&& value) { m_sourceModelVersionArn = std::move(value); }

    /**
     * <p>If model version was imported, then this field is the arn of the source model
     * version.</p>
     */
    inline void SetSourceModelVersionArn(const char* value) { m_sourceModelVersionArn.assign(value); }

    /**
     * <p>If model version was imported, then this field is the arn of the source model
     * version.</p>
     */
    inline DescribeModelVersionResult& WithSourceModelVersionArn(const Aws::String& value) { SetSourceModelVersionArn(value); return *this;}

    /**
     * <p>If model version was imported, then this field is the arn of the source model
     * version.</p>
     */
    inline DescribeModelVersionResult& WithSourceModelVersionArn(Aws::String&& value) { SetSourceModelVersionArn(std::move(value)); return *this;}

    /**
     * <p>If model version was imported, then this field is the arn of the source model
     * version.</p>
     */
    inline DescribeModelVersionResult& WithSourceModelVersionArn(const char* value) { SetSourceModelVersionArn(value); return *this;}


    /**
     * <p>The date and time when the import job began. This field appears if the model
     * version was imported.</p>
     */
    inline const Aws::Utils::DateTime& GetImportJobStartTime() const{ return m_importJobStartTime; }

    /**
     * <p>The date and time when the import job began. This field appears if the model
     * version was imported.</p>
     */
    inline void SetImportJobStartTime(const Aws::Utils::DateTime& value) { m_importJobStartTime = value; }

    /**
     * <p>The date and time when the import job began. This field appears if the model
     * version was imported.</p>
     */
    inline void SetImportJobStartTime(Aws::Utils::DateTime&& value) { m_importJobStartTime = std::move(value); }

    /**
     * <p>The date and time when the import job began. This field appears if the model
     * version was imported.</p>
     */
    inline DescribeModelVersionResult& WithImportJobStartTime(const Aws::Utils::DateTime& value) { SetImportJobStartTime(value); return *this;}

    /**
     * <p>The date and time when the import job began. This field appears if the model
     * version was imported.</p>
     */
    inline DescribeModelVersionResult& WithImportJobStartTime(Aws::Utils::DateTime&& value) { SetImportJobStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the import job completed. This field appears if the
     * model version was imported.</p>
     */
    inline const Aws::Utils::DateTime& GetImportJobEndTime() const{ return m_importJobEndTime; }

    /**
     * <p>The date and time when the import job completed. This field appears if the
     * model version was imported.</p>
     */
    inline void SetImportJobEndTime(const Aws::Utils::DateTime& value) { m_importJobEndTime = value; }

    /**
     * <p>The date and time when the import job completed. This field appears if the
     * model version was imported.</p>
     */
    inline void SetImportJobEndTime(Aws::Utils::DateTime&& value) { m_importJobEndTime = std::move(value); }

    /**
     * <p>The date and time when the import job completed. This field appears if the
     * model version was imported.</p>
     */
    inline DescribeModelVersionResult& WithImportJobEndTime(const Aws::Utils::DateTime& value) { SetImportJobEndTime(value); return *this;}

    /**
     * <p>The date and time when the import job completed. This field appears if the
     * model version was imported.</p>
     */
    inline DescribeModelVersionResult& WithImportJobEndTime(Aws::Utils::DateTime&& value) { SetImportJobEndTime(std::move(value)); return *this;}


    /**
     * <p>The size in bytes of the imported data. This field appears if the model
     * version was imported.</p>
     */
    inline long long GetImportedDataSizeInBytes() const{ return m_importedDataSizeInBytes; }

    /**
     * <p>The size in bytes of the imported data. This field appears if the model
     * version was imported.</p>
     */
    inline void SetImportedDataSizeInBytes(long long value) { m_importedDataSizeInBytes = value; }

    /**
     * <p>The size in bytes of the imported data. This field appears if the model
     * version was imported.</p>
     */
    inline DescribeModelVersionResult& WithImportedDataSizeInBytes(long long value) { SetImportedDataSizeInBytes(value); return *this;}


    /**
     * <p>If the model version was retrained, this field shows a summary of the
     * performance of the prior model on the new training range. You can use the
     * information in this JSON-formatted object to compare the new model version and
     * the prior model version.</p>
     */
    inline const Aws::String& GetPriorModelMetrics() const{ return m_priorModelMetrics; }

    /**
     * <p>If the model version was retrained, this field shows a summary of the
     * performance of the prior model on the new training range. You can use the
     * information in this JSON-formatted object to compare the new model version and
     * the prior model version.</p>
     */
    inline void SetPriorModelMetrics(const Aws::String& value) { m_priorModelMetrics = value; }

    /**
     * <p>If the model version was retrained, this field shows a summary of the
     * performance of the prior model on the new training range. You can use the
     * information in this JSON-formatted object to compare the new model version and
     * the prior model version.</p>
     */
    inline void SetPriorModelMetrics(Aws::String&& value) { m_priorModelMetrics = std::move(value); }

    /**
     * <p>If the model version was retrained, this field shows a summary of the
     * performance of the prior model on the new training range. You can use the
     * information in this JSON-formatted object to compare the new model version and
     * the prior model version.</p>
     */
    inline void SetPriorModelMetrics(const char* value) { m_priorModelMetrics.assign(value); }

    /**
     * <p>If the model version was retrained, this field shows a summary of the
     * performance of the prior model on the new training range. You can use the
     * information in this JSON-formatted object to compare the new model version and
     * the prior model version.</p>
     */
    inline DescribeModelVersionResult& WithPriorModelMetrics(const Aws::String& value) { SetPriorModelMetrics(value); return *this;}

    /**
     * <p>If the model version was retrained, this field shows a summary of the
     * performance of the prior model on the new training range. You can use the
     * information in this JSON-formatted object to compare the new model version and
     * the prior model version.</p>
     */
    inline DescribeModelVersionResult& WithPriorModelMetrics(Aws::String&& value) { SetPriorModelMetrics(std::move(value)); return *this;}

    /**
     * <p>If the model version was retrained, this field shows a summary of the
     * performance of the prior model on the new training range. You can use the
     * information in this JSON-formatted object to compare the new model version and
     * the prior model version.</p>
     */
    inline DescribeModelVersionResult& WithPriorModelMetrics(const char* value) { SetPriorModelMetrics(value); return *this;}


    /**
     * <p>Indicates the number of days of data used in the most recent scheduled
     * retraining run. </p>
     */
    inline int GetRetrainingAvailableDataInDays() const{ return m_retrainingAvailableDataInDays; }

    /**
     * <p>Indicates the number of days of data used in the most recent scheduled
     * retraining run. </p>
     */
    inline void SetRetrainingAvailableDataInDays(int value) { m_retrainingAvailableDataInDays = value; }

    /**
     * <p>Indicates the number of days of data used in the most recent scheduled
     * retraining run. </p>
     */
    inline DescribeModelVersionResult& WithRetrainingAvailableDataInDays(int value) { SetRetrainingAvailableDataInDays(value); return *this;}


    /**
     * <p>Indicates whether the model version was promoted to be the active version
     * after retraining or if there was an error with or cancellation of the
     * retraining. </p>
     */
    inline const AutoPromotionResult& GetAutoPromotionResult() const{ return m_autoPromotionResult; }

    /**
     * <p>Indicates whether the model version was promoted to be the active version
     * after retraining or if there was an error with or cancellation of the
     * retraining. </p>
     */
    inline void SetAutoPromotionResult(const AutoPromotionResult& value) { m_autoPromotionResult = value; }

    /**
     * <p>Indicates whether the model version was promoted to be the active version
     * after retraining or if there was an error with or cancellation of the
     * retraining. </p>
     */
    inline void SetAutoPromotionResult(AutoPromotionResult&& value) { m_autoPromotionResult = std::move(value); }

    /**
     * <p>Indicates whether the model version was promoted to be the active version
     * after retraining or if there was an error with or cancellation of the
     * retraining. </p>
     */
    inline DescribeModelVersionResult& WithAutoPromotionResult(const AutoPromotionResult& value) { SetAutoPromotionResult(value); return *this;}

    /**
     * <p>Indicates whether the model version was promoted to be the active version
     * after retraining or if there was an error with or cancellation of the
     * retraining. </p>
     */
    inline DescribeModelVersionResult& WithAutoPromotionResult(AutoPromotionResult&& value) { SetAutoPromotionResult(std::move(value)); return *this;}


    /**
     * <p>Indicates the reason for the <code>AutoPromotionResult</code>. For example, a
     * model might not be promoted if its performance was worse than the active
     * version, if there was an error during training, or if the retraining scheduler
     * was using <code>MANUAL</code> promote mode. The model will be promoted in
     * <code>MANAGED</code> promote mode if the performance is better than the previous
     * model. </p>
     */
    inline const Aws::String& GetAutoPromotionResultReason() const{ return m_autoPromotionResultReason; }

    /**
     * <p>Indicates the reason for the <code>AutoPromotionResult</code>. For example, a
     * model might not be promoted if its performance was worse than the active
     * version, if there was an error during training, or if the retraining scheduler
     * was using <code>MANUAL</code> promote mode. The model will be promoted in
     * <code>MANAGED</code> promote mode if the performance is better than the previous
     * model. </p>
     */
    inline void SetAutoPromotionResultReason(const Aws::String& value) { m_autoPromotionResultReason = value; }

    /**
     * <p>Indicates the reason for the <code>AutoPromotionResult</code>. For example, a
     * model might not be promoted if its performance was worse than the active
     * version, if there was an error during training, or if the retraining scheduler
     * was using <code>MANUAL</code> promote mode. The model will be promoted in
     * <code>MANAGED</code> promote mode if the performance is better than the previous
     * model. </p>
     */
    inline void SetAutoPromotionResultReason(Aws::String&& value) { m_autoPromotionResultReason = std::move(value); }

    /**
     * <p>Indicates the reason for the <code>AutoPromotionResult</code>. For example, a
     * model might not be promoted if its performance was worse than the active
     * version, if there was an error during training, or if the retraining scheduler
     * was using <code>MANUAL</code> promote mode. The model will be promoted in
     * <code>MANAGED</code> promote mode if the performance is better than the previous
     * model. </p>
     */
    inline void SetAutoPromotionResultReason(const char* value) { m_autoPromotionResultReason.assign(value); }

    /**
     * <p>Indicates the reason for the <code>AutoPromotionResult</code>. For example, a
     * model might not be promoted if its performance was worse than the active
     * version, if there was an error during training, or if the retraining scheduler
     * was using <code>MANUAL</code> promote mode. The model will be promoted in
     * <code>MANAGED</code> promote mode if the performance is better than the previous
     * model. </p>
     */
    inline DescribeModelVersionResult& WithAutoPromotionResultReason(const Aws::String& value) { SetAutoPromotionResultReason(value); return *this;}

    /**
     * <p>Indicates the reason for the <code>AutoPromotionResult</code>. For example, a
     * model might not be promoted if its performance was worse than the active
     * version, if there was an error during training, or if the retraining scheduler
     * was using <code>MANUAL</code> promote mode. The model will be promoted in
     * <code>MANAGED</code> promote mode if the performance is better than the previous
     * model. </p>
     */
    inline DescribeModelVersionResult& WithAutoPromotionResultReason(Aws::String&& value) { SetAutoPromotionResultReason(std::move(value)); return *this;}

    /**
     * <p>Indicates the reason for the <code>AutoPromotionResult</code>. For example, a
     * model might not be promoted if its performance was worse than the active
     * version, if there was an error during training, or if the retraining scheduler
     * was using <code>MANUAL</code> promote mode. The model will be promoted in
     * <code>MANAGED</code> promote mode if the performance is better than the previous
     * model. </p>
     */
    inline DescribeModelVersionResult& WithAutoPromotionResultReason(const char* value) { SetAutoPromotionResultReason(value); return *this;}


    /**
     * <p>The Amazon S3 location where Amazon Lookout for Equipment saves the pointwise
     * model diagnostics for the model version.</p>
     */
    inline const ModelDiagnosticsOutputConfiguration& GetModelDiagnosticsOutputConfiguration() const{ return m_modelDiagnosticsOutputConfiguration; }

    /**
     * <p>The Amazon S3 location where Amazon Lookout for Equipment saves the pointwise
     * model diagnostics for the model version.</p>
     */
    inline void SetModelDiagnosticsOutputConfiguration(const ModelDiagnosticsOutputConfiguration& value) { m_modelDiagnosticsOutputConfiguration = value; }

    /**
     * <p>The Amazon S3 location where Amazon Lookout for Equipment saves the pointwise
     * model diagnostics for the model version.</p>
     */
    inline void SetModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfiguration&& value) { m_modelDiagnosticsOutputConfiguration = std::move(value); }

    /**
     * <p>The Amazon S3 location where Amazon Lookout for Equipment saves the pointwise
     * model diagnostics for the model version.</p>
     */
    inline DescribeModelVersionResult& WithModelDiagnosticsOutputConfiguration(const ModelDiagnosticsOutputConfiguration& value) { SetModelDiagnosticsOutputConfiguration(value); return *this;}

    /**
     * <p>The Amazon S3 location where Amazon Lookout for Equipment saves the pointwise
     * model diagnostics for the model version.</p>
     */
    inline DescribeModelVersionResult& WithModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfiguration&& value) { SetModelDiagnosticsOutputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 output prefix for where Lookout for Equipment saves the
     * pointwise model diagnostics for the model version.</p>
     */
    inline const S3Object& GetModelDiagnosticsResultsObject() const{ return m_modelDiagnosticsResultsObject; }

    /**
     * <p>The Amazon S3 output prefix for where Lookout for Equipment saves the
     * pointwise model diagnostics for the model version.</p>
     */
    inline void SetModelDiagnosticsResultsObject(const S3Object& value) { m_modelDiagnosticsResultsObject = value; }

    /**
     * <p>The Amazon S3 output prefix for where Lookout for Equipment saves the
     * pointwise model diagnostics for the model version.</p>
     */
    inline void SetModelDiagnosticsResultsObject(S3Object&& value) { m_modelDiagnosticsResultsObject = std::move(value); }

    /**
     * <p>The Amazon S3 output prefix for where Lookout for Equipment saves the
     * pointwise model diagnostics for the model version.</p>
     */
    inline DescribeModelVersionResult& WithModelDiagnosticsResultsObject(const S3Object& value) { SetModelDiagnosticsResultsObject(value); return *this;}

    /**
     * <p>The Amazon S3 output prefix for where Lookout for Equipment saves the
     * pointwise model diagnostics for the model version.</p>
     */
    inline DescribeModelVersionResult& WithModelDiagnosticsResultsObject(S3Object&& value) { SetModelDiagnosticsResultsObject(std::move(value)); return *this;}


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
    inline const ModelQuality& GetModelQuality() const{ return m_modelQuality; }

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
    inline void SetModelQuality(const ModelQuality& value) { m_modelQuality = value; }

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
    inline void SetModelQuality(ModelQuality&& value) { m_modelQuality = std::move(value); }

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
    inline DescribeModelVersionResult& WithModelQuality(const ModelQuality& value) { SetModelQuality(value); return *this;}

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
    inline DescribeModelVersionResult& WithModelQuality(ModelQuality&& value) { SetModelQuality(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeModelVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeModelVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeModelVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_modelName;

    Aws::String m_modelArn;

    long long m_modelVersion;

    Aws::String m_modelVersionArn;

    ModelVersionStatus m_status;

    ModelVersionSourceType m_sourceType;

    Aws::String m_datasetName;

    Aws::String m_datasetArn;

    Aws::String m_schema;

    LabelsInputConfiguration m_labelsInputConfiguration;

    Aws::Utils::DateTime m_trainingDataStartTime;

    Aws::Utils::DateTime m_trainingDataEndTime;

    Aws::Utils::DateTime m_evaluationDataStartTime;

    Aws::Utils::DateTime m_evaluationDataEndTime;

    Aws::String m_roleArn;

    DataPreProcessingConfiguration m_dataPreProcessingConfiguration;

    Aws::Utils::DateTime m_trainingExecutionStartTime;

    Aws::Utils::DateTime m_trainingExecutionEndTime;

    Aws::String m_failedReason;

    Aws::String m_modelMetrics;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_serverSideKmsKeyId;

    Aws::String m_offCondition;

    Aws::String m_sourceModelVersionArn;

    Aws::Utils::DateTime m_importJobStartTime;

    Aws::Utils::DateTime m_importJobEndTime;

    long long m_importedDataSizeInBytes;

    Aws::String m_priorModelMetrics;

    int m_retrainingAvailableDataInDays;

    AutoPromotionResult m_autoPromotionResult;

    Aws::String m_autoPromotionResultReason;

    ModelDiagnosticsOutputConfiguration m_modelDiagnosticsOutputConfiguration;

    S3Object m_modelDiagnosticsResultsObject;

    ModelQuality m_modelQuality;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
