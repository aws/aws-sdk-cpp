/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/amplify/model/JobStatus.h>
#include <aws/amplify/model/JobType.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p> Describes the summary for an execution job for an Amplify app.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/JobSummary">AWS
   * API Reference</a></p>
   */
  class JobSummary
  {
  public:
    AWS_AMPLIFY_API JobSummary();
    AWS_AMPLIFY_API JobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API JobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) for the job. </p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for the job. </p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for the job. </p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for the job. </p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the job. </p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the job. </p>
     */
    inline JobSummary& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the job. </p>
     */
    inline JobSummary& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the job. </p>
     */
    inline JobSummary& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p> The unique ID for the job. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p> The unique ID for the job. </p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p> The unique ID for the job. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p> The unique ID for the job. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p> The unique ID for the job. </p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p> The unique ID for the job. </p>
     */
    inline JobSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p> The unique ID for the job. </p>
     */
    inline JobSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p> The unique ID for the job. </p>
     */
    inline JobSummary& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p> The commit ID from a third-party repository provider for the job. </p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p> The commit ID from a third-party repository provider for the job. </p>
     */
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }

    /**
     * <p> The commit ID from a third-party repository provider for the job. </p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }

    /**
     * <p> The commit ID from a third-party repository provider for the job. </p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = std::move(value); }

    /**
     * <p> The commit ID from a third-party repository provider for the job. </p>
     */
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }

    /**
     * <p> The commit ID from a third-party repository provider for the job. </p>
     */
    inline JobSummary& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p> The commit ID from a third-party repository provider for the job. </p>
     */
    inline JobSummary& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p> The commit ID from a third-party repository provider for the job. </p>
     */
    inline JobSummary& WithCommitId(const char* value) { SetCommitId(value); return *this;}


    /**
     * <p> The commit message from a third-party repository provider for the job. </p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }

    /**
     * <p> The commit message from a third-party repository provider for the job. </p>
     */
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }

    /**
     * <p> The commit message from a third-party repository provider for the job. </p>
     */
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }

    /**
     * <p> The commit message from a third-party repository provider for the job. </p>
     */
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }

    /**
     * <p> The commit message from a third-party repository provider for the job. </p>
     */
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }

    /**
     * <p> The commit message from a third-party repository provider for the job. </p>
     */
    inline JobSummary& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}

    /**
     * <p> The commit message from a third-party repository provider for the job. </p>
     */
    inline JobSummary& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}

    /**
     * <p> The commit message from a third-party repository provider for the job. </p>
     */
    inline JobSummary& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}


    /**
     * <p> The commit date and time for the job. </p>
     */
    inline const Aws::Utils::DateTime& GetCommitTime() const{ return m_commitTime; }

    /**
     * <p> The commit date and time for the job. </p>
     */
    inline bool CommitTimeHasBeenSet() const { return m_commitTimeHasBeenSet; }

    /**
     * <p> The commit date and time for the job. </p>
     */
    inline void SetCommitTime(const Aws::Utils::DateTime& value) { m_commitTimeHasBeenSet = true; m_commitTime = value; }

    /**
     * <p> The commit date and time for the job. </p>
     */
    inline void SetCommitTime(Aws::Utils::DateTime&& value) { m_commitTimeHasBeenSet = true; m_commitTime = std::move(value); }

    /**
     * <p> The commit date and time for the job. </p>
     */
    inline JobSummary& WithCommitTime(const Aws::Utils::DateTime& value) { SetCommitTime(value); return *this;}

    /**
     * <p> The commit date and time for the job. </p>
     */
    inline JobSummary& WithCommitTime(Aws::Utils::DateTime&& value) { SetCommitTime(std::move(value)); return *this;}


    /**
     * <p> The start date and time for the job. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The start date and time for the job. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The start date and time for the job. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The start date and time for the job. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The start date and time for the job. </p>
     */
    inline JobSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The start date and time for the job. </p>
     */
    inline JobSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The current status for the job. </p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The current status for the job. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The current status for the job. </p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The current status for the job. </p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The current status for the job. </p>
     */
    inline JobSummary& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The current status for the job. </p>
     */
    inline JobSummary& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The end date and time for the job. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The end date and time for the job. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The end date and time for the job. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The end date and time for the job. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The end date and time for the job. </p>
     */
    inline JobSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end date and time for the job. </p>
     */
    inline JobSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> The type for the job. If the value is <code>RELEASE</code>, the job was
     * manually released from its source by using the <code>StartJob</code> API. If the
     * value is <code>RETRY</code>, the job was manually retried using the
     * <code>StartJob</code> API. If the value is <code>WEB_HOOK</code>, the job was
     * automatically triggered by webhooks. </p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p> The type for the job. If the value is <code>RELEASE</code>, the job was
     * manually released from its source by using the <code>StartJob</code> API. If the
     * value is <code>RETRY</code>, the job was manually retried using the
     * <code>StartJob</code> API. If the value is <code>WEB_HOOK</code>, the job was
     * automatically triggered by webhooks. </p>
     */
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    /**
     * <p> The type for the job. If the value is <code>RELEASE</code>, the job was
     * manually released from its source by using the <code>StartJob</code> API. If the
     * value is <code>RETRY</code>, the job was manually retried using the
     * <code>StartJob</code> API. If the value is <code>WEB_HOOK</code>, the job was
     * automatically triggered by webhooks. </p>
     */
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p> The type for the job. If the value is <code>RELEASE</code>, the job was
     * manually released from its source by using the <code>StartJob</code> API. If the
     * value is <code>RETRY</code>, the job was manually retried using the
     * <code>StartJob</code> API. If the value is <code>WEB_HOOK</code>, the job was
     * automatically triggered by webhooks. </p>
     */
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    /**
     * <p> The type for the job. If the value is <code>RELEASE</code>, the job was
     * manually released from its source by using the <code>StartJob</code> API. If the
     * value is <code>RETRY</code>, the job was manually retried using the
     * <code>StartJob</code> API. If the value is <code>WEB_HOOK</code>, the job was
     * automatically triggered by webhooks. </p>
     */
    inline JobSummary& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p> The type for the job. If the value is <code>RELEASE</code>, the job was
     * manually released from its source by using the <code>StartJob</code> API. If the
     * value is <code>RETRY</code>, the job was manually retried using the
     * <code>StartJob</code> API. If the value is <code>WEB_HOOK</code>, the job was
     * automatically triggered by webhooks. </p>
     */
    inline JobSummary& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}

  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    Aws::Utils::DateTime m_commitTime;
    bool m_commitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
