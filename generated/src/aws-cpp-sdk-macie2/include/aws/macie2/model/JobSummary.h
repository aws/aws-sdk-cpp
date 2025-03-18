/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/S3BucketCriteriaForJob.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/JobStatus.h>
#include <aws/macie2/model/JobType.h>
#include <aws/macie2/model/LastRunErrorStatus.h>
#include <aws/macie2/model/UserPausedDetails.h>
#include <aws/macie2/model/S3BucketDefinitionForJob.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about a classification job, including the current status
   * of the job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/JobSummary">AWS
   * API Reference</a></p>
   */
  class JobSummary
  {
  public:
    AWS_MACIE2_API JobSummary() = default;
    AWS_MACIE2_API JobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API JobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property- and tag-based conditions that determine which S3 buckets are
     * included or excluded from the job's analysis. Each time the job runs, the job
     * uses these criteria to determine which buckets to analyze. A job's definition
     * can contain a bucketCriteria object or a bucketDefinitions array, not both.</p>
     */
    inline const S3BucketCriteriaForJob& GetBucketCriteria() const { return m_bucketCriteria; }
    inline bool BucketCriteriaHasBeenSet() const { return m_bucketCriteriaHasBeenSet; }
    template<typename BucketCriteriaT = S3BucketCriteriaForJob>
    void SetBucketCriteria(BucketCriteriaT&& value) { m_bucketCriteriaHasBeenSet = true; m_bucketCriteria = std::forward<BucketCriteriaT>(value); }
    template<typename BucketCriteriaT = S3BucketCriteriaForJob>
    JobSummary& WithBucketCriteria(BucketCriteriaT&& value) { SetBucketCriteria(std::forward<BucketCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, one for each Amazon Web Services account that owns
     * specific S3 buckets for the job to analyze. Each object specifies the account ID
     * for an account and one or more buckets to analyze for that account. A job's
     * definition can contain a bucketDefinitions array or a bucketCriteria object, not
     * both.</p>
     */
    inline const Aws::Vector<S3BucketDefinitionForJob>& GetBucketDefinitions() const { return m_bucketDefinitions; }
    inline bool BucketDefinitionsHasBeenSet() const { return m_bucketDefinitionsHasBeenSet; }
    template<typename BucketDefinitionsT = Aws::Vector<S3BucketDefinitionForJob>>
    void SetBucketDefinitions(BucketDefinitionsT&& value) { m_bucketDefinitionsHasBeenSet = true; m_bucketDefinitions = std::forward<BucketDefinitionsT>(value); }
    template<typename BucketDefinitionsT = Aws::Vector<S3BucketDefinitionForJob>>
    JobSummary& WithBucketDefinitions(BucketDefinitionsT&& value) { SetBucketDefinitions(std::forward<BucketDefinitionsT>(value)); return *this;}
    template<typename BucketDefinitionsT = S3BucketDefinitionForJob>
    JobSummary& AddBucketDefinitions(BucketDefinitionsT&& value) { m_bucketDefinitionsHasBeenSet = true; m_bucketDefinitions.emplace_back(std::forward<BucketDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    JobSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the job.</p>
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
     * <p>The current status of the job. Possible values are:</p> <ul><li><p>CANCELLED
     * - You cancelled the job or, if it's a one-time job, you paused the job and
     * didn't resume it within 30 days.</p></li> <li><p>COMPLETE - For a one-time job,
     * Amazon Macie finished processing the data specified for the job. This value
     * doesn't apply to recurring jobs.</p></li> <li><p>IDLE - For a recurring job, the
     * previous scheduled run is complete and the next scheduled run is pending. This
     * value doesn't apply to one-time jobs.</p></li> <li><p>PAUSED - Macie started
     * running the job but additional processing would exceed the monthly sensitive
     * data discovery quota for your account or one or more member accounts that the
     * job analyzes data for.</p></li> <li><p>RUNNING - For a one-time job, the job is
     * in progress. For a recurring job, a scheduled run is in progress.</p></li>
     * <li><p>USER_PAUSED - You paused the job. If you paused the job while it had a
     * status of RUNNING and you don't resume it within 30 days of pausing it, the job
     * or job run will expire and be cancelled, depending on the job's type. To check
     * the expiration date, refer to the UserPausedDetails.jobExpiresAt
     * property.</p></li></ul>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline JobSummary& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for running the job. Possible values are:</p>
     * <ul><li><p>ONE_TIME - The job runs only once.</p></li> <li><p>SCHEDULED - The
     * job runs on a daily, weekly, or monthly basis.</p></li></ul>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline JobSummary& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether any account- or bucket-level access errors occurred when
     * the job ran. For a recurring job, this value indicates the error status of the
     * job's most recent run.</p>
     */
    inline const LastRunErrorStatus& GetLastRunErrorStatus() const { return m_lastRunErrorStatus; }
    inline bool LastRunErrorStatusHasBeenSet() const { return m_lastRunErrorStatusHasBeenSet; }
    template<typename LastRunErrorStatusT = LastRunErrorStatus>
    void SetLastRunErrorStatus(LastRunErrorStatusT&& value) { m_lastRunErrorStatusHasBeenSet = true; m_lastRunErrorStatus = std::forward<LastRunErrorStatusT>(value); }
    template<typename LastRunErrorStatusT = LastRunErrorStatus>
    JobSummary& WithLastRunErrorStatus(LastRunErrorStatusT&& value) { SetLastRunErrorStatus(std::forward<LastRunErrorStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    JobSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the current status of the job is USER_PAUSED, specifies when the job was
     * paused and when the job or job run will expire and be cancelled if it isn't
     * resumed. This value is present only if the value for jobStatus is
     * USER_PAUSED.</p>
     */
    inline const UserPausedDetails& GetUserPausedDetails() const { return m_userPausedDetails; }
    inline bool UserPausedDetailsHasBeenSet() const { return m_userPausedDetailsHasBeenSet; }
    template<typename UserPausedDetailsT = UserPausedDetails>
    void SetUserPausedDetails(UserPausedDetailsT&& value) { m_userPausedDetailsHasBeenSet = true; m_userPausedDetails = std::forward<UserPausedDetailsT>(value); }
    template<typename UserPausedDetailsT = UserPausedDetails>
    JobSummary& WithUserPausedDetails(UserPausedDetailsT&& value) { SetUserPausedDetails(std::forward<UserPausedDetailsT>(value)); return *this;}
    ///@}
  private:

    S3BucketCriteriaForJob m_bucketCriteria;
    bool m_bucketCriteriaHasBeenSet = false;

    Aws::Vector<S3BucketDefinitionForJob> m_bucketDefinitions;
    bool m_bucketDefinitionsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    LastRunErrorStatus m_lastRunErrorStatus;
    bool m_lastRunErrorStatusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    UserPausedDetails m_userPausedDetails;
    bool m_userPausedDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
