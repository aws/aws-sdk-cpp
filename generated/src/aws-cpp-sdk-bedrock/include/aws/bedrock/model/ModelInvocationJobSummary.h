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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{

  /**
   * <p>A summary of a batch inference job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelInvocationJobSummary">AWS
   * API Reference</a></p>
   */
  class ModelInvocationJobSummary
  {
  public:
    AWS_BEDROCK_API ModelInvocationJobSummary();
    AWS_BEDROCK_API ModelInvocationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelInvocationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the batch inference job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline ModelInvocationJobSummary& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline ModelInvocationJobSummary& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline ModelInvocationJobSummary& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the batch inference job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline ModelInvocationJobSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline ModelInvocationJobSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline ModelInvocationJobSummary& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the foundation model used for model inference.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline ModelInvocationJobSummary& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline ModelInvocationJobSummary& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline ModelInvocationJobSummary& WithModelId(const char* value) { SetModelId(value); return *this;}
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
    inline ModelInvocationJobSummary& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline ModelInvocationJobSummary& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline ModelInvocationJobSummary& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
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
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ModelInvocationJobSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ModelInvocationJobSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ModelInvocationJobSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ModelInvocationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ModelInvocationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ModelInvocationJobSummary& WithStatus(const ModelInvocationJobStatus& value) { SetStatus(value); return *this;}
    inline ModelInvocationJobSummary& WithStatus(ModelInvocationJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the batch inference job failed, this field contains a message describing
     * why the job failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ModelInvocationJobSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ModelInvocationJobSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ModelInvocationJobSummary& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }
    inline ModelInvocationJobSummary& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}
    inline ModelInvocationJobSummary& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ModelInvocationJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ModelInvocationJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ModelInvocationJobSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ModelInvocationJobSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the location of the input to the batch inference job.</p>
     */
    inline const ModelInvocationJobInputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const ModelInvocationJobInputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(ModelInvocationJobInputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline ModelInvocationJobSummary& WithInputDataConfig(const ModelInvocationJobInputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline ModelInvocationJobSummary& WithInputDataConfig(ModelInvocationJobInputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the location of the output of the batch inference job.</p>
     */
    inline const ModelInvocationJobOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const ModelInvocationJobOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(ModelInvocationJobOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline ModelInvocationJobSummary& WithOutputDataConfig(const ModelInvocationJobOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline ModelInvocationJobSummary& WithOutputDataConfig(ModelInvocationJobOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Virtual Private Cloud (VPC) for the data in the
     * batch inference job. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-vpc">Protect
     * batch inference jobs using a VPC</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline ModelInvocationJobSummary& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline ModelInvocationJobSummary& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours after which the batch inference job was set to time
     * out.</p>
     */
    inline int GetTimeoutDurationInHours() const{ return m_timeoutDurationInHours; }
    inline bool TimeoutDurationInHoursHasBeenSet() const { return m_timeoutDurationInHoursHasBeenSet; }
    inline void SetTimeoutDurationInHours(int value) { m_timeoutDurationInHoursHasBeenSet = true; m_timeoutDurationInHours = value; }
    inline ModelInvocationJobSummary& WithTimeoutDurationInHours(int value) { SetTimeoutDurationInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job times or timed out.</p>
     */
    inline const Aws::Utils::DateTime& GetJobExpirationTime() const{ return m_jobExpirationTime; }
    inline bool JobExpirationTimeHasBeenSet() const { return m_jobExpirationTimeHasBeenSet; }
    inline void SetJobExpirationTime(const Aws::Utils::DateTime& value) { m_jobExpirationTimeHasBeenSet = true; m_jobExpirationTime = value; }
    inline void SetJobExpirationTime(Aws::Utils::DateTime&& value) { m_jobExpirationTimeHasBeenSet = true; m_jobExpirationTime = std::move(value); }
    inline ModelInvocationJobSummary& WithJobExpirationTime(const Aws::Utils::DateTime& value) { SetJobExpirationTime(value); return *this;}
    inline ModelInvocationJobSummary& WithJobExpirationTime(Aws::Utils::DateTime&& value) { SetJobExpirationTime(std::move(value)); return *this;}
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

    ModelInvocationJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    ModelInvocationJobInputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    ModelInvocationJobOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    int m_timeoutDurationInHours;
    bool m_timeoutDurationInHoursHasBeenSet = false;

    Aws::Utils::DateTime m_jobExpirationTime;
    bool m_jobExpirationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
