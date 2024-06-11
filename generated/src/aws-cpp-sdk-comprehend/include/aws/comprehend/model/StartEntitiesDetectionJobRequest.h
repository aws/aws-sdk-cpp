﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/comprehend/model/InputDataConfig.h>
#include <aws/comprehend/model/OutputDataConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/comprehend/model/VpcConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class StartEntitiesDetectionJobRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API StartEntitiesDetectionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartEntitiesDetectionJob"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline StartEntitiesDetectionJobRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline StartEntitiesDetectionJobRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies where to send the output files.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline StartEntitiesDetectionJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline StartEntitiesDetectionJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * read access to your input data. For more information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/security_iam_id-based-policy-examples.html#auth-role-permissions">Role-based
     * permissions</a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline StartEntitiesDetectionJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline StartEntitiesDetectionJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline StartEntitiesDetectionJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline StartEntitiesDetectionJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline StartEntitiesDetectionJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline StartEntitiesDetectionJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the specific entity recognizer
     * to be used by the <code>StartEntitiesDetectionJob</code>. This ARN is optional
     * and is only used for a custom entity recognition job.</p>
     */
    inline const Aws::String& GetEntityRecognizerArn() const{ return m_entityRecognizerArn; }
    inline bool EntityRecognizerArnHasBeenSet() const { return m_entityRecognizerArnHasBeenSet; }
    inline void SetEntityRecognizerArn(const Aws::String& value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn = value; }
    inline void SetEntityRecognizerArn(Aws::String&& value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn = std::move(value); }
    inline void SetEntityRecognizerArn(const char* value) { m_entityRecognizerArnHasBeenSet = true; m_entityRecognizerArn.assign(value); }
    inline StartEntitiesDetectionJobRequest& WithEntityRecognizerArn(const Aws::String& value) { SetEntityRecognizerArn(value); return *this;}
    inline StartEntitiesDetectionJobRequest& WithEntityRecognizerArn(Aws::String&& value) { SetEntityRecognizerArn(std::move(value)); return *this;}
    inline StartEntitiesDetectionJobRequest& WithEntityRecognizerArn(const char* value) { SetEntityRecognizerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language of the input documents. All documents must be in the same
     * language. You can specify any of the languages supported by Amazon Comprehend.
     * If custom entities recognition is used, this parameter is ignored and the
     * language used for training the model is used instead.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline StartEntitiesDetectionJobRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline StartEntitiesDetectionJobRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline StartEntitiesDetectionJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline StartEntitiesDetectionJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline StartEntitiesDetectionJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
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
    inline StartEntitiesDetectionJobRequest& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}
    inline StartEntitiesDetectionJobRequest& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}
    inline StartEntitiesDetectionJobRequest& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your entity detection job. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline StartEntitiesDetectionJobRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline StartEntitiesDetectionJobRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to associate with the entities detection job. A tag is a key-value pair
     * that adds metadata to a resource used by Amazon Comprehend. For example, a tag
     * with "Sales" as the key might be added to a resource to indicate its use by the
     * sales department.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartEntitiesDetectionJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline StartEntitiesDetectionJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline StartEntitiesDetectionJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline StartEntitiesDetectionJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel associated with the model to
     * use.</p>
     */
    inline const Aws::String& GetFlywheelArn() const{ return m_flywheelArn; }
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }
    inline void SetFlywheelArn(const Aws::String& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = value; }
    inline void SetFlywheelArn(Aws::String&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::move(value); }
    inline void SetFlywheelArn(const char* value) { m_flywheelArnHasBeenSet = true; m_flywheelArn.assign(value); }
    inline StartEntitiesDetectionJobRequest& WithFlywheelArn(const Aws::String& value) { SetFlywheelArn(value); return *this;}
    inline StartEntitiesDetectionJobRequest& WithFlywheelArn(Aws::String&& value) { SetFlywheelArn(std::move(value)); return *this;}
    inline StartEntitiesDetectionJobRequest& WithFlywheelArn(const char* value) { SetFlywheelArn(value); return *this;}
    ///@}
  private:

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_entityRecognizerArn;
    bool m_entityRecognizerArnHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
