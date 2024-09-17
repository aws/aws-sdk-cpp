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
    AWS_FRAUDDETECTOR_API BatchImport();
    AWS_FRAUDDETECTOR_API BatchImport(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API BatchImport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the batch import job. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline BatchImport& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline BatchImport& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline BatchImport& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the batch import job.</p>
     */
    inline const AsyncJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AsyncJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AsyncJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline BatchImport& WithStatus(const AsyncJobStatus& value) { SetStatus(value); return *this;}
    inline BatchImport& WithStatus(AsyncJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason batch import job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline BatchImport& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline BatchImport& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline BatchImport& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the batch import job started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }
    inline BatchImport& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline BatchImport& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline BatchImport& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when batch import job completed.</p>
     */
    inline const Aws::String& GetCompletionTime() const{ return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    inline void SetCompletionTime(const Aws::String& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }
    inline void SetCompletionTime(Aws::String&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }
    inline void SetCompletionTime(const char* value) { m_completionTimeHasBeenSet = true; m_completionTime.assign(value); }
    inline BatchImport& WithCompletionTime(const Aws::String& value) { SetCompletionTime(value); return *this;}
    inline BatchImport& WithCompletionTime(Aws::String&& value) { SetCompletionTime(std::move(value)); return *this;}
    inline BatchImport& WithCompletionTime(const char* value) { SetCompletionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of your data file for batch import.</p>
     */
    inline const Aws::String& GetInputPath() const{ return m_inputPath; }
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }
    inline void SetInputPath(const Aws::String& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }
    inline void SetInputPath(Aws::String&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::move(value); }
    inline void SetInputPath(const char* value) { m_inputPathHasBeenSet = true; m_inputPath.assign(value); }
    inline BatchImport& WithInputPath(const Aws::String& value) { SetInputPath(value); return *this;}
    inline BatchImport& WithInputPath(Aws::String&& value) { SetInputPath(std::move(value)); return *this;}
    inline BatchImport& WithInputPath(const char* value) { SetInputPath(value); return *this;}
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
    inline BatchImport& WithOutputPath(const Aws::String& value) { SetOutputPath(value); return *this;}
    inline BatchImport& WithOutputPath(Aws::String&& value) { SetOutputPath(std::move(value)); return *this;}
    inline BatchImport& WithOutputPath(const char* value) { SetOutputPath(value); return *this;}
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
    inline BatchImport& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}
    inline BatchImport& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}
    inline BatchImport& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}
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
    inline BatchImport& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline BatchImport& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline BatchImport& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the batch import job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline BatchImport& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline BatchImport& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline BatchImport& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records processed by batch import job.</p>
     */
    inline int GetProcessedRecordsCount() const{ return m_processedRecordsCount; }
    inline bool ProcessedRecordsCountHasBeenSet() const { return m_processedRecordsCountHasBeenSet; }
    inline void SetProcessedRecordsCount(int value) { m_processedRecordsCountHasBeenSet = true; m_processedRecordsCount = value; }
    inline BatchImport& WithProcessedRecordsCount(int value) { SetProcessedRecordsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records that failed to import. </p>
     */
    inline int GetFailedRecordsCount() const{ return m_failedRecordsCount; }
    inline bool FailedRecordsCountHasBeenSet() const { return m_failedRecordsCountHasBeenSet; }
    inline void SetFailedRecordsCount(int value) { m_failedRecordsCountHasBeenSet = true; m_failedRecordsCount = value; }
    inline BatchImport& WithFailedRecordsCount(int value) { SetFailedRecordsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of records in the batch import job.</p>
     */
    inline int GetTotalRecordsCount() const{ return m_totalRecordsCount; }
    inline bool TotalRecordsCountHasBeenSet() const { return m_totalRecordsCountHasBeenSet; }
    inline void SetTotalRecordsCount(int value) { m_totalRecordsCountHasBeenSet = true; m_totalRecordsCount = value; }
    inline BatchImport& WithTotalRecordsCount(int value) { SetTotalRecordsCount(value); return *this;}
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

    int m_processedRecordsCount;
    bool m_processedRecordsCountHasBeenSet = false;

    int m_failedRecordsCount;
    bool m_failedRecordsCountHasBeenSet = false;

    int m_totalRecordsCount;
    bool m_totalRecordsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
