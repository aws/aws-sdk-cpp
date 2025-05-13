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
#include <aws/lookoutequipment/model/ModelDiagnosticsOutputConfiguration.h>
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
    AWS_LOOKOUTEQUIPMENT_API CreateModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModel"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the machine learning model to be created.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    CreateModelRequest& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset for the machine learning model being created. </p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    CreateModelRequest& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data schema for the machine learning model being created. </p>
     */
    inline const DatasetSchema& GetDatasetSchema() const { return m_datasetSchema; }
    inline bool DatasetSchemaHasBeenSet() const { return m_datasetSchemaHasBeenSet; }
    template<typename DatasetSchemaT = DatasetSchema>
    void SetDatasetSchema(DatasetSchemaT&& value) { m_datasetSchemaHasBeenSet = true; m_datasetSchema = std::forward<DatasetSchemaT>(value); }
    template<typename DatasetSchemaT = DatasetSchema>
    CreateModelRequest& WithDatasetSchema(DatasetSchemaT&& value) { SetDatasetSchema(std::forward<DatasetSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input configuration for the labels being used for the machine learning
     * model that's being created. </p>
     */
    inline const LabelsInputConfiguration& GetLabelsInputConfiguration() const { return m_labelsInputConfiguration; }
    inline bool LabelsInputConfigurationHasBeenSet() const { return m_labelsInputConfigurationHasBeenSet; }
    template<typename LabelsInputConfigurationT = LabelsInputConfiguration>
    void SetLabelsInputConfiguration(LabelsInputConfigurationT&& value) { m_labelsInputConfigurationHasBeenSet = true; m_labelsInputConfiguration = std::forward<LabelsInputConfigurationT>(value); }
    template<typename LabelsInputConfigurationT = LabelsInputConfiguration>
    CreateModelRequest& WithLabelsInputConfiguration(LabelsInputConfigurationT&& value) { SetLabelsInputConfiguration(std::forward<LabelsInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateModelRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of training data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataStartTime() const { return m_trainingDataStartTime; }
    inline bool TrainingDataStartTimeHasBeenSet() const { return m_trainingDataStartTimeHasBeenSet; }
    template<typename TrainingDataStartTimeT = Aws::Utils::DateTime>
    void SetTrainingDataStartTime(TrainingDataStartTimeT&& value) { m_trainingDataStartTimeHasBeenSet = true; m_trainingDataStartTime = std::forward<TrainingDataStartTimeT>(value); }
    template<typename TrainingDataStartTimeT = Aws::Utils::DateTime>
    CreateModelRequest& WithTrainingDataStartTime(TrainingDataStartTimeT&& value) { SetTrainingDataStartTime(std::forward<TrainingDataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time reference in the dataset that should be used to end the
     * subset of training data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataEndTime() const { return m_trainingDataEndTime; }
    inline bool TrainingDataEndTimeHasBeenSet() const { return m_trainingDataEndTimeHasBeenSet; }
    template<typename TrainingDataEndTimeT = Aws::Utils::DateTime>
    void SetTrainingDataEndTime(TrainingDataEndTimeT&& value) { m_trainingDataEndTimeHasBeenSet = true; m_trainingDataEndTime = std::forward<TrainingDataEndTimeT>(value); }
    template<typename TrainingDataEndTimeT = Aws::Utils::DateTime>
    CreateModelRequest& WithTrainingDataEndTime(TrainingDataEndTimeT&& value) { SetTrainingDataEndTime(std::forward<TrainingDataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time reference in the dataset that should be used to begin the
     * subset of evaluation data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataStartTime() const { return m_evaluationDataStartTime; }
    inline bool EvaluationDataStartTimeHasBeenSet() const { return m_evaluationDataStartTimeHasBeenSet; }
    template<typename EvaluationDataStartTimeT = Aws::Utils::DateTime>
    void SetEvaluationDataStartTime(EvaluationDataStartTimeT&& value) { m_evaluationDataStartTimeHasBeenSet = true; m_evaluationDataStartTime = std::forward<EvaluationDataStartTimeT>(value); }
    template<typename EvaluationDataStartTimeT = Aws::Utils::DateTime>
    CreateModelRequest& WithEvaluationDataStartTime(EvaluationDataStartTimeT&& value) { SetEvaluationDataStartTime(std::forward<EvaluationDataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the time reference in the dataset that should be used to end the
     * subset of evaluation data for the machine learning model. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationDataEndTime() const { return m_evaluationDataEndTime; }
    inline bool EvaluationDataEndTimeHasBeenSet() const { return m_evaluationDataEndTimeHasBeenSet; }
    template<typename EvaluationDataEndTimeT = Aws::Utils::DateTime>
    void SetEvaluationDataEndTime(EvaluationDataEndTimeT&& value) { m_evaluationDataEndTimeHasBeenSet = true; m_evaluationDataEndTime = std::forward<EvaluationDataEndTimeT>(value); }
    template<typename EvaluationDataEndTimeT = Aws::Utils::DateTime>
    CreateModelRequest& WithEvaluationDataEndTime(EvaluationDataEndTimeT&& value) { SetEvaluationDataEndTime(std::forward<EvaluationDataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the machine learning model. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateModelRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
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
    inline bool DataPreProcessingConfigurationHasBeenSet() const { return m_dataPreProcessingConfigurationHasBeenSet; }
    template<typename DataPreProcessingConfigurationT = DataPreProcessingConfiguration>
    void SetDataPreProcessingConfiguration(DataPreProcessingConfigurationT&& value) { m_dataPreProcessingConfigurationHasBeenSet = true; m_dataPreProcessingConfiguration = std::forward<DataPreProcessingConfigurationT>(value); }
    template<typename DataPreProcessingConfigurationT = DataPreProcessingConfiguration>
    CreateModelRequest& WithDataPreProcessingConfiguration(DataPreProcessingConfigurationT&& value) { SetDataPreProcessingConfiguration(std::forward<DataPreProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the identifier of the KMS key used to encrypt model data by Amazon
     * Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const { return m_serverSideKmsKeyId; }
    inline bool ServerSideKmsKeyIdHasBeenSet() const { return m_serverSideKmsKeyIdHasBeenSet; }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    void SetServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = std::forward<ServerSideKmsKeyIdT>(value); }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    CreateModelRequest& WithServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { SetServerSideKmsKeyId(std::forward<ServerSideKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Any tags associated with the machine learning model being created. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateModelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateModelRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates that the asset associated with this sensor has been shut off. As
     * long as this condition is met, Lookout for Equipment will not use data from this
     * asset for training, evaluation, or inference.</p>
     */
    inline const Aws::String& GetOffCondition() const { return m_offCondition; }
    inline bool OffConditionHasBeenSet() const { return m_offConditionHasBeenSet; }
    template<typename OffConditionT = Aws::String>
    void SetOffCondition(OffConditionT&& value) { m_offConditionHasBeenSet = true; m_offCondition = std::forward<OffConditionT>(value); }
    template<typename OffConditionT = Aws::String>
    CreateModelRequest& WithOffCondition(OffConditionT&& value) { SetOffCondition(std::forward<OffConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location where you want Amazon Lookout for Equipment to save
     * the pointwise model diagnostics. You must also specify the <code>RoleArn</code>
     * request parameter.</p>
     */
    inline const ModelDiagnosticsOutputConfiguration& GetModelDiagnosticsOutputConfiguration() const { return m_modelDiagnosticsOutputConfiguration; }
    inline bool ModelDiagnosticsOutputConfigurationHasBeenSet() const { return m_modelDiagnosticsOutputConfigurationHasBeenSet; }
    template<typename ModelDiagnosticsOutputConfigurationT = ModelDiagnosticsOutputConfiguration>
    void SetModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfigurationT&& value) { m_modelDiagnosticsOutputConfigurationHasBeenSet = true; m_modelDiagnosticsOutputConfiguration = std::forward<ModelDiagnosticsOutputConfigurationT>(value); }
    template<typename ModelDiagnosticsOutputConfigurationT = ModelDiagnosticsOutputConfiguration>
    CreateModelRequest& WithModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfigurationT&& value) { SetModelDiagnosticsOutputConfiguration(std::forward<ModelDiagnosticsOutputConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    DatasetSchema m_datasetSchema;
    bool m_datasetSchemaHasBeenSet = false;

    LabelsInputConfiguration m_labelsInputConfiguration;
    bool m_labelsInputConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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

    Aws::String m_serverSideKmsKeyId;
    bool m_serverSideKmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_offCondition;
    bool m_offConditionHasBeenSet = false;

    ModelDiagnosticsOutputConfiguration m_modelDiagnosticsOutputConfiguration;
    bool m_modelDiagnosticsOutputConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
