/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonContainerImage.h>
#include <aws/ecs/model/DaemonPropagateTags.h>

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
 * <p>Information about a daemon revision. A daemon revision is a snapshot of the
 * daemon's configuration at the time a deployment was initiated.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonRevision">AWS
 * API Reference</a></p>
 */
class DaemonRevision {
 public:
  AWS_ECS_API DaemonRevision() = default;
  AWS_ECS_API DaemonRevision(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon revision.</p>
   */
  inline const Aws::String& GetDaemonRevisionArn() const { return m_daemonRevisionArn; }
  inline bool DaemonRevisionArnHasBeenSet() const { return m_daemonRevisionArnHasBeenSet; }
  template <typename DaemonRevisionArnT = Aws::String>
  void SetDaemonRevisionArn(DaemonRevisionArnT&& value) {
    m_daemonRevisionArnHasBeenSet = true;
    m_daemonRevisionArn = std::forward<DaemonRevisionArnT>(value);
  }
  template <typename DaemonRevisionArnT = Aws::String>
  DaemonRevision& WithDaemonRevisionArn(DaemonRevisionArnT&& value) {
    SetDaemonRevisionArn(std::forward<DaemonRevisionArnT>(value));
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
  DaemonRevision& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon for this revision.</p>
   */
  inline const Aws::String& GetDaemonArn() const { return m_daemonArn; }
  inline bool DaemonArnHasBeenSet() const { return m_daemonArnHasBeenSet; }
  template <typename DaemonArnT = Aws::String>
  void SetDaemonArn(DaemonArnT&& value) {
    m_daemonArnHasBeenSet = true;
    m_daemonArn = std::forward<DaemonArnT>(value);
  }
  template <typename DaemonArnT = Aws::String>
  DaemonRevision& WithDaemonArn(DaemonArnT&& value) {
    SetDaemonArn(std::forward<DaemonArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon task definition used by this
   * revision.</p>
   */
  inline const Aws::String& GetDaemonTaskDefinitionArn() const { return m_daemonTaskDefinitionArn; }
  inline bool DaemonTaskDefinitionArnHasBeenSet() const { return m_daemonTaskDefinitionArnHasBeenSet; }
  template <typename DaemonTaskDefinitionArnT = Aws::String>
  void SetDaemonTaskDefinitionArn(DaemonTaskDefinitionArnT&& value) {
    m_daemonTaskDefinitionArnHasBeenSet = true;
    m_daemonTaskDefinitionArn = std::forward<DaemonTaskDefinitionArnT>(value);
  }
  template <typename DaemonTaskDefinitionArnT = Aws::String>
  DaemonRevision& WithDaemonTaskDefinitionArn(DaemonTaskDefinitionArnT&& value) {
    SetDaemonTaskDefinitionArn(std::forward<DaemonTaskDefinitionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for the time when the daemon revision was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DaemonRevision& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The container images used by the daemon revision.</p>
   */
  inline const Aws::Vector<DaemonContainerImage>& GetContainerImages() const { return m_containerImages; }
  inline bool ContainerImagesHasBeenSet() const { return m_containerImagesHasBeenSet; }
  template <typename ContainerImagesT = Aws::Vector<DaemonContainerImage>>
  void SetContainerImages(ContainerImagesT&& value) {
    m_containerImagesHasBeenSet = true;
    m_containerImages = std::forward<ContainerImagesT>(value);
  }
  template <typename ContainerImagesT = Aws::Vector<DaemonContainerImage>>
  DaemonRevision& WithContainerImages(ContainerImagesT&& value) {
    SetContainerImages(std::forward<ContainerImagesT>(value));
    return *this;
  }
  template <typename ContainerImagesT = DaemonContainerImage>
  DaemonRevision& AddContainerImages(ContainerImagesT&& value) {
    m_containerImagesHasBeenSet = true;
    m_containerImages.emplace_back(std::forward<ContainerImagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether tags are propagated from the daemon to the daemon
   * tasks.</p>
   */
  inline DaemonPropagateTags GetPropagateTags() const { return m_propagateTags; }
  inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
  inline void SetPropagateTags(DaemonPropagateTags value) {
    m_propagateTagsHasBeenSet = true;
    m_propagateTags = value;
  }
  inline DaemonRevision& WithPropagateTags(DaemonPropagateTags value) {
    SetPropagateTags(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether Amazon ECS managed tags are turned on for the daemon
   * tasks.</p>
   */
  inline bool GetEnableECSManagedTags() const { return m_enableECSManagedTags; }
  inline bool EnableECSManagedTagsHasBeenSet() const { return m_enableECSManagedTagsHasBeenSet; }
  inline void SetEnableECSManagedTags(bool value) {
    m_enableECSManagedTagsHasBeenSet = true;
    m_enableECSManagedTags = value;
  }
  inline DaemonRevision& WithEnableECSManagedTags(bool value) {
    SetEnableECSManagedTags(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the execute command functionality is turned on for the
   * daemon tasks.</p>
   */
  inline bool GetEnableExecuteCommand() const { return m_enableExecuteCommand; }
  inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
  inline void SetEnableExecuteCommand(bool value) {
    m_enableExecuteCommandHasBeenSet = true;
    m_enableExecuteCommand = value;
  }
  inline DaemonRevision& WithEnableExecuteCommand(bool value) {
    SetEnableExecuteCommand(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_daemonRevisionArn;

  Aws::String m_clusterArn;

  Aws::String m_daemonArn;

  Aws::String m_daemonTaskDefinitionArn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Vector<DaemonContainerImage> m_containerImages;

  DaemonPropagateTags m_propagateTags{DaemonPropagateTags::NOT_SET};

  bool m_enableECSManagedTags{false};

  bool m_enableExecuteCommand{false};
  bool m_daemonRevisionArnHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_daemonArnHasBeenSet = false;
  bool m_daemonTaskDefinitionArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_containerImagesHasBeenSet = false;
  bool m_propagateTagsHasBeenSet = false;
  bool m_enableECSManagedTagsHasBeenSet = false;
  bool m_enableExecuteCommandHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
