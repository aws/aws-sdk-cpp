/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/EvaluationJobStatus.h>
#include <aws/bedrock/model/EvaluationJobType.h>
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


    /**
     * <p>The name of the model evaluation job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the model evaluation job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }

    /**
     * <p>The name of the model evaluation job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }

    /**
     * <p>The name of the model evaluation job.</p>
     */
    inline void SetJobName(const char* value) { m_jobName.assign(value); }

    /**
     * <p>The name of the model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The status of the model evaluation job.</p>
     */
    inline const EvaluationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the model evaluation job.</p>
     */
    inline void SetStatus(const EvaluationJobStatus& value) { m_status = value; }

    /**
     * <p>The status of the model evaluation job.</p>
     */
    inline void SetStatus(EvaluationJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithStatus(const EvaluationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithStatus(EvaluationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model evaluation job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model evaluation job.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model evaluation job.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model evaluation job.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The description of the model evaluation job.</p>
     */
    inline const Aws::String& GetJobDescription() const{ return m_jobDescription; }

    /**
     * <p>The description of the model evaluation job.</p>
     */
    inline void SetJobDescription(const Aws::String& value) { m_jobDescription = value; }

    /**
     * <p>The description of the model evaluation job.</p>
     */
    inline void SetJobDescription(Aws::String&& value) { m_jobDescription = std::move(value); }

    /**
     * <p>The description of the model evaluation job.</p>
     */
    inline void SetJobDescription(const char* value) { m_jobDescription.assign(value); }

    /**
     * <p>The description of the model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithJobDescription(const Aws::String& value) { SetJobDescription(value); return *this;}

    /**
     * <p>The description of the model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithJobDescription(Aws::String&& value) { SetJobDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithJobDescription(const char* value) { SetJobDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role used in the model
     * evaluation job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role used in the model
     * evaluation job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role used in the model
     * evaluation job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role used in the model
     * evaluation job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role used in the model
     * evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role used in the model
     * evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role used in the model
     * evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key specified when the
     * model evaluation job was created.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyId() const{ return m_customerEncryptionKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key specified when the
     * model evaluation job was created.</p>
     */
    inline void SetCustomerEncryptionKeyId(const Aws::String& value) { m_customerEncryptionKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key specified when the
     * model evaluation job was created.</p>
     */
    inline void SetCustomerEncryptionKeyId(Aws::String&& value) { m_customerEncryptionKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key specified when the
     * model evaluation job was created.</p>
     */
    inline void SetCustomerEncryptionKeyId(const char* value) { m_customerEncryptionKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key specified when the
     * model evaluation job was created.</p>
     */
    inline GetEvaluationJobResult& WithCustomerEncryptionKeyId(const Aws::String& value) { SetCustomerEncryptionKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key specified when the
     * model evaluation job was created.</p>
     */
    inline GetEvaluationJobResult& WithCustomerEncryptionKeyId(Aws::String&& value) { SetCustomerEncryptionKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key specified when the
     * model evaluation job was created.</p>
     */
    inline GetEvaluationJobResult& WithCustomerEncryptionKeyId(const char* value) { SetCustomerEncryptionKeyId(value); return *this;}


    /**
     * <p>The type of model evaluation job.</p>
     */
    inline const EvaluationJobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The type of model evaluation job.</p>
     */
    inline void SetJobType(const EvaluationJobType& value) { m_jobType = value; }

    /**
     * <p>The type of model evaluation job.</p>
     */
    inline void SetJobType(EvaluationJobType&& value) { m_jobType = std::move(value); }

    /**
     * <p>The type of model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithJobType(const EvaluationJobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The type of model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithJobType(EvaluationJobType&& value) { SetJobType(std::move(value)); return *this;}


    /**
     * <p>Contains details about the type of model evaluation job, the metrics used,
     * the task type selected, the datasets used, and any custom metrics you
     * defined.</p>
     */
    inline const EvaluationConfig& GetEvaluationConfig() const{ return m_evaluationConfig; }

    /**
     * <p>Contains details about the type of model evaluation job, the metrics used,
     * the task type selected, the datasets used, and any custom metrics you
     * defined.</p>
     */
    inline void SetEvaluationConfig(const EvaluationConfig& value) { m_evaluationConfig = value; }

    /**
     * <p>Contains details about the type of model evaluation job, the metrics used,
     * the task type selected, the datasets used, and any custom metrics you
     * defined.</p>
     */
    inline void SetEvaluationConfig(EvaluationConfig&& value) { m_evaluationConfig = std::move(value); }

    /**
     * <p>Contains details about the type of model evaluation job, the metrics used,
     * the task type selected, the datasets used, and any custom metrics you
     * defined.</p>
     */
    inline GetEvaluationJobResult& WithEvaluationConfig(const EvaluationConfig& value) { SetEvaluationConfig(value); return *this;}

    /**
     * <p>Contains details about the type of model evaluation job, the metrics used,
     * the task type selected, the datasets used, and any custom metrics you
     * defined.</p>
     */
    inline GetEvaluationJobResult& WithEvaluationConfig(EvaluationConfig&& value) { SetEvaluationConfig(std::move(value)); return *this;}


    /**
     * <p>Details about the models you specified in your model evaluation job.</p>
     */
    inline const EvaluationInferenceConfig& GetInferenceConfig() const{ return m_inferenceConfig; }

    /**
     * <p>Details about the models you specified in your model evaluation job.</p>
     */
    inline void SetInferenceConfig(const EvaluationInferenceConfig& value) { m_inferenceConfig = value; }

    /**
     * <p>Details about the models you specified in your model evaluation job.</p>
     */
    inline void SetInferenceConfig(EvaluationInferenceConfig&& value) { m_inferenceConfig = std::move(value); }

    /**
     * <p>Details about the models you specified in your model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithInferenceConfig(const EvaluationInferenceConfig& value) { SetInferenceConfig(value); return *this;}

    /**
     * <p>Details about the models you specified in your model evaluation job.</p>
     */
    inline GetEvaluationJobResult& WithInferenceConfig(EvaluationInferenceConfig&& value) { SetInferenceConfig(std::move(value)); return *this;}


    /**
     * <p>Amazon S3 location for where output data is saved.</p>
     */
    inline const EvaluationOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>Amazon S3 location for where output data is saved.</p>
     */
    inline void SetOutputDataConfig(const EvaluationOutputDataConfig& value) { m_outputDataConfig = value; }

    /**
     * <p>Amazon S3 location for where output data is saved.</p>
     */
    inline void SetOutputDataConfig(EvaluationOutputDataConfig&& value) { m_outputDataConfig = std::move(value); }

    /**
     * <p>Amazon S3 location for where output data is saved.</p>
     */
    inline GetEvaluationJobResult& WithOutputDataConfig(const EvaluationOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>Amazon S3 location for where output data is saved.</p>
     */
    inline GetEvaluationJobResult& WithOutputDataConfig(EvaluationOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>When the model evaluation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the model evaluation job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the model evaluation job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the model evaluation job was created.</p>
     */
    inline GetEvaluationJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the model evaluation job was created.</p>
     */
    inline GetEvaluationJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the model evaluation job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the model evaluation job was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>When the model evaluation job was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the model evaluation job was last modified.</p>
     */
    inline GetEvaluationJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the model evaluation job was last modified.</p>
     */
    inline GetEvaluationJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>An array of strings the specify why the model evaluation job has failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureMessages() const{ return m_failureMessages; }

    /**
     * <p>An array of strings the specify why the model evaluation job has failed.</p>
     */
    inline void SetFailureMessages(const Aws::Vector<Aws::String>& value) { m_failureMessages = value; }

    /**
     * <p>An array of strings the specify why the model evaluation job has failed.</p>
     */
    inline void SetFailureMessages(Aws::Vector<Aws::String>&& value) { m_failureMessages = std::move(value); }

    /**
     * <p>An array of strings the specify why the model evaluation job has failed.</p>
     */
    inline GetEvaluationJobResult& WithFailureMessages(const Aws::Vector<Aws::String>& value) { SetFailureMessages(value); return *this;}

    /**
     * <p>An array of strings the specify why the model evaluation job has failed.</p>
     */
    inline GetEvaluationJobResult& WithFailureMessages(Aws::Vector<Aws::String>&& value) { SetFailureMessages(std::move(value)); return *this;}

    /**
     * <p>An array of strings the specify why the model evaluation job has failed.</p>
     */
    inline GetEvaluationJobResult& AddFailureMessages(const Aws::String& value) { m_failureMessages.push_back(value); return *this; }

    /**
     * <p>An array of strings the specify why the model evaluation job has failed.</p>
     */
    inline GetEvaluationJobResult& AddFailureMessages(Aws::String&& value) { m_failureMessages.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings the specify why the model evaluation job has failed.</p>
     */
    inline GetEvaluationJobResult& AddFailureMessages(const char* value) { m_failureMessages.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEvaluationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEvaluationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEvaluationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_jobName;

    EvaluationJobStatus m_status;

    Aws::String m_jobArn;

    Aws::String m_jobDescription;

    Aws::String m_roleArn;

    Aws::String m_customerEncryptionKeyId;

    EvaluationJobType m_jobType;

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
