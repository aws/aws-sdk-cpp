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
    AWS_BEDROCK_API CreateModelImportJobRequest() = default;

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
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    CreateModelImportJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the imported model.</p>
     */
    inline const Aws::String& GetImportedModelName() const { return m_importedModelName; }
    inline bool ImportedModelNameHasBeenSet() const { return m_importedModelNameHasBeenSet; }
    template<typename ImportedModelNameT = Aws::String>
    void SetImportedModelName(ImportedModelNameT&& value) { m_importedModelNameHasBeenSet = true; m_importedModelName = std::forward<ImportedModelNameT>(value); }
    template<typename ImportedModelNameT = Aws::String>
    CreateModelImportJobRequest& WithImportedModelName(ImportedModelNameT&& value) { SetImportedModelName(std::forward<ImportedModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model import job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateModelImportJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the imported model.</p>
     */
    inline const ModelDataSource& GetModelDataSource() const { return m_modelDataSource; }
    inline bool ModelDataSourceHasBeenSet() const { return m_modelDataSourceHasBeenSet; }
    template<typename ModelDataSourceT = ModelDataSource>
    void SetModelDataSource(ModelDataSourceT&& value) { m_modelDataSourceHasBeenSet = true; m_modelDataSource = std::forward<ModelDataSourceT>(value); }
    template<typename ModelDataSourceT = ModelDataSource>
    CreateModelImportJobRequest& WithModelDataSource(ModelDataSourceT&& value) { SetModelDataSource(std::forward<ModelDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to attach to this import job. </p>
     */
    inline const Aws::Vector<Tag>& GetJobTags() const { return m_jobTags; }
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }
    template<typename JobTagsT = Aws::Vector<Tag>>
    void SetJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::forward<JobTagsT>(value); }
    template<typename JobTagsT = Aws::Vector<Tag>>
    CreateModelImportJobRequest& WithJobTags(JobTagsT&& value) { SetJobTags(std::forward<JobTagsT>(value)); return *this;}
    template<typename JobTagsT = Tag>
    CreateModelImportJobRequest& AddJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace_back(std::forward<JobTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags to attach to the imported model.</p>
     */
    inline const Aws::Vector<Tag>& GetImportedModelTags() const { return m_importedModelTags; }
    inline bool ImportedModelTagsHasBeenSet() const { return m_importedModelTagsHasBeenSet; }
    template<typename ImportedModelTagsT = Aws::Vector<Tag>>
    void SetImportedModelTags(ImportedModelTagsT&& value) { m_importedModelTagsHasBeenSet = true; m_importedModelTags = std::forward<ImportedModelTagsT>(value); }
    template<typename ImportedModelTagsT = Aws::Vector<Tag>>
    CreateModelImportJobRequest& WithImportedModelTags(ImportedModelTagsT&& value) { SetImportedModelTags(std::forward<ImportedModelTagsT>(value)); return *this;}
    template<typename ImportedModelTagsT = Tag>
    CreateModelImportJobRequest& AddImportedModelTags(ImportedModelTagsT&& value) { m_importedModelTagsHasBeenSet = true; m_importedModelTags.emplace_back(std::forward<ImportedModelTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateModelImportJobRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>VPC configuration parameters for the private Virtual Private Cloud (VPC) that
     * contains the resources you are using for the import job.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    CreateModelImportJobRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The imported model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetImportedModelKmsKeyId() const { return m_importedModelKmsKeyId; }
    inline bool ImportedModelKmsKeyIdHasBeenSet() const { return m_importedModelKmsKeyIdHasBeenSet; }
    template<typename ImportedModelKmsKeyIdT = Aws::String>
    void SetImportedModelKmsKeyId(ImportedModelKmsKeyIdT&& value) { m_importedModelKmsKeyIdHasBeenSet = true; m_importedModelKmsKeyId = std::forward<ImportedModelKmsKeyIdT>(value); }
    template<typename ImportedModelKmsKeyIdT = Aws::String>
    CreateModelImportJobRequest& WithImportedModelKmsKeyId(ImportedModelKmsKeyIdT&& value) { SetImportedModelKmsKeyId(std::forward<ImportedModelKmsKeyIdT>(value)); return *this;}
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
