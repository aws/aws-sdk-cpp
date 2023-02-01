/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/DatasetSchema.h>
#include <aws/lookoutequipment/model/LabelsInputConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/DataPreProcessingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class CreateModelRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModel"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the ML model to be created.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name for the ML model to be created.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name for the ML model to be created.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name for the ML model to be created.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name for the ML model to be created.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name for the ML model to be created.</p>
     */
    inline CreateModelRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name for the ML model to be created.</p>
     */
    inline CreateModelRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name for the ML model to be created.</p>
     */
    inline CreateModelRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The name of the dataset for the ML model being created. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset for the ML model being created. </p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset for the ML model being created. </p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset for the ML model being created. </p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset for the ML model being created. </p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset for the ML model being created. </p>
     */
    inline CreateModelRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset for the ML model being created. </p>
     */
    inline CreateModelRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset for the ML model being created. </p>
     */
    inline CreateModelRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The data schema for the ML model being created. </p>
     */
    inline const DatasetSchema& GetDatasetSchema() const{ return m_datasetSchema; }

    /**
     * <p>The data schema for the ML model being created. </p>
     */
    inline bool DatasetSchemaHasBeenSet() const { return m_datasetSchemaHasBeenSet; }

    /**
     * <p>The data schema for the ML model being created. </p>
     */
    inline void SetDatasetSchema(const DatasetSchema& value) { m_datasetSchemaHasBeenSet = true; m_datasetSchema = value; }

    /**
     * <p>The data schema for the ML model being created. </p>
     */
    inline void SetDatasetSchema(DatasetSchema&& value) { m_datasetSchemaHasBeenSet = true; m_datasetSchema = std::move(value); }

    /**
     * <p>The data schema for the ML model being created. </p>
     */
    inline CreateModelRequest& WithDatasetSchema(const DatasetSchema& value) { SetDatasetSchema(value); return *this;}

    /**
     * <p>The data schema for the ML model being created. </p>
     */
    inline CreateModelRequest& WithDatasetSchema(DatasetSchema&& value) { SetDatasetSchema(std::move(value)); return *this;}


    /**
     * <p>The input configuration for the labels being used for the ML model that's
     * being created. </p>
     */
    inline const LabelsInputConfiguration& GetLabelsInputConfiguration() const{ return m_labelsInputConfiguration; }

    /**
     * <p>The input configuration for the labels being used for the ML model that's
     * being created. </p>
     */
    inline bool LabelsInputConfigurationHasBeenSet() const { return m_labelsInputConfigurationHasBeenSet; }

    /**
     * <p>The input configuration for the labels being used for the ML model that's
     * being created. </p>
     */
    inline void SetLabelsInputConfiguration(const LabelsInputConfiguration& value) { m_labelsInputConfigurationHasBeenSet = true; m_labelsInputConfiguration = value; }

    /**
     * <p>The input configuration for the labels being used for the ML model that's
     * being created. </p>
     */
    inline void SetLabelsInputConfiguration(LabelsInputConfiguration&& value) { m_labelsInputConfigurationHasBeenSet = true; m_labelsInputConfiguration = std::move(value); }

    /**
     * <p>The input configuration for the labels being used for the ML model that's
     * being created. </p>
     */
    inline CreateModelRequest& WithLabelsInputConfiguration(const LabelsInputConfiguration& value) { SetLabelsInputConfiguration(value); return *this;}

    /**
     * <p>The input configuration for the labels being used for the ML model that's
     * being created. </p>
     */
    inline CreateModelRequest& WithLabelsInputConfiguration(LabelsInputConfiguration&& value) { SetLabelsInputConfiguration(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateModelRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateModelRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateModelRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of training data for the ML model. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataStartTime() const{ return m_trainingDataStartTime; }

    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of training data for the ML model. </p>
     */
    inline bool TrainingDataStartTimeHasBeenSet() const { return m_trainingDataStartTimeHasBeenSet; }

    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of training data for the ML model. </p>
     */
    inline void SetTrainingDataStartTime(const Aws::Utils::DateTime& value) { m_trainingDataStartTimeHasBeenSet = true; m_trainingDataStartTime = value; }

    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of training data for the ML model. </p>
     */
    inline void SetTrainingDataStartTime(Aws::Utils::DateTime&& value) { m_trainingDataStartTimeHasBeenSet = true; m_trainingDataStartTime = std::move(value); }

    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of training data for the ML model. </p>
     */
    inline CreateModelRequest& WithTrainingDataStartTime(const Aws::Utils::DateTime& value) { SetTrainingDataStartTime(value); return *this;}

    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of training data for the ML model. </p>
     */
    inline CreateModelRequest& WithTrainingDataStartTime(Aws::Utils::DateTime&& value) { SetTrainingDataStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the time reference in the dataset that should be used to end the
     * subset of training data for the ML model. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataEndTime() const{ return m_trainingDataEndTime; }

    /**
     * <p>Indicates the time reference in the dataset that should be used to end the
     * subset of training data for the ML model. </p>
     */
    inline bool TrainingDataEndTimeHasBeenSet() const { return m_trainingDataEndTimeHasBeenSet; }

    /**
     * <p>Indicates the time reference in the dataset that should be used to end the
     * subset of training data for the ML model. </p>
     */
    inline void SetTrainingDataEndTime(const Aws::Utils::DateTime& value) { m_trainingDataEndTimeHasBeenSet = true; m_trainingDataEndTime = value; }

    /**
     * <p>Indicates the time reference in the dataset that should be used to end the
     * subset of training data for the ML model. </p>
     */
    inline void SetTrainingDataEndTime(Aws::Utils::DateTime&& value) { m_trainingDataEndTimeHasBeenSet = true; m_trainingDataEndTime = std::move(value); }

    /**
     * <p>Indicates the time reference in the dataset that should be used to end the
     * subset of training data for the ML model. </p>
     */
    inline CreateModelRequest& WithTrainingDataEndTime(const Aws::Utils::DateTime& value) { SetTrainingDataEndTime(value); return *this;}

    /**
     * <p>Indicates the time reference in the dataset that should be used to end the
     * subset of training data for the ML model. </p>
     */
    inline CreateModelRequest& WithTrainingDataEndTime(Aws::Utils::DateTime&& value) { SetTrainingDataEndTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of evaluation data for the ML model. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataStartTime() const{ return m_evaluationDataStartTime; }

    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of evaluation data for the ML model. </p>
     */
    inline bool EvaluationDataStartTimeHasBeenSet() const { return m_evaluationDataStartTimeHasBeenSet; }

    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of evaluation data for the ML model. </p>
     */
    inline void SetEvaluationDataStartTime(const Aws::Utils::DateTime& value) { m_evaluationDataStartTimeHasBeenSet = true; m_evaluationDataStartTime = value; }

    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of evaluation data for the ML model. </p>
     */
    inline void SetEvaluationDataStartTime(Aws::Utils::DateTime&& value) { m_evaluationDataStartTimeHasBeenSet = true; m_evaluationDataStartTime = std::move(value); }

    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of evaluation data for the ML model. </p>
     */
    inline CreateModelRequest& WithEvaluationDataStartTime(const Aws::Utils::DateTime& value) { SetEvaluationDataStartTime(value); return *this;}

    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of evaluation data for the ML model. </p>
     */
    inline CreateModelRequest& WithEvaluationDataStartTime(Aws::Utils::DateTime&& value) { SetEvaluationDataStartTime(std::move(value)); return *this;}


    /**
     * <p> Indicates the time reference in the dataset that should be used to end the
     * subset of evaluation data for the ML model. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataEndTime() const{ return m_evaluationDataEndTime; }

    /**
     * <p> Indicates the time reference in the dataset that should be used to end the
     * subset of evaluation data for the ML model. </p>
     */
    inline bool EvaluationDataEndTimeHasBeenSet() const { return m_evaluationDataEndTimeHasBeenSet; }

    /**
     * <p> Indicates the time reference in the dataset that should be used to end the
     * subset of evaluation data for the ML model. </p>
     */
    inline void SetEvaluationDataEndTime(const Aws::Utils::DateTime& value) { m_evaluationDataEndTimeHasBeenSet = true; m_evaluationDataEndTime = value; }

    /**
     * <p> Indicates the time reference in the dataset that should be used to end the
     * subset of evaluation data for the ML model. </p>
     */
    inline void SetEvaluationDataEndTime(Aws::Utils::DateTime&& value) { m_evaluationDataEndTimeHasBeenSet = true; m_evaluationDataEndTime = std::move(value); }

    /**
     * <p> Indicates the time reference in the dataset that should be used to end the
     * subset of evaluation data for the ML model. </p>
     */
    inline CreateModelRequest& WithEvaluationDataEndTime(const Aws::Utils::DateTime& value) { SetEvaluationDataEndTime(value); return *this;}

    /**
     * <p> Indicates the time reference in the dataset that should be used to end the
     * subset of evaluation data for the ML model. </p>
     */
    inline CreateModelRequest& WithEvaluationDataEndTime(Aws::Utils::DateTime&& value) { SetEvaluationDataEndTime(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the ML model. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the ML model. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the ML model. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the ML model. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the ML model. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the ML model. </p>
     */
    inline CreateModelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the ML model. </p>
     */
    inline CreateModelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the ML model. </p>
     */
    inline CreateModelRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline bool DataPreProcessingConfigurationHasBeenSet() const { return m_dataPreProcessingConfigurationHasBeenSet; }

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
    inline void SetDataPreProcessingConfiguration(const DataPreProcessingConfiguration& value) { m_dataPreProcessingConfigurationHasBeenSet = true; m_dataPreProcessingConfiguration = value; }

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
    inline void SetDataPreProcessingConfiguration(DataPreProcessingConfiguration&& value) { m_dataPreProcessingConfigurationHasBeenSet = true; m_dataPreProcessingConfiguration = std::move(value); }

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
    inline CreateModelRequest& WithDataPreProcessingConfiguration(const DataPreProcessingConfiguration& value) { SetDataPreProcessingConfiguration(value); return *this;}

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
    inline CreateModelRequest& WithDataPreProcessingConfiguration(DataPreProcessingConfiguration&& value) { SetDataPreProcessingConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const{ return m_serverSideKmsKeyId; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline bool ServerSideKmsKeyIdHasBeenSet() const { return m_serverSideKmsKeyIdHasBeenSet; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const Aws::String& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = value; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(Aws::String&& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = std::move(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const char* value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId.assign(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline CreateModelRequest& WithServerSideKmsKeyId(const Aws::String& value) { SetServerSideKmsKeyId(value); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline CreateModelRequest& WithServerSideKmsKeyId(Aws::String&& value) { SetServerSideKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline CreateModelRequest& WithServerSideKmsKeyId(const char* value) { SetServerSideKmsKeyId(value); return *this;}


    /**
     * <p> Any tags associated with the ML model being created. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> Any tags associated with the ML model being created. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> Any tags associated with the ML model being created. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> Any tags associated with the ML model being created. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> Any tags associated with the ML model being created. </p>
     */
    inline CreateModelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> Any tags associated with the ML model being created. </p>
     */
    inline CreateModelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> Any tags associated with the ML model being created. </p>
     */
    inline CreateModelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> Any tags associated with the ML model being created. </p>
     */
    inline CreateModelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


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
    inline bool OffConditionHasBeenSet() const { return m_offConditionHasBeenSet; }

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline void SetOffCondition(const Aws::String& value) { m_offConditionHasBeenSet = true; m_offCondition = value; }

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline void SetOffCondition(Aws::String&& value) { m_offConditionHasBeenSet = true; m_offCondition = std::move(value); }

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline void SetOffCondition(const char* value) { m_offConditionHasBeenSet = true; m_offCondition.assign(value); }

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline CreateModelRequest& WithOffCondition(const Aws::String& value) { SetOffCondition(value); return *this;}

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline CreateModelRequest& WithOffCondition(Aws::String&& value) { SetOffCondition(std::move(value)); return *this;}

    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline CreateModelRequest& WithOffCondition(const char* value) { SetOffCondition(value); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    DatasetSchema m_datasetSchema;
    bool m_datasetSchemaHasBeenSet = false;

    LabelsInputConfiguration m_labelsInputConfiguration;
    bool m_labelsInputConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_trainingDataStartTime;
    bool m_trainingDataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingDataEndTime;
    bool m_trainingDataEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_evaluationDataStartTime;
    bool m_evaluationDataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_evaluationDataEndTime;
    bool m_evaluationDataEndTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    DataPreProcessingConfiguration m_dataPreProcessingConfiguration;
    bool m_dataPreProcessingConfigurationHasBeenSet = false;

    Aws::String m_serverSideKmsKeyId;
    bool m_serverSideKmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_offCondition;
    bool m_offConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
