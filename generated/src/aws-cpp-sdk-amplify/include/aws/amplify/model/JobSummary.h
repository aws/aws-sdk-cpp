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
#include <aws/amplify/model/SourceUrlType.h>
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
    AWS_AMPLIFY_API JobSummary() = default;
    AWS_AMPLIFY_API JobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API JobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the job. </p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    JobSummary& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique ID for the job. </p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    JobSummary& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The commit ID from a third-party repository provider for the job. </p>
     */
    inline const Aws::String& GetCommitId() const { return m_commitId; }
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
    template<typename CommitIdT = Aws::String>
    void SetCommitId(CommitIdT&& value) { m_commitIdHasBeenSet = true; m_commitId = std::forward<CommitIdT>(value); }
    template<typename CommitIdT = Aws::String>
    JobSummary& WithCommitId(CommitIdT&& value) { SetCommitId(std::forward<CommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The commit message from a third-party repository provider for the job. </p>
     */
    inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    template<typename CommitMessageT = Aws::String>
    void SetCommitMessage(CommitMessageT&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::forward<CommitMessageT>(value); }
    template<typename CommitMessageT = Aws::String>
    JobSummary& WithCommitMessage(CommitMessageT&& value) { SetCommitMessage(std::forward<CommitMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit date and time for the job. </p>
     */
    inline const Aws::Utils::DateTime& GetCommitTime() const { return m_commitTime; }
    inline bool CommitTimeHasBeenSet() const { return m_commitTimeHasBeenSet; }
    template<typename CommitTimeT = Aws::Utils::DateTime>
    void SetCommitTime(CommitTimeT&& value) { m_commitTimeHasBeenSet = true; m_commitTime = std::forward<CommitTimeT>(value); }
    template<typename CommitTimeT = Aws::Utils::DateTime>
    JobSummary& WithCommitTime(CommitTimeT&& value) { SetCommitTime(std::forward<CommitTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start date and time for the job. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    JobSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status for the job. </p>
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JobSummary& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end date and time for the job. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    JobSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type for the job. If the value is <code>RELEASE</code>, the job was
     * manually released from its source by using the <code>StartJob</code> API. This
     * value is available only for apps that are connected to a repository.</p> <p>If
     * the value is <code>RETRY</code>, the job was manually retried using the
     * <code>StartJob</code> API. If the value is <code>WEB_HOOK</code>, the job was
     * automatically triggered by webhooks. If the value is <code>MANUAL</code>, the
     * job is for a manually deployed app. Manually deployed apps are not connected to
     * a Git repository.</p>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline JobSummary& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source URL for the files to deploy. The source URL can be either an HTTP
     * GET URL that is publicly accessible and downloads a single .zip file, or an
     * Amazon S3 bucket and prefix.</p>
     */
    inline const Aws::String& GetSourceUrl() const { return m_sourceUrl; }
    inline bool SourceUrlHasBeenSet() const { return m_sourceUrlHasBeenSet; }
    template<typename SourceUrlT = Aws::String>
    void SetSourceUrl(SourceUrlT&& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = std::forward<SourceUrlT>(value); }
    template<typename SourceUrlT = Aws::String>
    JobSummary& WithSourceUrl(SourceUrlT&& value) { SetSourceUrl(std::forward<SourceUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of source specified by the <code>sourceURL</code>. If the value is
     * <code>ZIP</code>, the source is a .zip file. If the value is
     * <code>BUCKET_PREFIX</code>, the source is an Amazon S3 bucket and prefix. If no
     * value is specified, the default is <code>ZIP</code>.</p>
     */
    inline SourceUrlType GetSourceUrlType() const { return m_sourceUrlType; }
    inline bool SourceUrlTypeHasBeenSet() const { return m_sourceUrlTypeHasBeenSet; }
    inline void SetSourceUrlType(SourceUrlType value) { m_sourceUrlTypeHasBeenSet = true; m_sourceUrlType = value; }
    inline JobSummary& WithSourceUrlType(SourceUrlType value) { SetSourceUrlType(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    Aws::Utils::DateTime m_commitTime{};
    bool m_commitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_sourceUrl;
    bool m_sourceUrlHasBeenSet = false;

    SourceUrlType m_sourceUrlType{SourceUrlType::NOT_SET};
    bool m_sourceUrlTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
