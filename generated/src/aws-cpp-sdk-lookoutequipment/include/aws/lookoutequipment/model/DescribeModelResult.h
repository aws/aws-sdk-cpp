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
    AWS_LOOKOUTEQUIPMENT_API DescribeModelResult();
    AWS_LOOKOUTEQUIPMENT_API DescribeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the machine learning model being described. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the machine learning model being described. </p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }

    /**
     * <p>The name of the machine learning model being described. </p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }

    /**
     * <p>The name of the machine learning model being described. </p>
     */
    inline void SetModelName(const char* value) { m_modelName.assign(value); }

    /**
     * <p>The name of the machine learning model being described. </p>
     */
    inline DescribeModelResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the machine learning model being described. </p>
     */
    inline DescribeModelResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the machine learning model being described. </p>
     */
    inline DescribeModelResult& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model being described.
     * </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model being described.
     * </p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model being described.
     * </p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model being described.
     * </p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model being described.
     * </p>
     */
    inline DescribeModelResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model being described.
     * </p>
     */
    inline DescribeModelResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model being described.
     * </p>
     */
    inline DescribeModelResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The name of the dataset being used by the machine learning being described.
     * </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset being used by the machine learning being described.
     * </p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetName = value; }

    /**
     * <p>The name of the dataset being used by the machine learning being described.
     * </p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset being used by the machine learning being described.
     * </p>
     */
    inline void SetDatasetName(const char* value) { m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset being used by the machine learning being described.
     * </p>
     */
    inline DescribeModelResult& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset being used by the machine learning being described.
     * </p>
     */
    inline DescribeModelResult& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset being used by the machine learning being described.
     * </p>
     */
    inline DescribeModelResult& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The Amazon Resouce Name (ARN) of the dataset used to create the machine
     * learning model being described. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resouce Name (ARN) of the dataset used to create the machine
     * learning model being described. </p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }

    /**
     * <p>The Amazon Resouce Name (ARN) of the dataset used to create the machine
     * learning model being described. </p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resouce Name (ARN) of the dataset used to create the machine
     * learning model being described. </p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resouce Name (ARN) of the dataset used to create the machine
     * learning model being described. </p>
     */
    inline DescribeModelResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resouce Name (ARN) of the dataset used to create the machine
     * learning model being described. </p>
     */
    inline DescribeModelResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resouce Name (ARN) of the dataset used to create the machine
     * learning model being described. </p>
     */
    inline DescribeModelResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline void SetSchema(const Aws::String& value) { m_schema = value; }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline void SetSchema(const char* value) { m_schema.assign(value); }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline DescribeModelResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline DescribeModelResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline DescribeModelResult& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>Specifies configuration information about the labels input, including its S3
     * location. </p>
     */
    inline const LabelsInputConfiguration& GetLabelsInputConfiguration() const{ return m_labelsInputConfiguration; }

    /**
     * <p>Specifies configuration information about the labels input, including its S3
     * location. </p>
     */
    inline void SetLabelsInputConfiguration(const LabelsInputConfiguration& value) { m_labelsInputConfiguration = value; }

    /**
     * <p>Specifies configuration information about the labels input, including its S3
     * location. </p>
     */
    inline void SetLabelsInputConfiguration(LabelsInputConfiguration&& value) { m_labelsInputConfiguration = std::move(value); }

    /**
     * <p>Specifies configuration information about the labels input, including its S3
     * location. </p>
     */
    inline DescribeModelResult& WithLabelsInputConfiguration(const LabelsInputConfiguration& value) { SetLabelsInputConfiguration(value); return *this;}

    /**
     * <p>Specifies configuration information about the labels input, including its S3
     * location. </p>
     */
    inline DescribeModelResult& WithLabelsInputConfiguration(LabelsInputConfiguration&& value) { SetLabelsInputConfiguration(std::move(value)); return *this;}


    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of training data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataStartTime() const{ return m_trainingDataStartTime; }

    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of training data for the machine learning model. </p>
     */
    inline void SetTrainingDataStartTime(const Aws::Utils::DateTime& value) { m_trainingDataStartTime = value; }

    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of training data for the machine learning model. </p>
     */
    inline void SetTrainingDataStartTime(Aws::Utils::DateTime&& value) { m_trainingDataStartTime = std::move(value); }

    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of training data for the machine learning model. </p>
     */
    inline DescribeModelResult& WithTrainingDataStartTime(const Aws::Utils::DateTime& value) { SetTrainingDataStartTime(value); return *this;}

    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of training data for the machine learning model. </p>
     */
    inline DescribeModelResult& WithTrainingDataStartTime(Aws::Utils::DateTime&& value) { SetTrainingDataStartTime(std::move(value)); return *this;}


    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of training data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataEndTime() const{ return m_trainingDataEndTime; }

    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of training data for the machine learning model. </p>
     */
    inline void SetTrainingDataEndTime(const Aws::Utils::DateTime& value) { m_trainingDataEndTime = value; }

    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of training data for the machine learning model. </p>
     */
    inline void SetTrainingDataEndTime(Aws::Utils::DateTime&& value) { m_trainingDataEndTime = std::move(value); }

    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of training data for the machine learning model. </p>
     */
    inline DescribeModelResult& WithTrainingDataEndTime(const Aws::Utils::DateTime& value) { SetTrainingDataEndTime(value); return *this;}

    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of training data for the machine learning model. </p>
     */
    inline DescribeModelResult& WithTrainingDataEndTime(Aws::Utils::DateTime&& value) { SetTrainingDataEndTime(std::move(value)); return *this;}


    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of evaluation data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataStartTime() const{ return m_evaluationDataStartTime; }

    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of evaluation data for the machine learning model. </p>
     */
    inline void SetEvaluationDataStartTime(const Aws::Utils::DateTime& value) { m_evaluationDataStartTime = value; }

    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of evaluation data for the machine learning model. </p>
     */
    inline void SetEvaluationDataStartTime(Aws::Utils::DateTime&& value) { m_evaluationDataStartTime = std::move(value); }

    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of evaluation data for the machine learning model. </p>
     */
    inline DescribeModelResult& WithEvaluationDataStartTime(const Aws::Utils::DateTime& value) { SetEvaluationDataStartTime(value); return *this;}

    /**
     * <p> Indicates the time reference in the dataset that was used to begin the
     * subset of evaluation data for the machine learning model. </p>
     */
    inline DescribeModelResult& WithEvaluationDataStartTime(Aws::Utils::DateTime&& value) { SetEvaluationDataStartTime(std::move(value)); return *this;}


    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of evaluation data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataEndTime() const{ return m_evaluationDataEndTime; }

    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of evaluation data for the machine learning model. </p>
     */
    inline void SetEvaluationDataEndTime(const Aws::Utils::DateTime& value) { m_evaluationDataEndTime = value; }

    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of evaluation data for the machine learning model. </p>
     */
    inline void SetEvaluationDataEndTime(Aws::Utils::DateTime&& value) { m_evaluationDataEndTime = std::move(value); }

    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of evaluation data for the machine learning model. </p>
     */
    inline DescribeModelResult& WithEvaluationDataEndTime(const Aws::Utils::DateTime& value) { SetEvaluationDataEndTime(value); return *this;}

    /**
     * <p> Indicates the time reference in the dataset that was used to end the subset
     * of evaluation data for the machine learning model. </p>
     */
    inline DescribeModelResult& WithEvaluationDataEndTime(Aws::Utils::DateTime&& value) { SetEvaluationDataEndTime(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the machine learning model being described. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the machine learning model being described. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the machine learning model being described. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the machine learning model being described. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the machine learning model being described. </p>
     */
    inline DescribeModelResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the machine learning model being described. </p>
     */
    inline DescribeModelResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the machine learning model being described. </p>
     */
    inline DescribeModelResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline const DataPreProcessingConfiguration& GetDataPreProcessingConfiguration() const{ return m_dataPreProcessingConfiguration; }

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
    inline void SetDataPreProcessingConfiguration(const DataPreProcessingConfiguration& value) { m_dataPreProcessingConfiguration = value; }

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
    inline void SetDataPreProcessingConfiguration(DataPreProcessingConfiguration&& value) { m_dataPreProcessingConfiguration = std::move(value); }

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
    inline DescribeModelResult& WithDataPreProcessingConfiguration(const DataPreProcessingConfiguration& value) { SetDataPreProcessingConfiguration(value); return *this;}

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
    inline DescribeModelResult& WithDataPreProcessingConfiguration(DataPreProcessingConfiguration&& value) { SetDataPreProcessingConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies the current status of the model being described. Status describes
     * the status of the most recent action of the model. </p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the current status of the model being described. Status describes
     * the status of the most recent action of the model. </p>
     */
    inline void SetStatus(const ModelStatus& value) { m_status = value; }

    /**
     * <p>Specifies the current status of the model being described. Status describes
     * the status of the most recent action of the model. </p>
     */
    inline void SetStatus(ModelStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Specifies the current status of the model being described. Status describes
     * the status of the most recent action of the model. </p>
     */
    inline DescribeModelResult& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the current status of the model being described. Status describes
     * the status of the most recent action of the model. </p>
     */
    inline DescribeModelResult& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates the time at which the training of the machine learning model began.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingExecutionStartTime() const{ return m_trainingExecutionStartTime; }

    /**
     * <p>Indicates the time at which the training of the machine learning model began.
     * </p>
     */
    inline void SetTrainingExecutionStartTime(const Aws::Utils::DateTime& value) { m_trainingExecutionStartTime = value; }

    /**
     * <p>Indicates the time at which the training of the machine learning model began.
     * </p>
     */
    inline void SetTrainingExecutionStartTime(Aws::Utils::DateTime&& value) { m_trainingExecutionStartTime = std::move(value); }

    /**
     * <p>Indicates the time at which the training of the machine learning model began.
     * </p>
     */
    inline DescribeModelResult& WithTrainingExecutionStartTime(const Aws::Utils::DateTime& value) { SetTrainingExecutionStartTime(value); return *this;}

    /**
     * <p>Indicates the time at which the training of the machine learning model began.
     * </p>
     */
    inline DescribeModelResult& WithTrainingExecutionStartTime(Aws::Utils::DateTime&& value) { SetTrainingExecutionStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the time at which the training of the machine learning model was
     * completed. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingExecutionEndTime() const{ return m_trainingExecutionEndTime; }

    /**
     * <p>Indicates the time at which the training of the machine learning model was
     * completed. </p>
     */
    inline void SetTrainingExecutionEndTime(const Aws::Utils::DateTime& value) { m_trainingExecutionEndTime = value; }

    /**
     * <p>Indicates the time at which the training of the machine learning model was
     * completed. </p>
     */
    inline void SetTrainingExecutionEndTime(Aws::Utils::DateTime&& value) { m_trainingExecutionEndTime = std::move(value); }

    /**
     * <p>Indicates the time at which the training of the machine learning model was
     * completed. </p>
     */
    inline DescribeModelResult& WithTrainingExecutionEndTime(const Aws::Utils::DateTime& value) { SetTrainingExecutionEndTime(value); return *this;}

    /**
     * <p>Indicates the time at which the training of the machine learning model was
     * completed. </p>
     */
    inline DescribeModelResult& WithTrainingExecutionEndTime(Aws::Utils::DateTime&& value) { SetTrainingExecutionEndTime(std::move(value)); return *this;}


    /**
     * <p>If the training of the machine learning model failed, this indicates the
     * reason for that failure. </p>
     */
    inline const Aws::String& GetFailedReason() const{ return m_failedReason; }

    /**
     * <p>If the training of the machine learning model failed, this indicates the
     * reason for that failure. </p>
     */
    inline void SetFailedReason(const Aws::String& value) { m_failedReason = value; }

    /**
     * <p>If the training of the machine learning model failed, this indicates the
     * reason for that failure. </p>
     */
    inline void SetFailedReason(Aws::String&& value) { m_failedReason = std::move(value); }

    /**
     * <p>If the training of the machine learning model failed, this indicates the
     * reason for that failure. </p>
     */
    inline void SetFailedReason(const char* value) { m_failedReason.assign(value); }

    /**
     * <p>If the training of the machine learning model failed, this indicates the
     * reason for that failure. </p>
     */
    inline DescribeModelResult& WithFailedReason(const Aws::String& value) { SetFailedReason(value); return *this;}

    /**
     * <p>If the training of the machine learning model failed, this indicates the
     * reason for that failure. </p>
     */
    inline DescribeModelResult& WithFailedReason(Aws::String&& value) { SetFailedReason(std::move(value)); return *this;}

    /**
     * <p>If the training of the machine learning model failed, this indicates the
     * reason for that failure. </p>
     */
    inline DescribeModelResult& WithFailedReason(const char* value) { SetFailedReason(value); return *this;}


    /**
     * <p>The Model Metrics show an aggregated summary of the model's performance
     * within the evaluation time range. This is the JSON content of the metrics
     * created when evaluating the model. </p>
     */
    inline const Aws::String& GetModelMetrics() const{ return m_modelMetrics; }

    /**
     * <p>The Model Metrics show an aggregated summary of the model's performance
     * within the evaluation time range. This is the JSON content of the metrics
     * created when evaluating the model. </p>
     */
    inline void SetModelMetrics(const Aws::String& value) { m_modelMetrics = value; }

    /**
     * <p>The Model Metrics show an aggregated summary of the model's performance
     * within the evaluation time range. This is the JSON content of the metrics
     * created when evaluating the model. </p>
     */
    inline void SetModelMetrics(Aws::String&& value) { m_modelMetrics = std::move(value); }

    /**
     * <p>The Model Metrics show an aggregated summary of the model's performance
     * within the evaluation time range. This is the JSON content of the metrics
     * created when evaluating the model. </p>
     */
    inline void SetModelMetrics(const char* value) { m_modelMetrics.assign(value); }

    /**
     * <p>The Model Metrics show an aggregated summary of the model's performance
     * within the evaluation time range. This is the JSON content of the metrics
     * created when evaluating the model. </p>
     */
    inline DescribeModelResult& WithModelMetrics(const Aws::String& value) { SetModelMetrics(value); return *this;}

    /**
     * <p>The Model Metrics show an aggregated summary of the model's performance
     * within the evaluation time range. This is the JSON content of the metrics
     * created when evaluating the model. </p>
     */
    inline DescribeModelResult& WithModelMetrics(Aws::String&& value) { SetModelMetrics(std::move(value)); return *this;}

    /**
     * <p>The Model Metrics show an aggregated summary of the model's performance
     * within the evaluation time range. This is the JSON content of the metrics
     * created when evaluating the model. </p>
     */
    inline DescribeModelResult& WithModelMetrics(const char* value) { SetModelMetrics(value); return *this;}


    /**
     * <p>Indicates the last time the machine learning model was updated. The type of
     * update is not specified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>Indicates the last time the machine learning model was updated. The type of
     * update is not specified. </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>Indicates the last time the machine learning model was updated. The type of
     * update is not specified. </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>Indicates the last time the machine learning model was updated. The type of
     * update is not specified. </p>
     */
    inline DescribeModelResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>Indicates the last time the machine learning model was updated. The type of
     * update is not specified. </p>
     */
    inline DescribeModelResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the time and date at which the machine learning model was created.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Indicates the time and date at which the machine learning model was created.
     * </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Indicates the time and date at which the machine learning model was created.
     * </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Indicates the time and date at which the machine learning model was created.
     * </p>
     */
    inline DescribeModelResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Indicates the time and date at which the machine learning model was created.
     * </p>
     */
    inline DescribeModelResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const{ return m_serverSideKmsKeyId; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const Aws::String& value) { m_serverSideKmsKeyId = value; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(Aws::String&& value) { m_serverSideKmsKeyId = std::move(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const char* value) { m_serverSideKmsKeyId.assign(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline DescribeModelResult& WithServerSideKmsKeyId(const Aws::String& value) { SetServerSideKmsKeyId(value); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline DescribeModelResult& WithServerSideKmsKeyId(Aws::String&& value) { SetServerSideKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline DescribeModelResult& WithServerSideKmsKeyId(const char* value) { SetServerSideKmsKeyId(value); return *this;}


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
    inline DescribeModelResult& WithOffCondition(const Aws::String& value) { SetOffCondition(value); return *this;}

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline DescribeModelResult& WithOffCondition(Aws::String&& value) { SetOffCondition(std::move(value)); return *this;}

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline DescribeModelResult& WithOffCondition(const char* value) { SetOffCondition(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source model version. This field
     * appears if the active model version was imported.</p>
     */
    inline const Aws::String& GetSourceModelVersionArn() const{ return m_sourceModelVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source model version. This field
     * appears if the active model version was imported.</p>
     */
    inline void SetSourceModelVersionArn(const Aws::String& value) { m_sourceModelVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source model version. This field
     * appears if the active model version was imported.</p>
     */
    inline void SetSourceModelVersionArn(Aws::String&& value) { m_sourceModelVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source model version. This field
     * appears if the active model version was imported.</p>
     */
    inline void SetSourceModelVersionArn(const char* value) { m_sourceModelVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source model version. This field
     * appears if the active model version was imported.</p>
     */
    inline DescribeModelResult& WithSourceModelVersionArn(const Aws::String& value) { SetSourceModelVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source model version. This field
     * appears if the active model version was imported.</p>
     */
    inline DescribeModelResult& WithSourceModelVersionArn(Aws::String&& value) { SetSourceModelVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source model version. This field
     * appears if the active model version was imported.</p>
     */
    inline DescribeModelResult& WithSourceModelVersionArn(const char* value) { SetSourceModelVersionArn(value); return *this;}


    /**
     * <p>The date and time when the import job was started. This field appears if the
     * active model version was imported.</p>
     */
    inline const Aws::Utils::DateTime& GetImportJobStartTime() const{ return m_importJobStartTime; }

    /**
     * <p>The date and time when the import job was started. This field appears if the
     * active model version was imported.</p>
     */
    inline void SetImportJobStartTime(const Aws::Utils::DateTime& value) { m_importJobStartTime = value; }

    /**
     * <p>The date and time when the import job was started. This field appears if the
     * active model version was imported.</p>
     */
    inline void SetImportJobStartTime(Aws::Utils::DateTime&& value) { m_importJobStartTime = std::move(value); }

    /**
     * <p>The date and time when the import job was started. This field appears if the
     * active model version was imported.</p>
     */
    inline DescribeModelResult& WithImportJobStartTime(const Aws::Utils::DateTime& value) { SetImportJobStartTime(value); return *this;}

    /**
     * <p>The date and time when the import job was started. This field appears if the
     * active model version was imported.</p>
     */
    inline DescribeModelResult& WithImportJobStartTime(Aws::Utils::DateTime&& value) { SetImportJobStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the import job was completed. This field appears if
     * the active model version was imported.</p>
     */
    inline const Aws::Utils::DateTime& GetImportJobEndTime() const{ return m_importJobEndTime; }

    /**
     * <p>The date and time when the import job was completed. This field appears if
     * the active model version was imported.</p>
     */
    inline void SetImportJobEndTime(const Aws::Utils::DateTime& value) { m_importJobEndTime = value; }

    /**
     * <p>The date and time when the import job was completed. This field appears if
     * the active model version was imported.</p>
     */
    inline void SetImportJobEndTime(Aws::Utils::DateTime&& value) { m_importJobEndTime = std::move(value); }

    /**
     * <p>The date and time when the import job was completed. This field appears if
     * the active model version was imported.</p>
     */
    inline DescribeModelResult& WithImportJobEndTime(const Aws::Utils::DateTime& value) { SetImportJobEndTime(value); return *this;}

    /**
     * <p>The date and time when the import job was completed. This field appears if
     * the active model version was imported.</p>
     */
    inline DescribeModelResult& WithImportJobEndTime(Aws::Utils::DateTime&& value) { SetImportJobEndTime(std::move(value)); return *this;}


    /**
     * <p>The name of the model version used by the inference schedular when running a
     * scheduled inference execution.</p>
     */
    inline long long GetActiveModelVersion() const{ return m_activeModelVersion; }

    /**
     * <p>The name of the model version used by the inference schedular when running a
     * scheduled inference execution.</p>
     */
    inline void SetActiveModelVersion(long long value) { m_activeModelVersion = value; }

    /**
     * <p>The name of the model version used by the inference schedular when running a
     * scheduled inference execution.</p>
     */
    inline DescribeModelResult& WithActiveModelVersion(long long value) { SetActiveModelVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model version used by the inference
     * scheduler when running a scheduled inference execution.</p>
     */
    inline const Aws::String& GetActiveModelVersionArn() const{ return m_activeModelVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version used by the inference
     * scheduler when running a scheduled inference execution.</p>
     */
    inline void SetActiveModelVersionArn(const Aws::String& value) { m_activeModelVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version used by the inference
     * scheduler when running a scheduled inference execution.</p>
     */
    inline void SetActiveModelVersionArn(Aws::String&& value) { m_activeModelVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version used by the inference
     * scheduler when running a scheduled inference execution.</p>
     */
    inline void SetActiveModelVersionArn(const char* value) { m_activeModelVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version used by the inference
     * scheduler when running a scheduled inference execution.</p>
     */
    inline DescribeModelResult& WithActiveModelVersionArn(const Aws::String& value) { SetActiveModelVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version used by the inference
     * scheduler when running a scheduled inference execution.</p>
     */
    inline DescribeModelResult& WithActiveModelVersionArn(Aws::String&& value) { SetActiveModelVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version used by the inference
     * scheduler when running a scheduled inference execution.</p>
     */
    inline DescribeModelResult& WithActiveModelVersionArn(const char* value) { SetActiveModelVersionArn(value); return *this;}


    /**
     * <p>The date the active model version was activated.</p>
     */
    inline const Aws::Utils::DateTime& GetModelVersionActivatedAt() const{ return m_modelVersionActivatedAt; }

    /**
     * <p>The date the active model version was activated.</p>
     */
    inline void SetModelVersionActivatedAt(const Aws::Utils::DateTime& value) { m_modelVersionActivatedAt = value; }

    /**
     * <p>The date the active model version was activated.</p>
     */
    inline void SetModelVersionActivatedAt(Aws::Utils::DateTime&& value) { m_modelVersionActivatedAt = std::move(value); }

    /**
     * <p>The date the active model version was activated.</p>
     */
    inline DescribeModelResult& WithModelVersionActivatedAt(const Aws::Utils::DateTime& value) { SetModelVersionActivatedAt(value); return *this;}

    /**
     * <p>The date the active model version was activated.</p>
     */
    inline DescribeModelResult& WithModelVersionActivatedAt(Aws::Utils::DateTime&& value) { SetModelVersionActivatedAt(std::move(value)); return *this;}


    /**
     * <p>The model version that was set as the active model version prior to the
     * current active model version.</p>
     */
    inline long long GetPreviousActiveModelVersion() const{ return m_previousActiveModelVersion; }

    /**
     * <p>The model version that was set as the active model version prior to the
     * current active model version.</p>
     */
    inline void SetPreviousActiveModelVersion(long long value) { m_previousActiveModelVersion = value; }

    /**
     * <p>The model version that was set as the active model version prior to the
     * current active model version.</p>
     */
    inline DescribeModelResult& WithPreviousActiveModelVersion(long long value) { SetPreviousActiveModelVersion(value); return *this;}


    /**
     * <p>The ARN of the model version that was set as the active model version prior
     * to the current active model version.</p>
     */
    inline const Aws::String& GetPreviousActiveModelVersionArn() const{ return m_previousActiveModelVersionArn; }

    /**
     * <p>The ARN of the model version that was set as the active model version prior
     * to the current active model version.</p>
     */
    inline void SetPreviousActiveModelVersionArn(const Aws::String& value) { m_previousActiveModelVersionArn = value; }

    /**
     * <p>The ARN of the model version that was set as the active model version prior
     * to the current active model version.</p>
     */
    inline void SetPreviousActiveModelVersionArn(Aws::String&& value) { m_previousActiveModelVersionArn = std::move(value); }

    /**
     * <p>The ARN of the model version that was set as the active model version prior
     * to the current active model version.</p>
     */
    inline void SetPreviousActiveModelVersionArn(const char* value) { m_previousActiveModelVersionArn.assign(value); }

    /**
     * <p>The ARN of the model version that was set as the active model version prior
     * to the current active model version.</p>
     */
    inline DescribeModelResult& WithPreviousActiveModelVersionArn(const Aws::String& value) { SetPreviousActiveModelVersionArn(value); return *this;}

    /**
     * <p>The ARN of the model version that was set as the active model version prior
     * to the current active model version.</p>
     */
    inline DescribeModelResult& WithPreviousActiveModelVersionArn(Aws::String&& value) { SetPreviousActiveModelVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model version that was set as the active model version prior
     * to the current active model version.</p>
     */
    inline DescribeModelResult& WithPreviousActiveModelVersionArn(const char* value) { SetPreviousActiveModelVersionArn(value); return *this;}


    /**
     * <p>The date and time when the previous active model version was activated.</p>
     */
    inline const Aws::Utils::DateTime& GetPreviousModelVersionActivatedAt() const{ return m_previousModelVersionActivatedAt; }

    /**
     * <p>The date and time when the previous active model version was activated.</p>
     */
    inline void SetPreviousModelVersionActivatedAt(const Aws::Utils::DateTime& value) { m_previousModelVersionActivatedAt = value; }

    /**
     * <p>The date and time when the previous active model version was activated.</p>
     */
    inline void SetPreviousModelVersionActivatedAt(Aws::Utils::DateTime&& value) { m_previousModelVersionActivatedAt = std::move(value); }

    /**
     * <p>The date and time when the previous active model version was activated.</p>
     */
    inline DescribeModelResult& WithPreviousModelVersionActivatedAt(const Aws::Utils::DateTime& value) { SetPreviousModelVersionActivatedAt(value); return *this;}

    /**
     * <p>The date and time when the previous active model version was activated.</p>
     */
    inline DescribeModelResult& WithPreviousModelVersionActivatedAt(Aws::Utils::DateTime&& value) { SetPreviousModelVersionActivatedAt(std::move(value)); return *this;}


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
    inline DescribeModelResult& WithPriorModelMetrics(const Aws::String& value) { SetPriorModelMetrics(value); return *this;}

    /**
     * <p>If the model version was retrained, this field shows a summary of the
     * performance of the prior model on the new training range. You can use the
     * information in this JSON-formatted object to compare the new model version and
     * the prior model version.</p>
     */
    inline DescribeModelResult& WithPriorModelMetrics(Aws::String&& value) { SetPriorModelMetrics(std::move(value)); return *this;}

    /**
     * <p>If the model version was retrained, this field shows a summary of the
     * performance of the prior model on the new training range. You can use the
     * information in this JSON-formatted object to compare the new model version and
     * the prior model version.</p>
     */
    inline DescribeModelResult& WithPriorModelMetrics(const char* value) { SetPriorModelMetrics(value); return *this;}


    /**
     * <p>If the model version was generated by retraining and the training failed,
     * this indicates the reason for that failure. </p>
     */
    inline const Aws::String& GetLatestScheduledRetrainingFailedReason() const{ return m_latestScheduledRetrainingFailedReason; }

    /**
     * <p>If the model version was generated by retraining and the training failed,
     * this indicates the reason for that failure. </p>
     */
    inline void SetLatestScheduledRetrainingFailedReason(const Aws::String& value) { m_latestScheduledRetrainingFailedReason = value; }

    /**
     * <p>If the model version was generated by retraining and the training failed,
     * this indicates the reason for that failure. </p>
     */
    inline void SetLatestScheduledRetrainingFailedReason(Aws::String&& value) { m_latestScheduledRetrainingFailedReason = std::move(value); }

    /**
     * <p>If the model version was generated by retraining and the training failed,
     * this indicates the reason for that failure. </p>
     */
    inline void SetLatestScheduledRetrainingFailedReason(const char* value) { m_latestScheduledRetrainingFailedReason.assign(value); }

    /**
     * <p>If the model version was generated by retraining and the training failed,
     * this indicates the reason for that failure. </p>
     */
    inline DescribeModelResult& WithLatestScheduledRetrainingFailedReason(const Aws::String& value) { SetLatestScheduledRetrainingFailedReason(value); return *this;}

    /**
     * <p>If the model version was generated by retraining and the training failed,
     * this indicates the reason for that failure. </p>
     */
    inline DescribeModelResult& WithLatestScheduledRetrainingFailedReason(Aws::String&& value) { SetLatestScheduledRetrainingFailedReason(std::move(value)); return *this;}

    /**
     * <p>If the model version was generated by retraining and the training failed,
     * this indicates the reason for that failure. </p>
     */
    inline DescribeModelResult& WithLatestScheduledRetrainingFailedReason(const char* value) { SetLatestScheduledRetrainingFailedReason(value); return *this;}


    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline const ModelVersionStatus& GetLatestScheduledRetrainingStatus() const{ return m_latestScheduledRetrainingStatus; }

    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline void SetLatestScheduledRetrainingStatus(const ModelVersionStatus& value) { m_latestScheduledRetrainingStatus = value; }

    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline void SetLatestScheduledRetrainingStatus(ModelVersionStatus&& value) { m_latestScheduledRetrainingStatus = std::move(value); }

    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline DescribeModelResult& WithLatestScheduledRetrainingStatus(const ModelVersionStatus& value) { SetLatestScheduledRetrainingStatus(value); return *this;}

    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline DescribeModelResult& WithLatestScheduledRetrainingStatus(ModelVersionStatus&& value) { SetLatestScheduledRetrainingStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates the most recent model version that was generated by retraining.
     * </p>
     */
    inline long long GetLatestScheduledRetrainingModelVersion() const{ return m_latestScheduledRetrainingModelVersion; }

    /**
     * <p>Indicates the most recent model version that was generated by retraining.
     * </p>
     */
    inline void SetLatestScheduledRetrainingModelVersion(long long value) { m_latestScheduledRetrainingModelVersion = value; }

    /**
     * <p>Indicates the most recent model version that was generated by retraining.
     * </p>
     */
    inline DescribeModelResult& WithLatestScheduledRetrainingModelVersion(long long value) { SetLatestScheduledRetrainingModelVersion(value); return *this;}


    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline const Aws::Utils::DateTime& GetLatestScheduledRetrainingStartTime() const{ return m_latestScheduledRetrainingStartTime; }

    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline void SetLatestScheduledRetrainingStartTime(const Aws::Utils::DateTime& value) { m_latestScheduledRetrainingStartTime = value; }

    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline void SetLatestScheduledRetrainingStartTime(Aws::Utils::DateTime&& value) { m_latestScheduledRetrainingStartTime = std::move(value); }

    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline DescribeModelResult& WithLatestScheduledRetrainingStartTime(const Aws::Utils::DateTime& value) { SetLatestScheduledRetrainingStartTime(value); return *this;}

    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline DescribeModelResult& WithLatestScheduledRetrainingStartTime(Aws::Utils::DateTime&& value) { SetLatestScheduledRetrainingStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the number of days of data used in the most recent scheduled
     * retraining run. </p>
     */
    inline int GetLatestScheduledRetrainingAvailableDataInDays() const{ return m_latestScheduledRetrainingAvailableDataInDays; }

    /**
     * <p>Indicates the number of days of data used in the most recent scheduled
     * retraining run. </p>
     */
    inline void SetLatestScheduledRetrainingAvailableDataInDays(int value) { m_latestScheduledRetrainingAvailableDataInDays = value; }

    /**
     * <p>Indicates the number of days of data used in the most recent scheduled
     * retraining run. </p>
     */
    inline DescribeModelResult& WithLatestScheduledRetrainingAvailableDataInDays(int value) { SetLatestScheduledRetrainingAvailableDataInDays(value); return *this;}


    /**
     * <p>Indicates the date and time that the next scheduled retraining run will start
     * on. Lookout for Equipment truncates the time you provide to the nearest UTC
     * day.</p>
     */
    inline const Aws::Utils::DateTime& GetNextScheduledRetrainingStartDate() const{ return m_nextScheduledRetrainingStartDate; }

    /**
     * <p>Indicates the date and time that the next scheduled retraining run will start
     * on. Lookout for Equipment truncates the time you provide to the nearest UTC
     * day.</p>
     */
    inline void SetNextScheduledRetrainingStartDate(const Aws::Utils::DateTime& value) { m_nextScheduledRetrainingStartDate = value; }

    /**
     * <p>Indicates the date and time that the next scheduled retraining run will start
     * on. Lookout for Equipment truncates the time you provide to the nearest UTC
     * day.</p>
     */
    inline void SetNextScheduledRetrainingStartDate(Aws::Utils::DateTime&& value) { m_nextScheduledRetrainingStartDate = std::move(value); }

    /**
     * <p>Indicates the date and time that the next scheduled retraining run will start
     * on. Lookout for Equipment truncates the time you provide to the nearest UTC
     * day.</p>
     */
    inline DescribeModelResult& WithNextScheduledRetrainingStartDate(const Aws::Utils::DateTime& value) { SetNextScheduledRetrainingStartDate(value); return *this;}

    /**
     * <p>Indicates the date and time that the next scheduled retraining run will start
     * on. Lookout for Equipment truncates the time you provide to the nearest UTC
     * day.</p>
     */
    inline DescribeModelResult& WithNextScheduledRetrainingStartDate(Aws::Utils::DateTime&& value) { SetNextScheduledRetrainingStartDate(std::move(value)); return *this;}


    /**
     * <p>Indicates the start time of the inference data that has been accumulated.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetAccumulatedInferenceDataStartTime() const{ return m_accumulatedInferenceDataStartTime; }

    /**
     * <p>Indicates the start time of the inference data that has been accumulated.
     * </p>
     */
    inline void SetAccumulatedInferenceDataStartTime(const Aws::Utils::DateTime& value) { m_accumulatedInferenceDataStartTime = value; }

    /**
     * <p>Indicates the start time of the inference data that has been accumulated.
     * </p>
     */
    inline void SetAccumulatedInferenceDataStartTime(Aws::Utils::DateTime&& value) { m_accumulatedInferenceDataStartTime = std::move(value); }

    /**
     * <p>Indicates the start time of the inference data that has been accumulated.
     * </p>
     */
    inline DescribeModelResult& WithAccumulatedInferenceDataStartTime(const Aws::Utils::DateTime& value) { SetAccumulatedInferenceDataStartTime(value); return *this;}

    /**
     * <p>Indicates the start time of the inference data that has been accumulated.
     * </p>
     */
    inline DescribeModelResult& WithAccumulatedInferenceDataStartTime(Aws::Utils::DateTime&& value) { SetAccumulatedInferenceDataStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the end time of the inference data that has been accumulated. </p>
     */
    inline const Aws::Utils::DateTime& GetAccumulatedInferenceDataEndTime() const{ return m_accumulatedInferenceDataEndTime; }

    /**
     * <p>Indicates the end time of the inference data that has been accumulated. </p>
     */
    inline void SetAccumulatedInferenceDataEndTime(const Aws::Utils::DateTime& value) { m_accumulatedInferenceDataEndTime = value; }

    /**
     * <p>Indicates the end time of the inference data that has been accumulated. </p>
     */
    inline void SetAccumulatedInferenceDataEndTime(Aws::Utils::DateTime&& value) { m_accumulatedInferenceDataEndTime = std::move(value); }

    /**
     * <p>Indicates the end time of the inference data that has been accumulated. </p>
     */
    inline DescribeModelResult& WithAccumulatedInferenceDataEndTime(const Aws::Utils::DateTime& value) { SetAccumulatedInferenceDataEndTime(value); return *this;}

    /**
     * <p>Indicates the end time of the inference data that has been accumulated. </p>
     */
    inline DescribeModelResult& WithAccumulatedInferenceDataEndTime(Aws::Utils::DateTime&& value) { SetAccumulatedInferenceDataEndTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline const RetrainingSchedulerStatus& GetRetrainingSchedulerStatus() const{ return m_retrainingSchedulerStatus; }

    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline void SetRetrainingSchedulerStatus(const RetrainingSchedulerStatus& value) { m_retrainingSchedulerStatus = value; }

    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline void SetRetrainingSchedulerStatus(RetrainingSchedulerStatus&& value) { m_retrainingSchedulerStatus = std::move(value); }

    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline DescribeModelResult& WithRetrainingSchedulerStatus(const RetrainingSchedulerStatus& value) { SetRetrainingSchedulerStatus(value); return *this;}

    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline DescribeModelResult& WithRetrainingSchedulerStatus(RetrainingSchedulerStatus&& value) { SetRetrainingSchedulerStatus(std::move(value)); return *this;}


    /**
     * <p>Configuration information for the model's pointwise model diagnostics.</p>
     */
    inline const ModelDiagnosticsOutputConfiguration& GetModelDiagnosticsOutputConfiguration() const{ return m_modelDiagnosticsOutputConfiguration; }

    /**
     * <p>Configuration information for the model's pointwise model diagnostics.</p>
     */
    inline void SetModelDiagnosticsOutputConfiguration(const ModelDiagnosticsOutputConfiguration& value) { m_modelDiagnosticsOutputConfiguration = value; }

    /**
     * <p>Configuration information for the model's pointwise model diagnostics.</p>
     */
    inline void SetModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfiguration&& value) { m_modelDiagnosticsOutputConfiguration = std::move(value); }

    /**
     * <p>Configuration information for the model's pointwise model diagnostics.</p>
     */
    inline DescribeModelResult& WithModelDiagnosticsOutputConfiguration(const ModelDiagnosticsOutputConfiguration& value) { SetModelDiagnosticsOutputConfiguration(value); return *this;}

    /**
     * <p>Configuration information for the model's pointwise model diagnostics.</p>
     */
    inline DescribeModelResult& WithModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfiguration&& value) { SetModelDiagnosticsOutputConfiguration(std::move(value)); return *this;}


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
    inline DescribeModelResult& WithModelQuality(const ModelQuality& value) { SetModelQuality(value); return *this;}

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
    inline DescribeModelResult& WithModelQuality(ModelQuality&& value) { SetModelQuality(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_modelName;

    Aws::String m_modelArn;

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

    ModelStatus m_status;

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

    long long m_activeModelVersion;

    Aws::String m_activeModelVersionArn;

    Aws::Utils::DateTime m_modelVersionActivatedAt;

    long long m_previousActiveModelVersion;

    Aws::String m_previousActiveModelVersionArn;

    Aws::Utils::DateTime m_previousModelVersionActivatedAt;

    Aws::String m_priorModelMetrics;

    Aws::String m_latestScheduledRetrainingFailedReason;

    ModelVersionStatus m_latestScheduledRetrainingStatus;

    long long m_latestScheduledRetrainingModelVersion;

    Aws::Utils::DateTime m_latestScheduledRetrainingStartTime;

    int m_latestScheduledRetrainingAvailableDataInDays;

    Aws::Utils::DateTime m_nextScheduledRetrainingStartDate;

    Aws::Utils::DateTime m_accumulatedInferenceDataStartTime;

    Aws::Utils::DateTime m_accumulatedInferenceDataEndTime;

    RetrainingSchedulerStatus m_retrainingSchedulerStatus;

    ModelDiagnosticsOutputConfiguration m_modelDiagnosticsOutputConfiguration;

    ModelQuality m_modelQuality;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
