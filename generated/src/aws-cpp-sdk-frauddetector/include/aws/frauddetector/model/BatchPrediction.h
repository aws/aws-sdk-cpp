/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/AsyncJobStatus.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The batch prediction details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchPrediction">AWS
   * API Reference</a></p>
   */
  class BatchPrediction
  {
  public:
    AWS_FRAUDDETECTOR_API BatchPrediction();
    AWS_FRAUDDETECTOR_API BatchPrediction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API BatchPrediction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job ID for the batch prediction.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID for the batch prediction.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID for the batch prediction.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID for the batch prediction.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID for the batch prediction.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID for the batch prediction.</p>
     */
    inline BatchPrediction& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID for the batch prediction.</p>
     */
    inline BatchPrediction& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID for the batch prediction.</p>
     */
    inline BatchPrediction& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The batch prediction status.</p>
     */
    inline const AsyncJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The batch prediction status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The batch prediction status.</p>
     */
    inline void SetStatus(const AsyncJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The batch prediction status.</p>
     */
    inline void SetStatus(AsyncJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The batch prediction status.</p>
     */
    inline BatchPrediction& WithStatus(const AsyncJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The batch prediction status.</p>
     */
    inline BatchPrediction& WithStatus(AsyncJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason a batch prediction job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason a batch prediction job failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason a batch prediction job failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason a batch prediction job failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason a batch prediction job failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason a batch prediction job failed.</p>
     */
    inline BatchPrediction& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason a batch prediction job failed.</p>
     */
    inline BatchPrediction& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason a batch prediction job failed.</p>
     */
    inline BatchPrediction& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Timestamp of when the batch prediction job started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Timestamp of when the batch prediction job started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Timestamp of when the batch prediction job started.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Timestamp of when the batch prediction job started.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Timestamp of when the batch prediction job started.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>Timestamp of when the batch prediction job started.</p>
     */
    inline BatchPrediction& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>Timestamp of when the batch prediction job started.</p>
     */
    inline BatchPrediction& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of when the batch prediction job started.</p>
     */
    inline BatchPrediction& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>Timestamp of when the batch prediction job completed.</p>
     */
    inline const Aws::String& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>Timestamp of when the batch prediction job completed.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>Timestamp of when the batch prediction job completed.</p>
     */
    inline void SetCompletionTime(const Aws::String& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>Timestamp of when the batch prediction job completed.</p>
     */
    inline void SetCompletionTime(Aws::String&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>Timestamp of when the batch prediction job completed.</p>
     */
    inline void SetCompletionTime(const char* value) { m_completionTimeHasBeenSet = true; m_completionTime.assign(value); }

    /**
     * <p>Timestamp of when the batch prediction job completed.</p>
     */
    inline BatchPrediction& WithCompletionTime(const Aws::String& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>Timestamp of when the batch prediction job completed.</p>
     */
    inline BatchPrediction& WithCompletionTime(Aws::String&& value) { SetCompletionTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of when the batch prediction job completed.</p>
     */
    inline BatchPrediction& WithCompletionTime(const char* value) { SetCompletionTime(value); return *this;}


    /**
     * <p>Timestamp of most recent heartbeat indicating the batch prediction job was
     * making progress.</p>
     */
    inline const Aws::String& GetLastHeartbeatTime() const{ return m_lastHeartbeatTime; }

    /**
     * <p>Timestamp of most recent heartbeat indicating the batch prediction job was
     * making progress.</p>
     */
    inline bool LastHeartbeatTimeHasBeenSet() const { return m_lastHeartbeatTimeHasBeenSet; }

    /**
     * <p>Timestamp of most recent heartbeat indicating the batch prediction job was
     * making progress.</p>
     */
    inline void SetLastHeartbeatTime(const Aws::String& value) { m_lastHeartbeatTimeHasBeenSet = true; m_lastHeartbeatTime = value; }

    /**
     * <p>Timestamp of most recent heartbeat indicating the batch prediction job was
     * making progress.</p>
     */
    inline void SetLastHeartbeatTime(Aws::String&& value) { m_lastHeartbeatTimeHasBeenSet = true; m_lastHeartbeatTime = std::move(value); }

    /**
     * <p>Timestamp of most recent heartbeat indicating the batch prediction job was
     * making progress.</p>
     */
    inline void SetLastHeartbeatTime(const char* value) { m_lastHeartbeatTimeHasBeenSet = true; m_lastHeartbeatTime.assign(value); }

    /**
     * <p>Timestamp of most recent heartbeat indicating the batch prediction job was
     * making progress.</p>
     */
    inline BatchPrediction& WithLastHeartbeatTime(const Aws::String& value) { SetLastHeartbeatTime(value); return *this;}

    /**
     * <p>Timestamp of most recent heartbeat indicating the batch prediction job was
     * making progress.</p>
     */
    inline BatchPrediction& WithLastHeartbeatTime(Aws::String&& value) { SetLastHeartbeatTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of most recent heartbeat indicating the batch prediction job was
     * making progress.</p>
     */
    inline BatchPrediction& WithLastHeartbeatTime(const char* value) { SetLastHeartbeatTime(value); return *this;}


    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline const Aws::String& GetInputPath() const{ return m_inputPath; }

    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }

    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline void SetInputPath(const Aws::String& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }

    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline void SetInputPath(Aws::String&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::move(value); }

    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline void SetInputPath(const char* value) { m_inputPathHasBeenSet = true; m_inputPath.assign(value); }

    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline BatchPrediction& WithInputPath(const Aws::String& value) { SetInputPath(value); return *this;}

    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline BatchPrediction& WithInputPath(Aws::String&& value) { SetInputPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline BatchPrediction& WithInputPath(const char* value) { SetInputPath(value); return *this;}


    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline const Aws::String& GetOutputPath() const{ return m_outputPath; }

    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline bool OutputPathHasBeenSet() const { return m_outputPathHasBeenSet; }

    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline void SetOutputPath(const Aws::String& value) { m_outputPathHasBeenSet = true; m_outputPath = value; }

    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline void SetOutputPath(Aws::String&& value) { m_outputPathHasBeenSet = true; m_outputPath = std::move(value); }

    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline void SetOutputPath(const char* value) { m_outputPathHasBeenSet = true; m_outputPath.assign(value); }

    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline BatchPrediction& WithOutputPath(const Aws::String& value) { SetOutputPath(value); return *this;}

    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline BatchPrediction& WithOutputPath(Aws::String&& value) { SetOutputPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline BatchPrediction& WithOutputPath(const char* value) { SetOutputPath(value); return *this;}


    /**
     * <p>The name of the event type.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p>The name of the event type.</p>
     */
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }

    /**
     * <p>The name of the event type.</p>
     */
    inline BatchPrediction& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>The name of the event type.</p>
     */
    inline BatchPrediction& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the event type.</p>
     */
    inline BatchPrediction& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


    /**
     * <p>The name of the detector.</p>
     */
    inline const Aws::String& GetDetectorName() const{ return m_detectorName; }

    /**
     * <p>The name of the detector.</p>
     */
    inline bool DetectorNameHasBeenSet() const { return m_detectorNameHasBeenSet; }

    /**
     * <p>The name of the detector.</p>
     */
    inline void SetDetectorName(const Aws::String& value) { m_detectorNameHasBeenSet = true; m_detectorName = value; }

    /**
     * <p>The name of the detector.</p>
     */
    inline void SetDetectorName(Aws::String&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::move(value); }

    /**
     * <p>The name of the detector.</p>
     */
    inline void SetDetectorName(const char* value) { m_detectorNameHasBeenSet = true; m_detectorName.assign(value); }

    /**
     * <p>The name of the detector.</p>
     */
    inline BatchPrediction& WithDetectorName(const Aws::String& value) { SetDetectorName(value); return *this;}

    /**
     * <p>The name of the detector.</p>
     */
    inline BatchPrediction& WithDetectorName(Aws::String&& value) { SetDetectorName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector.</p>
     */
    inline BatchPrediction& WithDetectorName(const char* value) { SetDetectorName(value); return *this;}


    /**
     * <p>The detector version. </p>
     */
    inline const Aws::String& GetDetectorVersion() const{ return m_detectorVersion; }

    /**
     * <p>The detector version. </p>
     */
    inline bool DetectorVersionHasBeenSet() const { return m_detectorVersionHasBeenSet; }

    /**
     * <p>The detector version. </p>
     */
    inline void SetDetectorVersion(const Aws::String& value) { m_detectorVersionHasBeenSet = true; m_detectorVersion = value; }

    /**
     * <p>The detector version. </p>
     */
    inline void SetDetectorVersion(Aws::String&& value) { m_detectorVersionHasBeenSet = true; m_detectorVersion = std::move(value); }

    /**
     * <p>The detector version. </p>
     */
    inline void SetDetectorVersion(const char* value) { m_detectorVersionHasBeenSet = true; m_detectorVersion.assign(value); }

    /**
     * <p>The detector version. </p>
     */
    inline BatchPrediction& WithDetectorVersion(const Aws::String& value) { SetDetectorVersion(value); return *this;}

    /**
     * <p>The detector version. </p>
     */
    inline BatchPrediction& WithDetectorVersion(Aws::String&& value) { SetDetectorVersion(std::move(value)); return *this;}

    /**
     * <p>The detector version. </p>
     */
    inline BatchPrediction& WithDetectorVersion(const char* value) { SetDetectorVersion(value); return *this;}


    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline BatchPrediction& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline BatchPrediction& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline BatchPrediction& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The ARN of batch prediction job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of batch prediction job.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of batch prediction job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of batch prediction job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of batch prediction job.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of batch prediction job.</p>
     */
    inline BatchPrediction& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of batch prediction job.</p>
     */
    inline BatchPrediction& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of batch prediction job.</p>
     */
    inline BatchPrediction& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The number of records processed by the batch prediction job.</p>
     */
    inline int GetProcessedRecordsCount() const{ return m_processedRecordsCount; }

    /**
     * <p>The number of records processed by the batch prediction job.</p>
     */
    inline bool ProcessedRecordsCountHasBeenSet() const { return m_processedRecordsCountHasBeenSet; }

    /**
     * <p>The number of records processed by the batch prediction job.</p>
     */
    inline void SetProcessedRecordsCount(int value) { m_processedRecordsCountHasBeenSet = true; m_processedRecordsCount = value; }

    /**
     * <p>The number of records processed by the batch prediction job.</p>
     */
    inline BatchPrediction& WithProcessedRecordsCount(int value) { SetProcessedRecordsCount(value); return *this;}


    /**
     * <p>The total number of records in the batch prediction job.</p>
     */
    inline int GetTotalRecordsCount() const{ return m_totalRecordsCount; }

    /**
     * <p>The total number of records in the batch prediction job.</p>
     */
    inline bool TotalRecordsCountHasBeenSet() const { return m_totalRecordsCountHasBeenSet; }

    /**
     * <p>The total number of records in the batch prediction job.</p>
     */
    inline void SetTotalRecordsCount(int value) { m_totalRecordsCountHasBeenSet = true; m_totalRecordsCount = value; }

    /**
     * <p>The total number of records in the batch prediction job.</p>
     */
    inline BatchPrediction& WithTotalRecordsCount(int value) { SetTotalRecordsCount(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    AsyncJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_lastHeartbeatTime;
    bool m_lastHeartbeatTimeHasBeenSet = false;

    Aws::String m_inputPath;
    bool m_inputPathHasBeenSet = false;

    Aws::String m_outputPath;
    bool m_outputPathHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_detectorName;
    bool m_detectorNameHasBeenSet = false;

    Aws::String m_detectorVersion;
    bool m_detectorVersionHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_processedRecordsCount;
    bool m_processedRecordsCountHasBeenSet = false;

    int m_totalRecordsCount;
    bool m_totalRecordsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
