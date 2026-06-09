/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/CertificateAuthority.h>
#include <aws/elasticmapreduce/model/Configuration.h>
#include <aws/elasticmapreduce/model/SessionMonitoringConfiguration.h>
#include <aws/elasticmapreduce/model/SessionState.h>
#include <aws/elasticmapreduce/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMR {
namespace Model {

/**
 * <p>Detailed information about a Spark Connect session.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Session">AWS
 * API Reference</a></p>
 */
class Session {
 public:
  AWS_EMR_API Session() = default;
  AWS_EMR_API Session(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the session.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  Session& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the cluster that the session belongs to.</p>
   */
  inline const Aws::String& GetClusterId() const { return m_clusterId; }
  inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
  template <typename ClusterIdT = Aws::String>
  void SetClusterId(ClusterIdT&& value) {
    m_clusterIdHasBeenSet = true;
    m_clusterId = std::forward<ClusterIdT>(value);
  }
  template <typename ClusterIdT = Aws::String>
  Session& WithClusterId(ClusterIdT&& value) {
    SetClusterId(std::forward<ClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the session, if one was provided at creation time.</p>
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
   * <p>The current state of the session. Valid values are <code>SUBMITTED</code>,
   * <code>STARTING</code>, <code>STARTED</code>, <code>IDLE</code>,
   * <code>BUSY</code>, <code>TERMINATING</code>, <code>TERMINATED</code>, and
   * <code>FAILED</code>.</p>
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
   * <p>A human-readable message describing the most recent state change.</p>
   */
  inline const Aws::String& GetStateChangeReason() const { return m_stateChangeReason; }
  inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }
  template <typename StateChangeReasonT = Aws::String>
  void SetStateChangeReason(StateChangeReasonT&& value) {
    m_stateChangeReasonHasBeenSet = true;
    m_stateChangeReason = std::forward<StateChangeReasonT>(value);
  }
  template <typename StateChangeReasonT = Aws::String>
  Session& WithStateChangeReason(StateChangeReasonT&& value) {
    SetStateChangeReason(std::forward<StateChangeReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon EMR release label of the cluster that the session is running
   * on.</p>
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
   * <p>The execution role ARN for the session. Amazon EMR uses this role to access
   * Amazon Web Services resources on your behalf during session execution.</p>
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
   * <p>The Amazon Web Services account ID that owns the session.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  Session& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
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
   * <p>The date and time that the session entered the <code>STARTED</code>
   * state.</p>
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
   * <p>The date and time that the session last entered the <code>IDLE</code>
   * state.</p>
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
   * <p>The configuration overrides for the session. Only runtime configuration
   * overrides are supported.</p>
   */
  inline const Aws::Vector<Configuration>& GetEngineConfigurations() const { return m_engineConfigurations; }
  inline bool EngineConfigurationsHasBeenSet() const { return m_engineConfigurationsHasBeenSet; }
  template <typename EngineConfigurationsT = Aws::Vector<Configuration>>
  void SetEngineConfigurations(EngineConfigurationsT&& value) {
    m_engineConfigurationsHasBeenSet = true;
    m_engineConfigurations = std::forward<EngineConfigurationsT>(value);
  }
  template <typename EngineConfigurationsT = Aws::Vector<Configuration>>
  Session& WithEngineConfigurations(EngineConfigurationsT&& value) {
    SetEngineConfigurations(std::forward<EngineConfigurationsT>(value));
    return *this;
  }
  template <typename EngineConfigurationsT = Configuration>
  Session& AddEngineConfigurations(EngineConfigurationsT&& value) {
    m_engineConfigurationsHasBeenSet = true;
    m_engineConfigurations.emplace_back(std::forward<EngineConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The monitoring configuration for the session.</p>
   */
  inline const SessionMonitoringConfiguration& GetMonitoringConfiguration() const { return m_monitoringConfiguration; }
  inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
  template <typename MonitoringConfigurationT = SessionMonitoringConfiguration>
  void SetMonitoringConfiguration(MonitoringConfigurationT&& value) {
    m_monitoringConfigurationHasBeenSet = true;
    m_monitoringConfiguration = std::forward<MonitoringConfigurationT>(value);
  }
  template <typename MonitoringConfigurationT = SessionMonitoringConfiguration>
  Session& WithMonitoringConfiguration(MonitoringConfigurationT&& value) {
    SetMonitoringConfiguration(std::forward<MonitoringConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The idle timeout, in minutes. If the session is idle for this duration,
   * Amazon EMR automatically terminates it.</p>
   */
  inline long long GetSessionIdleTimeoutInMinutes() const { return m_sessionIdleTimeoutInMinutes; }
  inline bool SessionIdleTimeoutInMinutesHasBeenSet() const { return m_sessionIdleTimeoutInMinutesHasBeenSet; }
  inline void SetSessionIdleTimeoutInMinutes(long long value) {
    m_sessionIdleTimeoutInMinutesHasBeenSet = true;
    m_sessionIdleTimeoutInMinutes = value;
  }
  inline Session& WithSessionIdleTimeoutInMinutes(long long value) {
    SetSessionIdleTimeoutInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The certificate authority used to establish an mTLS connection to the Spark
   * Connect server when connecting directly over VPC peering.</p>
   */
  inline const CertificateAuthority& GetCertificateAuthority() const { return m_certificateAuthority; }
  inline bool CertificateAuthorityHasBeenSet() const { return m_certificateAuthorityHasBeenSet; }
  template <typename CertificateAuthorityT = CertificateAuthority>
  void SetCertificateAuthority(CertificateAuthorityT&& value) {
    m_certificateAuthorityHasBeenSet = true;
    m_certificateAuthority = std::forward<CertificateAuthorityT>(value);
  }
  template <typename CertificateAuthorityT = CertificateAuthority>
  Session& WithCertificateAuthority(CertificateAuthorityT&& value) {
    SetCertificateAuthority(std::forward<CertificateAuthorityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Spark Connect server URL for the session. Use this URL with the
   * <code>Credentials</code> returned by <code>GetSessionEndpoint</code> to connect
   * directly to the session over VPC peering.</p>
   */
  inline const Aws::String& GetServerUrl() const { return m_serverUrl; }
  inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }
  template <typename ServerUrlT = Aws::String>
  void SetServerUrl(ServerUrlT&& value) {
    m_serverUrlHasBeenSet = true;
    m_serverUrl = std::forward<ServerUrlT>(value);
  }
  template <typename ServerUrlT = Aws::String>
  Session& WithServerUrl(ServerUrlT&& value) {
    SetServerUrl(std::forward<ServerUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the session.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  Session& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  Session& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_clusterId;

  Aws::String m_name;

  Aws::String m_arn;

  SessionState m_state{SessionState::NOT_SET};

  Aws::String m_stateChangeReason;

  Aws::String m_releaseLabel;

  Aws::String m_executionRoleArn;

  Aws::String m_accountId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::Utils::DateTime m_idleSince{};

  Aws::Vector<Configuration> m_engineConfigurations;

  SessionMonitoringConfiguration m_monitoringConfiguration;

  long long m_sessionIdleTimeoutInMinutes{0};

  CertificateAuthority m_certificateAuthority;

  Aws::String m_serverUrl;

  Aws::Vector<Tag> m_tags;
  bool m_idHasBeenSet = false;
  bool m_clusterIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateChangeReasonHasBeenSet = false;
  bool m_releaseLabelHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_idleSinceHasBeenSet = false;
  bool m_engineConfigurationsHasBeenSet = false;
  bool m_monitoringConfigurationHasBeenSet = false;
  bool m_sessionIdleTimeoutInMinutesHasBeenSet = false;
  bool m_certificateAuthorityHasBeenSet = false;
  bool m_serverUrlHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
