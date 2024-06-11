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
    AWS_AMPLIFY_API StartJobRequest();

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
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline StartJobRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline StartJobRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline StartJobRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch to use for the job. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }
    inline StartJobRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}
    inline StartJobRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}
    inline StartJobRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for an existing job. This is required if the value of
     * <code>jobType</code> is <code>RETRY</code>. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline StartJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline StartJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline StartJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the type for the job. The job type <code>RELEASE</code> starts a
     * new job with the latest change from the specified branch. This value is
     * available only for apps that are connected to a repository. </p> <p>The job type
     * <code>RETRY</code> retries an existing job. If the job type value is
     * <code>RETRY</code>, the <code>jobId</code> is also required. </p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }
    inline StartJobRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline StartJobRequest& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive reason for starting the job.</p>
     */
    inline const Aws::String& GetJobReason() const{ return m_jobReason; }
    inline bool JobReasonHasBeenSet() const { return m_jobReasonHasBeenSet; }
    inline void SetJobReason(const Aws::String& value) { m_jobReasonHasBeenSet = true; m_jobReason = value; }
    inline void SetJobReason(Aws::String&& value) { m_jobReasonHasBeenSet = true; m_jobReason = std::move(value); }
    inline void SetJobReason(const char* value) { m_jobReasonHasBeenSet = true; m_jobReason.assign(value); }
    inline StartJobRequest& WithJobReason(const Aws::String& value) { SetJobReason(value); return *this;}
    inline StartJobRequest& WithJobReason(Aws::String&& value) { SetJobReason(std::move(value)); return *this;}
    inline StartJobRequest& WithJobReason(const char* value) { SetJobReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The commit ID from a third-party repository provider for the job. </p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = std::move(value); }
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }
    inline StartJobRequest& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}
    inline StartJobRequest& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}
    inline StartJobRequest& WithCommitId(const char* value) { SetCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The commit message from a third-party repository provider for the job. </p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }
    inline StartJobRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}
    inline StartJobRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}
    inline StartJobRequest& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The commit date and time for the job. </p>
     */
    inline const Aws::Utils::DateTime& GetCommitTime() const{ return m_commitTime; }
    inline bool CommitTimeHasBeenSet() const { return m_commitTimeHasBeenSet; }
    inline void SetCommitTime(const Aws::Utils::DateTime& value) { m_commitTimeHasBeenSet = true; m_commitTime = value; }
    inline void SetCommitTime(Aws::Utils::DateTime&& value) { m_commitTimeHasBeenSet = true; m_commitTime = std::move(value); }
    inline StartJobRequest& WithCommitTime(const Aws::Utils::DateTime& value) { SetCommitTime(value); return *this;}
    inline StartJobRequest& WithCommitTime(Aws::Utils::DateTime&& value) { SetCommitTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_jobReason;
    bool m_jobReasonHasBeenSet = false;

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    Aws::Utils::DateTime m_commitTime;
    bool m_commitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
