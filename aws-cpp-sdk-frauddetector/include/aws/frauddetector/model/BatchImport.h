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


    /**
     * <p>The ID of the batch import job. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the batch import job. </p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the batch import job. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the batch import job. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the batch import job. </p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the batch import job. </p>
     */
    inline BatchImport& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the batch import job. </p>
     */
    inline BatchImport& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the batch import job. </p>
     */
    inline BatchImport& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The status of the batch import job.</p>
     */
    inline const AsyncJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the batch import job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the batch import job.</p>
     */
    inline void SetStatus(const AsyncJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the batch import job.</p>
     */
    inline void SetStatus(AsyncJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the batch import job.</p>
     */
    inline BatchImport& WithStatus(const AsyncJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the batch import job.</p>
     */
    inline BatchImport& WithStatus(AsyncJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason batch import job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason batch import job failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason batch import job failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason batch import job failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason batch import job failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason batch import job failed.</p>
     */
    inline BatchImport& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason batch import job failed.</p>
     */
    inline BatchImport& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason batch import job failed.</p>
     */
    inline BatchImport& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Timestamp of when the batch import job started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Timestamp of when the batch import job started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Timestamp of when the batch import job started.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Timestamp of when the batch import job started.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Timestamp of when the batch import job started.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>Timestamp of when the batch import job started.</p>
     */
    inline BatchImport& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>Timestamp of when the batch import job started.</p>
     */
    inline BatchImport& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of when the batch import job started.</p>
     */
    inline BatchImport& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>Timestamp of when batch import job completed.</p>
     */
    inline const Aws::String& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>Timestamp of when batch import job completed.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>Timestamp of when batch import job completed.</p>
     */
    inline void SetCompletionTime(const Aws::String& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>Timestamp of when batch import job completed.</p>
     */
    inline void SetCompletionTime(Aws::String&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>Timestamp of when batch import job completed.</p>
     */
    inline void SetCompletionTime(const char* value) { m_completionTimeHasBeenSet = true; m_completionTime.assign(value); }

    /**
     * <p>Timestamp of when batch import job completed.</p>
     */
    inline BatchImport& WithCompletionTime(const Aws::String& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>Timestamp of when batch import job completed.</p>
     */
    inline BatchImport& WithCompletionTime(Aws::String&& value) { SetCompletionTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of when batch import job completed.</p>
     */
    inline BatchImport& WithCompletionTime(const char* value) { SetCompletionTime(value); return *this;}


    /**
     * <p>The Amazon S3 location of your data file for batch import.</p>
     */
    inline const Aws::String& GetInputPath() const{ return m_inputPath; }

    /**
     * <p>The Amazon S3 location of your data file for batch import.</p>
     */
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }

    /**
     * <p>The Amazon S3 location of your data file for batch import.</p>
     */
    inline void SetInputPath(const Aws::String& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }

    /**
     * <p>The Amazon S3 location of your data file for batch import.</p>
     */
    inline void SetInputPath(Aws::String&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::move(value); }

    /**
     * <p>The Amazon S3 location of your data file for batch import.</p>
     */
    inline void SetInputPath(const char* value) { m_inputPathHasBeenSet = true; m_inputPath.assign(value); }

    /**
     * <p>The Amazon S3 location of your data file for batch import.</p>
     */
    inline BatchImport& WithInputPath(const Aws::String& value) { SetInputPath(value); return *this;}

    /**
     * <p>The Amazon S3 location of your data file for batch import.</p>
     */
    inline BatchImport& WithInputPath(Aws::String&& value) { SetInputPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of your data file for batch import.</p>
     */
    inline BatchImport& WithInputPath(const char* value) { SetInputPath(value); return *this;}


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
    inline BatchImport& WithOutputPath(const Aws::String& value) { SetOutputPath(value); return *this;}

    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline BatchImport& WithOutputPath(Aws::String&& value) { SetOutputPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline BatchImport& WithOutputPath(const char* value) { SetOutputPath(value); return *this;}


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
    inline BatchImport& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>The name of the event type.</p>
     */
    inline BatchImport& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the event type.</p>
     */
    inline BatchImport& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


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
    inline BatchImport& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline BatchImport& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role to use for this job request.</p>
     */
    inline BatchImport& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The ARN of the batch import job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the batch import job.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the batch import job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the batch import job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the batch import job.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the batch import job.</p>
     */
    inline BatchImport& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the batch import job.</p>
     */
    inline BatchImport& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the batch import job.</p>
     */
    inline BatchImport& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The number of records processed by batch import job.</p>
     */
    inline int GetProcessedRecordsCount() const{ return m_processedRecordsCount; }

    /**
     * <p>The number of records processed by batch import job.</p>
     */
    inline bool ProcessedRecordsCountHasBeenSet() const { return m_processedRecordsCountHasBeenSet; }

    /**
     * <p>The number of records processed by batch import job.</p>
     */
    inline void SetProcessedRecordsCount(int value) { m_processedRecordsCountHasBeenSet = true; m_processedRecordsCount = value; }

    /**
     * <p>The number of records processed by batch import job.</p>
     */
    inline BatchImport& WithProcessedRecordsCount(int value) { SetProcessedRecordsCount(value); return *this;}


    /**
     * <p>The number of records that failed to import. </p>
     */
    inline int GetFailedRecordsCount() const{ return m_failedRecordsCount; }

    /**
     * <p>The number of records that failed to import. </p>
     */
    inline bool FailedRecordsCountHasBeenSet() const { return m_failedRecordsCountHasBeenSet; }

    /**
     * <p>The number of records that failed to import. </p>
     */
    inline void SetFailedRecordsCount(int value) { m_failedRecordsCountHasBeenSet = true; m_failedRecordsCount = value; }

    /**
     * <p>The number of records that failed to import. </p>
     */
    inline BatchImport& WithFailedRecordsCount(int value) { SetFailedRecordsCount(value); return *this;}


    /**
     * <p>The total number of records in the batch import job.</p>
     */
    inline int GetTotalRecordsCount() const{ return m_totalRecordsCount; }

    /**
     * <p>The total number of records in the batch import job.</p>
     */
    inline bool TotalRecordsCountHasBeenSet() const { return m_totalRecordsCountHasBeenSet; }

    /**
     * <p>The total number of records in the batch import job.</p>
     */
    inline void SetTotalRecordsCount(int value) { m_totalRecordsCountHasBeenSet = true; m_totalRecordsCount = value; }

    /**
     * <p>The total number of records in the batch import job.</p>
     */
    inline BatchImport& WithTotalRecordsCount(int value) { SetTotalRecordsCount(value); return *this;}

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
