/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonDeploymentStatus.h>

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
 * <p>A summary of a daemon deployment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonDeploymentSummary">AWS
 * API Reference</a></p>
 */
class DaemonDeploymentSummary {
 public:
  AWS_ECS_API DaemonDeploymentSummary() = default;
  AWS_ECS_API DaemonDeploymentSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonDeploymentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  DaemonDeploymentSummary& WithDaemonDeploymentArn(DaemonDeploymentArnT&& value) {
    SetDaemonDeploymentArn(std::forward<DaemonDeploymentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon.</p>
   */
  inline const Aws::String& GetDaemonArn() const { return m_daemonArn; }
  inline bool DaemonArnHasBeenSet() const { return m_daemonArnHasBeenSet; }
  template <typename DaemonArnT = Aws::String>
  void SetDaemonArn(DaemonArnT&& value) {
    m_daemonArnHasBeenSet = true;
    m_daemonArn = std::forward<DaemonArnT>(value);
  }
  template <typename DaemonArnT = Aws::String>
  DaemonDeploymentSummary& WithDaemonArn(DaemonArnT&& value) {
    SetDaemonArn(std::forward<DaemonArnT>(value));
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
  DaemonDeploymentSummary& WithClusterArn(ClusterArnT&& value) {
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
  inline DaemonDeploymentSummary& WithStatus(DaemonDeploymentStatus value) {
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
  DaemonDeploymentSummary& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the daemon revision being deployed.</p>
   */
  inline const Aws::String& GetTargetDaemonRevisionArn() const { return m_targetDaemonRevisionArn; }
  inline bool TargetDaemonRevisionArnHasBeenSet() const { return m_targetDaemonRevisionArnHasBeenSet; }
  template <typename TargetDaemonRevisionArnT = Aws::String>
  void SetTargetDaemonRevisionArn(TargetDaemonRevisionArnT&& value) {
    m_targetDaemonRevisionArnHasBeenSet = true;
    m_targetDaemonRevisionArn = std::forward<TargetDaemonRevisionArnT>(value);
  }
  template <typename TargetDaemonRevisionArnT = Aws::String>
  DaemonDeploymentSummary& WithTargetDaemonRevisionArn(TargetDaemonRevisionArnT&& value) {
    SetTargetDaemonRevisionArn(std::forward<TargetDaemonRevisionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the daemon deployment was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DaemonDeploymentSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the daemon deployment started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  DaemonDeploymentSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the daemon deployment stopped.</p>
   */
  inline const Aws::Utils::DateTime& GetStoppedAt() const { return m_stoppedAt; }
  inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
  template <typename StoppedAtT = Aws::Utils::DateTime>
  void SetStoppedAt(StoppedAtT&& value) {
    m_stoppedAtHasBeenSet = true;
    m_stoppedAt = std::forward<StoppedAtT>(value);
  }
  template <typename StoppedAtT = Aws::Utils::DateTime>
  DaemonDeploymentSummary& WithStoppedAt(StoppedAtT&& value) {
    SetStoppedAt(std::forward<StoppedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the daemon deployment finished.</p>
   */
  inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
  inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }
  template <typename FinishedAtT = Aws::Utils::DateTime>
  void SetFinishedAt(FinishedAtT&& value) {
    m_finishedAtHasBeenSet = true;
    m_finishedAt = std::forward<FinishedAtT>(value);
  }
  template <typename FinishedAtT = Aws::Utils::DateTime>
  DaemonDeploymentSummary& WithFinishedAt(FinishedAtT&& value) {
    SetFinishedAt(std::forward<FinishedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_daemonDeploymentArn;

  Aws::String m_daemonArn;

  Aws::String m_clusterArn;

  DaemonDeploymentStatus m_status{DaemonDeploymentStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::String m_targetDaemonRevisionArn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_stoppedAt{};

  Aws::Utils::DateTime m_finishedAt{};
  bool m_daemonDeploymentArnHasBeenSet = false;
  bool m_daemonArnHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_targetDaemonRevisionArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_stoppedAtHasBeenSet = false;
  bool m_finishedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
