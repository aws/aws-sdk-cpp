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
#include <aws/comprehend/model/PiiOutputDataConfig.h>
#include <aws/comprehend/model/RedactionConfig.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/comprehend/model/PiiEntitiesDetectionMode.h>
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
   * <p>Provides information about a PII entities detection job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/PiiEntitiesDetectionJobProperties">AWS
   * API Reference</a></p>
   */
  class PiiEntitiesDetectionJobProperties
  {
  public:
    AWS_COMPREHEND_API PiiEntitiesDetectionJobProperties();
    AWS_COMPREHEND_API PiiEntitiesDetectionJobProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API PiiEntitiesDetectionJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier assigned to the PII entities detection job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline PiiEntitiesDetectionJobProperties& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the PII entities detection job. It is a
     * unique, fully qualified identifier for the job. It includes the Amazon Web
     * Services account, Amazon Web Services Region, and the job ID. The format of the
     * ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:pii-entities-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:pii-entities-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline PiiEntitiesDetectionJobProperties& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you assigned the PII entities detection job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline PiiEntitiesDetectionJobProperties& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the PII entities detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }
    inline PiiEntitiesDetectionJobProperties& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the status of a job.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline PiiEntitiesDetectionJobProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the PII entities detection job was submitted for
     * processing.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }
    inline PiiEntitiesDetectionJobProperties& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the PII entities detection job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline PiiEntitiesDetectionJobProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input properties for a PII entities detection job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline PiiEntitiesDetectionJobProperties& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output data configuration that you supplied when you created the PII
     * entities detection job.</p>
     */
    inline const PiiOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const PiiOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(PiiOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline PiiEntitiesDetectionJobProperties& WithOutputDataConfig(const PiiOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithOutputDataConfig(PiiOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration parameters for PII entity redaction.</p> <p>This
     * parameter is required if you set the <code>Mode</code> parameter to
     * <code>ONLY_REDACTION</code>. In that case, you must provide a
     * <code>RedactionConfig</code> definition that includes the
     * <code>PiiEntityTypes</code> parameter.</p>
     */
    inline const RedactionConfig& GetRedactionConfig() const{ return m_redactionConfig; }
    inline bool RedactionConfigHasBeenSet() const { return m_redactionConfigHasBeenSet; }
    inline void SetRedactionConfig(const RedactionConfig& value) { m_redactionConfigHasBeenSet = true; m_redactionConfig = value; }
    inline void SetRedactionConfig(RedactionConfig&& value) { m_redactionConfigHasBeenSet = true; m_redactionConfig = std::move(value); }
    inline PiiEntitiesDetectionJobProperties& WithRedactionConfig(const RedactionConfig& value) { SetRedactionConfig(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithRedactionConfig(RedactionConfig&& value) { SetRedactionConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the input documents.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline PiiEntitiesDetectionJobProperties& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline PiiEntitiesDetectionJobProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the output provides the locations (offsets) of PII entities
     * or a file in which PII entities are redacted.</p>
     */
    inline const PiiEntitiesDetectionMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const PiiEntitiesDetectionMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(PiiEntitiesDetectionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline PiiEntitiesDetectionJobProperties& WithMode(const PiiEntitiesDetectionMode& value) { SetMode(value); return *this;}
    inline PiiEntitiesDetectionJobProperties& WithMode(PiiEntitiesDetectionMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}
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

    PiiOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    RedactionConfig m_redactionConfig;
    bool m_redactionConfigHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    PiiEntitiesDetectionMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
