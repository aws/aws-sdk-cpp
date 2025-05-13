/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/CustomizationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/TrainingDataConfig.h>
#include <aws/bedrock/model/ValidationDataConfig.h>
#include <aws/bedrock/model/OutputDataConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock/model/VpcConfig.h>
#include <aws/bedrock/model/CustomizationConfig.h>
#include <aws/bedrock/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class CreateModelCustomizationJobRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateModelCustomizationJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelCustomizationJob"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for the fine-tuning job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    CreateModelCustomizationJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the resulting custom model.</p>
     */
    inline const Aws::String& GetCustomModelName() const { return m_customModelName; }
    inline bool CustomModelNameHasBeenSet() const { return m_customModelNameHasBeenSet; }
    template<typename CustomModelNameT = Aws::String>
    void SetCustomModelName(CustomModelNameT&& value) { m_customModelNameHasBeenSet = true; m_customModelName = std::forward<CustomModelNameT>(value); }
    template<typename CustomModelNameT = Aws::String>
    CreateModelCustomizationJobRequest& WithCustomModelName(CustomModelNameT&& value) { SetCustomModelName(std::forward<CustomModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock can
     * assume to perform tasks on your behalf. For example, during model training,
     * Amazon Bedrock needs your permission to read input data from an S3 bucket, write
     * model artifacts to an S3 bucket. To pass this role to Amazon Bedrock, the caller
     * of this API must have the <code>iam:PassRole</code> permission. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateModelCustomizationJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
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
    CreateModelCustomizationJobRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the base model.</p>
     */
    inline const Aws::String& GetBaseModelIdentifier() const { return m_baseModelIdentifier; }
    inline bool BaseModelIdentifierHasBeenSet() const { return m_baseModelIdentifierHasBeenSet; }
    template<typename BaseModelIdentifierT = Aws::String>
    void SetBaseModelIdentifier(BaseModelIdentifierT&& value) { m_baseModelIdentifierHasBeenSet = true; m_baseModelIdentifier = std::forward<BaseModelIdentifierT>(value); }
    template<typename BaseModelIdentifierT = Aws::String>
    CreateModelCustomizationJobRequest& WithBaseModelIdentifier(BaseModelIdentifierT&& value) { SetBaseModelIdentifier(std::forward<BaseModelIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customization type.</p>
     */
    inline CustomizationType GetCustomizationType() const { return m_customizationType; }
    inline bool CustomizationTypeHasBeenSet() const { return m_customizationTypeHasBeenSet; }
    inline void SetCustomizationType(CustomizationType value) { m_customizationTypeHasBeenSet = true; m_customizationType = value; }
    inline CreateModelCustomizationJobRequest& WithCustomizationType(CustomizationType value) { SetCustomizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetCustomModelKmsKeyId() const { return m_customModelKmsKeyId; }
    inline bool CustomModelKmsKeyIdHasBeenSet() const { return m_customModelKmsKeyIdHasBeenSet; }
    template<typename CustomModelKmsKeyIdT = Aws::String>
    void SetCustomModelKmsKeyId(CustomModelKmsKeyIdT&& value) { m_customModelKmsKeyIdHasBeenSet = true; m_customModelKmsKeyId = std::forward<CustomModelKmsKeyIdT>(value); }
    template<typename CustomModelKmsKeyIdT = Aws::String>
    CreateModelCustomizationJobRequest& WithCustomModelKmsKeyId(CustomModelKmsKeyIdT&& value) { SetCustomModelKmsKeyId(std::forward<CustomModelKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to attach to the job.</p>
     */
    inline const Aws::Vector<Tag>& GetJobTags() const { return m_jobTags; }
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }
    template<typename JobTagsT = Aws::Vector<Tag>>
    void SetJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::forward<JobTagsT>(value); }
    template<typename JobTagsT = Aws::Vector<Tag>>
    CreateModelCustomizationJobRequest& WithJobTags(JobTagsT&& value) { SetJobTags(std::forward<JobTagsT>(value)); return *this;}
    template<typename JobTagsT = Tag>
    CreateModelCustomizationJobRequest& AddJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace_back(std::forward<JobTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags to attach to the resulting custom model.</p>
     */
    inline const Aws::Vector<Tag>& GetCustomModelTags() const { return m_customModelTags; }
    inline bool CustomModelTagsHasBeenSet() const { return m_customModelTagsHasBeenSet; }
    template<typename CustomModelTagsT = Aws::Vector<Tag>>
    void SetCustomModelTags(CustomModelTagsT&& value) { m_customModelTagsHasBeenSet = true; m_customModelTags = std::forward<CustomModelTagsT>(value); }
    template<typename CustomModelTagsT = Aws::Vector<Tag>>
    CreateModelCustomizationJobRequest& WithCustomModelTags(CustomModelTagsT&& value) { SetCustomModelTags(std::forward<CustomModelTagsT>(value)); return *this;}
    template<typename CustomModelTagsT = Tag>
    CreateModelCustomizationJobRequest& AddCustomModelTags(CustomModelTagsT&& value) { m_customModelTagsHasBeenSet = true; m_customModelTags.emplace_back(std::forward<CustomModelTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the training dataset.</p>
     */
    inline const TrainingDataConfig& GetTrainingDataConfig() const { return m_trainingDataConfig; }
    inline bool TrainingDataConfigHasBeenSet() const { return m_trainingDataConfigHasBeenSet; }
    template<typename TrainingDataConfigT = TrainingDataConfig>
    void SetTrainingDataConfig(TrainingDataConfigT&& value) { m_trainingDataConfigHasBeenSet = true; m_trainingDataConfig = std::forward<TrainingDataConfigT>(value); }
    template<typename TrainingDataConfigT = TrainingDataConfig>
    CreateModelCustomizationJobRequest& WithTrainingDataConfig(TrainingDataConfigT&& value) { SetTrainingDataConfig(std::forward<TrainingDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the validation dataset. </p>
     */
    inline const ValidationDataConfig& GetValidationDataConfig() const { return m_validationDataConfig; }
    inline bool ValidationDataConfigHasBeenSet() const { return m_validationDataConfigHasBeenSet; }
    template<typename ValidationDataConfigT = ValidationDataConfig>
    void SetValidationDataConfig(ValidationDataConfigT&& value) { m_validationDataConfigHasBeenSet = true; m_validationDataConfig = std::forward<ValidationDataConfigT>(value); }
    template<typename ValidationDataConfigT = ValidationDataConfig>
    CreateModelCustomizationJobRequest& WithValidationDataConfig(ValidationDataConfigT&& value) { SetValidationDataConfig(std::forward<ValidationDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 location for the output data.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    CreateModelCustomizationJobRequest& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters related to tuning the model. For details on the format for
     * different models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models-hp.html">Custom
     * model hyperparameters</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const { return m_hyperParameters; }
    inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHyperParameters(HyperParametersT&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::forward<HyperParametersT>(value); }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    CreateModelCustomizationJobRequest& WithHyperParameters(HyperParametersT&& value) { SetHyperParameters(std::forward<HyperParametersT>(value)); return *this;}
    template<typename HyperParametersKeyT = Aws::String, typename HyperParametersValueT = Aws::String>
    CreateModelCustomizationJobRequest& AddHyperParameters(HyperParametersKeyT&& key, HyperParametersValueT&& value) {
      m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::forward<HyperParametersKeyT>(key), std::forward<HyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration of the Virtual Private Cloud (VPC) that contains the
     * resources that you're using for this job. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/vpc-model-customization.html">Protect
     * your model customization jobs using a VPC</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    CreateModelCustomizationJobRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customization configuration for the model customization job.</p>
     */
    inline const CustomizationConfig& GetCustomizationConfig() const { return m_customizationConfig; }
    inline bool CustomizationConfigHasBeenSet() const { return m_customizationConfigHasBeenSet; }
    template<typename CustomizationConfigT = CustomizationConfig>
    void SetCustomizationConfig(CustomizationConfigT&& value) { m_customizationConfigHasBeenSet = true; m_customizationConfig = std::forward<CustomizationConfigT>(value); }
    template<typename CustomizationConfigT = CustomizationConfig>
    CreateModelCustomizationJobRequest& WithCustomizationConfig(CustomizationConfigT&& value) { SetCustomizationConfig(std::forward<CustomizationConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_customModelName;
    bool m_customModelNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::String m_baseModelIdentifier;
    bool m_baseModelIdentifierHasBeenSet = false;

    CustomizationType m_customizationType{CustomizationType::NOT_SET};
    bool m_customizationTypeHasBeenSet = false;

    Aws::String m_customModelKmsKeyId;
    bool m_customModelKmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_jobTags;
    bool m_jobTagsHasBeenSet = false;

    Aws::Vector<Tag> m_customModelTags;
    bool m_customModelTagsHasBeenSet = false;

    TrainingDataConfig m_trainingDataConfig;
    bool m_trainingDataConfigHasBeenSet = false;

    ValidationDataConfig m_validationDataConfig;
    bool m_validationDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;
    bool m_hyperParametersHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    CustomizationConfig m_customizationConfig;
    bool m_customizationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
