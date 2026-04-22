/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/NetworkConfiguration.h>
#include <aws/emr-serverless/model/ResourceUtilization.h>
#include <aws/emr-serverless/model/SessionConfigurationOverrides.h>
#include <aws/emr-serverless/model/SessionState.h>
#include <aws/emr-serverless/model/TotalResourceUtilization.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMRServerless {
namespace Model {

/**
 * <p>Information about a session, including the session state, configuration, and
 * timestamps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/Session">AWS
 * API Reference</a></p>
 */
class Session {
 public:
  AWS_EMRSERVERLESS_API Session() = default;
  AWS_EMRSERVERLESS_API Session(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the application that the session belongs to.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  Session& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  Session& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the session.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Session& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The optional name of the session.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Session& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the session.</p>
   */
  inline SessionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(SessionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline Session& WithState(SessionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional details about the current state of the session.</p>
   */
  inline const Aws::String& GetStateDetails() const { return m_stateDetails; }
  inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
  template <typename StateDetailsT = Aws::String>
  void SetStateDetails(StateDetailsT&& value) {
    m_stateDetailsHasBeenSet = true;
    m_stateDetails = std::forward<StateDetailsT>(value);
  }
  template <typename StateDetailsT = Aws::String>
  Session& WithStateDetails(StateDetailsT&& value) {
    SetStateDetails(std::forward<StateDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon EMR release label associated with the session.</p>
   */
  inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
  inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
  template <typename ReleaseLabelT = Aws::String>
  void SetReleaseLabel(ReleaseLabelT&& value) {
    m_releaseLabelHasBeenSet = true;
    m_releaseLabel = std::forward<ReleaseLabelT>(value);
  }
  template <typename ReleaseLabelT = Aws::String>
  Session& WithReleaseLabel(ReleaseLabelT&& value) {
    SetReleaseLabel(std::forward<ReleaseLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the execution role for the session.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  Session& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM principal that created the session.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  Session& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the session was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Session& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the session was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Session& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the session moved to a running state.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  Session& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the session was terminated or failed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  Session& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the session became idle.</p>
   */
  inline const Aws::Utils::DateTime& GetIdleSince() const { return m_idleSince; }
  inline bool IdleSinceHasBeenSet() const { return m_idleSinceHasBeenSet; }
  template <typename IdleSinceT = Aws::Utils::DateTime>
  void SetIdleSince(IdleSinceT&& value) {
    m_idleSinceHasBeenSet = true;
    m_idleSince = std::forward<IdleSinceT>(value);
  }
  template <typename IdleSinceT = Aws::Utils::DateTime>
  Session& WithIdleSince(IdleSinceT&& value) {
    SetIdleSince(std::forward<IdleSinceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration overrides for the session, including runtime configuration
   * properties.</p>
   */
  inline const SessionConfigurationOverrides& GetConfigurationOverrides() const { return m_configurationOverrides; }
  inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }
  template <typename ConfigurationOverridesT = SessionConfigurationOverrides>
  void SetConfigurationOverrides(ConfigurationOverridesT&& value) {
    m_configurationOverridesHasBeenSet = true;
    m_configurationOverrides = std::forward<ConfigurationOverridesT>(value);
  }
  template <typename ConfigurationOverridesT = SessionConfigurationOverrides>
  Session& WithConfigurationOverrides(ConfigurationOverridesT&& value) {
    SetConfigurationOverrides(std::forward<ConfigurationOverridesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for customer VPC connectivity for the session.</p>
   */
  inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  Session& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The idle timeout in minutes for the session. After the session remains idle
   * for this duration, it is automatically terminated.</p>
   */
  inline long long GetIdleTimeoutMinutes() const { return m_idleTimeoutMinutes; }
  inline bool IdleTimeoutMinutesHasBeenSet() const { return m_idleTimeoutMinutesHasBeenSet; }
  inline void SetIdleTimeoutMinutes(long long value) {
    m_idleTimeoutMinutesHasBeenSet = true;
    m_idleTimeoutMinutes = value;
  }
  inline Session& WithIdleTimeoutMinutes(long long value) {
    SetIdleTimeoutMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the session.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  Session& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  Session& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggregate vCPU, memory, and storage resources used from the time the
   * session starts to execute, until the time the session terminates, rounded up to
   * the nearest second.</p>
   */
  inline const TotalResourceUtilization& GetTotalResourceUtilization() const { return m_totalResourceUtilization; }
  inline bool TotalResourceUtilizationHasBeenSet() const { return m_totalResourceUtilizationHasBeenSet; }
  template <typename TotalResourceUtilizationT = TotalResourceUtilization>
  void SetTotalResourceUtilization(TotalResourceUtilizationT&& value) {
    m_totalResourceUtilizationHasBeenSet = true;
    m_totalResourceUtilization = std::forward<TotalResourceUtilizationT>(value);
  }
  template <typename TotalResourceUtilizationT = TotalResourceUtilization>
  Session& WithTotalResourceUtilization(TotalResourceUtilizationT&& value) {
    SetTotalResourceUtilization(std::forward<TotalResourceUtilizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggregate vCPU, memory, and storage that Amazon Web Services has billed
   * for the session. The billed resources include a 1-minute minimum usage for
   * workers, plus additional storage over 20 GB per worker. Note that billed
   * resources do not include usage for idle pre-initialized workers.</p>
   */
  inline const ResourceUtilization& GetBilledResourceUtilization() const { return m_billedResourceUtilization; }
  inline bool BilledResourceUtilizationHasBeenSet() const { return m_billedResourceUtilizationHasBeenSet; }
  template <typename BilledResourceUtilizationT = ResourceUtilization>
  void SetBilledResourceUtilization(BilledResourceUtilizationT&& value) {
    m_billedResourceUtilizationHasBeenSet = true;
    m_billedResourceUtilization = std::forward<BilledResourceUtilizationT>(value);
  }
  template <typename BilledResourceUtilizationT = ResourceUtilization>
  Session& WithBilledResourceUtilization(BilledResourceUtilizationT&& value) {
    SetBilledResourceUtilization(std::forward<BilledResourceUtilizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total execution duration of the session in seconds.</p>
   */
  inline long long GetTotalExecutionDurationSeconds() const { return m_totalExecutionDurationSeconds; }
  inline bool TotalExecutionDurationSecondsHasBeenSet() const { return m_totalExecutionDurationSecondsHasBeenSet; }
  inline void SetTotalExecutionDurationSeconds(long long value) {
    m_totalExecutionDurationSecondsHasBeenSet = true;
    m_totalExecutionDurationSeconds = value;
  }
  inline Session& WithTotalExecutionDurationSeconds(long long value) {
    SetTotalExecutionDurationSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_sessionId;

  Aws::String m_arn;

  Aws::String m_name;

  SessionState m_state{SessionState::NOT_SET};

  Aws::String m_stateDetails;

  Aws::String m_releaseLabel;

  Aws::String m_executionRoleArn;

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::Utils::DateTime m_idleSince{};

  SessionConfigurationOverrides m_configurationOverrides;

  NetworkConfiguration m_networkConfiguration;

  long long m_idleTimeoutMinutes{0};

  Aws::Map<Aws::String, Aws::String> m_tags;

  TotalResourceUtilization m_totalResourceUtilization;

  ResourceUtilization m_billedResourceUtilization;

  long long m_totalExecutionDurationSeconds{0};
  bool m_applicationIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateDetailsHasBeenSet = false;
  bool m_releaseLabelHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_idleSinceHasBeenSet = false;
  bool m_configurationOverridesHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_idleTimeoutMinutesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_totalResourceUtilizationHasBeenSet = false;
  bool m_billedResourceUtilizationHasBeenSet = false;
  bool m_totalExecutionDurationSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
