/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/JobRunState.h>
#include <aws/emr-containers/model/ConfigurationOverrides.h>
#include <aws/emr-containers/model/JobDriver.h>
#include <aws/core/utils/DateTime.h>
#include <aws/emr-containers/model/FailureReason.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/emr-containers/model/RetryPolicyConfiguration.h>
#include <aws/emr-containers/model/RetryPolicyExecution.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>This entity describes a job run. A job run is a unit of work, such as a Spark
   * jar, PySpark script, or SparkSQL query, that you submit to Amazon EMR on EKS.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/JobRun">AWS
   * API Reference</a></p>
   */
  class JobRun
  {
  public:
    AWS_EMRCONTAINERS_API JobRun() = default;
    AWS_EMRCONTAINERS_API JobRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API JobRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the job run.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    JobRun& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job run.</p>
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
     * <p>The ID of the job run's virtual cluster.</p>
     */
    inline const Aws::String& GetVirtualClusterId() const { return m_virtualClusterId; }
    inline bool VirtualClusterIdHasBeenSet() const { return m_virtualClusterIdHasBeenSet; }
    template<typename VirtualClusterIdT = Aws::String>
    void SetVirtualClusterId(VirtualClusterIdT&& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = std::forward<VirtualClusterIdT>(value); }
    template<typename VirtualClusterIdT = Aws::String>
    JobRun& WithVirtualClusterId(VirtualClusterIdT&& value) { SetVirtualClusterId(std::forward<VirtualClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of job run.</p>
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
     * <p>The state of the job run. </p>
     */
    inline JobRunState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(JobRunState value) { m_stateHasBeenSet = true; m_state = value; }
    inline JobRun& WithState(JobRunState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token used to start a job run.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    JobRun& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    JobRun& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release version of Amazon EMR.</p>
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
     * <p>Parameters of job driver for the job run.</p>
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
     * <p>The date and time when the job run has finished.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
    inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    void SetFinishedAt(FinishedAtT&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::forward<FinishedAtT>(value); }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    JobRun& WithFinishedAt(FinishedAtT&& value) { SetFinishedAt(std::forward<FinishedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional details of the job run state.</p>
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
     * <p>The reasons why the job run has failed.</p>
     */
    inline FailureReason GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(FailureReason value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline JobRun& WithFailureReason(FailureReason value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The assigned tags of the job run.</p>
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
     * <p>The configuration of the retry policy that the job runs on.</p>
     */
    inline const RetryPolicyConfiguration& GetRetryPolicyConfiguration() const { return m_retryPolicyConfiguration; }
    inline bool RetryPolicyConfigurationHasBeenSet() const { return m_retryPolicyConfigurationHasBeenSet; }
    template<typename RetryPolicyConfigurationT = RetryPolicyConfiguration>
    void SetRetryPolicyConfiguration(RetryPolicyConfigurationT&& value) { m_retryPolicyConfigurationHasBeenSet = true; m_retryPolicyConfiguration = std::forward<RetryPolicyConfigurationT>(value); }
    template<typename RetryPolicyConfigurationT = RetryPolicyConfiguration>
    JobRun& WithRetryPolicyConfiguration(RetryPolicyConfigurationT&& value) { SetRetryPolicyConfiguration(std::forward<RetryPolicyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the retry policy executed on the job.</p>
     */
    inline const RetryPolicyExecution& GetRetryPolicyExecution() const { return m_retryPolicyExecution; }
    inline bool RetryPolicyExecutionHasBeenSet() const { return m_retryPolicyExecutionHasBeenSet; }
    template<typename RetryPolicyExecutionT = RetryPolicyExecution>
    void SetRetryPolicyExecution(RetryPolicyExecutionT&& value) { m_retryPolicyExecutionHasBeenSet = true; m_retryPolicyExecution = std::forward<RetryPolicyExecutionT>(value); }
    template<typename RetryPolicyExecutionT = RetryPolicyExecution>
    JobRun& WithRetryPolicyExecution(RetryPolicyExecutionT&& value) { SetRetryPolicyExecution(std::forward<RetryPolicyExecutionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_virtualClusterId;
    bool m_virtualClusterIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    JobRunState m_state{JobRunState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    ConfigurationOverrides m_configurationOverrides;
    bool m_configurationOverridesHasBeenSet = false;

    JobDriver m_jobDriver;
    bool m_jobDriverHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_finishedAt{};
    bool m_finishedAtHasBeenSet = false;

    Aws::String m_stateDetails;
    bool m_stateDetailsHasBeenSet = false;

    FailureReason m_failureReason{FailureReason::NOT_SET};
    bool m_failureReasonHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    RetryPolicyConfiguration m_retryPolicyConfiguration;
    bool m_retryPolicyConfigurationHasBeenSet = false;

    RetryPolicyExecution m_retryPolicyExecution;
    bool m_retryPolicyExecutionHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
