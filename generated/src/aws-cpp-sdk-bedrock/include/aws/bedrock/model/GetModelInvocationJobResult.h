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
    AWS_BEDROCK_API GetModelInvocationJobResult() = default;
    AWS_BEDROCK_API GetModelInvocationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetModelInvocationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the batch inference job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    GetModelInvocationJobResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the batch inference job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    GetModelInvocationJobResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the foundation model used for model inference.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    GetModelInvocationJobResult& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
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
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    GetModelInvocationJobResult& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service role with permissions to carry
     * out and manage batch inference. You can use the console to create a default
     * service role or follow the steps at <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-iam-sr.html">Create
     * a service role for batch inference</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetModelInvocationJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
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
     * ServicesSupport Center</a>.</p> </li> <li> <p>Stopped – This job was stopped by
     * a user.</p> </li> <li> <p>Stopping – This job is being stopped by a user.</p>
     * </li> </ul>
     */
    inline ModelInvocationJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(ModelInvocationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetModelInvocationJobResult& WithStatus(ModelInvocationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the batch inference job failed, this field contains a message describing
     * why the job failed.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetModelInvocationJobResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const { return m_submitTime; }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    void SetSubmitTime(SubmitTimeT&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::forward<SubmitTimeT>(value); }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    GetModelInvocationJobResult& WithSubmitTime(SubmitTimeT&& value) { SetSubmitTime(std::forward<SubmitTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    GetModelInvocationJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetModelInvocationJobResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the location of the input to the batch inference job.</p>
     */
    inline const ModelInvocationJobInputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
    template<typename InputDataConfigT = ModelInvocationJobInputDataConfig>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = ModelInvocationJobInputDataConfig>
    GetModelInvocationJobResult& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the location of the output of the batch inference job.</p>
     */
    inline const ModelInvocationJobOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    template<typename OutputDataConfigT = ModelInvocationJobOutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = ModelInvocationJobOutputDataConfig>
    GetModelInvocationJobResult& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Virtual Private Cloud (VPC) for the data in the
     * batch inference job. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-vpc">Protect
     * batch inference jobs using a VPC</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    GetModelInvocationJobResult& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours after which batch inference job was set to time out.</p>
     */
    inline int GetTimeoutDurationInHours() const { return m_timeoutDurationInHours; }
    inline void SetTimeoutDurationInHours(int value) { m_timeoutDurationInHoursHasBeenSet = true; m_timeoutDurationInHours = value; }
    inline GetModelInvocationJobResult& WithTimeoutDurationInHours(int value) { SetTimeoutDurationInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job times or timed out.</p>
     */
    inline const Aws::Utils::DateTime& GetJobExpirationTime() const { return m_jobExpirationTime; }
    template<typename JobExpirationTimeT = Aws::Utils::DateTime>
    void SetJobExpirationTime(JobExpirationTimeT&& value) { m_jobExpirationTimeHasBeenSet = true; m_jobExpirationTime = std::forward<JobExpirationTimeT>(value); }
    template<typename JobExpirationTimeT = Aws::Utils::DateTime>
    GetModelInvocationJobResult& WithJobExpirationTime(JobExpirationTimeT&& value) { SetJobExpirationTime(std::forward<JobExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetModelInvocationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ModelInvocationJobStatus m_status{ModelInvocationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime{};
    bool m_submitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    ModelInvocationJobInputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    ModelInvocationJobOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    int m_timeoutDurationInHours{0};
    bool m_timeoutDurationInHoursHasBeenSet = false;

    Aws::Utils::DateTime m_jobExpirationTime{};
    bool m_jobExpirationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
