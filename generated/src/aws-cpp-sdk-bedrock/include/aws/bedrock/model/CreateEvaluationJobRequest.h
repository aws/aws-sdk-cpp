/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The name of the model evaluation job. Model evaluation job names must unique
     * with your AWS account, and your account's AWS region.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the model evaluation job. Model evaluation job names must unique
     * with your AWS account, and your account's AWS region.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the model evaluation job. Model evaluation job names must unique
     * with your AWS account, and your account's AWS region.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the model evaluation job. Model evaluation job names must unique
     * with your AWS account, and your account's AWS region.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the model evaluation job. Model evaluation job names must unique
     * with your AWS account, and your account's AWS region.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the model evaluation job. Model evaluation job names must unique
     * with your AWS account, and your account's AWS region.</p>
     */
    inline CreateEvaluationJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the model evaluation job. Model evaluation job names must unique
     * with your AWS account, and your account's AWS region.</p>
     */
    inline CreateEvaluationJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the model evaluation job. Model evaluation job names must unique
     * with your AWS account, and your account's AWS region.</p>
     */
    inline CreateEvaluationJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>A description of the model evaluation job.</p>
     */
    inline const Aws::String& GetJobDescription() const{ return m_jobDescription; }

    /**
     * <p>A description of the model evaluation job.</p>
     */
    inline bool JobDescriptionHasBeenSet() const { return m_jobDescriptionHasBeenSet; }

    /**
     * <p>A description of the model evaluation job.</p>
     */
    inline void SetJobDescription(const Aws::String& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = value; }

    /**
     * <p>A description of the model evaluation job.</p>
     */
    inline void SetJobDescription(Aws::String&& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = std::move(value); }

    /**
     * <p>A description of the model evaluation job.</p>
     */
    inline void SetJobDescription(const char* value) { m_jobDescriptionHasBeenSet = true; m_jobDescription.assign(value); }

    /**
     * <p>A description of the model evaluation job.</p>
     */
    inline CreateEvaluationJobRequest& WithJobDescription(const Aws::String& value) { SetJobDescription(value); return *this;}

    /**
     * <p>A description of the model evaluation job.</p>
     */
    inline CreateEvaluationJobRequest& WithJobDescription(Aws::String&& value) { SetJobDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the model evaluation job.</p>
     */
    inline CreateEvaluationJobRequest& WithJobDescription(const char* value) { SetJobDescription(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateEvaluationJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateEvaluationJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateEvaluationJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock can
     * assume to perform tasks on your behalf. The service role must have Amazon
     * Bedrock as the service principal, and provide access to any Amazon S3 buckets
     * specified in the <code>EvaluationConfig</code> object. To pass this role to
     * Amazon Bedrock, the caller of this API must have the <code>iam:PassRole</code>
     * permission. To learn more about the required permissions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-security.html">Required
     * permissions</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock can
     * assume to perform tasks on your behalf. The service role must have Amazon
     * Bedrock as the service principal, and provide access to any Amazon S3 buckets
     * specified in the <code>EvaluationConfig</code> object. To pass this role to
     * Amazon Bedrock, the caller of this API must have the <code>iam:PassRole</code>
     * permission. To learn more about the required permissions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-security.html">Required
     * permissions</a>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock can
     * assume to perform tasks on your behalf. The service role must have Amazon
     * Bedrock as the service principal, and provide access to any Amazon S3 buckets
     * specified in the <code>EvaluationConfig</code> object. To pass this role to
     * Amazon Bedrock, the caller of this API must have the <code>iam:PassRole</code>
     * permission. To learn more about the required permissions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-security.html">Required
     * permissions</a>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock can
     * assume to perform tasks on your behalf. The service role must have Amazon
     * Bedrock as the service principal, and provide access to any Amazon S3 buckets
     * specified in the <code>EvaluationConfig</code> object. To pass this role to
     * Amazon Bedrock, the caller of this API must have the <code>iam:PassRole</code>
     * permission. To learn more about the required permissions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-security.html">Required
     * permissions</a>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock can
     * assume to perform tasks on your behalf. The service role must have Amazon
     * Bedrock as the service principal, and provide access to any Amazon S3 buckets
     * specified in the <code>EvaluationConfig</code> object. To pass this role to
     * Amazon Bedrock, the caller of this API must have the <code>iam:PassRole</code>
     * permission. To learn more about the required permissions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-security.html">Required
     * permissions</a>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock can
     * assume to perform tasks on your behalf. The service role must have Amazon
     * Bedrock as the service principal, and provide access to any Amazon S3 buckets
     * specified in the <code>EvaluationConfig</code> object. To pass this role to
     * Amazon Bedrock, the caller of this API must have the <code>iam:PassRole</code>
     * permission. To learn more about the required permissions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-security.html">Required
     * permissions</a>.</p>
     */
    inline CreateEvaluationJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock can
     * assume to perform tasks on your behalf. The service role must have Amazon
     * Bedrock as the service principal, and provide access to any Amazon S3 buckets
     * specified in the <code>EvaluationConfig</code> object. To pass this role to
     * Amazon Bedrock, the caller of this API must have the <code>iam:PassRole</code>
     * permission. To learn more about the required permissions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-security.html">Required
     * permissions</a>.</p>
     */
    inline CreateEvaluationJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock can
     * assume to perform tasks on your behalf. The service role must have Amazon
     * Bedrock as the service principal, and provide access to any Amazon S3 buckets
     * specified in the <code>EvaluationConfig</code> object. To pass this role to
     * Amazon Bedrock, the caller of this API must have the <code>iam:PassRole</code>
     * permission. To learn more about the required permissions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-security.html">Required
     * permissions</a>.</p>
     */
    inline CreateEvaluationJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Specify your customer managed key ARN that will be used to encrypt your model
     * evaluation job.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyId() const{ return m_customerEncryptionKeyId; }

    /**
     * <p>Specify your customer managed key ARN that will be used to encrypt your model
     * evaluation job.</p>
     */
    inline bool CustomerEncryptionKeyIdHasBeenSet() const { return m_customerEncryptionKeyIdHasBeenSet; }

    /**
     * <p>Specify your customer managed key ARN that will be used to encrypt your model
     * evaluation job.</p>
     */
    inline void SetCustomerEncryptionKeyId(const Aws::String& value) { m_customerEncryptionKeyIdHasBeenSet = true; m_customerEncryptionKeyId = value; }

    /**
     * <p>Specify your customer managed key ARN that will be used to encrypt your model
     * evaluation job.</p>
     */
    inline void SetCustomerEncryptionKeyId(Aws::String&& value) { m_customerEncryptionKeyIdHasBeenSet = true; m_customerEncryptionKeyId = std::move(value); }

    /**
     * <p>Specify your customer managed key ARN that will be used to encrypt your model
     * evaluation job.</p>
     */
    inline void SetCustomerEncryptionKeyId(const char* value) { m_customerEncryptionKeyIdHasBeenSet = true; m_customerEncryptionKeyId.assign(value); }

    /**
     * <p>Specify your customer managed key ARN that will be used to encrypt your model
     * evaluation job.</p>
     */
    inline CreateEvaluationJobRequest& WithCustomerEncryptionKeyId(const Aws::String& value) { SetCustomerEncryptionKeyId(value); return *this;}

    /**
     * <p>Specify your customer managed key ARN that will be used to encrypt your model
     * evaluation job.</p>
     */
    inline CreateEvaluationJobRequest& WithCustomerEncryptionKeyId(Aws::String&& value) { SetCustomerEncryptionKeyId(std::move(value)); return *this;}

    /**
     * <p>Specify your customer managed key ARN that will be used to encrypt your model
     * evaluation job.</p>
     */
    inline CreateEvaluationJobRequest& WithCustomerEncryptionKeyId(const char* value) { SetCustomerEncryptionKeyId(value); return *this;}


    /**
     * <p>Tags to attach to the model evaluation job.</p>
     */
    inline const Aws::Vector<Tag>& GetJobTags() const{ return m_jobTags; }

    /**
     * <p>Tags to attach to the model evaluation job.</p>
     */
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }

    /**
     * <p>Tags to attach to the model evaluation job.</p>
     */
    inline void SetJobTags(const Aws::Vector<Tag>& value) { m_jobTagsHasBeenSet = true; m_jobTags = value; }

    /**
     * <p>Tags to attach to the model evaluation job.</p>
     */
    inline void SetJobTags(Aws::Vector<Tag>&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::move(value); }

    /**
     * <p>Tags to attach to the model evaluation job.</p>
     */
    inline CreateEvaluationJobRequest& WithJobTags(const Aws::Vector<Tag>& value) { SetJobTags(value); return *this;}

    /**
     * <p>Tags to attach to the model evaluation job.</p>
     */
    inline CreateEvaluationJobRequest& WithJobTags(Aws::Vector<Tag>&& value) { SetJobTags(std::move(value)); return *this;}

    /**
     * <p>Tags to attach to the model evaluation job.</p>
     */
    inline CreateEvaluationJobRequest& AddJobTags(const Tag& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(value); return *this; }

    /**
     * <p>Tags to attach to the model evaluation job.</p>
     */
    inline CreateEvaluationJobRequest& AddJobTags(Tag&& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether the model evaluation job is automatic or uses human
     * worker.</p>
     */
    inline const EvaluationConfig& GetEvaluationConfig() const{ return m_evaluationConfig; }

    /**
     * <p>Specifies whether the model evaluation job is automatic or uses human
     * worker.</p>
     */
    inline bool EvaluationConfigHasBeenSet() const { return m_evaluationConfigHasBeenSet; }

    /**
     * <p>Specifies whether the model evaluation job is automatic or uses human
     * worker.</p>
     */
    inline void SetEvaluationConfig(const EvaluationConfig& value) { m_evaluationConfigHasBeenSet = true; m_evaluationConfig = value; }

    /**
     * <p>Specifies whether the model evaluation job is automatic or uses human
     * worker.</p>
     */
    inline void SetEvaluationConfig(EvaluationConfig&& value) { m_evaluationConfigHasBeenSet = true; m_evaluationConfig = std::move(value); }

    /**
     * <p>Specifies whether the model evaluation job is automatic or uses human
     * worker.</p>
     */
    inline CreateEvaluationJobRequest& WithEvaluationConfig(const EvaluationConfig& value) { SetEvaluationConfig(value); return *this;}

    /**
     * <p>Specifies whether the model evaluation job is automatic or uses human
     * worker.</p>
     */
    inline CreateEvaluationJobRequest& WithEvaluationConfig(EvaluationConfig&& value) { SetEvaluationConfig(std::move(value)); return *this;}


    /**
     * <p>Specify the models you want to use in your model evaluation job. Automatic
     * model evaluation jobs support a single model, and model evaluation job that use
     * human workers support two models.</p>
     */
    inline const EvaluationInferenceConfig& GetInferenceConfig() const{ return m_inferenceConfig; }

    /**
     * <p>Specify the models you want to use in your model evaluation job. Automatic
     * model evaluation jobs support a single model, and model evaluation job that use
     * human workers support two models.</p>
     */
    inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }

    /**
     * <p>Specify the models you want to use in your model evaluation job. Automatic
     * model evaluation jobs support a single model, and model evaluation job that use
     * human workers support two models.</p>
     */
    inline void SetInferenceConfig(const EvaluationInferenceConfig& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = value; }

    /**
     * <p>Specify the models you want to use in your model evaluation job. Automatic
     * model evaluation jobs support a single model, and model evaluation job that use
     * human workers support two models.</p>
     */
    inline void SetInferenceConfig(EvaluationInferenceConfig&& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = std::move(value); }

    /**
     * <p>Specify the models you want to use in your model evaluation job. Automatic
     * model evaluation jobs support a single model, and model evaluation job that use
     * human workers support two models.</p>
     */
    inline CreateEvaluationJobRequest& WithInferenceConfig(const EvaluationInferenceConfig& value) { SetInferenceConfig(value); return *this;}

    /**
     * <p>Specify the models you want to use in your model evaluation job. Automatic
     * model evaluation jobs support a single model, and model evaluation job that use
     * human workers support two models.</p>
     */
    inline CreateEvaluationJobRequest& WithInferenceConfig(EvaluationInferenceConfig&& value) { SetInferenceConfig(std::move(value)); return *this;}


    /**
     * <p>An object that defines where the results of model evaluation job will be
     * saved in Amazon S3.</p>
     */
    inline const EvaluationOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>An object that defines where the results of model evaluation job will be
     * saved in Amazon S3.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>An object that defines where the results of model evaluation job will be
     * saved in Amazon S3.</p>
     */
    inline void SetOutputDataConfig(const EvaluationOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>An object that defines where the results of model evaluation job will be
     * saved in Amazon S3.</p>
     */
    inline void SetOutputDataConfig(EvaluationOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>An object that defines where the results of model evaluation job will be
     * saved in Amazon S3.</p>
     */
    inline CreateEvaluationJobRequest& WithOutputDataConfig(const EvaluationOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>An object that defines where the results of model evaluation job will be
     * saved in Amazon S3.</p>
     */
    inline CreateEvaluationJobRequest& WithOutputDataConfig(EvaluationOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}

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
