/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/JobType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p>The request structure for the start job request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartJobRequest">AWS
   * API Reference</a></p>
   */
  class StartJobRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API StartJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartJob"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    StartJobRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch to use for the job. </p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    StartJobRequest& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for an existing job. This is required if the value of
     * <code>jobType</code> is <code>RETRY</code>. </p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    StartJobRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the type for the job. The job type <code>RELEASE</code> starts a
     * new job with the latest change from the specified branch. This value is
     * available only for apps that are connected to a repository. </p> <p>The job type
     * <code>RETRY</code> retries an existing job. If the job type value is
     * <code>RETRY</code>, the <code>jobId</code> is also required. </p>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline StartJobRequest& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive reason for starting the job.</p>
     */
    inline const Aws::String& GetJobReason() const { return m_jobReason; }
    inline bool JobReasonHasBeenSet() const { return m_jobReasonHasBeenSet; }
    template<typename JobReasonT = Aws::String>
    void SetJobReason(JobReasonT&& value) { m_jobReasonHasBeenSet = true; m_jobReason = std::forward<JobReasonT>(value); }
    template<typename JobReasonT = Aws::String>
    StartJobRequest& WithJobReason(JobReasonT&& value) { SetJobReason(std::forward<JobReasonT>(value)); return *this;}
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
    StartJobRequest& WithCommitId(CommitIdT&& value) { SetCommitId(std::forward<CommitIdT>(value)); return *this;}
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
    StartJobRequest& WithCommitMessage(CommitMessageT&& value) { SetCommitMessage(std::forward<CommitMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The commit date and time for the job. </p>
     */
    inline const Aws::Utils::DateTime& GetCommitTime() const { return m_commitTime; }
    inline bool CommitTimeHasBeenSet() const { return m_commitTimeHasBeenSet; }
    template<typename CommitTimeT = Aws::Utils::DateTime>
    void SetCommitTime(CommitTimeT&& value) { m_commitTimeHasBeenSet = true; m_commitTime = std::forward<CommitTimeT>(value); }
    template<typename CommitTimeT = Aws::Utils::DateTime>
    StartJobRequest& WithCommitTime(CommitTimeT&& value) { SetCommitTime(std::forward<CommitTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_jobReason;
    bool m_jobReasonHasBeenSet = false;

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    Aws::Utils::DateTime m_commitTime{};
    bool m_commitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
