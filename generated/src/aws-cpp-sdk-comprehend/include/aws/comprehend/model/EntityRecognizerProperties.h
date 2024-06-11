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
    AWS_COMPREHEND_API EntityRecognizerProperties();
    AWS_COMPREHEND_API EntityRecognizerProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the entity recognizer.</p>
     */
    inline const Aws::String& GetEntityRecognizerArn() const{ return m_entityRecognizerArn; }
    inline bool EntityRecognizerArnHasBeenSet() const { return m_entityRecognizerArnHasBeenSet; }
    inline void SetEntityRecognizerArn(const Aws::String& value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn = value; }
    inline void SetEntityRecognizerArn(Aws::String&& value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn = std::move(value); }
    inline void SetEntityRecognizerArn(const char* value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn.assign(value); }
    inline EntityRecognizerProperties& WithEntityRecognizerArn(const Aws::String& value) { SetEntityRecognizerArn(value); return *this;}
    inline EntityRecognizerProperties& WithEntityRecognizerArn(Aws::String&& value) { SetEntityRecognizerArn(std::move(value)); return *this;}
    inline EntityRecognizerProperties& WithEntityRecognizerArn(const char* value) { SetEntityRecognizerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The language of the input documents. All documents must be in the same
     * language. Only English ("en") is currently supported.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline EntityRecognizerProperties& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline EntityRecognizerProperties& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the entity recognizer.</p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EntityRecognizerProperties& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}
    inline EntityRecognizerProperties& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the status of the recognizer.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline EntityRecognizerProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline EntityRecognizerProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline EntityRecognizerProperties& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the recognizer was submitted for processing.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }
    inline EntityRecognizerProperties& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}
    inline EntityRecognizerProperties& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the recognizer creation completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline EntityRecognizerProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline EntityRecognizerProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that training of the entity recognizer started.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingStartTime() const{ return m_trainingStartTime; }
    inline bool TrainingStartTimeHasBeenSet() const { return m_trainingStartTimeHasBeenSet; }
    inline void SetTrainingStartTime(const Aws::Utils::DateTime& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = value; }
    inline void SetTrainingStartTime(Aws::Utils::DateTime&& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = std::move(value); }
    inline EntityRecognizerProperties& WithTrainingStartTime(const Aws::Utils::DateTime& value) { SetTrainingStartTime(value); return *this;}
    inline EntityRecognizerProperties& WithTrainingStartTime(Aws::Utils::DateTime&& value) { SetTrainingStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that training of the entity recognizer was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const{ return m_trainingEndTime; }
    inline bool TrainingEndTimeHasBeenSet() const { return m_trainingEndTimeHasBeenSet; }
    inline void SetTrainingEndTime(const Aws::Utils::DateTime& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = value; }
    inline void SetTrainingEndTime(Aws::Utils::DateTime&& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = std::move(value); }
    inline EntityRecognizerProperties& WithTrainingEndTime(const Aws::Utils::DateTime& value) { SetTrainingEndTime(value); return *this;}
    inline EntityRecognizerProperties& WithTrainingEndTime(Aws::Utils::DateTime&& value) { SetTrainingEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input data properties of an entity recognizer.</p>
     */
    inline const EntityRecognizerInputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const EntityRecognizerInputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(EntityRecognizerInputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline EntityRecognizerProperties& WithInputDataConfig(const EntityRecognizerInputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline EntityRecognizerProperties& WithInputDataConfig(EntityRecognizerInputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides information about an entity recognizer.</p>
     */
    inline const EntityRecognizerMetadata& GetRecognizerMetadata() const{ return m_recognizerMetadata; }
    inline bool RecognizerMetadataHasBeenSet() const { return m_recognizerMetadataHasBeenSet; }
    inline void SetRecognizerMetadata(const EntityRecognizerMetadata& value) { m_recognizerMetadataHasBeenSet = true; m_recognizerMetadata = value; }
    inline void SetRecognizerMetadata(EntityRecognizerMetadata&& value) { m_recognizerMetadataHasBeenSet = true; m_recognizerMetadata = std::move(value); }
    inline EntityRecognizerProperties& WithRecognizerMetadata(const EntityRecognizerMetadata& value) { SetRecognizerMetadata(value); return *this;}
    inline EntityRecognizerProperties& WithRecognizerMetadata(EntityRecognizerMetadata&& value) { SetRecognizerMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline EntityRecognizerProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline EntityRecognizerProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline EntityRecognizerProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
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
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }
    inline EntityRecognizerProperties& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}
    inline EntityRecognizerProperties& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}
    inline EntityRecognizerProperties& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration parameters for a private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom entity recognizer. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline EntityRecognizerProperties& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline EntityRecognizerProperties& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
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
    inline const Aws::String& GetModelKmsKeyId() const{ return m_modelKmsKeyId; }
    inline bool ModelKmsKeyIdHasBeenSet() const { return m_modelKmsKeyIdHasBeenSet; }
    inline void SetModelKmsKeyId(const Aws::String& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = value; }
    inline void SetModelKmsKeyId(Aws::String&& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = std::move(value); }
    inline void SetModelKmsKeyId(const char* value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId.assign(value); }
    inline EntityRecognizerProperties& WithModelKmsKeyId(const Aws::String& value) { SetModelKmsKeyId(value); return *this;}
    inline EntityRecognizerProperties& WithModelKmsKeyId(Aws::String&& value) { SetModelKmsKeyId(std::move(value)); return *this;}
    inline EntityRecognizerProperties& WithModelKmsKeyId(const char* value) { SetModelKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version name you assigned to the entity recognizer.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline EntityRecognizerProperties& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline EntityRecognizerProperties& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline EntityRecognizerProperties& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source model. This model was imported
     * from a different Amazon Web Services account to create the entity recognizer
     * model in your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetSourceModelArn() const{ return m_sourceModelArn; }
    inline bool SourceModelArnHasBeenSet() const { return m_sourceModelArnHasBeenSet; }
    inline void SetSourceModelArn(const Aws::String& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = value; }
    inline void SetSourceModelArn(Aws::String&& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = std::move(value); }
    inline void SetSourceModelArn(const char* value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn.assign(value); }
    inline EntityRecognizerProperties& WithSourceModelArn(const Aws::String& value) { SetSourceModelArn(value); return *this;}
    inline EntityRecognizerProperties& WithSourceModelArn(Aws::String&& value) { SetSourceModelArn(std::move(value)); return *this;}
    inline EntityRecognizerProperties& WithSourceModelArn(const char* value) { SetSourceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline const Aws::String& GetFlywheelArn() const{ return m_flywheelArn; }
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }
    inline void SetFlywheelArn(const Aws::String& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = value; }
    inline void SetFlywheelArn(Aws::String&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::move(value); }
    inline void SetFlywheelArn(const char* value) { m_flywheelArnHasBeenSet = true; m_flywheelArn.assign(value); }
    inline EntityRecognizerProperties& WithFlywheelArn(const Aws::String& value) { SetFlywheelArn(value); return *this;}
    inline EntityRecognizerProperties& WithFlywheelArn(Aws::String&& value) { SetFlywheelArn(std::move(value)); return *this;}
    inline EntityRecognizerProperties& WithFlywheelArn(const char* value) { SetFlywheelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output data configuration.</p>
     */
    inline const EntityRecognizerOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const EntityRecognizerOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(EntityRecognizerOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline EntityRecognizerProperties& WithOutputDataConfig(const EntityRecognizerOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline EntityRecognizerProperties& WithOutputDataConfig(EntityRecognizerOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_entityRecognizerArn;
    bool m_entityRecognizerArnHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    ModelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingStartTime;
    bool m_trainingStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingEndTime;
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
