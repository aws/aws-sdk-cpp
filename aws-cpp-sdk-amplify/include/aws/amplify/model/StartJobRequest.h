/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p> Request structure for Start job request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartJobRequest">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API StartJobRequest : public AmplifyRequest
  {
  public:
    StartJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline StartJobRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline StartJobRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline StartJobRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p> Name for the branch, for the Job. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p> Name for the branch, for the Job. </p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p> Name for the branch, for the Job. </p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p> Name for the branch, for the Job. </p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p> Name for the branch, for the Job. </p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p> Name for the branch, for the Job. </p>
     */
    inline StartJobRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p> Name for the branch, for the Job. </p>
     */
    inline StartJobRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p> Name for the branch, for the Job. </p>
     */
    inline StartJobRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p> Unique Id for an existing job. Required for "RETRY" JobType. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p> Unique Id for an existing job. Required for "RETRY" JobType. </p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p> Unique Id for an existing job. Required for "RETRY" JobType. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p> Unique Id for an existing job. Required for "RETRY" JobType. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p> Unique Id for an existing job. Required for "RETRY" JobType. </p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p> Unique Id for an existing job. Required for "RETRY" JobType. </p>
     */
    inline StartJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p> Unique Id for an existing job. Required for "RETRY" JobType. </p>
     */
    inline StartJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p> Unique Id for an existing job. Required for "RETRY" JobType. </p>
     */
    inline StartJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p> Type for the Job. Available JobTypes are: \n "RELEASE": Start a new job with
     * the latest change from the specified branch. Only available for apps that have
     * connected to a repository. "RETRY": Retry an existing job. JobId is required for
     * this type of job. </p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p> Type for the Job. Available JobTypes are: \n "RELEASE": Start a new job with
     * the latest change from the specified branch. Only available for apps that have
     * connected to a repository. "RETRY": Retry an existing job. JobId is required for
     * this type of job. </p>
     */
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    /**
     * <p> Type for the Job. Available JobTypes are: \n "RELEASE": Start a new job with
     * the latest change from the specified branch. Only available for apps that have
     * connected to a repository. "RETRY": Retry an existing job. JobId is required for
     * this type of job. </p>
     */
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p> Type for the Job. Available JobTypes are: \n "RELEASE": Start a new job with
     * the latest change from the specified branch. Only available for apps that have
     * connected to a repository. "RETRY": Retry an existing job. JobId is required for
     * this type of job. </p>
     */
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    /**
     * <p> Type for the Job. Available JobTypes are: \n "RELEASE": Start a new job with
     * the latest change from the specified branch. Only available for apps that have
     * connected to a repository. "RETRY": Retry an existing job. JobId is required for
     * this type of job. </p>
     */
    inline StartJobRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p> Type for the Job. Available JobTypes are: \n "RELEASE": Start a new job with
     * the latest change from the specified branch. Only available for apps that have
     * connected to a repository. "RETRY": Retry an existing job. JobId is required for
     * this type of job. </p>
     */
    inline StartJobRequest& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}


    /**
     * <p> Descriptive reason for starting this job. </p>
     */
    inline const Aws::String& GetJobReason() const{ return m_jobReason; }

    /**
     * <p> Descriptive reason for starting this job. </p>
     */
    inline bool JobReasonHasBeenSet() const { return m_jobReasonHasBeenSet; }

    /**
     * <p> Descriptive reason for starting this job. </p>
     */
    inline void SetJobReason(const Aws::String& value) { m_jobReasonHasBeenSet = true; m_jobReason = value; }

    /**
     * <p> Descriptive reason for starting this job. </p>
     */
    inline void SetJobReason(Aws::String&& value) { m_jobReasonHasBeenSet = true; m_jobReason = std::move(value); }

    /**
     * <p> Descriptive reason for starting this job. </p>
     */
    inline void SetJobReason(const char* value) { m_jobReasonHasBeenSet = true; m_jobReason.assign(value); }

    /**
     * <p> Descriptive reason for starting this job. </p>
     */
    inline StartJobRequest& WithJobReason(const Aws::String& value) { SetJobReason(value); return *this;}

    /**
     * <p> Descriptive reason for starting this job. </p>
     */
    inline StartJobRequest& WithJobReason(Aws::String&& value) { SetJobReason(std::move(value)); return *this;}

    /**
     * <p> Descriptive reason for starting this job. </p>
     */
    inline StartJobRequest& WithJobReason(const char* value) { SetJobReason(value); return *this;}


    /**
     * <p> Commit Id from 3rd party repository provider for the Job. </p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p> Commit Id from 3rd party repository provider for the Job. </p>
     */
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }

    /**
     * <p> Commit Id from 3rd party repository provider for the Job. </p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }

    /**
     * <p> Commit Id from 3rd party repository provider for the Job. </p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = std::move(value); }

    /**
     * <p> Commit Id from 3rd party repository provider for the Job. </p>
     */
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }

    /**
     * <p> Commit Id from 3rd party repository provider for the Job. </p>
     */
    inline StartJobRequest& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p> Commit Id from 3rd party repository provider for the Job. </p>
     */
    inline StartJobRequest& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p> Commit Id from 3rd party repository provider for the Job. </p>
     */
    inline StartJobRequest& WithCommitId(const char* value) { SetCommitId(value); return *this;}


    /**
     * <p> Commit message from 3rd party repository provider for the Job. </p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }

    /**
     * <p> Commit message from 3rd party repository provider for the Job. </p>
     */
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }

    /**
     * <p> Commit message from 3rd party repository provider for the Job. </p>
     */
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }

    /**
     * <p> Commit message from 3rd party repository provider for the Job. </p>
     */
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }

    /**
     * <p> Commit message from 3rd party repository provider for the Job. </p>
     */
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }

    /**
     * <p> Commit message from 3rd party repository provider for the Job. </p>
     */
    inline StartJobRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}

    /**
     * <p> Commit message from 3rd party repository provider for the Job. </p>
     */
    inline StartJobRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}

    /**
     * <p> Commit message from 3rd party repository provider for the Job. </p>
     */
    inline StartJobRequest& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}


    /**
     * <p> Commit date / time for the Job. </p>
     */
    inline const Aws::Utils::DateTime& GetCommitTime() const{ return m_commitTime; }

    /**
     * <p> Commit date / time for the Job. </p>
     */
    inline bool CommitTimeHasBeenSet() const { return m_commitTimeHasBeenSet; }

    /**
     * <p> Commit date / time for the Job. </p>
     */
    inline void SetCommitTime(const Aws::Utils::DateTime& value) { m_commitTimeHasBeenSet = true; m_commitTime = value; }

    /**
     * <p> Commit date / time for the Job. </p>
     */
    inline void SetCommitTime(Aws::Utils::DateTime&& value) { m_commitTimeHasBeenSet = true; m_commitTime = std::move(value); }

    /**
     * <p> Commit date / time for the Job. </p>
     */
    inline StartJobRequest& WithCommitTime(const Aws::Utils::DateTime& value) { SetCommitTime(value); return *this;}

    /**
     * <p> Commit date / time for the Job. </p>
     */
    inline StartJobRequest& WithCommitTime(Aws::Utils::DateTime&& value) { SetCommitTime(std::move(value)); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet;

    Aws::String m_jobReason;
    bool m_jobReasonHasBeenSet;

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet;

    Aws::Utils::DateTime m_commitTime;
    bool m_commitTimeHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
