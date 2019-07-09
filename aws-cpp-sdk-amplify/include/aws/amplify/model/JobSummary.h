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
   * <p> Structure for the summary of a Job. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/JobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API JobSummary
  {
  public:
    JobSummary();
    JobSummary(Aws::Utils::Json::JsonView jsonValue);
    JobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Arn for the Job. </p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p> Arn for the Job. </p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

    /**
     * <p> Arn for the Job. </p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p> Arn for the Job. </p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p> Arn for the Job. </p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p> Arn for the Job. </p>
     */
    inline JobSummary& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p> Arn for the Job. </p>
     */
    inline JobSummary& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p> Arn for the Job. </p>
     */
    inline JobSummary& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p> Unique Id for the Job. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p> Unique Id for the Job. </p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p> Unique Id for the Job. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p> Unique Id for the Job. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p> Unique Id for the Job. </p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p> Unique Id for the Job. </p>
     */
    inline JobSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p> Unique Id for the Job. </p>
     */
    inline JobSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p> Unique Id for the Job. </p>
     */
    inline JobSummary& WithJobId(const char* value) { SetJobId(value); return *this;}


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
    inline JobSummary& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p> Commit Id from 3rd party repository provider for the Job. </p>
     */
    inline JobSummary& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p> Commit Id from 3rd party repository provider for the Job. </p>
     */
    inline JobSummary& WithCommitId(const char* value) { SetCommitId(value); return *this;}


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
    inline JobSummary& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}

    /**
     * <p> Commit message from 3rd party repository provider for the Job. </p>
     */
    inline JobSummary& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}

    /**
     * <p> Commit message from 3rd party repository provider for the Job. </p>
     */
    inline JobSummary& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}


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
    inline JobSummary& WithCommitTime(const Aws::Utils::DateTime& value) { SetCommitTime(value); return *this;}

    /**
     * <p> Commit date / time for the Job. </p>
     */
    inline JobSummary& WithCommitTime(Aws::Utils::DateTime&& value) { SetCommitTime(std::move(value)); return *this;}


    /**
     * <p> Start date / time for the Job. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> Start date / time for the Job. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> Start date / time for the Job. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> Start date / time for the Job. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> Start date / time for the Job. </p>
     */
    inline JobSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> Start date / time for the Job. </p>
     */
    inline JobSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> Status for the Job. </p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Status for the Job. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Status for the Job. </p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Status for the Job. </p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Status for the Job. </p>
     */
    inline JobSummary& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Status for the Job. </p>
     */
    inline JobSummary& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> End date / time for the Job. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> End date / time for the Job. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> End date / time for the Job. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> End date / time for the Job. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> End date / time for the Job. </p>
     */
    inline JobSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> End date / time for the Job. </p>
     */
    inline JobSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> Type for the Job. \n "RELEASE": Manually released from source by using
     * StartJob API. "RETRY": Manually retried by using StartJob API. "WEB_HOOK":
     * Automatically triggered by WebHooks. </p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p> Type for the Job. \n "RELEASE": Manually released from source by using
     * StartJob API. "RETRY": Manually retried by using StartJob API. "WEB_HOOK":
     * Automatically triggered by WebHooks. </p>
     */
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    /**
     * <p> Type for the Job. \n "RELEASE": Manually released from source by using
     * StartJob API. "RETRY": Manually retried by using StartJob API. "WEB_HOOK":
     * Automatically triggered by WebHooks. </p>
     */
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p> Type for the Job. \n "RELEASE": Manually released from source by using
     * StartJob API. "RETRY": Manually retried by using StartJob API. "WEB_HOOK":
     * Automatically triggered by WebHooks. </p>
     */
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    /**
     * <p> Type for the Job. \n "RELEASE": Manually released from source by using
     * StartJob API. "RETRY": Manually retried by using StartJob API. "WEB_HOOK":
     * Automatically triggered by WebHooks. </p>
     */
    inline JobSummary& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p> Type for the Job. \n "RELEASE": Manually released from source by using
     * StartJob API. "RETRY": Manually retried by using StartJob API. "WEB_HOOK":
     * Automatically triggered by WebHooks. </p>
     */
    inline JobSummary& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}

  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet;

    Aws::Utils::DateTime m_commitTime;
    bool m_commitTimeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    JobStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
