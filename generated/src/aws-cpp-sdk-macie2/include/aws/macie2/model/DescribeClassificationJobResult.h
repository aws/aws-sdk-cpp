/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/JobStatus.h>
#include <aws/macie2/model/JobType.h>
#include <aws/macie2/model/LastRunErrorStatus.h>
#include <aws/macie2/model/ManagedDataIdentifierSelector.h>
#include <aws/macie2/model/S3JobDefinition.h>
#include <aws/macie2/model/JobScheduleFrequency.h>
#include <aws/macie2/model/Statistics.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/macie2/model/UserPausedDetails.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class DescribeClassificationJobResult
  {
  public:
    AWS_MACIE2_API DescribeClassificationJobResult() = default;
    AWS_MACIE2_API DescribeClassificationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API DescribeClassificationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of unique identifiers, one for each allow list that the job is
     * configured to use when it analyzes data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowListIds() const { return m_allowListIds; }
    template<typename AllowListIdsT = Aws::Vector<Aws::String>>
    void SetAllowListIds(AllowListIdsT&& value) { m_allowListIdsHasBeenSet = true; m_allowListIds = std::forward<AllowListIdsT>(value); }
    template<typename AllowListIdsT = Aws::Vector<Aws::String>>
    DescribeClassificationJobResult& WithAllowListIds(AllowListIdsT&& value) { SetAllowListIds(std::forward<AllowListIdsT>(value)); return *this;}
    template<typename AllowListIdsT = Aws::String>
    DescribeClassificationJobResult& AddAllowListIds(AllowListIdsT&& value) { m_allowListIdsHasBeenSet = true; m_allowListIds.emplace_back(std::forward<AllowListIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that was provided to ensure the idempotency of the request to
     * create the job.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    DescribeClassificationJobResult& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeClassificationJobResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of unique identifiers, one for each custom data identifier that the
     * job is configured to use when it analyzes data. This value is null if the job is
     * configured to use only managed data identifiers to analyze data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDataIdentifierIds() const { return m_customDataIdentifierIds; }
    template<typename CustomDataIdentifierIdsT = Aws::Vector<Aws::String>>
    void SetCustomDataIdentifierIds(CustomDataIdentifierIdsT&& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds = std::forward<CustomDataIdentifierIdsT>(value); }
    template<typename CustomDataIdentifierIdsT = Aws::Vector<Aws::String>>
    DescribeClassificationJobResult& WithCustomDataIdentifierIds(CustomDataIdentifierIdsT&& value) { SetCustomDataIdentifierIds(std::forward<CustomDataIdentifierIdsT>(value)); return *this;}
    template<typename CustomDataIdentifierIdsT = Aws::String>
    DescribeClassificationJobResult& AddCustomDataIdentifierIds(CustomDataIdentifierIdsT&& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds.emplace_back(std::forward<CustomDataIdentifierIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom description of the job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeClassificationJobResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a recurring job, specifies whether you configured the job to analyze all
     * existing, eligible objects immediately after the job was created (true). If you
     * configured the job to analyze only those objects that were created or changed
     * after the job was created and before the job's first scheduled run, this value
     * is false. This value is also false for a one-time job.</p>
     */
    inline bool GetInitialRun() const { return m_initialRun; }
    inline void SetInitialRun(bool value) { m_initialRunHasBeenSet = true; m_initialRun = value; }
    inline DescribeClassificationJobResult& WithInitialRun(bool value) { SetInitialRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    DescribeClassificationJobResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DescribeClassificationJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
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
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline DescribeClassificationJobResult& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for running the job. Possible values are:</p>
     * <ul><li><p>ONE_TIME - The job runs only once.</p></li> <li><p>SCHEDULED - The
     * job runs on a daily, weekly, or monthly basis. The scheduleFrequency property
     * indicates the recurrence pattern for the job.</p></li></ul>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline DescribeClassificationJobResult& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether any account- or bucket-level access errors occurred when
     * the job ran. For a recurring job, this value indicates the error status of the
     * job's most recent run.</p>
     */
    inline const LastRunErrorStatus& GetLastRunErrorStatus() const { return m_lastRunErrorStatus; }
    template<typename LastRunErrorStatusT = LastRunErrorStatus>
    void SetLastRunErrorStatus(LastRunErrorStatusT&& value) { m_lastRunErrorStatusHasBeenSet = true; m_lastRunErrorStatus = std::forward<LastRunErrorStatusT>(value); }
    template<typename LastRunErrorStatusT = LastRunErrorStatus>
    DescribeClassificationJobResult& WithLastRunErrorStatus(LastRunErrorStatusT&& value) { SetLastRunErrorStatus(std::forward<LastRunErrorStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job started.
     * If the job is a recurring job, this value indicates when the most recent run
     * started or, if the job hasn't run yet, when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunTime() const { return m_lastRunTime; }
    template<typename LastRunTimeT = Aws::Utils::DateTime>
    void SetLastRunTime(LastRunTimeT&& value) { m_lastRunTimeHasBeenSet = true; m_lastRunTime = std::forward<LastRunTimeT>(value); }
    template<typename LastRunTimeT = Aws::Utils::DateTime>
    DescribeClassificationJobResult& WithLastRunTime(LastRunTimeT&& value) { SetLastRunTime(std::forward<LastRunTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of unique identifiers, one for each managed data identifier that the
     * job is explicitly configured to include (use) or exclude (not use) when it
     * analyzes data. Inclusion or exclusion depends on the managed data identifier
     * selection type specified for the job (managedDataIdentifierSelector).</p><p>This
     * value is null if the job's managed data identifier selection type is ALL, NONE,
     * or RECOMMENDED.</p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedDataIdentifierIds() const { return m_managedDataIdentifierIds; }
    template<typename ManagedDataIdentifierIdsT = Aws::Vector<Aws::String>>
    void SetManagedDataIdentifierIds(ManagedDataIdentifierIdsT&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds = std::forward<ManagedDataIdentifierIdsT>(value); }
    template<typename ManagedDataIdentifierIdsT = Aws::Vector<Aws::String>>
    DescribeClassificationJobResult& WithManagedDataIdentifierIds(ManagedDataIdentifierIdsT&& value) { SetManagedDataIdentifierIds(std::forward<ManagedDataIdentifierIdsT>(value)); return *this;}
    template<typename ManagedDataIdentifierIdsT = Aws::String>
    DescribeClassificationJobResult& AddManagedDataIdentifierIds(ManagedDataIdentifierIdsT&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.emplace_back(std::forward<ManagedDataIdentifierIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The selection type that determines which managed data identifiers the job
     * uses when it analyzes data. Possible values are:</p> <ul><li><p>ALL - Use all
     * managed data identifiers.</p></li> <li><p>EXCLUDE - Use all managed data
     * identifiers except the ones specified by the managedDataIdentifierIds
     * property.</p></li> <li><p>INCLUDE - Use only the managed data identifiers
     * specified by the managedDataIdentifierIds property.</p></li> <li><p>NONE - Don't
     * use any managed data identifiers. Use only custom data identifiers
     * (customDataIdentifierIds).</p></li> <li><p>RECOMMENDED (default) - Use the
     * recommended set of managed data identifiers.</p></li></ul> <p>If this value is
     * null, the job uses the recommended set of managed data identifiers.</p> <p>If
     * the job is a recurring job and this value is ALL or EXCLUDE, each job run
     * automatically uses new managed data identifiers that are released. If this value
     * is null or RECOMMENDED for a recurring job, each job run uses all the managed
     * data identifiers that are in the recommended set when the run starts.</p> <p>To
     * learn about individual managed data identifiers or determine which ones are in
     * the recommended set, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/managed-data-identifiers.html">Using
     * managed data identifiers</a> or <a
     * href="https://docs.aws.amazon.com/macie/latest/user/discovery-jobs-mdis-recommended.html">Recommended
     * managed data identifiers</a> in the <i>Amazon Macie User Guide</i>.</p>
     */
    inline ManagedDataIdentifierSelector GetManagedDataIdentifierSelector() const { return m_managedDataIdentifierSelector; }
    inline void SetManagedDataIdentifierSelector(ManagedDataIdentifierSelector value) { m_managedDataIdentifierSelectorHasBeenSet = true; m_managedDataIdentifierSelector = value; }
    inline DescribeClassificationJobResult& WithManagedDataIdentifierSelector(ManagedDataIdentifierSelector value) { SetManagedDataIdentifierSelector(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeClassificationJobResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 buckets that contain the objects to analyze, and the scope of that
     * analysis.</p>
     */
    inline const S3JobDefinition& GetS3JobDefinition() const { return m_s3JobDefinition; }
    template<typename S3JobDefinitionT = S3JobDefinition>
    void SetS3JobDefinition(S3JobDefinitionT&& value) { m_s3JobDefinitionHasBeenSet = true; m_s3JobDefinition = std::forward<S3JobDefinitionT>(value); }
    template<typename S3JobDefinitionT = S3JobDefinition>
    DescribeClassificationJobResult& WithS3JobDefinition(S3JobDefinitionT&& value) { SetS3JobDefinition(std::forward<S3JobDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sampling depth, as a percentage, that determines the percentage of
     * eligible objects that the job analyzes.</p>
     */
    inline int GetSamplingPercentage() const { return m_samplingPercentage; }
    inline void SetSamplingPercentage(int value) { m_samplingPercentageHasBeenSet = true; m_samplingPercentage = value; }
    inline DescribeClassificationJobResult& WithSamplingPercentage(int value) { SetSamplingPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurrence pattern for running the job. This value is null if the job is
     * configured to run only once.</p>
     */
    inline const JobScheduleFrequency& GetScheduleFrequency() const { return m_scheduleFrequency; }
    template<typename ScheduleFrequencyT = JobScheduleFrequency>
    void SetScheduleFrequency(ScheduleFrequencyT&& value) { m_scheduleFrequencyHasBeenSet = true; m_scheduleFrequency = std::forward<ScheduleFrequencyT>(value); }
    template<typename ScheduleFrequencyT = JobScheduleFrequency>
    DescribeClassificationJobResult& WithScheduleFrequency(ScheduleFrequencyT&& value) { SetScheduleFrequency(std::forward<ScheduleFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times that the job has run and processing statistics for the
     * job's current run.</p>
     */
    inline const Statistics& GetStatistics() const { return m_statistics; }
    template<typename StatisticsT = Statistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = Statistics>
    DescribeClassificationJobResult& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeClassificationJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeClassificationJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If the current status of the job is USER_PAUSED, specifies when the job was
     * paused and when the job or job run will expire and be cancelled if it isn't
     * resumed. This value is present only if the value for jobStatus is
     * USER_PAUSED.</p>
     */
    inline const UserPausedDetails& GetUserPausedDetails() const { return m_userPausedDetails; }
    template<typename UserPausedDetailsT = UserPausedDetails>
    void SetUserPausedDetails(UserPausedDetailsT&& value) { m_userPausedDetailsHasBeenSet = true; m_userPausedDetails = std::forward<UserPausedDetailsT>(value); }
    template<typename UserPausedDetailsT = UserPausedDetails>
    DescribeClassificationJobResult& WithUserPausedDetails(UserPausedDetailsT&& value) { SetUserPausedDetails(std::forward<UserPausedDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClassificationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowListIds;
    bool m_allowListIdsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_customDataIdentifierIds;
    bool m_customDataIdentifierIdsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_initialRun{false};
    bool m_initialRunHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    LastRunErrorStatus m_lastRunErrorStatus;
    bool m_lastRunErrorStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastRunTime{};
    bool m_lastRunTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_managedDataIdentifierIds;
    bool m_managedDataIdentifierIdsHasBeenSet = false;

    ManagedDataIdentifierSelector m_managedDataIdentifierSelector{ManagedDataIdentifierSelector::NOT_SET};
    bool m_managedDataIdentifierSelectorHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    S3JobDefinition m_s3JobDefinition;
    bool m_s3JobDefinitionHasBeenSet = false;

    int m_samplingPercentage{0};
    bool m_samplingPercentageHasBeenSet = false;

    JobScheduleFrequency m_scheduleFrequency;
    bool m_scheduleFrequencyHasBeenSet = false;

    Statistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    UserPausedDetails m_userPausedDetails;
    bool m_userPausedDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
