/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelDataSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/VpcConfig.h>
#include <aws/bedrock/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class CreateModelImportJobRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateModelImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelImportJob"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the import job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline CreateModelImportJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline CreateModelImportJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline CreateModelImportJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the imported model.</p>
     */
    inline const Aws::String& GetImportedModelName() const{ return m_importedModelName; }
    inline bool ImportedModelNameHasBeenSet() const { return m_importedModelNameHasBeenSet; }
    inline void SetImportedModelName(const Aws::String& value) { m_importedModelNameHasBeenSet = true; m_importedModelName = value; }
    inline void SetImportedModelName(Aws::String&& value) { m_importedModelNameHasBeenSet = true; m_importedModelName = std::move(value); }
    inline void SetImportedModelName(const char* value) { m_importedModelNameHasBeenSet = true; m_importedModelName.assign(value); }
    inline CreateModelImportJobRequest& WithImportedModelName(const Aws::String& value) { SetImportedModelName(value); return *this;}
    inline CreateModelImportJobRequest& WithImportedModelName(Aws::String&& value) { SetImportedModelName(std::move(value)); return *this;}
    inline CreateModelImportJobRequest& WithImportedModelName(const char* value) { SetImportedModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model import job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateModelImportJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateModelImportJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateModelImportJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the imported model.</p>
     */
    inline const ModelDataSource& GetModelDataSource() const{ return m_modelDataSource; }
    inline bool ModelDataSourceHasBeenSet() const { return m_modelDataSourceHasBeenSet; }
    inline void SetModelDataSource(const ModelDataSource& value) { m_modelDataSourceHasBeenSet = true; m_modelDataSource = value; }
    inline void SetModelDataSource(ModelDataSource&& value) { m_modelDataSourceHasBeenSet = true; m_modelDataSource = std::move(value); }
    inline CreateModelImportJobRequest& WithModelDataSource(const ModelDataSource& value) { SetModelDataSource(value); return *this;}
    inline CreateModelImportJobRequest& WithModelDataSource(ModelDataSource&& value) { SetModelDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to attach to this import job. </p>
     */
    inline const Aws::Vector<Tag>& GetJobTags() const{ return m_jobTags; }
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }
    inline void SetJobTags(const Aws::Vector<Tag>& value) { m_jobTagsHasBeenSet = true; m_jobTags = value; }
    inline void SetJobTags(Aws::Vector<Tag>&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::move(value); }
    inline CreateModelImportJobRequest& WithJobTags(const Aws::Vector<Tag>& value) { SetJobTags(value); return *this;}
    inline CreateModelImportJobRequest& WithJobTags(Aws::Vector<Tag>&& value) { SetJobTags(std::move(value)); return *this;}
    inline CreateModelImportJobRequest& AddJobTags(const Tag& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(value); return *this; }
    inline CreateModelImportJobRequest& AddJobTags(Tag&& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags to attach to the imported model.</p>
     */
    inline const Aws::Vector<Tag>& GetImportedModelTags() const{ return m_importedModelTags; }
    inline bool ImportedModelTagsHasBeenSet() const { return m_importedModelTagsHasBeenSet; }
    inline void SetImportedModelTags(const Aws::Vector<Tag>& value) { m_importedModelTagsHasBeenSet = true; m_importedModelTags = value; }
    inline void SetImportedModelTags(Aws::Vector<Tag>&& value) { m_importedModelTagsHasBeenSet = true; m_importedModelTags = std::move(value); }
    inline CreateModelImportJobRequest& WithImportedModelTags(const Aws::Vector<Tag>& value) { SetImportedModelTags(value); return *this;}
    inline CreateModelImportJobRequest& WithImportedModelTags(Aws::Vector<Tag>&& value) { SetImportedModelTags(std::move(value)); return *this;}
    inline CreateModelImportJobRequest& AddImportedModelTags(const Tag& value) { m_importedModelTagsHasBeenSet = true; m_importedModelTags.push_back(value); return *this; }
    inline CreateModelImportJobRequest& AddImportedModelTags(Tag&& value) { m_importedModelTagsHasBeenSet = true; m_importedModelTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateModelImportJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateModelImportJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateModelImportJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>VPC configuration parameters for the private Virtual Private Cloud (VPC) that
     * contains the resources you are using for the import job.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline CreateModelImportJobRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline CreateModelImportJobRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The imported model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetImportedModelKmsKeyId() const{ return m_importedModelKmsKeyId; }
    inline bool ImportedModelKmsKeyIdHasBeenSet() const { return m_importedModelKmsKeyIdHasBeenSet; }
    inline void SetImportedModelKmsKeyId(const Aws::String& value) { m_importedModelKmsKeyIdHasBeenSet = true; m_importedModelKmsKeyId = value; }
    inline void SetImportedModelKmsKeyId(Aws::String&& value) { m_importedModelKmsKeyIdHasBeenSet = true; m_importedModelKmsKeyId = std::move(value); }
    inline void SetImportedModelKmsKeyId(const char* value) { m_importedModelKmsKeyIdHasBeenSet = true; m_importedModelKmsKeyId.assign(value); }
    inline CreateModelImportJobRequest& WithImportedModelKmsKeyId(const Aws::String& value) { SetImportedModelKmsKeyId(value); return *this;}
    inline CreateModelImportJobRequest& WithImportedModelKmsKeyId(Aws::String&& value) { SetImportedModelKmsKeyId(std::move(value)); return *this;}
    inline CreateModelImportJobRequest& WithImportedModelKmsKeyId(const char* value) { SetImportedModelKmsKeyId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_importedModelName;
    bool m_importedModelNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ModelDataSource m_modelDataSource;
    bool m_modelDataSourceHasBeenSet = false;

    Aws::Vector<Tag> m_jobTags;
    bool m_jobTagsHasBeenSet = false;

    Aws::Vector<Tag> m_importedModelTags;
    bool m_importedModelTagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_importedModelKmsKeyId;
    bool m_importedModelKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
