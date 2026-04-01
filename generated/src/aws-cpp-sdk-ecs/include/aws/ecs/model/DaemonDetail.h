/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonRevisionDetail.h>
#include <aws/ecs/model/DaemonStatus.h>

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
 * <p>The detailed information about a daemon.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonDetail">AWS
 * API Reference</a></p>
 */
class DaemonDetail {
 public:
  AWS_ECS_API DaemonDetail() = default;
  AWS_ECS_API DaemonDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  DaemonDetail& WithDaemonArn(DaemonArnT&& value) {
    SetDaemonArn(std::forward<DaemonArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster that the daemon is running
   * in.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  DaemonDetail& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the daemon.</p>
   */
  inline DaemonStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DaemonStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DaemonDetail& WithStatus(DaemonStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current daemon revision details, including the running task counts per
   * capacity provider.</p>
   */
  inline const Aws::Vector<DaemonRevisionDetail>& GetCurrentRevisions() const { return m_currentRevisions; }
  inline bool CurrentRevisionsHasBeenSet() const { return m_currentRevisionsHasBeenSet; }
  template <typename CurrentRevisionsT = Aws::Vector<DaemonRevisionDetail>>
  void SetCurrentRevisions(CurrentRevisionsT&& value) {
    m_currentRevisionsHasBeenSet = true;
    m_currentRevisions = std::forward<CurrentRevisionsT>(value);
  }
  template <typename CurrentRevisionsT = Aws::Vector<DaemonRevisionDetail>>
  DaemonDetail& WithCurrentRevisions(CurrentRevisionsT&& value) {
    SetCurrentRevisions(std::forward<CurrentRevisionsT>(value));
    return *this;
  }
  template <typename CurrentRevisionsT = DaemonRevisionDetail>
  DaemonDetail& AddCurrentRevisions(CurrentRevisionsT&& value) {
    m_currentRevisionsHasBeenSet = true;
    m_currentRevisions.emplace_back(std::forward<CurrentRevisionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the most recent daemon deployment.</p>
   */
  inline const Aws::String& GetDeploymentArn() const { return m_deploymentArn; }
  inline bool DeploymentArnHasBeenSet() const { return m_deploymentArnHasBeenSet; }
  template <typename DeploymentArnT = Aws::String>
  void SetDeploymentArn(DeploymentArnT&& value) {
    m_deploymentArnHasBeenSet = true;
    m_deploymentArn = std::forward<DeploymentArnT>(value);
  }
  template <typename DeploymentArnT = Aws::String>
  DaemonDetail& WithDeploymentArn(DeploymentArnT&& value) {
    SetDeploymentArn(std::forward<DeploymentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for the time when the daemon was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DaemonDetail& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for the time when the daemon was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DaemonDetail& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_daemonArn;

  Aws::String m_clusterArn;

  DaemonStatus m_status{DaemonStatus::NOT_SET};

  Aws::Vector<DaemonRevisionDetail> m_currentRevisions;

  Aws::String m_deploymentArn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_daemonArnHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_currentRevisionsHasBeenSet = false;
  bool m_deploymentArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
