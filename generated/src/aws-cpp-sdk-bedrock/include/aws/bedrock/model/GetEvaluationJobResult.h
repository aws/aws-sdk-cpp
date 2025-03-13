/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/EvaluationJobStatus.h>
#include <aws/bedrock/model/EvaluationJobType.h>
#include <aws/bedrock/model/ApplicationType.h>
#include <aws/bedrock/model/EvaluationConfig.h>
#include <aws/bedrock/model/EvaluationInferenceConfig.h>
#include <aws/bedrock/model/EvaluationOutputDataConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{
  class GetEvaluationJobResult
  {
  public:
    AWS_BEDROCK_API GetEvaluationJobResult() = default;
    AWS_BEDROCK_API GetEvaluationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetEvaluationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name for the evaluation job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    GetEvaluationJobResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the evaluation job.</p>
     */
    inline EvaluationJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(EvaluationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetEvaluationJobResult& WithStatus(EvaluationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the evaluation job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    GetEvaluationJobResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the evaluation job.</p>
     */
    inline const Aws::String& GetJobDescription() const { return m_jobDescription; }
    template<typename JobDescriptionT = Aws::String>
    void SetJobDescription(JobDescriptionT&& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = std::forward<JobDescriptionT>(value); }
    template<typename JobDescriptionT = Aws::String>
    GetEvaluationJobResult& WithJobDescription(JobDescriptionT&& value) { SetJobDescription(std::forward<JobDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role used in the evaluation
     * job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetEvaluationJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed encryption key
     * specified when the evaluation job was created.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyId() const { return m_customerEncryptionKeyId; }
    template<typename CustomerEncryptionKeyIdT = Aws::String>
    void SetCustomerEncryptionKeyId(CustomerEncryptionKeyIdT&& value) { m_customerEncryptionKeyIdHasBeenSet = true; m_customerEncryptionKeyId = std::forward<CustomerEncryptionKeyIdT>(value); }
    template<typename CustomerEncryptionKeyIdT = Aws::String>
    GetEvaluationJobResult& WithCustomerEncryptionKeyId(CustomerEncryptionKeyIdT&& value) { SetCustomerEncryptionKeyId(std::forward<CustomerEncryptionKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the evaluation job is automated or human-based.</p>
     */
    inline EvaluationJobType GetJobType() const { return m_jobType; }
    inline void SetJobType(EvaluationJobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline GetEvaluationJobResult& WithJobType(EvaluationJobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the evaluation job is for evaluating a model or evaluating
     * a knowledge base (retrieval and response generation).</p>
     */
    inline ApplicationType GetApplicationType() const { return m_applicationType; }
    inline void SetApplicationType(ApplicationType value) { m_applicationTypeHasBeenSet = true; m_applicationType = value; }
    inline GetEvaluationJobResult& WithApplicationType(ApplicationType value) { SetApplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of either an automated or human-based
     * evaluation job.</p>
     */
    inline const EvaluationConfig& GetEvaluationConfig() const { return m_evaluationConfig; }
    template<typename EvaluationConfigT = EvaluationConfig>
    void SetEvaluationConfig(EvaluationConfigT&& value) { m_evaluationConfigHasBeenSet = true; m_evaluationConfig = std::forward<EvaluationConfigT>(value); }
    template<typename EvaluationConfigT = EvaluationConfig>
    GetEvaluationJobResult& WithEvaluationConfig(EvaluationConfigT&& value) { SetEvaluationConfig(std::forward<EvaluationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of the inference model used for the
     * evaluation job. </p>
     */
    inline const EvaluationInferenceConfig& GetInferenceConfig() const { return m_inferenceConfig; }
    template<typename InferenceConfigT = EvaluationInferenceConfig>
    void SetInferenceConfig(InferenceConfigT&& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = std::forward<InferenceConfigT>(value); }
    template<typename InferenceConfigT = EvaluationInferenceConfig>
    GetEvaluationJobResult& WithInferenceConfig(InferenceConfigT&& value) { SetInferenceConfig(std::forward<InferenceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of the Amazon S3 bucket for storing the
     * results of the evaluation job.</p>
     */
    inline const EvaluationOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    template<typename OutputDataConfigT = EvaluationOutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = EvaluationOutputDataConfig>
    GetEvaluationJobResult& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the evaluation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetEvaluationJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the evaluation job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    GetEvaluationJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of strings that specify why the evaluation job failed to create.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureMessages() const { return m_failureMessages; }
    template<typename FailureMessagesT = Aws::Vector<Aws::String>>
    void SetFailureMessages(FailureMessagesT&& value) { m_failureMessagesHasBeenSet = true; m_failureMessages = std::forward<FailureMessagesT>(value); }
    template<typename FailureMessagesT = Aws::Vector<Aws::String>>
    GetEvaluationJobResult& WithFailureMessages(FailureMessagesT&& value) { SetFailureMessages(std::forward<FailureMessagesT>(value)); return *this;}
    template<typename FailureMessagesT = Aws::String>
    GetEvaluationJobResult& AddFailureMessages(FailureMessagesT&& value) { m_failureMessagesHasBeenSet = true; m_failureMessages.emplace_back(std::forward<FailureMessagesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEvaluationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    EvaluationJobStatus m_status{EvaluationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobDescription;
    bool m_jobDescriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_customerEncryptionKeyId;
    bool m_customerEncryptionKeyIdHasBeenSet = false;

    EvaluationJobType m_jobType{EvaluationJobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    ApplicationType m_applicationType{ApplicationType::NOT_SET};
    bool m_applicationTypeHasBeenSet = false;

    EvaluationConfig m_evaluationConfig;
    bool m_evaluationConfigHasBeenSet = false;

    EvaluationInferenceConfig m_inferenceConfig;
    bool m_inferenceConfigHasBeenSet = false;

    EvaluationOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureMessages;
    bool m_failureMessagesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
