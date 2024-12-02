/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ApplicationType.h>
#include <aws/bedrock/model/EvaluationConfig.h>
#include <aws/bedrock/model/EvaluationInferenceConfig.h>
#include <aws/bedrock/model/EvaluationOutputDataConfig.h>
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
  class CreateEvaluationJobRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateEvaluationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEvaluationJob"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for the evaluation job. Names must unique with your Amazon Web
     * Services account, and your account's Amazon Web Services region.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline CreateEvaluationJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline CreateEvaluationJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline CreateEvaluationJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the evaluation job.</p>
     */
    inline const Aws::String& GetJobDescription() const{ return m_jobDescription; }
    inline bool JobDescriptionHasBeenSet() const { return m_jobDescriptionHasBeenSet; }
    inline void SetJobDescription(const Aws::String& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = value; }
    inline void SetJobDescription(Aws::String&& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = std::move(value); }
    inline void SetJobDescription(const char* value) { m_jobDescriptionHasBeenSet = true; m_jobDescription.assign(value); }
    inline CreateEvaluationJobRequest& WithJobDescription(const Aws::String& value) { SetJobDescription(value); return *this;}
    inline CreateEvaluationJobRequest& WithJobDescription(Aws::String&& value) { SetJobDescription(std::move(value)); return *this;}
    inline CreateEvaluationJobRequest& WithJobDescription(const char* value) { SetJobDescription(value); return *this;}
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
    inline CreateEvaluationJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateEvaluationJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateEvaluationJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock can
     * assume to perform tasks on your behalf. To learn more about the required
     * permissions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-security.html">Required
     * permissions for model evaluations</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateEvaluationJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateEvaluationJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateEvaluationJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify your customer managed encryption key Amazon Resource Name (ARN) that
     * will be used to encrypt your evaluation job.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyId() const{ return m_customerEncryptionKeyId; }
    inline bool CustomerEncryptionKeyIdHasBeenSet() const { return m_customerEncryptionKeyIdHasBeenSet; }
    inline void SetCustomerEncryptionKeyId(const Aws::String& value) { m_customerEncryptionKeyIdHasBeenSet = true; m_customerEncryptionKeyId = value; }
    inline void SetCustomerEncryptionKeyId(Aws::String&& value) { m_customerEncryptionKeyIdHasBeenSet = true; m_customerEncryptionKeyId = std::move(value); }
    inline void SetCustomerEncryptionKeyId(const char* value) { m_customerEncryptionKeyIdHasBeenSet = true; m_customerEncryptionKeyId.assign(value); }
    inline CreateEvaluationJobRequest& WithCustomerEncryptionKeyId(const Aws::String& value) { SetCustomerEncryptionKeyId(value); return *this;}
    inline CreateEvaluationJobRequest& WithCustomerEncryptionKeyId(Aws::String&& value) { SetCustomerEncryptionKeyId(std::move(value)); return *this;}
    inline CreateEvaluationJobRequest& WithCustomerEncryptionKeyId(const char* value) { SetCustomerEncryptionKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to attach to the model evaluation job.</p>
     */
    inline const Aws::Vector<Tag>& GetJobTags() const{ return m_jobTags; }
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }
    inline void SetJobTags(const Aws::Vector<Tag>& value) { m_jobTagsHasBeenSet = true; m_jobTags = value; }
    inline void SetJobTags(Aws::Vector<Tag>&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::move(value); }
    inline CreateEvaluationJobRequest& WithJobTags(const Aws::Vector<Tag>& value) { SetJobTags(value); return *this;}
    inline CreateEvaluationJobRequest& WithJobTags(Aws::Vector<Tag>&& value) { SetJobTags(std::move(value)); return *this;}
    inline CreateEvaluationJobRequest& AddJobTags(const Tag& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(value); return *this; }
    inline CreateEvaluationJobRequest& AddJobTags(Tag&& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the evaluation job is for evaluating a model or evaluating
     * a knowledge base (retrieval and response generation).</p>
     */
    inline const ApplicationType& GetApplicationType() const{ return m_applicationType; }
    inline bool ApplicationTypeHasBeenSet() const { return m_applicationTypeHasBeenSet; }
    inline void SetApplicationType(const ApplicationType& value) { m_applicationTypeHasBeenSet = true; m_applicationType = value; }
    inline void SetApplicationType(ApplicationType&& value) { m_applicationTypeHasBeenSet = true; m_applicationType = std::move(value); }
    inline CreateEvaluationJobRequest& WithApplicationType(const ApplicationType& value) { SetApplicationType(value); return *this;}
    inline CreateEvaluationJobRequest& WithApplicationType(ApplicationType&& value) { SetApplicationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of either an automated or human-based
     * evaluation job.</p>
     */
    inline const EvaluationConfig& GetEvaluationConfig() const{ return m_evaluationConfig; }
    inline bool EvaluationConfigHasBeenSet() const { return m_evaluationConfigHasBeenSet; }
    inline void SetEvaluationConfig(const EvaluationConfig& value) { m_evaluationConfigHasBeenSet = true; m_evaluationConfig = value; }
    inline void SetEvaluationConfig(EvaluationConfig&& value) { m_evaluationConfigHasBeenSet = true; m_evaluationConfig = std::move(value); }
    inline CreateEvaluationJobRequest& WithEvaluationConfig(const EvaluationConfig& value) { SetEvaluationConfig(value); return *this;}
    inline CreateEvaluationJobRequest& WithEvaluationConfig(EvaluationConfig&& value) { SetEvaluationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of the inference model for the evaluation
     * job.</p> <p>For model evaluation jobs, automated jobs support a single model or
     * <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
     * profile</a>, and jobs that use human workers support two models or inference
     * profiles.</p>
     */
    inline const EvaluationInferenceConfig& GetInferenceConfig() const{ return m_inferenceConfig; }
    inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }
    inline void SetInferenceConfig(const EvaluationInferenceConfig& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = value; }
    inline void SetInferenceConfig(EvaluationInferenceConfig&& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = std::move(value); }
    inline CreateEvaluationJobRequest& WithInferenceConfig(const EvaluationInferenceConfig& value) { SetInferenceConfig(value); return *this;}
    inline CreateEvaluationJobRequest& WithInferenceConfig(EvaluationInferenceConfig&& value) { SetInferenceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of the Amazon S3 bucket for storing the
     * results of the evaluation job.</p>
     */
    inline const EvaluationOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const EvaluationOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(EvaluationOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline CreateEvaluationJobRequest& WithOutputDataConfig(const EvaluationOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline CreateEvaluationJobRequest& WithOutputDataConfig(EvaluationOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobDescription;
    bool m_jobDescriptionHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_customerEncryptionKeyId;
    bool m_customerEncryptionKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_jobTags;
    bool m_jobTagsHasBeenSet = false;

    ApplicationType m_applicationType;
    bool m_applicationTypeHasBeenSet = false;

    EvaluationConfig m_evaluationConfig;
    bool m_evaluationConfigHasBeenSet = false;

    EvaluationInferenceConfig m_inferenceConfig;
    bool m_inferenceConfigHasBeenSet = false;

    EvaluationOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
