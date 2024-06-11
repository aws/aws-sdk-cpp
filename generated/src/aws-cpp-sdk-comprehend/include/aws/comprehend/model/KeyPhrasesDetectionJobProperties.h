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
#include <aws/comprehend/model/VpcConfig.h>
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
   * <p>Provides information about a key phrases detection job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/KeyPhrasesDetectionJobProperties">AWS
   * API Reference</a></p>
   */
  class KeyPhrasesDetectionJobProperties
  {
  public:
    AWS_COMPREHEND_API KeyPhrasesDetectionJobProperties();
    AWS_COMPREHEND_API KeyPhrasesDetectionJobProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API KeyPhrasesDetectionJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier assigned to the key phrases detection job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline KeyPhrasesDetectionJobProperties& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the key phrases detection job. It is a
     * unique, fully qualified identifier for the job. It includes the Amazon Web
     * Services account, Amazon Web Services Region, and the job ID. The format of the
     * ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:key-phrases-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:key-phrases-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline KeyPhrasesDetectionJobProperties& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you assigned the key phrases detection job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline KeyPhrasesDetectionJobProperties& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the key phrases detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }
    inline KeyPhrasesDetectionJobProperties& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
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
    inline KeyPhrasesDetectionJobProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the key phrases detection job was submitted for processing.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }
    inline KeyPhrasesDetectionJobProperties& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the key phrases detection job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline KeyPhrasesDetectionJobProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input data configuration that you supplied when you created the key
     * phrases detection job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline KeyPhrasesDetectionJobProperties& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output data configuration that you supplied when you created the key
     * phrases detection job.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline KeyPhrasesDetectionJobProperties& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the input documents.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline KeyPhrasesDetectionJobProperties& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
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
    inline KeyPhrasesDetectionJobProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt data on the storage
     * volume attached to the ML compute instance(s) that process the analysis job. The
     * VolumeKmsKeyId can be either of the following formats:</p> <ul> <li> <p>KMS Key
     * ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li>
     * <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }
    inline KeyPhrasesDetectionJobProperties& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration parameters for a private Virtual Private Cloud (VPC)
     * containing the resources you are using for your key phrases detection job. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline KeyPhrasesDetectionJobProperties& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline KeyPhrasesDetectionJobProperties& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
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

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
