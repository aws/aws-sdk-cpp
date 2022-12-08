/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/BatchSegmentJobInput.h>
#include <aws/personalize/model/BatchSegmentJobOutput.h>
#include <aws/core/utils/DateTime.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Contains information on a batch segment job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/BatchSegmentJob">AWS
   * API Reference</a></p>
   */
  class BatchSegmentJob
  {
  public:
    AWS_PERSONALIZE_API BatchSegmentJob();
    AWS_PERSONALIZE_API BatchSegmentJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API BatchSegmentJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the batch segment job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline BatchSegmentJob& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline BatchSegmentJob& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the batch segment job.</p>
     */
    inline BatchSegmentJob& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline const Aws::String& GetBatchSegmentJobArn() const{ return m_batchSegmentJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline bool BatchSegmentJobArnHasBeenSet() const { return m_batchSegmentJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline void SetBatchSegmentJobArn(const Aws::String& value) { m_batchSegmentJobArnHasBeenSet = true; m_batchSegmentJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline void SetBatchSegmentJobArn(Aws::String&& value) { m_batchSegmentJobArnHasBeenSet = true; m_batchSegmentJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline void SetBatchSegmentJobArn(const char* value) { m_batchSegmentJobArnHasBeenSet = true; m_batchSegmentJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline BatchSegmentJob& WithBatchSegmentJobArn(const Aws::String& value) { SetBatchSegmentJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline BatchSegmentJob& WithBatchSegmentJobArn(Aws::String&& value) { SetBatchSegmentJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the batch segment job.</p>
     */
    inline BatchSegmentJob& WithBatchSegmentJobArn(const char* value) { SetBatchSegmentJobArn(value); return *this;}


    /**
     * <p>The ARN of the filter used on the batch segment job.</p>
     */
    inline const Aws::String& GetFilterArn() const{ return m_filterArn; }

    /**
     * <p>The ARN of the filter used on the batch segment job.</p>
     */
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }

    /**
     * <p>The ARN of the filter used on the batch segment job.</p>
     */
    inline void SetFilterArn(const Aws::String& value) { m_filterArnHasBeenSet = true; m_filterArn = value; }

    /**
     * <p>The ARN of the filter used on the batch segment job.</p>
     */
    inline void SetFilterArn(Aws::String&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::move(value); }

    /**
     * <p>The ARN of the filter used on the batch segment job.</p>
     */
    inline void SetFilterArn(const char* value) { m_filterArnHasBeenSet = true; m_filterArn.assign(value); }

    /**
     * <p>The ARN of the filter used on the batch segment job.</p>
     */
    inline BatchSegmentJob& WithFilterArn(const Aws::String& value) { SetFilterArn(value); return *this;}

    /**
     * <p>The ARN of the filter used on the batch segment job.</p>
     */
    inline BatchSegmentJob& WithFilterArn(Aws::String&& value) { SetFilterArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the filter used on the batch segment job.</p>
     */
    inline BatchSegmentJob& WithFilterArn(const char* value) { SetFilterArn(value); return *this;}


    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline BatchSegmentJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline BatchSegmentJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the batch segment job failed, the reason for the failure.</p>
     */
    inline BatchSegmentJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline BatchSegmentJob& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline BatchSegmentJob& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution version used by the batch
     * segment job to generate batch segments.</p>
     */
    inline BatchSegmentJob& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}


    /**
     * <p>The number of predicted users generated by the batch segment job for each
     * line of input data.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }

    /**
     * <p>The number of predicted users generated by the batch segment job for each
     * line of input data.</p>
     */
    inline bool NumResultsHasBeenSet() const { return m_numResultsHasBeenSet; }

    /**
     * <p>The number of predicted users generated by the batch segment job for each
     * line of input data.</p>
     */
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }

    /**
     * <p>The number of predicted users generated by the batch segment job for each
     * line of input data.</p>
     */
    inline BatchSegmentJob& WithNumResults(int value) { SetNumResults(value); return *this;}


    /**
     * <p>The Amazon S3 path that leads to the input data used to generate the batch
     * segment job.</p>
     */
    inline const BatchSegmentJobInput& GetJobInput() const{ return m_jobInput; }

    /**
     * <p>The Amazon S3 path that leads to the input data used to generate the batch
     * segment job.</p>
     */
    inline bool JobInputHasBeenSet() const { return m_jobInputHasBeenSet; }

    /**
     * <p>The Amazon S3 path that leads to the input data used to generate the batch
     * segment job.</p>
     */
    inline void SetJobInput(const BatchSegmentJobInput& value) { m_jobInputHasBeenSet = true; m_jobInput = value; }

    /**
     * <p>The Amazon S3 path that leads to the input data used to generate the batch
     * segment job.</p>
     */
    inline void SetJobInput(BatchSegmentJobInput&& value) { m_jobInputHasBeenSet = true; m_jobInput = std::move(value); }

    /**
     * <p>The Amazon S3 path that leads to the input data used to generate the batch
     * segment job.</p>
     */
    inline BatchSegmentJob& WithJobInput(const BatchSegmentJobInput& value) { SetJobInput(value); return *this;}

    /**
     * <p>The Amazon S3 path that leads to the input data used to generate the batch
     * segment job.</p>
     */
    inline BatchSegmentJob& WithJobInput(BatchSegmentJobInput&& value) { SetJobInput(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 bucket that contains the output data generated by the batch
     * segment job.</p>
     */
    inline const BatchSegmentJobOutput& GetJobOutput() const{ return m_jobOutput; }

    /**
     * <p>The Amazon S3 bucket that contains the output data generated by the batch
     * segment job.</p>
     */
    inline bool JobOutputHasBeenSet() const { return m_jobOutputHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that contains the output data generated by the batch
     * segment job.</p>
     */
    inline void SetJobOutput(const BatchSegmentJobOutput& value) { m_jobOutputHasBeenSet = true; m_jobOutput = value; }

    /**
     * <p>The Amazon S3 bucket that contains the output data generated by the batch
     * segment job.</p>
     */
    inline void SetJobOutput(BatchSegmentJobOutput&& value) { m_jobOutputHasBeenSet = true; m_jobOutput = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that contains the output data generated by the batch
     * segment job.</p>
     */
    inline BatchSegmentJob& WithJobOutput(const BatchSegmentJobOutput& value) { SetJobOutput(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains the output data generated by the batch
     * segment job.</p>
     */
    inline BatchSegmentJob& WithJobOutput(BatchSegmentJobOutput&& value) { SetJobOutput(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Amazon Identity and Access Management (IAM) role that
     * requested the batch segment job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the Amazon Identity and Access Management (IAM) role that
     * requested the batch segment job.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Identity and Access Management (IAM) role that
     * requested the batch segment job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the Amazon Identity and Access Management (IAM) role that
     * requested the batch segment job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Identity and Access Management (IAM) role that
     * requested the batch segment job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Identity and Access Management (IAM) role that
     * requested the batch segment job.</p>
     */
    inline BatchSegmentJob& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Identity and Access Management (IAM) role that
     * requested the batch segment job.</p>
     */
    inline BatchSegmentJob& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Identity and Access Management (IAM) role that
     * requested the batch segment job.</p>
     */
    inline BatchSegmentJob& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline BatchSegmentJob& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline BatchSegmentJob& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the batch segment job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline BatchSegmentJob& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline BatchSegmentJob& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The time at which the batch segment job was created.</p>
     */
    inline BatchSegmentJob& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the batch segment job last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The time at which the batch segment job last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The time at which the batch segment job last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The time at which the batch segment job last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The time at which the batch segment job last updated.</p>
     */
    inline BatchSegmentJob& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The time at which the batch segment job last updated.</p>
     */
    inline BatchSegmentJob& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_batchSegmentJobArn;
    bool m_batchSegmentJobArnHasBeenSet = false;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;

    int m_numResults;
    bool m_numResultsHasBeenSet = false;

    BatchSegmentJobInput m_jobInput;
    bool m_jobInputHasBeenSet = false;

    BatchSegmentJobOutput m_jobOutput;
    bool m_jobOutputHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
