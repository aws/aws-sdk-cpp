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
    AWS_MACIE2_API DescribeClassificationJobResult();
    AWS_MACIE2_API DescribeClassificationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API DescribeClassificationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of unique identifiers, one for each allow list that the job is
     * configured to use when it analyzes data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowListIds() const{ return m_allowListIds; }
    inline void SetAllowListIds(const Aws::Vector<Aws::String>& value) { m_allowListIds = value; }
    inline void SetAllowListIds(Aws::Vector<Aws::String>&& value) { m_allowListIds = std::move(value); }
    inline DescribeClassificationJobResult& WithAllowListIds(const Aws::Vector<Aws::String>& value) { SetAllowListIds(value); return *this;}
    inline DescribeClassificationJobResult& WithAllowListIds(Aws::Vector<Aws::String>&& value) { SetAllowListIds(std::move(value)); return *this;}
    inline DescribeClassificationJobResult& AddAllowListIds(const Aws::String& value) { m_allowListIds.push_back(value); return *this; }
    inline DescribeClassificationJobResult& AddAllowListIds(Aws::String&& value) { m_allowListIds.push_back(std::move(value)); return *this; }
    inline DescribeClassificationJobResult& AddAllowListIds(const char* value) { m_allowListIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that was provided to ensure the idempotency of the request to
     * create the job.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline DescribeClassificationJobResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DescribeClassificationJobResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DescribeClassificationJobResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline DescribeClassificationJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DescribeClassificationJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of unique identifiers, one for each custom data identifier that the
     * job is configured to use when it analyzes data. This value is null if the job is
     * configured to use only managed data identifiers to analyze data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDataIdentifierIds() const{ return m_customDataIdentifierIds; }
    inline void SetCustomDataIdentifierIds(const Aws::Vector<Aws::String>& value) { m_customDataIdentifierIds = value; }
    inline void SetCustomDataIdentifierIds(Aws::Vector<Aws::String>&& value) { m_customDataIdentifierIds = std::move(value); }
    inline DescribeClassificationJobResult& WithCustomDataIdentifierIds(const Aws::Vector<Aws::String>& value) { SetCustomDataIdentifierIds(value); return *this;}
    inline DescribeClassificationJobResult& WithCustomDataIdentifierIds(Aws::Vector<Aws::String>&& value) { SetCustomDataIdentifierIds(std::move(value)); return *this;}
    inline DescribeClassificationJobResult& AddCustomDataIdentifierIds(const Aws::String& value) { m_customDataIdentifierIds.push_back(value); return *this; }
    inline DescribeClassificationJobResult& AddCustomDataIdentifierIds(Aws::String&& value) { m_customDataIdentifierIds.push_back(std::move(value)); return *this; }
    inline DescribeClassificationJobResult& AddCustomDataIdentifierIds(const char* value) { m_customDataIdentifierIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom description of the job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeClassificationJobResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeClassificationJobResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeClassificationJobResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a recurring job, specifies whether you configured the job to analyze all
     * existing, eligible objects immediately after the job was created (true). If you
     * configured the job to analyze only those objects that were created or changed
     * after the job was created and before the job's first scheduled run, this value
     * is false. This value is also false for a one-time job.</p>
     */
    inline bool GetInitialRun() const{ return m_initialRun; }
    inline void SetInitialRun(bool value) { m_initialRun = value; }
    inline DescribeClassificationJobResult& WithInitialRun(bool value) { SetInitialRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline DescribeClassificationJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline DescribeClassificationJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline DescribeClassificationJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline DescribeClassificationJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline DescribeClassificationJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline DescribeClassificationJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
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
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }
    inline DescribeClassificationJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline DescribeClassificationJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for running the job. Possible values are:</p>
     * <ul><li><p>ONE_TIME - The job runs only once.</p></li> <li><p>SCHEDULED - The
     * job runs on a daily, weekly, or monthly basis. The scheduleFrequency property
     * indicates the recurrence pattern for the job.</p></li></ul>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }
    inline void SetJobType(const JobType& value) { m_jobType = value; }
    inline void SetJobType(JobType&& value) { m_jobType = std::move(value); }
    inline DescribeClassificationJobResult& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline DescribeClassificationJobResult& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether any account- or bucket-level access errors occurred when
     * the job ran. For a recurring job, this value indicates the error status of the
     * job's most recent run.</p>
     */
    inline const LastRunErrorStatus& GetLastRunErrorStatus() const{ return m_lastRunErrorStatus; }
    inline void SetLastRunErrorStatus(const LastRunErrorStatus& value) { m_lastRunErrorStatus = value; }
    inline void SetLastRunErrorStatus(LastRunErrorStatus&& value) { m_lastRunErrorStatus = std::move(value); }
    inline DescribeClassificationJobResult& WithLastRunErrorStatus(const LastRunErrorStatus& value) { SetLastRunErrorStatus(value); return *this;}
    inline DescribeClassificationJobResult& WithLastRunErrorStatus(LastRunErrorStatus&& value) { SetLastRunErrorStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job started.
     * If the job is a recurring job, this value indicates when the most recent run
     * started or, if the job hasn't run yet, when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunTime() const{ return m_lastRunTime; }
    inline void SetLastRunTime(const Aws::Utils::DateTime& value) { m_lastRunTime = value; }
    inline void SetLastRunTime(Aws::Utils::DateTime&& value) { m_lastRunTime = std::move(value); }
    inline DescribeClassificationJobResult& WithLastRunTime(const Aws::Utils::DateTime& value) { SetLastRunTime(value); return *this;}
    inline DescribeClassificationJobResult& WithLastRunTime(Aws::Utils::DateTime&& value) { SetLastRunTime(std::move(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetManagedDataIdentifierIds() const{ return m_managedDataIdentifierIds; }
    inline void SetManagedDataIdentifierIds(const Aws::Vector<Aws::String>& value) { m_managedDataIdentifierIds = value; }
    inline void SetManagedDataIdentifierIds(Aws::Vector<Aws::String>&& value) { m_managedDataIdentifierIds = std::move(value); }
    inline DescribeClassificationJobResult& WithManagedDataIdentifierIds(const Aws::Vector<Aws::String>& value) { SetManagedDataIdentifierIds(value); return *this;}
    inline DescribeClassificationJobResult& WithManagedDataIdentifierIds(Aws::Vector<Aws::String>&& value) { SetManagedDataIdentifierIds(std::move(value)); return *this;}
    inline DescribeClassificationJobResult& AddManagedDataIdentifierIds(const Aws::String& value) { m_managedDataIdentifierIds.push_back(value); return *this; }
    inline DescribeClassificationJobResult& AddManagedDataIdentifierIds(Aws::String&& value) { m_managedDataIdentifierIds.push_back(std::move(value)); return *this; }
    inline DescribeClassificationJobResult& AddManagedDataIdentifierIds(const char* value) { m_managedDataIdentifierIds.push_back(value); return *this; }
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
    inline const ManagedDataIdentifierSelector& GetManagedDataIdentifierSelector() const{ return m_managedDataIdentifierSelector; }
    inline void SetManagedDataIdentifierSelector(const ManagedDataIdentifierSelector& value) { m_managedDataIdentifierSelector = value; }
    inline void SetManagedDataIdentifierSelector(ManagedDataIdentifierSelector&& value) { m_managedDataIdentifierSelector = std::move(value); }
    inline DescribeClassificationJobResult& WithManagedDataIdentifierSelector(const ManagedDataIdentifierSelector& value) { SetManagedDataIdentifierSelector(value); return *this;}
    inline DescribeClassificationJobResult& WithManagedDataIdentifierSelector(ManagedDataIdentifierSelector&& value) { SetManagedDataIdentifierSelector(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeClassificationJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeClassificationJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeClassificationJobResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 buckets that contain the objects to analyze, and the scope of that
     * analysis.</p>
     */
    inline const S3JobDefinition& GetS3JobDefinition() const{ return m_s3JobDefinition; }
    inline void SetS3JobDefinition(const S3JobDefinition& value) { m_s3JobDefinition = value; }
    inline void SetS3JobDefinition(S3JobDefinition&& value) { m_s3JobDefinition = std::move(value); }
    inline DescribeClassificationJobResult& WithS3JobDefinition(const S3JobDefinition& value) { SetS3JobDefinition(value); return *this;}
    inline DescribeClassificationJobResult& WithS3JobDefinition(S3JobDefinition&& value) { SetS3JobDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sampling depth, as a percentage, that determines the percentage of
     * eligible objects that the job analyzes.</p>
     */
    inline int GetSamplingPercentage() const{ return m_samplingPercentage; }
    inline void SetSamplingPercentage(int value) { m_samplingPercentage = value; }
    inline DescribeClassificationJobResult& WithSamplingPercentage(int value) { SetSamplingPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurrence pattern for running the job. This value is null if the job is
     * configured to run only once.</p>
     */
    inline const JobScheduleFrequency& GetScheduleFrequency() const{ return m_scheduleFrequency; }
    inline void SetScheduleFrequency(const JobScheduleFrequency& value) { m_scheduleFrequency = value; }
    inline void SetScheduleFrequency(JobScheduleFrequency&& value) { m_scheduleFrequency = std::move(value); }
    inline DescribeClassificationJobResult& WithScheduleFrequency(const JobScheduleFrequency& value) { SetScheduleFrequency(value); return *this;}
    inline DescribeClassificationJobResult& WithScheduleFrequency(JobScheduleFrequency&& value) { SetScheduleFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times that the job has run and processing statistics for the
     * job's current run.</p>
     */
    inline const Statistics& GetStatistics() const{ return m_statistics; }
    inline void SetStatistics(const Statistics& value) { m_statistics = value; }
    inline void SetStatistics(Statistics&& value) { m_statistics = std::move(value); }
    inline DescribeClassificationJobResult& WithStatistics(const Statistics& value) { SetStatistics(value); return *this;}
    inline DescribeClassificationJobResult& WithStatistics(Statistics&& value) { SetStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeClassificationJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeClassificationJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeClassificationJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeClassificationJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeClassificationJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeClassificationJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeClassificationJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeClassificationJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeClassificationJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the current status of the job is USER_PAUSED, specifies when the job was
     * paused and when the job or job run will expire and be cancelled if it isn't
     * resumed. This value is present only if the value for jobStatus is
     * USER_PAUSED.</p>
     */
    inline const UserPausedDetails& GetUserPausedDetails() const{ return m_userPausedDetails; }
    inline void SetUserPausedDetails(const UserPausedDetails& value) { m_userPausedDetails = value; }
    inline void SetUserPausedDetails(UserPausedDetails&& value) { m_userPausedDetails = std::move(value); }
    inline DescribeClassificationJobResult& WithUserPausedDetails(const UserPausedDetails& value) { SetUserPausedDetails(value); return *this;}
    inline DescribeClassificationJobResult& WithUserPausedDetails(UserPausedDetails&& value) { SetUserPausedDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeClassificationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeClassificationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeClassificationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowListIds;

    Aws::String m_clientToken;

    Aws::Utils::DateTime m_createdAt;

    Aws::Vector<Aws::String> m_customDataIdentifierIds;

    Aws::String m_description;

    bool m_initialRun;

    Aws::String m_jobArn;

    Aws::String m_jobId;

    JobStatus m_jobStatus;

    JobType m_jobType;

    LastRunErrorStatus m_lastRunErrorStatus;

    Aws::Utils::DateTime m_lastRunTime;

    Aws::Vector<Aws::String> m_managedDataIdentifierIds;

    ManagedDataIdentifierSelector m_managedDataIdentifierSelector;

    Aws::String m_name;

    S3JobDefinition m_s3JobDefinition;

    int m_samplingPercentage;

    JobScheduleFrequency m_scheduleFrequency;

    Statistics m_statistics;

    Aws::Map<Aws::String, Aws::String> m_tags;

    UserPausedDetails m_userPausedDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
