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
    AWS_BEDROCK_API CreateEvaluationJobRequest() = default;

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
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    CreateEvaluationJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the evaluation job.</p>
     */
    inline const Aws::String& GetJobDescription() const { return m_jobDescription; }
    inline bool JobDescriptionHasBeenSet() const { return m_jobDescriptionHasBeenSet; }
    template<typename JobDescriptionT = Aws::String>
    void SetJobDescription(JobDescriptionT&& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = std::forward<JobDescriptionT>(value); }
    template<typename JobDescriptionT = Aws::String>
    CreateEvaluationJobRequest& WithJobDescription(JobDescriptionT&& value) { SetJobDescription(std::forward<JobDescriptionT>(value)); return *this;}
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
    CreateEvaluationJobRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock can
     * assume to perform tasks on your behalf. To learn more about the required
     * permissions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-security.html">Required
     * permissions for model evaluations</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateEvaluationJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify your customer managed encryption key Amazon Resource Name (ARN) that
     * will be used to encrypt your evaluation job.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyId() const { return m_customerEncryptionKeyId; }
    inline bool CustomerEncryptionKeyIdHasBeenSet() const { return m_customerEncryptionKeyIdHasBeenSet; }
    template<typename CustomerEncryptionKeyIdT = Aws::String>
    void SetCustomerEncryptionKeyId(CustomerEncryptionKeyIdT&& value) { m_customerEncryptionKeyIdHasBeenSet = true; m_customerEncryptionKeyId = std::forward<CustomerEncryptionKeyIdT>(value); }
    template<typename CustomerEncryptionKeyIdT = Aws::String>
    CreateEvaluationJobRequest& WithCustomerEncryptionKeyId(CustomerEncryptionKeyIdT&& value) { SetCustomerEncryptionKeyId(std::forward<CustomerEncryptionKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to attach to the model evaluation job.</p>
     */
    inline const Aws::Vector<Tag>& GetJobTags() const { return m_jobTags; }
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }
    template<typename JobTagsT = Aws::Vector<Tag>>
    void SetJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::forward<JobTagsT>(value); }
    template<typename JobTagsT = Aws::Vector<Tag>>
    CreateEvaluationJobRequest& WithJobTags(JobTagsT&& value) { SetJobTags(std::forward<JobTagsT>(value)); return *this;}
    template<typename JobTagsT = Tag>
    CreateEvaluationJobRequest& AddJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace_back(std::forward<JobTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the evaluation job is for evaluating a model or evaluating
     * a knowledge base (retrieval and response generation).</p>
     */
    inline ApplicationType GetApplicationType() const { return m_applicationType; }
    inline bool ApplicationTypeHasBeenSet() const { return m_applicationTypeHasBeenSet; }
    inline void SetApplicationType(ApplicationType value) { m_applicationTypeHasBeenSet = true; m_applicationType = value; }
    inline CreateEvaluationJobRequest& WithApplicationType(ApplicationType value) { SetApplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of either an automated or human-based
     * evaluation job.</p>
     */
    inline const EvaluationConfig& GetEvaluationConfig() const { return m_evaluationConfig; }
    inline bool EvaluationConfigHasBeenSet() const { return m_evaluationConfigHasBeenSet; }
    template<typename EvaluationConfigT = EvaluationConfig>
    void SetEvaluationConfig(EvaluationConfigT&& value) { m_evaluationConfigHasBeenSet = true; m_evaluationConfig = std::forward<EvaluationConfigT>(value); }
    template<typename EvaluationConfigT = EvaluationConfig>
    CreateEvaluationJobRequest& WithEvaluationConfig(EvaluationConfigT&& value) { SetEvaluationConfig(std::forward<EvaluationConfigT>(value)); return *this;}
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
    inline const EvaluationInferenceConfig& GetInferenceConfig() const { return m_inferenceConfig; }
    inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }
    template<typename InferenceConfigT = EvaluationInferenceConfig>
    void SetInferenceConfig(InferenceConfigT&& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = std::forward<InferenceConfigT>(value); }
    template<typename InferenceConfigT = EvaluationInferenceConfig>
    CreateEvaluationJobRequest& WithInferenceConfig(InferenceConfigT&& value) { SetInferenceConfig(std::forward<InferenceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of the Amazon S3 bucket for storing the
     * results of the evaluation job.</p>
     */
    inline const EvaluationOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = EvaluationOutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = EvaluationOutputDataConfig>
    CreateEvaluationJobRequest& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobDescription;
    bool m_jobDescriptionHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_customerEncryptionKeyId;
    bool m_customerEncryptionKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_jobTags;
    bool m_jobTagsHasBeenSet = false;

    ApplicationType m_applicationType{ApplicationType::NOT_SET};
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
