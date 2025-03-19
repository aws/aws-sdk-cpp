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
   * <p>The batch import job details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchImport">AWS
   * API Reference</a></p>
   */
  class BatchImport
  {
  public:
    AWS_FRAUDDETECTOR_API BatchImport() = default;
    AWS_FRAUDDETECTOR_API BatchImport(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API BatchImport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the batch import job. </p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    BatchImport& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the batch import job.</p>
     */
    inline AsyncJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AsyncJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline BatchImport& WithStatus(AsyncJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason batch import job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    BatchImport& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the batch import job started.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    BatchImport& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when batch import job completed.</p>
     */
    inline const Aws::String& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::String>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::String>
    BatchImport& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of your data file for batch import.</p>
     */
    inline const Aws::String& GetInputPath() const { return m_inputPath; }
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }
    template<typename InputPathT = Aws::String>
    void SetInputPath(InputPathT&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::forward<InputPathT>(value); }
    template<typename InputPathT = Aws::String>
    BatchImport& WithInputPath(InputPathT&& value) { SetInputPath(std::forward<InputPathT>(value)); return *this;}
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
    BatchImport& WithOutputPath(OutputPathT&& value) { SetOutputPath(std::forward<OutputPathT>(value)); return *this;}
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
    BatchImport& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
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
    BatchImport& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the batch import job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BatchImport& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records processed by batch import job.</p>
     */
    inline int GetProcessedRecordsCount() const { return m_processedRecordsCount; }
    inline bool ProcessedRecordsCountHasBeenSet() const { return m_processedRecordsCountHasBeenSet; }
    inline void SetProcessedRecordsCount(int value) { m_processedRecordsCountHasBeenSet = true; m_processedRecordsCount = value; }
    inline BatchImport& WithProcessedRecordsCount(int value) { SetProcessedRecordsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records that failed to import. </p>
     */
    inline int GetFailedRecordsCount() const { return m_failedRecordsCount; }
    inline bool FailedRecordsCountHasBeenSet() const { return m_failedRecordsCountHasBeenSet; }
    inline void SetFailedRecordsCount(int value) { m_failedRecordsCountHasBeenSet = true; m_failedRecordsCount = value; }
    inline BatchImport& WithFailedRecordsCount(int value) { SetFailedRecordsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of records in the batch import job.</p>
     */
    inline int GetTotalRecordsCount() const { return m_totalRecordsCount; }
    inline bool TotalRecordsCountHasBeenSet() const { return m_totalRecordsCountHasBeenSet; }
    inline void SetTotalRecordsCount(int value) { m_totalRecordsCountHasBeenSet = true; m_totalRecordsCount = value; }
    inline BatchImport& WithTotalRecordsCount(int value) { SetTotalRecordsCount(value); return *this;}
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

    Aws::String m_inputPath;
    bool m_inputPathHasBeenSet = false;

    Aws::String m_outputPath;
    bool m_outputPathHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_processedRecordsCount{0};
    bool m_processedRecordsCountHasBeenSet = false;

    int m_failedRecordsCount{0};
    bool m_failedRecordsCountHasBeenSet = false;

    int m_totalRecordsCount{0};
    bool m_totalRecordsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
