/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/comprehend/model/ModelStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/comprehend/model/EntityRecognizerInputDataConfig.h>
#include <aws/comprehend/model/EntityRecognizerMetadata.h>
#include <aws/comprehend/model/VpcConfig.h>
#include <aws/comprehend/model/EntityRecognizerOutputDataConfig.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Describes information about an entity recognizer.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognizerProperties">AWS
   * API Reference</a></p>
   */
  class EntityRecognizerProperties
  {
  public:
    AWS_COMPREHEND_API EntityRecognizerProperties() = default;
    AWS_COMPREHEND_API EntityRecognizerProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer.</p>
     */
    inline const Aws::String& GetEntityRecognizerArn() const { return m_entityRecognizerArn; }
    inline bool EntityRecognizerArnHasBeenSet() const { return m_entityRecognizerArnHasBeenSet; }
    template<typename EntityRecognizerArnT = Aws::String>
    void SetEntityRecognizerArn(EntityRecognizerArnT&& value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn = std::forward<EntityRecognizerArnT>(value); }
    template<typename EntityRecognizerArnT = Aws::String>
    EntityRecognizerProperties& WithEntityRecognizerArn(EntityRecognizerArnT&& value) { SetEntityRecognizerArn(std::forward<EntityRecognizerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The language of the input documents. All documents must be in the same
     * language. Only English ("en") is currently supported.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline EntityRecognizerProperties& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the entity recognizer.</p>
     */
    inline ModelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EntityRecognizerProperties& WithStatus(ModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the status of the recognizer.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    EntityRecognizerProperties& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the recognizer was submitted for processing.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const { return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    void SetSubmitTime(SubmitTimeT&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::forward<SubmitTimeT>(value); }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    EntityRecognizerProperties& WithSubmitTime(SubmitTimeT&& value) { SetSubmitTime(std::forward<SubmitTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the recognizer creation completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    EntityRecognizerProperties& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that training of the entity recognizer started.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingStartTime() const { return m_trainingStartTime; }
    inline bool TrainingStartTimeHasBeenSet() const { return m_trainingStartTimeHasBeenSet; }
    template<typename TrainingStartTimeT = Aws::Utils::DateTime>
    void SetTrainingStartTime(TrainingStartTimeT&& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = std::forward<TrainingStartTimeT>(value); }
    template<typename TrainingStartTimeT = Aws::Utils::DateTime>
    EntityRecognizerProperties& WithTrainingStartTime(TrainingStartTimeT&& value) { SetTrainingStartTime(std::forward<TrainingStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that training of the entity recognizer was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const { return m_trainingEndTime; }
    inline bool TrainingEndTimeHasBeenSet() const { return m_trainingEndTimeHasBeenSet; }
    template<typename TrainingEndTimeT = Aws::Utils::DateTime>
    void SetTrainingEndTime(TrainingEndTimeT&& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = std::forward<TrainingEndTimeT>(value); }
    template<typename TrainingEndTimeT = Aws::Utils::DateTime>
    EntityRecognizerProperties& WithTrainingEndTime(TrainingEndTimeT&& value) { SetTrainingEndTime(std::forward<TrainingEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input data properties of an entity recognizer.</p>
     */
    inline const EntityRecognizerInputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = EntityRecognizerInputDataConfig>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = EntityRecognizerInputDataConfig>
    EntityRecognizerProperties& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides information about an entity recognizer.</p>
     */
    inline const EntityRecognizerMetadata& GetRecognizerMetadata() const { return m_recognizerMetadata; }
    inline bool RecognizerMetadataHasBeenSet() const { return m_recognizerMetadataHasBeenSet; }
    template<typename RecognizerMetadataT = EntityRecognizerMetadata>
    void SetRecognizerMetadata(RecognizerMetadataT&& value) { m_recognizerMetadataHasBeenSet = true; m_recognizerMetadata = std::forward<RecognizerMetadataT>(value); }
    template<typename RecognizerMetadataT = EntityRecognizerMetadata>
    EntityRecognizerProperties& WithRecognizerMetadata(RecognizerMetadataT&& value) { SetRecognizerMetadata(std::forward<RecognizerMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    EntityRecognizerProperties& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the Amazon Web Services Key Management Service (KMS) key that Amazon
     * Comprehend uses to encrypt data on the storage volume attached to the ML compute
     * instance(s) that process the analysis job. The VolumeKmsKeyId can be either of
     * the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const { return m_volumeKmsKeyId; }
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }
    template<typename VolumeKmsKeyIdT = Aws::String>
    void SetVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::forward<VolumeKmsKeyIdT>(value); }
    template<typename VolumeKmsKeyIdT = Aws::String>
    EntityRecognizerProperties& WithVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { SetVolumeKmsKeyId(std::forward<VolumeKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration parameters for a private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom entity recognizer. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    EntityRecognizerProperties& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt trained custom
     * models. The ModelKmsKeyId can be either of the following formats:</p> <ul> <li>
     * <p>KMS Key ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li>
     * <li> <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetModelKmsKeyId() const { return m_modelKmsKeyId; }
    inline bool ModelKmsKeyIdHasBeenSet() const { return m_modelKmsKeyIdHasBeenSet; }
    template<typename ModelKmsKeyIdT = Aws::String>
    void SetModelKmsKeyId(ModelKmsKeyIdT&& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = std::forward<ModelKmsKeyIdT>(value); }
    template<typename ModelKmsKeyIdT = Aws::String>
    EntityRecognizerProperties& WithModelKmsKeyId(ModelKmsKeyIdT&& value) { SetModelKmsKeyId(std::forward<ModelKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version name you assigned to the entity recognizer.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    EntityRecognizerProperties& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source model. This model was imported
     * from a different Amazon Web Services account to create the entity recognizer
     * model in your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetSourceModelArn() const { return m_sourceModelArn; }
    inline bool SourceModelArnHasBeenSet() const { return m_sourceModelArnHasBeenSet; }
    template<typename SourceModelArnT = Aws::String>
    void SetSourceModelArn(SourceModelArnT&& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = std::forward<SourceModelArnT>(value); }
    template<typename SourceModelArnT = Aws::String>
    EntityRecognizerProperties& WithSourceModelArn(SourceModelArnT&& value) { SetSourceModelArn(std::forward<SourceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline const Aws::String& GetFlywheelArn() const { return m_flywheelArn; }
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }
    template<typename FlywheelArnT = Aws::String>
    void SetFlywheelArn(FlywheelArnT&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::forward<FlywheelArnT>(value); }
    template<typename FlywheelArnT = Aws::String>
    EntityRecognizerProperties& WithFlywheelArn(FlywheelArnT&& value) { SetFlywheelArn(std::forward<FlywheelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output data configuration.</p>
     */
    inline const EntityRecognizerOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = EntityRecognizerOutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = EntityRecognizerOutputDataConfig>
    EntityRecognizerProperties& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entityRecognizerArn;
    bool m_entityRecognizerArnHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    ModelStatus m_status{ModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime{};
    bool m_submitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingStartTime{};
    bool m_trainingStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingEndTime{};
    bool m_trainingEndTimeHasBeenSet = false;

    EntityRecognizerInputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    EntityRecognizerMetadata m_recognizerMetadata;
    bool m_recognizerMetadataHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_modelKmsKeyId;
    bool m_modelKmsKeyIdHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_sourceModelArn;
    bool m_sourceModelArnHasBeenSet = false;

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;

    EntityRecognizerOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
