/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/emr-serverless/model/JobRunExecutionIamPolicy.h>
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
    AWS_EMRSERVERLESS_API JobRun() = default;
    AWS_EMRSERVERLESS_API JobRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API JobRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the application the job is running on.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    JobRun& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job run.</p>
     */
    inline const Aws::String& GetJobRunId() const { return m_jobRunId; }
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
    template<typename JobRunIdT = Aws::String>
    void SetJobRunId(JobRunIdT&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::forward<JobRunIdT>(value); }
    template<typename JobRunIdT = Aws::String>
    JobRun& WithJobRunId(JobRunIdT&& value) { SetJobRunId(std::forward<JobRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    JobRun& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    JobRun& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the job run.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    JobRun& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    JobRun& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job run was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    JobRun& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    JobRun& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const JobRunExecutionIamPolicy& GetExecutionIamPolicy() const { return m_executionIamPolicy; }
    inline bool ExecutionIamPolicyHasBeenSet() const { return m_executionIamPolicyHasBeenSet; }
    template<typename ExecutionIamPolicyT = JobRunExecutionIamPolicy>
    void SetExecutionIamPolicy(ExecutionIamPolicyT&& value) { m_executionIamPolicyHasBeenSet = true; m_executionIamPolicy = std::forward<ExecutionIamPolicyT>(value); }
    template<typename ExecutionIamPolicyT = JobRunExecutionIamPolicy>
    JobRun& WithExecutionIamPolicy(ExecutionIamPolicyT&& value) { SetExecutionIamPolicy(std::forward<ExecutionIamPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the job run.</p>
     */
    inline JobRunState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(JobRunState value) { m_stateHasBeenSet = true; m_state = value; }
    inline JobRun& WithState(JobRunState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state details of the job run.</p>
     */
    inline const Aws::String& GetStateDetails() const { return m_stateDetails; }
    inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
    template<typename StateDetailsT = Aws::String>
    void SetStateDetails(StateDetailsT&& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = std::forward<StateDetailsT>(value); }
    template<typename StateDetailsT = Aws::String>
    JobRun& WithStateDetails(StateDetailsT&& value) { SetStateDetails(std::forward<StateDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EMR release associated with the application your job is running
     * on.</p>
     */
    inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    template<typename ReleaseLabelT = Aws::String>
    void SetReleaseLabel(ReleaseLabelT&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::forward<ReleaseLabelT>(value); }
    template<typename ReleaseLabelT = Aws::String>
    JobRun& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings that are used to override default
     * configuration.</p>
     */
    inline const ConfigurationOverrides& GetConfigurationOverrides() const { return m_configurationOverrides; }
    inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }
    template<typename ConfigurationOverridesT = ConfigurationOverrides>
    void SetConfigurationOverrides(ConfigurationOverridesT&& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = std::forward<ConfigurationOverridesT>(value); }
    template<typename ConfigurationOverridesT = ConfigurationOverrides>
    JobRun& WithConfigurationOverrides(ConfigurationOverridesT&& value) { SetConfigurationOverrides(std::forward<ConfigurationOverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job driver for the job run.</p>
     */
    inline const JobDriver& GetJobDriver() const { return m_jobDriver; }
    inline bool JobDriverHasBeenSet() const { return m_jobDriverHasBeenSet; }
    template<typename JobDriverT = JobDriver>
    void SetJobDriver(JobDriverT&& value) { m_jobDriverHasBeenSet = true; m_jobDriver = std::forward<JobDriverT>(value); }
    template<typename JobDriverT = JobDriver>
    JobRun& WithJobDriver(JobDriverT&& value) { SetJobDriver(std::forward<JobDriverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    JobRun& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    JobRun& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The aggregate vCPU, memory, and storage resources used from the time the job
     * starts to execute, until the time the job terminates, rounded up to the nearest
     * second.</p>
     */
    inline const TotalResourceUtilization& GetTotalResourceUtilization() const { return m_totalResourceUtilization; }
    inline bool TotalResourceUtilizationHasBeenSet() const { return m_totalResourceUtilizationHasBeenSet; }
    template<typename TotalResourceUtilizationT = TotalResourceUtilization>
    void SetTotalResourceUtilization(TotalResourceUtilizationT&& value) { m_totalResourceUtilizationHasBeenSet = true; m_totalResourceUtilization = std::forward<TotalResourceUtilizationT>(value); }
    template<typename TotalResourceUtilizationT = TotalResourceUtilization>
    JobRun& WithTotalResourceUtilization(TotalResourceUtilizationT&& value) { SetTotalResourceUtilization(std::forward<TotalResourceUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    JobRun& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job run total execution duration in seconds. This field is only available
     * for job runs in a <code>COMPLETED</code>, <code>FAILED</code>, or
     * <code>CANCELLED</code> state.</p>
     */
    inline int GetTotalExecutionDurationSeconds() const { return m_totalExecutionDurationSeconds; }
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
    inline long long GetExecutionTimeoutMinutes() const { return m_executionTimeoutMinutes; }
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
    inline const ResourceUtilization& GetBilledResourceUtilization() const { return m_billedResourceUtilization; }
    inline bool BilledResourceUtilizationHasBeenSet() const { return m_billedResourceUtilizationHasBeenSet; }
    template<typename BilledResourceUtilizationT = ResourceUtilization>
    void SetBilledResourceUtilization(BilledResourceUtilizationT&& value) { m_billedResourceUtilizationHasBeenSet = true; m_billedResourceUtilization = std::forward<BilledResourceUtilizationT>(value); }
    template<typename BilledResourceUtilizationT = ResourceUtilization>
    JobRun& WithBilledResourceUtilization(BilledResourceUtilizationT&& value) { SetBilledResourceUtilization(std::forward<BilledResourceUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the job run.</p>
     */
    inline JobRunMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(JobRunMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline JobRun& WithMode(JobRunMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry policy of the job run.</p>
     */
    inline const RetryPolicy& GetRetryPolicy() const { return m_retryPolicy; }
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }
    template<typename RetryPolicyT = RetryPolicy>
    void SetRetryPolicy(RetryPolicyT&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::forward<RetryPolicyT>(value); }
    template<typename RetryPolicyT = RetryPolicy>
    JobRun& WithRetryPolicy(RetryPolicyT&& value) { SetRetryPolicy(std::forward<RetryPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attempt of the job run.</p>
     */
    inline int GetAttempt() const { return m_attempt; }
    inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }
    inline JobRun& WithAttempt(int value) { SetAttempt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of when the job run attempt was created.</p>
     */
    inline const Aws::Utils::DateTime& GetAttemptCreatedAt() const { return m_attemptCreatedAt; }
    inline bool AttemptCreatedAtHasBeenSet() const { return m_attemptCreatedAtHasBeenSet; }
    template<typename AttemptCreatedAtT = Aws::Utils::DateTime>
    void SetAttemptCreatedAt(AttemptCreatedAtT&& value) { m_attemptCreatedAtHasBeenSet = true; m_attemptCreatedAt = std::forward<AttemptCreatedAtT>(value); }
    template<typename AttemptCreatedAtT = Aws::Utils::DateTime>
    JobRun& WithAttemptCreatedAt(AttemptCreatedAtT&& value) { SetAttemptCreatedAt(std::forward<AttemptCreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of when the job run attempt was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetAttemptUpdatedAt() const { return m_attemptUpdatedAt; }
    inline bool AttemptUpdatedAtHasBeenSet() const { return m_attemptUpdatedAtHasBeenSet; }
    template<typename AttemptUpdatedAtT = Aws::Utils::DateTime>
    void SetAttemptUpdatedAt(AttemptUpdatedAtT&& value) { m_attemptUpdatedAtHasBeenSet = true; m_attemptUpdatedAt = std::forward<AttemptUpdatedAtT>(value); }
    template<typename AttemptUpdatedAtT = Aws::Utils::DateTime>
    JobRun& WithAttemptUpdatedAt(AttemptUpdatedAtT&& value) { SetAttemptUpdatedAt(std::forward<AttemptUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job moved to the RUNNING state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    JobRun& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job was terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    JobRun& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total time for a job in the QUEUED state in milliseconds.</p>
     */
    inline long long GetQueuedDurationMilliseconds() const { return m_queuedDurationMilliseconds; }
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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    JobRunExecutionIamPolicy m_executionIamPolicy;
    bool m_executionIamPolicyHasBeenSet = false;

    JobRunState m_state{JobRunState::NOT_SET};
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

    int m_totalExecutionDurationSeconds{0};
    bool m_totalExecutionDurationSecondsHasBeenSet = false;

    long long m_executionTimeoutMinutes{0};
    bool m_executionTimeoutMinutesHasBeenSet = false;

    ResourceUtilization m_billedResourceUtilization;
    bool m_billedResourceUtilizationHasBeenSet = false;

    JobRunMode m_mode{JobRunMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    RetryPolicy m_retryPolicy;
    bool m_retryPolicyHasBeenSet = false;

    int m_attempt{0};
    bool m_attemptHasBeenSet = false;

    Aws::Utils::DateTime m_attemptCreatedAt{};
    bool m_attemptCreatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_attemptUpdatedAt{};
    bool m_attemptUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    long long m_queuedDurationMilliseconds{0};
    bool m_queuedDurationMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
