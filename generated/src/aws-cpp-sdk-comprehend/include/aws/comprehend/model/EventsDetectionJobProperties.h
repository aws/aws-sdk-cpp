/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/comprehend/model/InputDataConfig.h>
#include <aws/comprehend/model/OutputDataConfig.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provides information about an events detection job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EventsDetectionJobProperties">AWS
   * API Reference</a></p>
   */
  class EventsDetectionJobProperties
  {
  public:
    AWS_COMPREHEND_API EventsDetectionJobProperties();
    AWS_COMPREHEND_API EventsDetectionJobProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EventsDetectionJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier assigned to the events detection job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier assigned to the events detection job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The identifier assigned to the events detection job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The identifier assigned to the events detection job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The identifier assigned to the events detection job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The identifier assigned to the events detection job.</p>
     */
    inline EventsDetectionJobProperties& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier assigned to the events detection job.</p>
     */
    inline EventsDetectionJobProperties& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier assigned to the events detection job.</p>
     */
    inline EventsDetectionJobProperties& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline EventsDetectionJobProperties& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline EventsDetectionJobProperties& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the events detection job. It is a unique,
     * fully qualified identifier for the job. It includes the AWS account, Region, and
     * the job ID. The format of the ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:events-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:events-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline EventsDetectionJobProperties& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The name you assigned the events detection job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name you assigned the events detection job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name you assigned the events detection job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name you assigned the events detection job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name you assigned the events detection job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name you assigned the events detection job.</p>
     */
    inline EventsDetectionJobProperties& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name you assigned the events detection job.</p>
     */
    inline EventsDetectionJobProperties& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name you assigned the events detection job.</p>
     */
    inline EventsDetectionJobProperties& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The current status of the events detection job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the events detection job.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The current status of the events detection job.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The current status of the events detection job.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the events detection job.</p>
     */
    inline EventsDetectionJobProperties& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the events detection job.</p>
     */
    inline EventsDetectionJobProperties& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the status of the events detection job.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the status of the events detection job.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the status of the events detection job.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the status of the events detection job.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the status of the events detection job.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the status of the events detection job.</p>
     */
    inline EventsDetectionJobProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the status of the events detection job.</p>
     */
    inline EventsDetectionJobProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the status of the events detection job.</p>
     */
    inline EventsDetectionJobProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The time that the events detection job was submitted for processing.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }

    /**
     * <p>The time that the events detection job was submitted for processing.</p>
     */
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }

    /**
     * <p>The time that the events detection job was submitted for processing.</p>
     */
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }

    /**
     * <p>The time that the events detection job was submitted for processing.</p>
     */
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }

    /**
     * <p>The time that the events detection job was submitted for processing.</p>
     */
    inline EventsDetectionJobProperties& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}

    /**
     * <p>The time that the events detection job was submitted for processing.</p>
     */
    inline EventsDetectionJobProperties& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}


    /**
     * <p>The time that the events detection job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that the events detection job completed.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time that the events detection job completed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time that the events detection job completed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time that the events detection job completed.</p>
     */
    inline EventsDetectionJobProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that the events detection job completed.</p>
     */
    inline EventsDetectionJobProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The input data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>The input data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>The input data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>The input data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>The input data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline EventsDetectionJobProperties& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>The input data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline EventsDetectionJobProperties& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The output data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>The output data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>The output data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>The output data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>The output data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline EventsDetectionJobProperties& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>The output data configuration that you supplied when you created the events
     * detection job.</p>
     */
    inline EventsDetectionJobProperties& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The language code of the input documents.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the input documents.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code of the input documents.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the input documents.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the input documents.</p>
     */
    inline EventsDetectionJobProperties& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the input documents.</p>
     */
    inline EventsDetectionJobProperties& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identify and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identify and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identify and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identify and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identify and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identify and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline EventsDetectionJobProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identify and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline EventsDetectionJobProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identify and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline EventsDetectionJobProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>The types of events that are detected by the job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetEventTypes() const{ return m_targetEventTypes; }

    /**
     * <p>The types of events that are detected by the job.</p>
     */
    inline bool TargetEventTypesHasBeenSet() const { return m_targetEventTypesHasBeenSet; }

    /**
     * <p>The types of events that are detected by the job.</p>
     */
    inline void SetTargetEventTypes(const Aws::Vector<Aws::String>& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes = value; }

    /**
     * <p>The types of events that are detected by the job.</p>
     */
    inline void SetTargetEventTypes(Aws::Vector<Aws::String>&& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes = std::move(value); }

    /**
     * <p>The types of events that are detected by the job.</p>
     */
    inline EventsDetectionJobProperties& WithTargetEventTypes(const Aws::Vector<Aws::String>& value) { SetTargetEventTypes(value); return *this;}

    /**
     * <p>The types of events that are detected by the job.</p>
     */
    inline EventsDetectionJobProperties& WithTargetEventTypes(Aws::Vector<Aws::String>&& value) { SetTargetEventTypes(std::move(value)); return *this;}

    /**
     * <p>The types of events that are detected by the job.</p>
     */
    inline EventsDetectionJobProperties& AddTargetEventTypes(const Aws::String& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes.push_back(value); return *this; }

    /**
     * <p>The types of events that are detected by the job.</p>
     */
    inline EventsDetectionJobProperties& AddTargetEventTypes(Aws::String&& value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The types of events that are detected by the job.</p>
     */
    inline EventsDetectionJobProperties& AddTargetEventTypes(const char* value) { m_targetEventTypesHasBeenSet = true; m_targetEventTypes.push_back(value); return *this; }

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetEventTypes;
    bool m_targetEventTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
