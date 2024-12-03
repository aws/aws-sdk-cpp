/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelInvocationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/ModelInvocationJobInputDataConfig.h>
#include <aws/bedrock/model/ModelInvocationJobOutputDataConfig.h>
#include <aws/bedrock/model/VpcConfig.h>
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
  class GetModelInvocationJobResult
  {
  public:
    AWS_BEDROCK_API GetModelInvocationJobResult();
    AWS_BEDROCK_API GetModelInvocationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetModelInvocationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the batch inference job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline GetModelInvocationJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline GetModelInvocationJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline GetModelInvocationJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the batch inference job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobName.assign(value); }
    inline GetModelInvocationJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline GetModelInvocationJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline GetModelInvocationJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the foundation model used for model inference.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline void SetModelId(const Aws::String& value) { m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelId.assign(value); }
    inline GetModelInvocationJobResult& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline GetModelInvocationJobResult& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline GetModelInvocationJobResult& WithModelId(const char* value) { SetModelId(value); return *this;}
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
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }
    inline GetModelInvocationJobResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline GetModelInvocationJobResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline GetModelInvocationJobResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service role with permissions to carry
     * out and manage batch inference. You can use the console to create a default
     * service role or follow the steps at <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-iam-sr.html">Create
     * a service role for batch inference</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetModelInvocationJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetModelInvocationJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetModelInvocationJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the batch inference job.</p> <p>The following statuses are
     * possible:</p> <ul> <li> <p>Submitted – This job has been submitted to a queue
     * for validation.</p> </li> <li> <p>Validating – This job is being validated for
     * the requirements described in <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-inference-data.html">Format
     * and upload your batch inference data</a>. The criteria include the
     * following:</p> <ul> <li> <p>Your IAM service role has access to the Amazon S3
     * buckets containing your files.</p> </li> <li> <p>Your files are .jsonl files and
     * each individual record is a JSON object in the correct format. Note that
     * validation doesn't check if the <code>modelInput</code> value matches the
     * request body for the model.</p> </li> <li> <p>Your files fulfill the
     * requirements for file size and number of records. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/quotas.html">Quotas
     * for Amazon Bedrock</a>.</p> </li> </ul> </li> <li> <p>Scheduled – This job has
     * been validated and is now in a queue. The job will automatically start when it
     * reaches its turn.</p> </li> <li> <p>Expired – This job timed out because it was
     * scheduled but didn't begin before the set timeout duration. Submit a new job
     * request.</p> </li> <li> <p>InProgress – This job has begun. You can start
     * viewing the results in the output S3 location.</p> </li> <li> <p>Completed –
     * This job has successfully completed. View the output files in the output S3
     * location.</p> </li> <li> <p>PartiallyCompleted – This job has partially
     * completed. Not all of your records could be processed in time. View the output
     * files in the output S3 location.</p> </li> <li> <p>Failed – This job has failed.
     * Check the failure message for any further details. For further assistance, reach
     * out to the <a href="https://console.aws.amazon.com/support/home/">Amazon Web
     * Services Support Center</a>.</p> </li> <li> <p>Stopped – This job was stopped by
     * a user.</p> </li> <li> <p>Stopping – This job is being stopped by a user.</p>
     * </li> </ul>
     */
    inline const ModelInvocationJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ModelInvocationJobStatus& value) { m_status = value; }
    inline void SetStatus(ModelInvocationJobStatus&& value) { m_status = std::move(value); }
    inline GetModelInvocationJobResult& WithStatus(const ModelInvocationJobStatus& value) { SetStatus(value); return *this;}
    inline GetModelInvocationJobResult& WithStatus(ModelInvocationJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the batch inference job failed, this field contains a message describing
     * why the job failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline GetModelInvocationJobResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline GetModelInvocationJobResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline GetModelInvocationJobResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTime = value; }
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTime = std::move(value); }
    inline GetModelInvocationJobResult& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}
    inline GetModelInvocationJobResult& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline GetModelInvocationJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline GetModelInvocationJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetModelInvocationJobResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetModelInvocationJobResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the location of the input to the batch inference job.</p>
     */
    inline const ModelInvocationJobInputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline void SetInputDataConfig(const ModelInvocationJobInputDataConfig& value) { m_inputDataConfig = value; }
    inline void SetInputDataConfig(ModelInvocationJobInputDataConfig&& value) { m_inputDataConfig = std::move(value); }
    inline GetModelInvocationJobResult& WithInputDataConfig(const ModelInvocationJobInputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline GetModelInvocationJobResult& WithInputDataConfig(ModelInvocationJobInputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the location of the output of the batch inference job.</p>
     */
    inline const ModelInvocationJobOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline void SetOutputDataConfig(const ModelInvocationJobOutputDataConfig& value) { m_outputDataConfig = value; }
    inline void SetOutputDataConfig(ModelInvocationJobOutputDataConfig&& value) { m_outputDataConfig = std::move(value); }
    inline GetModelInvocationJobResult& WithOutputDataConfig(const ModelInvocationJobOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline GetModelInvocationJobResult& WithOutputDataConfig(ModelInvocationJobOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Virtual Private Cloud (VPC) for the data in the
     * batch inference job. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-vpc">Protect
     * batch inference jobs using a VPC</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfig = std::move(value); }
    inline GetModelInvocationJobResult& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline GetModelInvocationJobResult& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours after which batch inference job was set to time out.</p>
     */
    inline int GetTimeoutDurationInHours() const{ return m_timeoutDurationInHours; }
    inline void SetTimeoutDurationInHours(int value) { m_timeoutDurationInHours = value; }
    inline GetModelInvocationJobResult& WithTimeoutDurationInHours(int value) { SetTimeoutDurationInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job times or timed out.</p>
     */
    inline const Aws::Utils::DateTime& GetJobExpirationTime() const{ return m_jobExpirationTime; }
    inline void SetJobExpirationTime(const Aws::Utils::DateTime& value) { m_jobExpirationTime = value; }
    inline void SetJobExpirationTime(Aws::Utils::DateTime&& value) { m_jobExpirationTime = std::move(value); }
    inline GetModelInvocationJobResult& WithJobExpirationTime(const Aws::Utils::DateTime& value) { SetJobExpirationTime(value); return *this;}
    inline GetModelInvocationJobResult& WithJobExpirationTime(Aws::Utils::DateTime&& value) { SetJobExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetModelInvocationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetModelInvocationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetModelInvocationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;

    Aws::String m_jobName;

    Aws::String m_modelId;

    Aws::String m_clientRequestToken;

    Aws::String m_roleArn;

    ModelInvocationJobStatus m_status;

    Aws::String m_message;

    Aws::Utils::DateTime m_submitTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_endTime;

    ModelInvocationJobInputDataConfig m_inputDataConfig;

    ModelInvocationJobOutputDataConfig m_outputDataConfig;

    VpcConfig m_vpcConfig;

    int m_timeoutDurationInHours;

    Aws::Utils::DateTime m_jobExpirationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
