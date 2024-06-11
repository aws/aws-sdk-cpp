﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/InputDataConfig.h>
#include <aws/comprehend/model/OutputDataConfig.h>
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
  class StartDocumentClassificationJobRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API StartDocumentClassificationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDocumentClassificationJob"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline StartDocumentClassificationJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline StartDocumentClassificationJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline StartDocumentClassificationJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the document classifier to use to process
     * the job.</p>
     */
    inline const Aws::String& GetDocumentClassifierArn() const{ return m_documentClassifierArn; }
    inline bool DocumentClassifierArnHasBeenSet() const { return m_documentClassifierArnHasBeenSet; }
    inline void SetDocumentClassifierArn(const Aws::String& value) { m_documentClassifierArnHasBeenSet = true; m_documentClassifierArn = value; }
    inline void SetDocumentClassifierArn(Aws::String&& value) { m_documentClassifierArnHasBeenSet = true; m_documentClassifierArn = std::move(value); }
    inline void SetDocumentClassifierArn(const char* value) { m_documentClassifierArnHasBeenSet = true; m_documentClassifierArn.assign(value); }
    inline StartDocumentClassificationJobRequest& WithDocumentClassifierArn(const Aws::String& value) { SetDocumentClassifierArn(value); return *this;}
    inline StartDocumentClassificationJobRequest& WithDocumentClassifierArn(Aws::String&& value) { SetDocumentClassifierArn(std::move(value)); return *this;}
    inline StartDocumentClassificationJobRequest& WithDocumentClassifierArn(const char* value) { SetDocumentClassifierArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline StartDocumentClassificationJobRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline StartDocumentClassificationJobRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies where to send the output files.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline StartDocumentClassificationJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline StartDocumentClassificationJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline StartDocumentClassificationJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline StartDocumentClassificationJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline StartDocumentClassificationJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline StartDocumentClassificationJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline StartDocumentClassificationJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline StartDocumentClassificationJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
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
    inline StartDocumentClassificationJobRequest& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}
    inline StartDocumentClassificationJobRequest& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}
    inline StartDocumentClassificationJobRequest& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your document classification job. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline StartDocumentClassificationJobRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline StartDocumentClassificationJobRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to associate with the document classification job. A tag is a key-value
     * pair that adds metadata to a resource used by Amazon Comprehend. For example, a
     * tag with "Sales" as the key might be added to a resource to indicate its use by
     * the sales department.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartDocumentClassificationJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline StartDocumentClassificationJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline StartDocumentClassificationJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline StartDocumentClassificationJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline StartDocumentClassificationJobRequest& WithFlywheelArn(const Aws::String& value) { SetFlywheelArn(value); return *this;}
    inline StartDocumentClassificationJobRequest& WithFlywheelArn(Aws::String&& value) { SetFlywheelArn(std::move(value)); return *this;}
    inline StartDocumentClassificationJobRequest& WithFlywheelArn(const char* value) { SetFlywheelArn(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_documentClassifierArn;
    bool m_documentClassifierArnHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

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
