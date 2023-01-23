/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/comprehendmedical/model/InputDataConfig.h>
#include <aws/comprehendmedical/model/OutputDataConfig.h>
#include <aws/comprehendmedical/model/LanguageCode.h>
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
namespace ComprehendMedical
{
namespace Model
{

  /**
   * <p>Provides information about a detection job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ComprehendMedicalAsyncJobProperties">AWS
   * API Reference</a></p>
   */
  class ComprehendMedicalAsyncJobProperties
  {
  public:
    AWS_COMPREHENDMEDICAL_API ComprehendMedicalAsyncJobProperties();
    AWS_COMPREHENDMEDICAL_API ComprehendMedicalAsyncJobProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API ComprehendMedicalAsyncJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier assigned to the detection job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier assigned to the detection job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The identifier assigned to the detection job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The identifier assigned to the detection job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The identifier assigned to the detection job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The identifier assigned to the detection job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier assigned to the detection job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier assigned to the detection job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name that you assigned to the detection job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name that you assigned to the detection job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name that you assigned to the detection job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name that you assigned to the detection job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name that you assigned to the detection job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name that you assigned to the detection job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name that you assigned to the detection job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name that you assigned to the detection job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The current status of the detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The current status of the detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The current status of the detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the detection job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the status of a job.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the status of a job.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the status of a job.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the status of a job.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the status of a job.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the status of a job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the status of a job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the status of a job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The time that the detection job was submitted for processing.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }

    /**
     * <p>The time that the detection job was submitted for processing.</p>
     */
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }

    /**
     * <p>The time that the detection job was submitted for processing.</p>
     */
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }

    /**
     * <p>The time that the detection job was submitted for processing.</p>
     */
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }

    /**
     * <p>The time that the detection job was submitted for processing.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}

    /**
     * <p>The time that the detection job was submitted for processing.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}


    /**
     * <p>The time that the detection job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that the detection job completed.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time that the detection job completed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time that the detection job completed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time that the detection job completed.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that the detection job completed.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that job metadata is deleted from the server. Output files
     * in your S3 bucket will not be deleted. After the metadata is deleted, the job
     * will no longer appear in the results of the
     * <code>ListEntitiesDetectionV2Job</code> or the <code>ListPHIDetectionJobs</code>
     * operation.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>The date and time that job metadata is deleted from the server. Output files
     * in your S3 bucket will not be deleted. After the metadata is deleted, the job
     * will no longer appear in the results of the
     * <code>ListEntitiesDetectionV2Job</code> or the <code>ListPHIDetectionJobs</code>
     * operation.</p>
     */
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }

    /**
     * <p>The date and time that job metadata is deleted from the server. Output files
     * in your S3 bucket will not be deleted. After the metadata is deleted, the job
     * will no longer appear in the results of the
     * <code>ListEntitiesDetectionV2Job</code> or the <code>ListPHIDetectionJobs</code>
     * operation.</p>
     */
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>The date and time that job metadata is deleted from the server. Output files
     * in your S3 bucket will not be deleted. After the metadata is deleted, the job
     * will no longer appear in the results of the
     * <code>ListEntitiesDetectionV2Job</code> or the <code>ListPHIDetectionJobs</code>
     * operation.</p>
     */
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }

    /**
     * <p>The date and time that job metadata is deleted from the server. Output files
     * in your S3 bucket will not be deleted. After the metadata is deleted, the job
     * will no longer appear in the results of the
     * <code>ListEntitiesDetectionV2Job</code> or the <code>ListPHIDetectionJobs</code>
     * operation.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>The date and time that job metadata is deleted from the server. Output files
     * in your S3 bucket will not be deleted. After the metadata is deleted, the job
     * will no longer appear in the results of the
     * <code>ListEntitiesDetectionV2Job</code> or the <code>ListPHIDetectionJobs</code>
     * operation.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}


    /**
     * <p>The input data configuration that you supplied when you created the detection
     * job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>The input data configuration that you supplied when you created the detection
     * job.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>The input data configuration that you supplied when you created the detection
     * job.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>The input data configuration that you supplied when you created the detection
     * job.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>The input data configuration that you supplied when you created the detection
     * job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>The input data configuration that you supplied when you created the detection
     * job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The output data configuration that you supplied when you created the
     * detection job.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>The output data configuration that you supplied when you created the
     * detection job.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>The output data configuration that you supplied when you created the
     * detection job.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>The output data configuration that you supplied when you created the
     * detection job.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>The output data configuration that you supplied when you created the
     * detection job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>The output data configuration that you supplied when you created the
     * detection job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


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
    inline ComprehendMedicalAsyncJobProperties& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the input documents.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that gives Comprehend Medical; read access to
     * your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Comprehend Medical; read access to
     * your input data.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Comprehend Medical; read access to
     * your input data.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Comprehend Medical; read access to
     * your input data.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Comprehend Medical; read access to
     * your input data.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Comprehend Medical; read access to
     * your input data.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that gives Comprehend Medical; read access to
     * your input data.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that gives Comprehend Medical; read access to
     * your input data.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>The path to the file that describes the results of a batch job.</p>
     */
    inline const Aws::String& GetManifestFilePath() const{ return m_manifestFilePath; }

    /**
     * <p>The path to the file that describes the results of a batch job.</p>
     */
    inline bool ManifestFilePathHasBeenSet() const { return m_manifestFilePathHasBeenSet; }

    /**
     * <p>The path to the file that describes the results of a batch job.</p>
     */
    inline void SetManifestFilePath(const Aws::String& value) { m_manifestFilePathHasBeenSet = true; m_manifestFilePath = value; }

    /**
     * <p>The path to the file that describes the results of a batch job.</p>
     */
    inline void SetManifestFilePath(Aws::String&& value) { m_manifestFilePathHasBeenSet = true; m_manifestFilePath = std::move(value); }

    /**
     * <p>The path to the file that describes the results of a batch job.</p>
     */
    inline void SetManifestFilePath(const char* value) { m_manifestFilePathHasBeenSet = true; m_manifestFilePath.assign(value); }

    /**
     * <p>The path to the file that describes the results of a batch job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithManifestFilePath(const Aws::String& value) { SetManifestFilePath(value); return *this;}

    /**
     * <p>The path to the file that describes the results of a batch job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithManifestFilePath(Aws::String&& value) { SetManifestFilePath(std::move(value)); return *this;}

    /**
     * <p>The path to the file that describes the results of a batch job.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithManifestFilePath(const char* value) { SetManifestFilePath(value); return *this;}


    /**
     * <p>The AWS Key Management Service key, if any, used to encrypt the output files.
     * </p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    /**
     * <p>The AWS Key Management Service key, if any, used to encrypt the output files.
     * </p>
     */
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }

    /**
     * <p>The AWS Key Management Service key, if any, used to encrypt the output files.
     * </p>
     */
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The AWS Key Management Service key, if any, used to encrypt the output files.
     * </p>
     */
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    /**
     * <p>The AWS Key Management Service key, if any, used to encrypt the output files.
     * </p>
     */
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    /**
     * <p>The AWS Key Management Service key, if any, used to encrypt the output files.
     * </p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The AWS Key Management Service key, if any, used to encrypt the output files.
     * </p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service key, if any, used to encrypt the output files.
     * </p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model used to analyze the documents. The version number
     * looks like X.X.X. You can use this information to track the model used for a
     * particular batch of documents.</p>
     */
    inline ComprehendMedicalAsyncJobProperties& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

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

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_manifestFilePath;
    bool m_manifestFilePathHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
