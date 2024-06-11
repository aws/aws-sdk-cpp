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


    ///@{
    /**
     * <p>The job ID for the batch prediction.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline BatchPrediction& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline BatchPrediction& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline BatchPrediction& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch prediction status.</p>
     */
    inline const AsyncJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AsyncJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AsyncJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline BatchPrediction& WithStatus(const AsyncJobStatus& value) { SetStatus(value); return *this;}
    inline BatchPrediction& WithStatus(AsyncJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason a batch prediction job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline BatchPrediction& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline BatchPrediction& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline BatchPrediction& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the batch prediction job started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }
    inline BatchPrediction& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline BatchPrediction& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline BatchPrediction& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the batch prediction job completed.</p>
     */
    inline const Aws::String& GetCompletionTime() const{ return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    inline void SetCompletionTime(const Aws::String& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }
    inline void SetCompletionTime(Aws::String&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }
    inline void SetCompletionTime(const char* value) { m_completionTimeHasBeenSet = true; m_completionTime.assign(value); }
    inline BatchPrediction& WithCompletionTime(const Aws::String& value) { SetCompletionTime(value); return *this;}
    inline BatchPrediction& WithCompletionTime(Aws::String&& value) { SetCompletionTime(std::move(value)); return *this;}
    inline BatchPrediction& WithCompletionTime(const char* value) { SetCompletionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of most recent heartbeat indicating the batch prediction job was
     * making progress.</p>
     */
    inline const Aws::String& GetLastHeartbeatTime() const{ return m_lastHeartbeatTime; }
    inline bool LastHeartbeatTimeHasBeenSet() const { return m_lastHeartbeatTimeHasBeenSet; }
    inline void SetLastHeartbeatTime(const Aws::String& value) { m_lastHeartbeatTimeHasBeenSet = true; m_lastHeartbeatTime = value; }
    inline void SetLastHeartbeatTime(Aws::String&& value) { m_lastHeartbeatTimeHasBeenSet = true; m_lastHeartbeatTime = std::move(value); }
    inline void SetLastHeartbeatTime(const char* value) { m_lastHeartbeatTimeHasBeenSet = true; m_lastHeartbeatTime.assign(value); }
    inline BatchPrediction& WithLastHeartbeatTime(const Aws::String& value) { SetLastHeartbeatTime(value); return *this;}
    inline BatchPrediction& WithLastHeartbeatTime(Aws::String&& value) { SetLastHeartbeatTime(std::move(value)); return *this;}
    inline BatchPrediction& WithLastHeartbeatTime(const char* value) { SetLastHeartbeatTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline const Aws::String& GetInputPath() const{ return m_inputPath; }
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }
    inline void SetInputPath(const Aws::String& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }
    inline void SetInputPath(Aws::String&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::move(value); }
    inline void SetInputPath(const char* value) { m_inputPathHasBeenSet = true; m_inputPath.assign(value); }
    inline BatchPrediction& WithInputPath(const Aws::String& value) { SetInputPath(value); return *this;}
    inline BatchPrediction& WithInputPath(Aws::String&& value) { SetInputPath(std::move(value)); return *this;}
    inline BatchPrediction& WithInputPath(const char* value) { SetInputPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline const Aws::String& GetOutputPath() const{ return m_outputPath; }
    inline bool OutputPathHasBeenSet() const { return m_outputPathHasBeenSet; }
    inline void SetOutputPath(const Aws::String& value) { m_outputPathHasBeenSet = true; m_outputPath = value; }
    inline void SetOutputPath(Aws::String&& value) { m_outputPathHasBeenSet = true; m_outputPath = std::move(value); }
    inline void SetOutputPath(const char* value) { m_outputPathHasBeenSet = true; m_outputPath.assign(value); }
    inline BatchPrediction& WithOutputPath(const Aws::String& value) { SetOutputPath(value); return *this;}
    inline BatchPrediction& WithOutputPath(Aws::String&& value) { SetOutputPath(std::move(value)); return *this;}
    inline BatchPrediction& WithOutputPath(const char* value) { SetOutputPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event type.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }
    inline BatchPrediction& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}
    inline BatchPrediction& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}
    inline BatchPrediction& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the detector.</p>
     */
    inline const Aws::String& GetDetectorName() const{ return m_detectorName; }
    inline bool DetectorNameHasBeenSet() const { return m_detectorNameHasBeenSet; }
    inline void SetDetectorName(const Aws::String& value) { m_detectorNameHasBeenSet = true; m_detectorName = value; }
    inline void SetDetectorName(Aws::String&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::move(value); }
    inline void SetDetectorName(const char* value) { m_detectorNameHasBeenSet = true; m_detectorName.assign(value); }
    inline BatchPrediction& WithDetectorName(const Aws::String& value) { SetDetectorName(value); return *this;}
    inline BatchPrediction& WithDetectorName(Aws::String&& value) { SetDetectorName(std::move(value)); return *this;}
    inline BatchPrediction& WithDetectorName(const char* value) { SetDetectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector version. </p>
     */
    inline const Aws::String& GetDetectorVersion() const{ return m_detectorVersion; }
    inline bool DetectorVersionHasBeenSet() const { return m_detectorVersionHasBeenSet; }
    inline void SetDetectorVersion(const Aws::String& value) { m_detectorVersionHasBeenSet = true; m_detectorVersion = value; }
    inline void SetDetectorVersion(Aws::String&& value) { m_detectorVersionHasBeenSet = true; m_detectorVersion = std::move(value); }
    inline void SetDetectorVersion(const char* value) { m_detectorVersionHasBeenSet = true; m_detectorVersion.assign(value); }
    inline BatchPrediction& WithDetectorVersion(const Aws::String& value) { SetDetectorVersion(value); return *this;}
    inline BatchPrediction& WithDetectorVersion(Aws::String&& value) { SetDetectorVersion(std::move(value)); return *this;}
    inline BatchPrediction& WithDetectorVersion(const char* value) { SetDetectorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline BatchPrediction& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline BatchPrediction& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline BatchPrediction& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of batch prediction job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline BatchPrediction& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline BatchPrediction& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline BatchPrediction& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records processed by the batch prediction job.</p>
     */
    inline int GetProcessedRecordsCount() const{ return m_processedRecordsCount; }
    inline bool ProcessedRecordsCountHasBeenSet() const { return m_processedRecordsCountHasBeenSet; }
    inline void SetProcessedRecordsCount(int value) { m_processedRecordsCountHasBeenSet = true; m_processedRecordsCount = value; }
    inline BatchPrediction& WithProcessedRecordsCount(int value) { SetProcessedRecordsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of records in the batch prediction job.</p>
     */
    inline int GetTotalRecordsCount() const{ return m_totalRecordsCount; }
    inline bool TotalRecordsCountHasBeenSet() const { return m_totalRecordsCountHasBeenSet; }
    inline void SetTotalRecordsCount(int value) { m_totalRecordsCountHasBeenSet = true; m_totalRecordsCount = value; }
    inline BatchPrediction& WithTotalRecordsCount(int value) { SetTotalRecordsCount(value); return *this;}
    ///@}
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
