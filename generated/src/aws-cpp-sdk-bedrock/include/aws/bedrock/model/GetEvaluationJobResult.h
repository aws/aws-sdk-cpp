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
    AWS_BEDROCK_API GetEvaluationJobResult();
    AWS_BEDROCK_API GetEvaluationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetEvaluationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name for the evaluation job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobName.assign(value); }
    inline GetEvaluationJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline GetEvaluationJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline GetEvaluationJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the evaluation job.</p>
     */
    inline const EvaluationJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const EvaluationJobStatus& value) { m_status = value; }
    inline void SetStatus(EvaluationJobStatus&& value) { m_status = std::move(value); }
    inline GetEvaluationJobResult& WithStatus(const EvaluationJobStatus& value) { SetStatus(value); return *this;}
    inline GetEvaluationJobResult& WithStatus(EvaluationJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the evaluation job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline GetEvaluationJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline GetEvaluationJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline GetEvaluationJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the evaluation job.</p>
     */
    inline const Aws::String& GetJobDescription() const{ return m_jobDescription; }
    inline void SetJobDescription(const Aws::String& value) { m_jobDescription = value; }
    inline void SetJobDescription(Aws::String&& value) { m_jobDescription = std::move(value); }
    inline void SetJobDescription(const char* value) { m_jobDescription.assign(value); }
    inline GetEvaluationJobResult& WithJobDescription(const Aws::String& value) { SetJobDescription(value); return *this;}
    inline GetEvaluationJobResult& WithJobDescription(Aws::String&& value) { SetJobDescription(std::move(value)); return *this;}
    inline GetEvaluationJobResult& WithJobDescription(const char* value) { SetJobDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role used in the evaluation
     * job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetEvaluationJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetEvaluationJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetEvaluationJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed encryption key
     * specified when the evaluation job was created.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyId() const{ return m_customerEncryptionKeyId; }
    inline void SetCustomerEncryptionKeyId(const Aws::String& value) { m_customerEncryptionKeyId = value; }
    inline void SetCustomerEncryptionKeyId(Aws::String&& value) { m_customerEncryptionKeyId = std::move(value); }
    inline void SetCustomerEncryptionKeyId(const char* value) { m_customerEncryptionKeyId.assign(value); }
    inline GetEvaluationJobResult& WithCustomerEncryptionKeyId(const Aws::String& value) { SetCustomerEncryptionKeyId(value); return *this;}
    inline GetEvaluationJobResult& WithCustomerEncryptionKeyId(Aws::String&& value) { SetCustomerEncryptionKeyId(std::move(value)); return *this;}
    inline GetEvaluationJobResult& WithCustomerEncryptionKeyId(const char* value) { SetCustomerEncryptionKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the evaluation job is automated or human-based.</p>
     */
    inline const EvaluationJobType& GetJobType() const{ return m_jobType; }
    inline void SetJobType(const EvaluationJobType& value) { m_jobType = value; }
    inline void SetJobType(EvaluationJobType&& value) { m_jobType = std::move(value); }
    inline GetEvaluationJobResult& WithJobType(const EvaluationJobType& value) { SetJobType(value); return *this;}
    inline GetEvaluationJobResult& WithJobType(EvaluationJobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the evaluation job is for evaluating a model or evaluating
     * a knowledge base (retrieval and response generation).</p>
     */
    inline const ApplicationType& GetApplicationType() const{ return m_applicationType; }
    inline void SetApplicationType(const ApplicationType& value) { m_applicationType = value; }
    inline void SetApplicationType(ApplicationType&& value) { m_applicationType = std::move(value); }
    inline GetEvaluationJobResult& WithApplicationType(const ApplicationType& value) { SetApplicationType(value); return *this;}
    inline GetEvaluationJobResult& WithApplicationType(ApplicationType&& value) { SetApplicationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of either an automated or human-based
     * evaluation job.</p>
     */
    inline const EvaluationConfig& GetEvaluationConfig() const{ return m_evaluationConfig; }
    inline void SetEvaluationConfig(const EvaluationConfig& value) { m_evaluationConfig = value; }
    inline void SetEvaluationConfig(EvaluationConfig&& value) { m_evaluationConfig = std::move(value); }
    inline GetEvaluationJobResult& WithEvaluationConfig(const EvaluationConfig& value) { SetEvaluationConfig(value); return *this;}
    inline GetEvaluationJobResult& WithEvaluationConfig(EvaluationConfig&& value) { SetEvaluationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of the inference model used for the
     * evaluation job. </p>
     */
    inline const EvaluationInferenceConfig& GetInferenceConfig() const{ return m_inferenceConfig; }
    inline void SetInferenceConfig(const EvaluationInferenceConfig& value) { m_inferenceConfig = value; }
    inline void SetInferenceConfig(EvaluationInferenceConfig&& value) { m_inferenceConfig = std::move(value); }
    inline GetEvaluationJobResult& WithInferenceConfig(const EvaluationInferenceConfig& value) { SetInferenceConfig(value); return *this;}
    inline GetEvaluationJobResult& WithInferenceConfig(EvaluationInferenceConfig&& value) { SetInferenceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of the Amazon S3 bucket for storing the
     * results of the evaluation job.</p>
     */
    inline const EvaluationOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline void SetOutputDataConfig(const EvaluationOutputDataConfig& value) { m_outputDataConfig = value; }
    inline void SetOutputDataConfig(EvaluationOutputDataConfig&& value) { m_outputDataConfig = std::move(value); }
    inline GetEvaluationJobResult& WithOutputDataConfig(const EvaluationOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline GetEvaluationJobResult& WithOutputDataConfig(EvaluationOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the evaluation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetEvaluationJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetEvaluationJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the evaluation job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline GetEvaluationJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline GetEvaluationJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of strings that specify why the evaluation job failed to create.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureMessages() const{ return m_failureMessages; }
    inline void SetFailureMessages(const Aws::Vector<Aws::String>& value) { m_failureMessages = value; }
    inline void SetFailureMessages(Aws::Vector<Aws::String>&& value) { m_failureMessages = std::move(value); }
    inline GetEvaluationJobResult& WithFailureMessages(const Aws::Vector<Aws::String>& value) { SetFailureMessages(value); return *this;}
    inline GetEvaluationJobResult& WithFailureMessages(Aws::Vector<Aws::String>&& value) { SetFailureMessages(std::move(value)); return *this;}
    inline GetEvaluationJobResult& AddFailureMessages(const Aws::String& value) { m_failureMessages.push_back(value); return *this; }
    inline GetEvaluationJobResult& AddFailureMessages(Aws::String&& value) { m_failureMessages.push_back(std::move(value)); return *this; }
    inline GetEvaluationJobResult& AddFailureMessages(const char* value) { m_failureMessages.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEvaluationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEvaluationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEvaluationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;

    EvaluationJobStatus m_status;

    Aws::String m_jobArn;

    Aws::String m_jobDescription;

    Aws::String m_roleArn;

    Aws::String m_customerEncryptionKeyId;

    EvaluationJobType m_jobType;

    ApplicationType m_applicationType;

    EvaluationConfig m_evaluationConfig;

    EvaluationInferenceConfig m_inferenceConfig;

    EvaluationOutputDataConfig m_outputDataConfig;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Vector<Aws::String> m_failureMessages;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
