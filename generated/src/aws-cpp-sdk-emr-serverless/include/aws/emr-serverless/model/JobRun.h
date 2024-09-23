/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/emr-serverless/model/JobRunState.h>
#include <aws/emr-serverless/model/ConfigurationOverrides.h>
#include <aws/emr-serverless/model/JobDriver.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/emr-serverless/model/TotalResourceUtilization.h>
#include <aws/emr-serverless/model/NetworkConfiguration.h>
#include <aws/emr-serverless/model/ResourceUtilization.h>
#include <aws/emr-serverless/model/JobRunMode.h>
#include <aws/emr-serverless/model/RetryPolicy.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>Information about a job run. A job run is a unit of work, such as a Spark
   * JAR, Hive query, or SparkSQL query, that you submit to an Amazon EMR Serverless
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/JobRun">AWS
   * API Reference</a></p>
   */
  class JobRun
  {
  public:
    AWS_EMRSERVERLESS_API JobRun();
    AWS_EMRSERVERLESS_API JobRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API JobRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the application the job is running on.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline JobRun& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline JobRun& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline JobRun& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job run.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }
    inline JobRun& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}
    inline JobRun& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}
    inline JobRun& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline JobRun& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline JobRun& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline JobRun& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline JobRun& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline JobRun& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline JobRun& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the job run.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline JobRun& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline JobRun& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline JobRun& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline JobRun& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline JobRun& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job run was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline JobRun& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline JobRun& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline JobRun& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline JobRun& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline JobRun& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the job run.</p>
     */
    inline const JobRunState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const JobRunState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(JobRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline JobRun& WithState(const JobRunState& value) { SetState(value); return *this;}
    inline JobRun& WithState(JobRunState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state details of the job run.</p>
     */
    inline const Aws::String& GetStateDetails() const{ return m_stateDetails; }
    inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
    inline void SetStateDetails(const Aws::String& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = value; }
    inline void SetStateDetails(Aws::String&& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = std::move(value); }
    inline void SetStateDetails(const char* value) { m_stateDetailsHasBeenSet = true; m_stateDetails.assign(value); }
    inline JobRun& WithStateDetails(const Aws::String& value) { SetStateDetails(value); return *this;}
    inline JobRun& WithStateDetails(Aws::String&& value) { SetStateDetails(std::move(value)); return *this;}
    inline JobRun& WithStateDetails(const char* value) { SetStateDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EMR release associated with the application your job is running
     * on.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }
    inline JobRun& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}
    inline JobRun& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}
    inline JobRun& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings that are used to override default
     * configuration.</p>
     */
    inline const ConfigurationOverrides& GetConfigurationOverrides() const{ return m_configurationOverrides; }
    inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }
    inline void SetConfigurationOverrides(const ConfigurationOverrides& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = value; }
    inline void SetConfigurationOverrides(ConfigurationOverrides&& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = std::move(value); }
    inline JobRun& WithConfigurationOverrides(const ConfigurationOverrides& value) { SetConfigurationOverrides(value); return *this;}
    inline JobRun& WithConfigurationOverrides(ConfigurationOverrides&& value) { SetConfigurationOverrides(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job driver for the job run.</p>
     */
    inline const JobDriver& GetJobDriver() const{ return m_jobDriver; }
    inline bool JobDriverHasBeenSet() const { return m_jobDriverHasBeenSet; }
    inline void SetJobDriver(const JobDriver& value) { m_jobDriverHasBeenSet = true; m_jobDriver = value; }
    inline void SetJobDriver(JobDriver&& value) { m_jobDriverHasBeenSet = true; m_jobDriver = std::move(value); }
    inline JobRun& WithJobDriver(const JobDriver& value) { SetJobDriver(value); return *this;}
    inline JobRun& WithJobDriver(JobDriver&& value) { SetJobDriver(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline JobRun& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline JobRun& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline JobRun& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline JobRun& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline JobRun& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline JobRun& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline JobRun& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline JobRun& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline JobRun& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregate vCPU, memory, and storage resources used from the time the job
     * starts to execute, until the time the job terminates, rounded up to the nearest
     * second.</p>
     */
    inline const TotalResourceUtilization& GetTotalResourceUtilization() const{ return m_totalResourceUtilization; }
    inline bool TotalResourceUtilizationHasBeenSet() const { return m_totalResourceUtilizationHasBeenSet; }
    inline void SetTotalResourceUtilization(const TotalResourceUtilization& value) { m_totalResourceUtilizationHasBeenSet = true; m_totalResourceUtilization = value; }
    inline void SetTotalResourceUtilization(TotalResourceUtilization&& value) { m_totalResourceUtilizationHasBeenSet = true; m_totalResourceUtilization = std::move(value); }
    inline JobRun& WithTotalResourceUtilization(const TotalResourceUtilization& value) { SetTotalResourceUtilization(value); return *this;}
    inline JobRun& WithTotalResourceUtilization(TotalResourceUtilization&& value) { SetTotalResourceUtilization(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline JobRun& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline JobRun& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job run total execution duration in seconds. This field is only available
     * for job runs in a <code>COMPLETED</code>, <code>FAILED</code>, or
     * <code>CANCELLED</code> state.</p>
     */
    inline int GetTotalExecutionDurationSeconds() const{ return m_totalExecutionDurationSeconds; }
    inline bool TotalExecutionDurationSecondsHasBeenSet() const { return m_totalExecutionDurationSecondsHasBeenSet; }
    inline void SetTotalExecutionDurationSeconds(int value) { m_totalExecutionDurationSecondsHasBeenSet = true; m_totalExecutionDurationSeconds = value; }
    inline JobRun& WithTotalExecutionDurationSeconds(int value) { SetTotalExecutionDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the job run timeout value from the <code>StartJobRun</code> call. If
     * no timeout was specified, then it returns the default timeout of 720
     * minutes.</p>
     */
    inline long long GetExecutionTimeoutMinutes() const{ return m_executionTimeoutMinutes; }
    inline bool ExecutionTimeoutMinutesHasBeenSet() const { return m_executionTimeoutMinutesHasBeenSet; }
    inline void SetExecutionTimeoutMinutes(long long value) { m_executionTimeoutMinutesHasBeenSet = true; m_executionTimeoutMinutes = value; }
    inline JobRun& WithExecutionTimeoutMinutes(long long value) { SetExecutionTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregate vCPU, memory, and storage that Amazon Web Services has billed
     * for the job run. The billed resources include a 1-minute minimum usage for
     * workers, plus additional storage over 20 GB per worker. Note that billed
     * resources do not include usage for idle pre-initialized workers.</p>
     */
    inline const ResourceUtilization& GetBilledResourceUtilization() const{ return m_billedResourceUtilization; }
    inline bool BilledResourceUtilizationHasBeenSet() const { return m_billedResourceUtilizationHasBeenSet; }
    inline void SetBilledResourceUtilization(const ResourceUtilization& value) { m_billedResourceUtilizationHasBeenSet = true; m_billedResourceUtilization = value; }
    inline void SetBilledResourceUtilization(ResourceUtilization&& value) { m_billedResourceUtilizationHasBeenSet = true; m_billedResourceUtilization = std::move(value); }
    inline JobRun& WithBilledResourceUtilization(const ResourceUtilization& value) { SetBilledResourceUtilization(value); return *this;}
    inline JobRun& WithBilledResourceUtilization(ResourceUtilization&& value) { SetBilledResourceUtilization(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the job run.</p>
     */
    inline const JobRunMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const JobRunMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(JobRunMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline JobRun& WithMode(const JobRunMode& value) { SetMode(value); return *this;}
    inline JobRun& WithMode(JobRunMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry policy of the job run.</p>
     */
    inline const RetryPolicy& GetRetryPolicy() const{ return m_retryPolicy; }
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }
    inline void SetRetryPolicy(const RetryPolicy& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = value; }
    inline void SetRetryPolicy(RetryPolicy&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::move(value); }
    inline JobRun& WithRetryPolicy(const RetryPolicy& value) { SetRetryPolicy(value); return *this;}
    inline JobRun& WithRetryPolicy(RetryPolicy&& value) { SetRetryPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attempt of the job run.</p>
     */
    inline int GetAttempt() const{ return m_attempt; }
    inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }
    inline JobRun& WithAttempt(int value) { SetAttempt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of when the job run attempt was created.</p>
     */
    inline const Aws::Utils::DateTime& GetAttemptCreatedAt() const{ return m_attemptCreatedAt; }
    inline bool AttemptCreatedAtHasBeenSet() const { return m_attemptCreatedAtHasBeenSet; }
    inline void SetAttemptCreatedAt(const Aws::Utils::DateTime& value) { m_attemptCreatedAtHasBeenSet = true; m_attemptCreatedAt = value; }
    inline void SetAttemptCreatedAt(Aws::Utils::DateTime&& value) { m_attemptCreatedAtHasBeenSet = true; m_attemptCreatedAt = std::move(value); }
    inline JobRun& WithAttemptCreatedAt(const Aws::Utils::DateTime& value) { SetAttemptCreatedAt(value); return *this;}
    inline JobRun& WithAttemptCreatedAt(Aws::Utils::DateTime&& value) { SetAttemptCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of when the job run attempt was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetAttemptUpdatedAt() const{ return m_attemptUpdatedAt; }
    inline bool AttemptUpdatedAtHasBeenSet() const { return m_attemptUpdatedAtHasBeenSet; }
    inline void SetAttemptUpdatedAt(const Aws::Utils::DateTime& value) { m_attemptUpdatedAtHasBeenSet = true; m_attemptUpdatedAt = value; }
    inline void SetAttemptUpdatedAt(Aws::Utils::DateTime&& value) { m_attemptUpdatedAtHasBeenSet = true; m_attemptUpdatedAt = std::move(value); }
    inline JobRun& WithAttemptUpdatedAt(const Aws::Utils::DateTime& value) { SetAttemptUpdatedAt(value); return *this;}
    inline JobRun& WithAttemptUpdatedAt(Aws::Utils::DateTime&& value) { SetAttemptUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job moved to the RUNNING state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline JobRun& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline JobRun& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job was terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }
    inline JobRun& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline JobRun& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total time for a job in the QUEUED state in milliseconds.</p>
     */
    inline long long GetQueuedDurationMilliseconds() const{ return m_queuedDurationMilliseconds; }
    inline bool QueuedDurationMillisecondsHasBeenSet() const { return m_queuedDurationMillisecondsHasBeenSet; }
    inline void SetQueuedDurationMilliseconds(long long value) { m_queuedDurationMillisecondsHasBeenSet = true; m_queuedDurationMilliseconds = value; }
    inline JobRun& WithQueuedDurationMilliseconds(long long value) { SetQueuedDurationMilliseconds(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    JobRunState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateDetails;
    bool m_stateDetailsHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    ConfigurationOverrides m_configurationOverrides;
    bool m_configurationOverridesHasBeenSet = false;

    JobDriver m_jobDriver;
    bool m_jobDriverHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TotalResourceUtilization m_totalResourceUtilization;
    bool m_totalResourceUtilizationHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    int m_totalExecutionDurationSeconds;
    bool m_totalExecutionDurationSecondsHasBeenSet = false;

    long long m_executionTimeoutMinutes;
    bool m_executionTimeoutMinutesHasBeenSet = false;

    ResourceUtilization m_billedResourceUtilization;
    bool m_billedResourceUtilizationHasBeenSet = false;

    JobRunMode m_mode;
    bool m_modeHasBeenSet = false;

    RetryPolicy m_retryPolicy;
    bool m_retryPolicyHasBeenSet = false;

    int m_attempt;
    bool m_attemptHasBeenSet = false;

    Aws::Utils::DateTime m_attemptCreatedAt;
    bool m_attemptCreatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_attemptUpdatedAt;
    bool m_attemptUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    long long m_queuedDurationMilliseconds;
    bool m_queuedDurationMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
