/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonCircuitBreaker.h>
#include <aws/ecs/model/DaemonDeploymentAlarms.h>
#include <aws/ecs/model/DaemonDeploymentConfiguration.h>
#include <aws/ecs/model/DaemonDeploymentRevisionDetail.h>
#include <aws/ecs/model/DaemonDeploymentStatus.h>
#include <aws/ecs/model/DaemonRollback.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>Information about a daemon deployment. A daemon deployment orchestrates the
 * progressive rollout of daemon task updates across container
 * instances.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonDeployment">AWS
 * API Reference</a></p>
 */
class DaemonDeployment {
 public:
  AWS_ECS_API DaemonDeployment() = default;
  AWS_ECS_API DaemonDeployment(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon deployment.</p>
   */
  inline const Aws::String& GetDaemonDeploymentArn() const { return m_daemonDeploymentArn; }
  inline bool DaemonDeploymentArnHasBeenSet() const { return m_daemonDeploymentArnHasBeenSet; }
  template <typename DaemonDeploymentArnT = Aws::String>
  void SetDaemonDeploymentArn(DaemonDeploymentArnT&& value) {
    m_daemonDeploymentArnHasBeenSet = true;
    m_daemonDeploymentArn = std::forward<DaemonDeploymentArnT>(value);
  }
  template <typename DaemonDeploymentArnT = Aws::String>
  DaemonDeployment& WithDaemonDeploymentArn(DaemonDeploymentArnT&& value) {
    SetDaemonDeploymentArn(std::forward<DaemonDeploymentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster that hosts the daemon.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  DaemonDeployment& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the daemon deployment.</p>
   */
  inline DaemonDeploymentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DaemonDeploymentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DaemonDeployment& WithStatus(DaemonDeploymentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about why the daemon deployment is in the current status.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  DaemonDeployment& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The daemon revision being deployed.</p>
   */
  inline const DaemonDeploymentRevisionDetail& GetTargetDaemonRevision() const { return m_targetDaemonRevision; }
  inline bool TargetDaemonRevisionHasBeenSet() const { return m_targetDaemonRevisionHasBeenSet; }
  template <typename TargetDaemonRevisionT = DaemonDeploymentRevisionDetail>
  void SetTargetDaemonRevision(TargetDaemonRevisionT&& value) {
    m_targetDaemonRevisionHasBeenSet = true;
    m_targetDaemonRevision = std::forward<TargetDaemonRevisionT>(value);
  }
  template <typename TargetDaemonRevisionT = DaemonDeploymentRevisionDetail>
  DaemonDeployment& WithTargetDaemonRevision(TargetDaemonRevisionT&& value) {
    SetTargetDaemonRevision(std::forward<TargetDaemonRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currently deployed daemon revisions that are being replaced.</p>
   */
  inline const Aws::Vector<DaemonDeploymentRevisionDetail>& GetSourceDaemonRevisions() const { return m_sourceDaemonRevisions; }
  inline bool SourceDaemonRevisionsHasBeenSet() const { return m_sourceDaemonRevisionsHasBeenSet; }
  template <typename SourceDaemonRevisionsT = Aws::Vector<DaemonDeploymentRevisionDetail>>
  void SetSourceDaemonRevisions(SourceDaemonRevisionsT&& value) {
    m_sourceDaemonRevisionsHasBeenSet = true;
    m_sourceDaemonRevisions = std::forward<SourceDaemonRevisionsT>(value);
  }
  template <typename SourceDaemonRevisionsT = Aws::Vector<DaemonDeploymentRevisionDetail>>
  DaemonDeployment& WithSourceDaemonRevisions(SourceDaemonRevisionsT&& value) {
    SetSourceDaemonRevisions(std::forward<SourceDaemonRevisionsT>(value));
    return *this;
  }
  template <typename SourceDaemonRevisionsT = DaemonDeploymentRevisionDetail>
  DaemonDeployment& AddSourceDaemonRevisions(SourceDaemonRevisionsT&& value) {
    m_sourceDaemonRevisionsHasBeenSet = true;
    m_sourceDaemonRevisions.emplace_back(std::forward<SourceDaemonRevisionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The circuit breaker configuration that determines when a daemon deployment
   * has failed.</p>
   */
  inline const DaemonCircuitBreaker& GetCircuitBreaker() const { return m_circuitBreaker; }
  inline bool CircuitBreakerHasBeenSet() const { return m_circuitBreakerHasBeenSet; }
  template <typename CircuitBreakerT = DaemonCircuitBreaker>
  void SetCircuitBreaker(CircuitBreakerT&& value) {
    m_circuitBreakerHasBeenSet = true;
    m_circuitBreaker = std::forward<CircuitBreakerT>(value);
  }
  template <typename CircuitBreakerT = DaemonCircuitBreaker>
  DaemonDeployment& WithCircuitBreaker(CircuitBreakerT&& value) {
    SetCircuitBreaker(std::forward<CircuitBreakerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch alarms that determine when a daemon deployment fails.</p>
   */
  inline const DaemonDeploymentAlarms& GetAlarms() const { return m_alarms; }
  inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
  template <typename AlarmsT = DaemonDeploymentAlarms>
  void SetAlarms(AlarmsT&& value) {
    m_alarmsHasBeenSet = true;
    m_alarms = std::forward<AlarmsT>(value);
  }
  template <typename AlarmsT = DaemonDeploymentAlarms>
  DaemonDeployment& WithAlarms(AlarmsT&& value) {
    SetAlarms(std::forward<AlarmsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rollback options for the daemon deployment.</p>
   */
  inline const DaemonRollback& GetRollback() const { return m_rollback; }
  inline bool RollbackHasBeenSet() const { return m_rollbackHasBeenSet; }
  template <typename RollbackT = DaemonRollback>
  void SetRollback(RollbackT&& value) {
    m_rollbackHasBeenSet = true;
    m_rollback = std::forward<RollbackT>(value);
  }
  template <typename RollbackT = DaemonRollback>
  DaemonDeployment& WithRollback(RollbackT&& value) {
    SetRollback(std::forward<RollbackT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment configuration used for this daemon deployment.</p>
   */
  inline const DaemonDeploymentConfiguration& GetDeploymentConfiguration() const { return m_deploymentConfiguration; }
  inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
  template <typename DeploymentConfigurationT = DaemonDeploymentConfiguration>
  void SetDeploymentConfiguration(DeploymentConfigurationT&& value) {
    m_deploymentConfigurationHasBeenSet = true;
    m_deploymentConfiguration = std::forward<DeploymentConfigurationT>(value);
  }
  template <typename DeploymentConfigurationT = DaemonDeploymentConfiguration>
  DaemonDeployment& WithDeploymentConfiguration(DeploymentConfigurationT&& value) {
    SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the daemon deployment was created. The format is yyyy-MM-dd
   * HH:mm:ss.SSSSSS.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DaemonDeployment& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the daemon deployment started. The format is yyyy-MM-dd
   * HH:mm:ss.SSSSSS.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  DaemonDeployment& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the daemon deployment stopped. The format is yyyy-MM-dd
   * HH:mm:ss.SSSSSS.</p>
   */
  inline const Aws::Utils::DateTime& GetStoppedAt() const { return m_stoppedAt; }
  inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
  template <typename StoppedAtT = Aws::Utils::DateTime>
  void SetStoppedAt(StoppedAtT&& value) {
    m_stoppedAtHasBeenSet = true;
    m_stoppedAt = std::forward<StoppedAtT>(value);
  }
  template <typename StoppedAtT = Aws::Utils::DateTime>
  DaemonDeployment& WithStoppedAt(StoppedAtT&& value) {
    SetStoppedAt(std::forward<StoppedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the daemon deployment finished. The format is yyyy-MM-dd
   * HH:mm:ss.SSSSSS.</p>
   */
  inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
  inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }
  template <typename FinishedAtT = Aws::Utils::DateTime>
  void SetFinishedAt(FinishedAtT&& value) {
    m_finishedAtHasBeenSet = true;
    m_finishedAt = std::forward<FinishedAtT>(value);
  }
  template <typename FinishedAtT = Aws::Utils::DateTime>
  DaemonDeployment& WithFinishedAt(FinishedAtT&& value) {
    SetFinishedAt(std::forward<FinishedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_daemonDeploymentArn;

  Aws::String m_clusterArn;

  DaemonDeploymentStatus m_status{DaemonDeploymentStatus::NOT_SET};

  Aws::String m_statusReason;

  DaemonDeploymentRevisionDetail m_targetDaemonRevision;

  Aws::Vector<DaemonDeploymentRevisionDetail> m_sourceDaemonRevisions;

  DaemonCircuitBreaker m_circuitBreaker;

  DaemonDeploymentAlarms m_alarms;

  DaemonRollback m_rollback;

  DaemonDeploymentConfiguration m_deploymentConfiguration;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_stoppedAt{};

  Aws::Utils::DateTime m_finishedAt{};
  bool m_daemonDeploymentArnHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_targetDaemonRevisionHasBeenSet = false;
  bool m_sourceDaemonRevisionsHasBeenSet = false;
  bool m_circuitBreakerHasBeenSet = false;
  bool m_alarmsHasBeenSet = false;
  bool m_rollbackHasBeenSet = false;
  bool m_deploymentConfigurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_stoppedAtHasBeenSet = false;
  bool m_finishedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
