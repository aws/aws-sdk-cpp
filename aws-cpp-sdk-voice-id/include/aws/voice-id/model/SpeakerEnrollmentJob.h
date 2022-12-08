/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/EnrollmentConfig.h>
#include <aws/voice-id/model/FailureDetails.h>
#include <aws/voice-id/model/InputDataConfig.h>
#include <aws/voice-id/model/JobProgress.h>
#include <aws/voice-id/model/SpeakerEnrollmentJobStatus.h>
#include <aws/voice-id/model/OutputDataConfig.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Contains all the information about a speaker enrollment job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/SpeakerEnrollmentJob">AWS
   * API Reference</a></p>
   */
  class SpeakerEnrollmentJob
  {
  public:
    AWS_VOICEID_API SpeakerEnrollmentJob();
    AWS_VOICEID_API SpeakerEnrollmentJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API SpeakerEnrollmentJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A timestamp showing the creation of the speaker enrollment job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>A timestamp showing the creation of the speaker enrollment job.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>A timestamp showing the creation of the speaker enrollment job.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>A timestamp showing the creation of the speaker enrollment job.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>A timestamp showing the creation of the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>A timestamp showing the creation of the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The IAM role Amazon Resource Name (ARN) that grants Voice ID permissions to
     * access customer's buckets to read the input manifest file and write the job
     * output file.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The IAM role Amazon Resource Name (ARN) that grants Voice ID permissions to
     * access customer's buckets to read the input manifest file and write the job
     * output file.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The IAM role Amazon Resource Name (ARN) that grants Voice ID permissions to
     * access customer's buckets to read the input manifest file and write the job
     * output file.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The IAM role Amazon Resource Name (ARN) that grants Voice ID permissions to
     * access customer's buckets to read the input manifest file and write the job
     * output file.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The IAM role Amazon Resource Name (ARN) that grants Voice ID permissions to
     * access customer's buckets to read the input manifest file and write the job
     * output file.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The IAM role Amazon Resource Name (ARN) that grants Voice ID permissions to
     * access customer's buckets to read the input manifest file and write the job
     * output file.</p>
     */
    inline SpeakerEnrollmentJob& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The IAM role Amazon Resource Name (ARN) that grants Voice ID permissions to
     * access customer's buckets to read the input manifest file and write the job
     * output file.</p>
     */
    inline SpeakerEnrollmentJob& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role Amazon Resource Name (ARN) that grants Voice ID permissions to
     * access customer's buckets to read the input manifest file and write the job
     * output file.</p>
     */
    inline SpeakerEnrollmentJob& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>A timestamp showing when the speaker enrollment job ended. </p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>A timestamp showing when the speaker enrollment job ended. </p>
     */
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }

    /**
     * <p>A timestamp showing when the speaker enrollment job ended. </p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }

    /**
     * <p>A timestamp showing when the speaker enrollment job ended. </p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }

    /**
     * <p>A timestamp showing when the speaker enrollment job ended. </p>
     */
    inline SpeakerEnrollmentJob& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>A timestamp showing when the speaker enrollment job ended. </p>
     */
    inline SpeakerEnrollmentJob& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The configuration that defines the action to take when the speaker is already
     * enrolled in Voice ID, and the <code>FraudDetectionConfig</code> to use.</p>
     */
    inline const EnrollmentConfig& GetEnrollmentConfig() const{ return m_enrollmentConfig; }

    /**
     * <p>The configuration that defines the action to take when the speaker is already
     * enrolled in Voice ID, and the <code>FraudDetectionConfig</code> to use.</p>
     */
    inline bool EnrollmentConfigHasBeenSet() const { return m_enrollmentConfigHasBeenSet; }

    /**
     * <p>The configuration that defines the action to take when the speaker is already
     * enrolled in Voice ID, and the <code>FraudDetectionConfig</code> to use.</p>
     */
    inline void SetEnrollmentConfig(const EnrollmentConfig& value) { m_enrollmentConfigHasBeenSet = true; m_enrollmentConfig = value; }

    /**
     * <p>The configuration that defines the action to take when the speaker is already
     * enrolled in Voice ID, and the <code>FraudDetectionConfig</code> to use.</p>
     */
    inline void SetEnrollmentConfig(EnrollmentConfig&& value) { m_enrollmentConfigHasBeenSet = true; m_enrollmentConfig = std::move(value); }

    /**
     * <p>The configuration that defines the action to take when the speaker is already
     * enrolled in Voice ID, and the <code>FraudDetectionConfig</code> to use.</p>
     */
    inline SpeakerEnrollmentJob& WithEnrollmentConfig(const EnrollmentConfig& value) { SetEnrollmentConfig(value); return *this;}

    /**
     * <p>The configuration that defines the action to take when the speaker is already
     * enrolled in Voice ID, and the <code>FraudDetectionConfig</code> to use.</p>
     */
    inline SpeakerEnrollmentJob& WithEnrollmentConfig(EnrollmentConfig&& value) { SetEnrollmentConfig(std::move(value)); return *this;}


    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline const FailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline void SetFailureDetails(const FailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline void SetFailureDetails(FailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline SpeakerEnrollmentJob& WithFailureDetails(const FailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline SpeakerEnrollmentJob& WithFailureDetails(FailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


    /**
     * <p>The input data config containing an S3 URI for the input manifest file that
     * contains the list of speaker enrollment job requests.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>The input data config containing an S3 URI for the input manifest file that
     * contains the list of speaker enrollment job requests.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>The input data config containing an S3 URI for the input manifest file that
     * contains the list of speaker enrollment job requests.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>The input data config containing an S3 URI for the input manifest file that
     * contains the list of speaker enrollment job requests.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>The input data config containing an S3 URI for the input manifest file that
     * contains the list of speaker enrollment job requests.</p>
     */
    inline SpeakerEnrollmentJob& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>The input data config containing an S3 URI for the input manifest file that
     * contains the list of speaker enrollment job requests.</p>
     */
    inline SpeakerEnrollmentJob& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Provides details on job progress. This field shows the completed percentage
     * of registration requests listed in the input file.</p>
     */
    inline const JobProgress& GetJobProgress() const{ return m_jobProgress; }

    /**
     * <p>Provides details on job progress. This field shows the completed percentage
     * of registration requests listed in the input file.</p>
     */
    inline bool JobProgressHasBeenSet() const { return m_jobProgressHasBeenSet; }

    /**
     * <p>Provides details on job progress. This field shows the completed percentage
     * of registration requests listed in the input file.</p>
     */
    inline void SetJobProgress(const JobProgress& value) { m_jobProgressHasBeenSet = true; m_jobProgress = value; }

    /**
     * <p>Provides details on job progress. This field shows the completed percentage
     * of registration requests listed in the input file.</p>
     */
    inline void SetJobProgress(JobProgress&& value) { m_jobProgressHasBeenSet = true; m_jobProgress = std::move(value); }

    /**
     * <p>Provides details on job progress. This field shows the completed percentage
     * of registration requests listed in the input file.</p>
     */
    inline SpeakerEnrollmentJob& WithJobProgress(const JobProgress& value) { SetJobProgress(value); return *this;}

    /**
     * <p>Provides details on job progress. This field shows the completed percentage
     * of registration requests listed in the input file.</p>
     */
    inline SpeakerEnrollmentJob& WithJobProgress(JobProgress&& value) { SetJobProgress(std::move(value)); return *this;}


    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline const SpeakerEnrollmentJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline void SetJobStatus(const SpeakerEnrollmentJobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline void SetJobStatus(SpeakerEnrollmentJobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithJobStatus(const SpeakerEnrollmentJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJob& WithJobStatus(SpeakerEnrollmentJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The output data config containing the S3 location where Voice ID writes the
     * job output file; you must also include a KMS key ID to encrypt the file.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>The output data config containing the S3 location where Voice ID writes the
     * job output file; you must also include a KMS key ID to encrypt the file.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>The output data config containing the S3 location where Voice ID writes the
     * job output file; you must also include a KMS key ID to encrypt the file.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>The output data config containing the S3 location where Voice ID writes the
     * job output file; you must also include a KMS key ID to encrypt the file.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>The output data config containing the S3 location where Voice ID writes the
     * job output file; you must also include a KMS key ID to encrypt the file.</p>
     */
    inline SpeakerEnrollmentJob& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>The output data config containing the S3 location where Voice ID writes the
     * job output file; you must also include a KMS key ID to encrypt the file.</p>
     */
    inline SpeakerEnrollmentJob& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    EnrollmentConfig m_enrollmentConfig;
    bool m_enrollmentConfigHasBeenSet = false;

    FailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobProgress m_jobProgress;
    bool m_jobProgressHasBeenSet = false;

    SpeakerEnrollmentJobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
