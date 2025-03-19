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
    AWS_FRAUDDETECTOR_API BatchPrediction() = default;
    AWS_FRAUDDETECTOR_API BatchPrediction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API BatchPrediction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job ID for the batch prediction.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    BatchPrediction& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch prediction status.</p>
     */
    inline AsyncJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AsyncJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline BatchPrediction& WithStatus(AsyncJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason a batch prediction job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    BatchPrediction& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the batch prediction job started.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    BatchPrediction& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the batch prediction job completed.</p>
     */
    inline const Aws::String& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::String>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::String>
    BatchPrediction& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of most recent heartbeat indicating the batch prediction job was
     * making progress.</p>
     */
    inline const Aws::String& GetLastHeartbeatTime() const { return m_lastHeartbeatTime; }
    inline bool LastHeartbeatTimeHasBeenSet() const { return m_lastHeartbeatTimeHasBeenSet; }
    template<typename LastHeartbeatTimeT = Aws::String>
    void SetLastHeartbeatTime(LastHeartbeatTimeT&& value) { m_lastHeartbeatTimeHasBeenSet = true; m_lastHeartbeatTime = std::forward<LastHeartbeatTimeT>(value); }
    template<typename LastHeartbeatTimeT = Aws::String>
    BatchPrediction& WithLastHeartbeatTime(LastHeartbeatTimeT&& value) { SetLastHeartbeatTime(std::forward<LastHeartbeatTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline const Aws::String& GetInputPath() const { return m_inputPath; }
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }
    template<typename InputPathT = Aws::String>
    void SetInputPath(InputPathT&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::forward<InputPathT>(value); }
    template<typename InputPathT = Aws::String>
    BatchPrediction& WithInputPath(InputPathT&& value) { SetInputPath(std::forward<InputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline const Aws::String& GetOutputPath() const { return m_outputPath; }
    inline bool OutputPathHasBeenSet() const { return m_outputPathHasBeenSet; }
    template<typename OutputPathT = Aws::String>
    void SetOutputPath(OutputPathT&& value) { m_outputPathHasBeenSet = true; m_outputPath = std::forward<OutputPathT>(value); }
    template<typename OutputPathT = Aws::String>
    BatchPrediction& WithOutputPath(OutputPathT&& value) { SetOutputPath(std::forward<OutputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event type.</p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    BatchPrediction& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the detector.</p>
     */
    inline const Aws::String& GetDetectorName() const { return m_detectorName; }
    inline bool DetectorNameHasBeenSet() const { return m_detectorNameHasBeenSet; }
    template<typename DetectorNameT = Aws::String>
    void SetDetectorName(DetectorNameT&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::forward<DetectorNameT>(value); }
    template<typename DetectorNameT = Aws::String>
    BatchPrediction& WithDetectorName(DetectorNameT&& value) { SetDetectorName(std::forward<DetectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector version. </p>
     */
    inline const Aws::String& GetDetectorVersion() const { return m_detectorVersion; }
    inline bool DetectorVersionHasBeenSet() const { return m_detectorVersionHasBeenSet; }
    template<typename DetectorVersionT = Aws::String>
    void SetDetectorVersion(DetectorVersionT&& value) { m_detectorVersionHasBeenSet = true; m_detectorVersion = std::forward<DetectorVersionT>(value); }
    template<typename DetectorVersionT = Aws::String>
    BatchPrediction& WithDetectorVersion(DetectorVersionT&& value) { SetDetectorVersion(std::forward<DetectorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    BatchPrediction& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of batch prediction job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BatchPrediction& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records processed by the batch prediction job.</p>
     */
    inline int GetProcessedRecordsCount() const { return m_processedRecordsCount; }
    inline bool ProcessedRecordsCountHasBeenSet() const { return m_processedRecordsCountHasBeenSet; }
    inline void SetProcessedRecordsCount(int value) { m_processedRecordsCountHasBeenSet = true; m_processedRecordsCount = value; }
    inline BatchPrediction& WithProcessedRecordsCount(int value) { SetProcessedRecordsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of records in the batch prediction job.</p>
     */
    inline int GetTotalRecordsCount() const { return m_totalRecordsCount; }
    inline bool TotalRecordsCountHasBeenSet() const { return m_totalRecordsCountHasBeenSet; }
    inline void SetTotalRecordsCount(int value) { m_totalRecordsCountHasBeenSet = true; m_totalRecordsCount = value; }
    inline BatchPrediction& WithTotalRecordsCount(int value) { SetTotalRecordsCount(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    AsyncJobStatus m_status{AsyncJobStatus::NOT_SET};
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

    int m_processedRecordsCount{0};
    bool m_processedRecordsCountHasBeenSet = false;

    int m_totalRecordsCount{0};
    bool m_totalRecordsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
