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
    AWS_BEDROCK_API CreateModelCustomizationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelCustomizationJob"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    /**
     * <p>Enter a unique name for the fine-tuning job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>Enter a unique name for the fine-tuning job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>Enter a unique name for the fine-tuning job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>Enter a unique name for the fine-tuning job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>Enter a unique name for the fine-tuning job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>Enter a unique name for the fine-tuning job.</p>
     */
    inline CreateModelCustomizationJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>Enter a unique name for the fine-tuning job.</p>
     */
    inline CreateModelCustomizationJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>Enter a unique name for the fine-tuning job.</p>
     */
    inline CreateModelCustomizationJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Enter a name for the custom model.</p>
     */
    inline const Aws::String& GetCustomModelName() const{ return m_customModelName; }

    /**
     * <p>Enter a name for the custom model.</p>
     */
    inline bool CustomModelNameHasBeenSet() const { return m_customModelNameHasBeenSet; }

    /**
     * <p>Enter a name for the custom model.</p>
     */
    inline void SetCustomModelName(const Aws::String& value) { m_customModelNameHasBeenSet = true; m_customModelName = value; }

    /**
     * <p>Enter a name for the custom model.</p>
     */
    inline void SetCustomModelName(Aws::String&& value) { m_customModelNameHasBeenSet = true; m_customModelName = std::move(value); }

    /**
     * <p>Enter a name for the custom model.</p>
     */
    inline void SetCustomModelName(const char* value) { m_customModelNameHasBeenSet = true; m_customModelName.assign(value); }

    /**
     * <p>Enter a name for the custom model.</p>
     */
    inline CreateModelCustomizationJobRequest& WithCustomModelName(const Aws::String& value) { SetCustomModelName(value); return *this;}

    /**
     * <p>Enter a name for the custom model.</p>
     */
    inline CreateModelCustomizationJobRequest& WithCustomModelName(Aws::String&& value) { SetCustomModelName(std::move(value)); return *this;}

    /**
     * <p>Enter a name for the custom model.</p>
     */
    inline CreateModelCustomizationJobRequest& WithCustomModelName(const char* value) { SetCustomModelName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Bedrock can assume
     * to perform tasks on your behalf. For example, during model training, Amazon
     * Bedrock needs your permission to read input data from an S3 bucket, write model
     * artifacts to an S3 bucket. To pass this role to Amazon Bedrock, the caller of
     * this API must have the <code>iam:PassRole</code> permission. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Bedrock can assume
     * to perform tasks on your behalf. For example, during model training, Amazon
     * Bedrock needs your permission to read input data from an S3 bucket, write model
     * artifacts to an S3 bucket. To pass this role to Amazon Bedrock, the caller of
     * this API must have the <code>iam:PassRole</code> permission. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Bedrock can assume
     * to perform tasks on your behalf. For example, during model training, Amazon
     * Bedrock needs your permission to read input data from an S3 bucket, write model
     * artifacts to an S3 bucket. To pass this role to Amazon Bedrock, the caller of
     * this API must have the <code>iam:PassRole</code> permission. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Bedrock can assume
     * to perform tasks on your behalf. For example, during model training, Amazon
     * Bedrock needs your permission to read input data from an S3 bucket, write model
     * artifacts to an S3 bucket. To pass this role to Amazon Bedrock, the caller of
     * this API must have the <code>iam:PassRole</code> permission. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Bedrock can assume
     * to perform tasks on your behalf. For example, during model training, Amazon
     * Bedrock needs your permission to read input data from an S3 bucket, write model
     * artifacts to an S3 bucket. To pass this role to Amazon Bedrock, the caller of
     * this API must have the <code>iam:PassRole</code> permission. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Bedrock can assume
     * to perform tasks on your behalf. For example, during model training, Amazon
     * Bedrock needs your permission to read input data from an S3 bucket, write model
     * artifacts to an S3 bucket. To pass this role to Amazon Bedrock, the caller of
     * this API must have the <code>iam:PassRole</code> permission. </p>
     */
    inline CreateModelCustomizationJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Bedrock can assume
     * to perform tasks on your behalf. For example, during model training, Amazon
     * Bedrock needs your permission to read input data from an S3 bucket, write model
     * artifacts to an S3 bucket. To pass this role to Amazon Bedrock, the caller of
     * this API must have the <code>iam:PassRole</code> permission. </p>
     */
    inline CreateModelCustomizationJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Bedrock can assume
     * to perform tasks on your behalf. For example, during model training, Amazon
     * Bedrock needs your permission to read input data from an S3 bucket, write model
     * artifacts to an S3 bucket. To pass this role to Amazon Bedrock, the caller of
     * this API must have the <code>iam:PassRole</code> permission. </p>
     */
    inline CreateModelCustomizationJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Unique token value that you can provide. The GetModelCustomizationJob
     * response includes the same token value.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique token value that you can provide. The GetModelCustomizationJob
     * response includes the same token value.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique token value that you can provide. The GetModelCustomizationJob
     * response includes the same token value.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique token value that you can provide. The GetModelCustomizationJob
     * response includes the same token value.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique token value that you can provide. The GetModelCustomizationJob
     * response includes the same token value.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique token value that you can provide. The GetModelCustomizationJob
     * response includes the same token value.</p>
     */
    inline CreateModelCustomizationJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique token value that you can provide. The GetModelCustomizationJob
     * response includes the same token value.</p>
     */
    inline CreateModelCustomizationJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique token value that you can provide. The GetModelCustomizationJob
     * response includes the same token value.</p>
     */
    inline CreateModelCustomizationJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Name of the base model.</p>
     */
    inline const Aws::String& GetBaseModelIdentifier() const{ return m_baseModelIdentifier; }

    /**
     * <p>Name of the base model.</p>
     */
    inline bool BaseModelIdentifierHasBeenSet() const { return m_baseModelIdentifierHasBeenSet; }

    /**
     * <p>Name of the base model.</p>
     */
    inline void SetBaseModelIdentifier(const Aws::String& value) { m_baseModelIdentifierHasBeenSet = true; m_baseModelIdentifier = value; }

    /**
     * <p>Name of the base model.</p>
     */
    inline void SetBaseModelIdentifier(Aws::String&& value) { m_baseModelIdentifierHasBeenSet = true; m_baseModelIdentifier = std::move(value); }

    /**
     * <p>Name of the base model.</p>
     */
    inline void SetBaseModelIdentifier(const char* value) { m_baseModelIdentifierHasBeenSet = true; m_baseModelIdentifier.assign(value); }

    /**
     * <p>Name of the base model.</p>
     */
    inline CreateModelCustomizationJobRequest& WithBaseModelIdentifier(const Aws::String& value) { SetBaseModelIdentifier(value); return *this;}

    /**
     * <p>Name of the base model.</p>
     */
    inline CreateModelCustomizationJobRequest& WithBaseModelIdentifier(Aws::String&& value) { SetBaseModelIdentifier(std::move(value)); return *this;}

    /**
     * <p>Name of the base model.</p>
     */
    inline CreateModelCustomizationJobRequest& WithBaseModelIdentifier(const char* value) { SetBaseModelIdentifier(value); return *this;}


    /**
     * <p>The customization type.</p>
     */
    inline const CustomizationType& GetCustomizationType() const{ return m_customizationType; }

    /**
     * <p>The customization type.</p>
     */
    inline bool CustomizationTypeHasBeenSet() const { return m_customizationTypeHasBeenSet; }

    /**
     * <p>The customization type.</p>
     */
    inline void SetCustomizationType(const CustomizationType& value) { m_customizationTypeHasBeenSet = true; m_customizationType = value; }

    /**
     * <p>The customization type.</p>
     */
    inline void SetCustomizationType(CustomizationType&& value) { m_customizationTypeHasBeenSet = true; m_customizationType = std::move(value); }

    /**
     * <p>The customization type.</p>
     */
    inline CreateModelCustomizationJobRequest& WithCustomizationType(const CustomizationType& value) { SetCustomizationType(value); return *this;}

    /**
     * <p>The customization type.</p>
     */
    inline CreateModelCustomizationJobRequest& WithCustomizationType(CustomizationType&& value) { SetCustomizationType(std::move(value)); return *this;}


    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetCustomModelKmsKeyId() const{ return m_customModelKmsKeyId; }

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline bool CustomModelKmsKeyIdHasBeenSet() const { return m_customModelKmsKeyIdHasBeenSet; }

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline void SetCustomModelKmsKeyId(const Aws::String& value) { m_customModelKmsKeyIdHasBeenSet = true; m_customModelKmsKeyId = value; }

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline void SetCustomModelKmsKeyId(Aws::String&& value) { m_customModelKmsKeyIdHasBeenSet = true; m_customModelKmsKeyId = std::move(value); }

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline void SetCustomModelKmsKeyId(const char* value) { m_customModelKmsKeyIdHasBeenSet = true; m_customModelKmsKeyId.assign(value); }

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline CreateModelCustomizationJobRequest& WithCustomModelKmsKeyId(const Aws::String& value) { SetCustomModelKmsKeyId(value); return *this;}

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline CreateModelCustomizationJobRequest& WithCustomModelKmsKeyId(Aws::String&& value) { SetCustomModelKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline CreateModelCustomizationJobRequest& WithCustomModelKmsKeyId(const char* value) { SetCustomModelKmsKeyId(value); return *this;}


    /**
     * <p>Assign tags to the job.</p>
     */
    inline const Aws::Vector<Tag>& GetJobTags() const{ return m_jobTags; }

    /**
     * <p>Assign tags to the job.</p>
     */
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }

    /**
     * <p>Assign tags to the job.</p>
     */
    inline void SetJobTags(const Aws::Vector<Tag>& value) { m_jobTagsHasBeenSet = true; m_jobTags = value; }

    /**
     * <p>Assign tags to the job.</p>
     */
    inline void SetJobTags(Aws::Vector<Tag>&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::move(value); }

    /**
     * <p>Assign tags to the job.</p>
     */
    inline CreateModelCustomizationJobRequest& WithJobTags(const Aws::Vector<Tag>& value) { SetJobTags(value); return *this;}

    /**
     * <p>Assign tags to the job.</p>
     */
    inline CreateModelCustomizationJobRequest& WithJobTags(Aws::Vector<Tag>&& value) { SetJobTags(std::move(value)); return *this;}

    /**
     * <p>Assign tags to the job.</p>
     */
    inline CreateModelCustomizationJobRequest& AddJobTags(const Tag& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(value); return *this; }

    /**
     * <p>Assign tags to the job.</p>
     */
    inline CreateModelCustomizationJobRequest& AddJobTags(Tag&& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(std::move(value)); return *this; }


    /**
     * <p>Assign tags to the custom model.</p>
     */
    inline const Aws::Vector<Tag>& GetCustomModelTags() const{ return m_customModelTags; }

    /**
     * <p>Assign tags to the custom model.</p>
     */
    inline bool CustomModelTagsHasBeenSet() const { return m_customModelTagsHasBeenSet; }

    /**
     * <p>Assign tags to the custom model.</p>
     */
    inline void SetCustomModelTags(const Aws::Vector<Tag>& value) { m_customModelTagsHasBeenSet = true; m_customModelTags = value; }

    /**
     * <p>Assign tags to the custom model.</p>
     */
    inline void SetCustomModelTags(Aws::Vector<Tag>&& value) { m_customModelTagsHasBeenSet = true; m_customModelTags = std::move(value); }

    /**
     * <p>Assign tags to the custom model.</p>
     */
    inline CreateModelCustomizationJobRequest& WithCustomModelTags(const Aws::Vector<Tag>& value) { SetCustomModelTags(value); return *this;}

    /**
     * <p>Assign tags to the custom model.</p>
     */
    inline CreateModelCustomizationJobRequest& WithCustomModelTags(Aws::Vector<Tag>&& value) { SetCustomModelTags(std::move(value)); return *this;}

    /**
     * <p>Assign tags to the custom model.</p>
     */
    inline CreateModelCustomizationJobRequest& AddCustomModelTags(const Tag& value) { m_customModelTagsHasBeenSet = true; m_customModelTags.push_back(value); return *this; }

    /**
     * <p>Assign tags to the custom model.</p>
     */
    inline CreateModelCustomizationJobRequest& AddCustomModelTags(Tag&& value) { m_customModelTagsHasBeenSet = true; m_customModelTags.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the training dataset.</p>
     */
    inline const TrainingDataConfig& GetTrainingDataConfig() const{ return m_trainingDataConfig; }

    /**
     * <p>Information about the training dataset.</p>
     */
    inline bool TrainingDataConfigHasBeenSet() const { return m_trainingDataConfigHasBeenSet; }

    /**
     * <p>Information about the training dataset.</p>
     */
    inline void SetTrainingDataConfig(const TrainingDataConfig& value) { m_trainingDataConfigHasBeenSet = true; m_trainingDataConfig = value; }

    /**
     * <p>Information about the training dataset.</p>
     */
    inline void SetTrainingDataConfig(TrainingDataConfig&& value) { m_trainingDataConfigHasBeenSet = true; m_trainingDataConfig = std::move(value); }

    /**
     * <p>Information about the training dataset.</p>
     */
    inline CreateModelCustomizationJobRequest& WithTrainingDataConfig(const TrainingDataConfig& value) { SetTrainingDataConfig(value); return *this;}

    /**
     * <p>Information about the training dataset.</p>
     */
    inline CreateModelCustomizationJobRequest& WithTrainingDataConfig(TrainingDataConfig&& value) { SetTrainingDataConfig(std::move(value)); return *this;}


    /**
     * <p>Information about the validation dataset. </p>
     */
    inline const ValidationDataConfig& GetValidationDataConfig() const{ return m_validationDataConfig; }

    /**
     * <p>Information about the validation dataset. </p>
     */
    inline bool ValidationDataConfigHasBeenSet() const { return m_validationDataConfigHasBeenSet; }

    /**
     * <p>Information about the validation dataset. </p>
     */
    inline void SetValidationDataConfig(const ValidationDataConfig& value) { m_validationDataConfigHasBeenSet = true; m_validationDataConfig = value; }

    /**
     * <p>Information about the validation dataset. </p>
     */
    inline void SetValidationDataConfig(ValidationDataConfig&& value) { m_validationDataConfigHasBeenSet = true; m_validationDataConfig = std::move(value); }

    /**
     * <p>Information about the validation dataset. </p>
     */
    inline CreateModelCustomizationJobRequest& WithValidationDataConfig(const ValidationDataConfig& value) { SetValidationDataConfig(value); return *this;}

    /**
     * <p>Information about the validation dataset. </p>
     */
    inline CreateModelCustomizationJobRequest& WithValidationDataConfig(ValidationDataConfig&& value) { SetValidationDataConfig(std::move(value)); return *this;}


    /**
     * <p>S3 location for the output data.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>S3 location for the output data.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>S3 location for the output data.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>S3 location for the output data.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>S3 location for the output data.</p>
     */
    inline CreateModelCustomizationJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>S3 location for the output data.</p>
     */
    inline CreateModelCustomizationJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const{ return m_hyperParameters; }

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline void SetHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = value; }

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline void SetHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::move(value); }

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline CreateModelCustomizationJobRequest& WithHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperParameters(value); return *this;}

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline CreateModelCustomizationJobRequest& WithHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperParameters(std::move(value)); return *this;}

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline CreateModelCustomizationJobRequest& AddHyperParameters(const Aws::String& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline CreateModelCustomizationJobRequest& AddHyperParameters(Aws::String&& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline CreateModelCustomizationJobRequest& AddHyperParameters(const Aws::String& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline CreateModelCustomizationJobRequest& AddHyperParameters(Aws::String&& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline CreateModelCustomizationJobRequest& AddHyperParameters(const char* key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline CreateModelCustomizationJobRequest& AddHyperParameters(Aws::String&& key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Parameters related to tuning the model.</p>
     */
    inline CreateModelCustomizationJobRequest& AddHyperParameters(const char* key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }


    /**
     * <p>VPC configuration (optional). Configuration parameters for the private
     * Virtual Private Cloud (VPC) that contains the resources you are using for this
     * job.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>VPC configuration (optional). Configuration parameters for the private
     * Virtual Private Cloud (VPC) that contains the resources you are using for this
     * job.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>VPC configuration (optional). Configuration parameters for the private
     * Virtual Private Cloud (VPC) that contains the resources you are using for this
     * job.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>VPC configuration (optional). Configuration parameters for the private
     * Virtual Private Cloud (VPC) that contains the resources you are using for this
     * job.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>VPC configuration (optional). Configuration parameters for the private
     * Virtual Private Cloud (VPC) that contains the resources you are using for this
     * job.</p>
     */
    inline CreateModelCustomizationJobRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>VPC configuration (optional). Configuration parameters for the private
     * Virtual Private Cloud (VPC) that contains the resources you are using for this
     * job.</p>
     */
    inline CreateModelCustomizationJobRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_customModelName;
    bool m_customModelNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_baseModelIdentifier;
    bool m_baseModelIdentifierHasBeenSet = false;

    CustomizationType m_customizationType;
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
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
