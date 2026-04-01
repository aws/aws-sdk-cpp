/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonDeploymentConfiguration.h>
#include <aws/ecs/model/DaemonPropagateTags.h>
#include <aws/ecs/model/Tag.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class CreateDaemonRequest : public ECSRequest {
 public:
  AWS_ECS_API CreateDaemonRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDaemon"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the daemon. Up to 255 letters (uppercase and lowercase), numbers,
   * underscores, and hyphens are allowed.</p>
   */
  inline const Aws::String& GetDaemonName() const { return m_daemonName; }
  inline bool DaemonNameHasBeenSet() const { return m_daemonNameHasBeenSet; }
  template <typename DaemonNameT = Aws::String>
  void SetDaemonName(DaemonNameT&& value) {
    m_daemonNameHasBeenSet = true;
    m_daemonName = std::forward<DaemonNameT>(value);
  }
  template <typename DaemonNameT = Aws::String>
  CreateDaemonRequest& WithDaemonName(DaemonNameT&& value) {
    SetDaemonName(std::forward<DaemonNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster to create the daemon in.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  CreateDaemonRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon task definition to use for the
   * daemon.</p>
   */
  inline const Aws::String& GetDaemonTaskDefinitionArn() const { return m_daemonTaskDefinitionArn; }
  inline bool DaemonTaskDefinitionArnHasBeenSet() const { return m_daemonTaskDefinitionArnHasBeenSet; }
  template <typename DaemonTaskDefinitionArnT = Aws::String>
  void SetDaemonTaskDefinitionArn(DaemonTaskDefinitionArnT&& value) {
    m_daemonTaskDefinitionArnHasBeenSet = true;
    m_daemonTaskDefinitionArn = std::forward<DaemonTaskDefinitionArnT>(value);
  }
  template <typename DaemonTaskDefinitionArnT = Aws::String>
  CreateDaemonRequest& WithDaemonTaskDefinitionArn(DaemonTaskDefinitionArnT&& value) {
    SetDaemonTaskDefinitionArn(std::forward<DaemonTaskDefinitionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the capacity providers to associate with
   * the daemon. The daemon deploys tasks on container instances managed by these
   * capacity providers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCapacityProviderArns() const { return m_capacityProviderArns; }
  inline bool CapacityProviderArnsHasBeenSet() const { return m_capacityProviderArnsHasBeenSet; }
  template <typename CapacityProviderArnsT = Aws::Vector<Aws::String>>
  void SetCapacityProviderArns(CapacityProviderArnsT&& value) {
    m_capacityProviderArnsHasBeenSet = true;
    m_capacityProviderArns = std::forward<CapacityProviderArnsT>(value);
  }
  template <typename CapacityProviderArnsT = Aws::Vector<Aws::String>>
  CreateDaemonRequest& WithCapacityProviderArns(CapacityProviderArnsT&& value) {
    SetCapacityProviderArns(std::forward<CapacityProviderArnsT>(value));
    return *this;
  }
  template <typename CapacityProviderArnsT = Aws::String>
  CreateDaemonRequest& AddCapacityProviderArns(CapacityProviderArnsT&& value) {
    m_capacityProviderArnsHasBeenSet = true;
    m_capacityProviderArns.emplace_back(std::forward<CapacityProviderArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional deployment parameters that control how the daemon rolls out updates,
   * including the drain percentage, alarm-based rollback, and bake time.</p>
   */
  inline const DaemonDeploymentConfiguration& GetDeploymentConfiguration() const { return m_deploymentConfiguration; }
  inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
  template <typename DeploymentConfigurationT = DaemonDeploymentConfiguration>
  void SetDeploymentConfiguration(DeploymentConfigurationT&& value) {
    m_deploymentConfigurationHasBeenSet = true;
    m_deploymentConfiguration = std::forward<DeploymentConfigurationT>(value);
  }
  template <typename DeploymentConfigurationT = DaemonDeploymentConfiguration>
  CreateDaemonRequest& WithDeploymentConfiguration(DeploymentConfigurationT&& value) {
    SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata that you apply to the daemon to help you categorize and organize
   * them. Each tag consists of a key and an optional value. You define both of
   * them.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
   * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
   * each tag key must be unique, and each tag key can have only one value.</p> </li>
   * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
   * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
   * your tagging schema is used across multiple services and resources, remember
   * that other services may have restrictions on allowed characters. Generally
   * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
   * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
   * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
   * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
   * either keys or values as it is reserved for Amazon Web Services use. You cannot
   * edit or delete tag keys or values with this prefix. Tags with this prefix do not
   * count against your tags per resource limit.</p> </li> </ul>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateDaemonRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateDaemonRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to propagate the tags from the daemon to the daemon tasks.
   * If you don't specify a value, the tags aren't propagated. You can only propagate
   * tags to daemon tasks during task creation. To add tags to a task after task
   * creation, use the <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_TagResource.html">TagResource</a>
   * API action.</p>
   */
  inline DaemonPropagateTags GetPropagateTags() const { return m_propagateTags; }
  inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
  inline void SetPropagateTags(DaemonPropagateTags value) {
    m_propagateTagsHasBeenSet = true;
    m_propagateTags = value;
  }
  inline CreateDaemonRequest& WithPropagateTags(DaemonPropagateTags value) {
    SetPropagateTags(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to turn on Amazon ECS managed tags for the tasks in the
   * daemon. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-using-tags.html">Tagging
   * your Amazon ECS resources</a> in the <i>Amazon Elastic Container Service
   * Developer Guide</i>.</p>
   */
  inline bool GetEnableECSManagedTags() const { return m_enableECSManagedTags; }
  inline bool EnableECSManagedTagsHasBeenSet() const { return m_enableECSManagedTagsHasBeenSet; }
  inline void SetEnableECSManagedTags(bool value) {
    m_enableECSManagedTagsHasBeenSet = true;
    m_enableECSManagedTags = value;
  }
  inline CreateDaemonRequest& WithEnableECSManagedTags(bool value) {
    SetEnableECSManagedTags(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines whether the execute command functionality is turned on for the
   * daemon. If <code>true</code>, the execute command functionality is turned on for
   * all tasks in the daemon.</p>
   */
  inline bool GetEnableExecuteCommand() const { return m_enableExecuteCommand; }
  inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
  inline void SetEnableExecuteCommand(bool value) {
    m_enableExecuteCommandHasBeenSet = true;
    m_enableExecuteCommand = value;
  }
  inline CreateDaemonRequest& WithEnableExecuteCommand(bool value) {
    SetEnableExecuteCommand(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An identifier that you provide to ensure the idempotency of the request. It
   * must be unique and is case sensitive. Up to 36 ASCII characters in the range of
   * 33-126 (inclusive) are allowed.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateDaemonRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_daemonName;

  Aws::String m_clusterArn;

  Aws::String m_daemonTaskDefinitionArn;

  Aws::Vector<Aws::String> m_capacityProviderArns;

  DaemonDeploymentConfiguration m_deploymentConfiguration;

  Aws::Vector<Tag> m_tags;

  DaemonPropagateTags m_propagateTags{DaemonPropagateTags::NOT_SET};

  bool m_enableECSManagedTags{false};

  bool m_enableExecuteCommand{false};

  Aws::String m_clientToken;
  bool m_daemonNameHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_daemonTaskDefinitionArnHasBeenSet = false;
  bool m_capacityProviderArnsHasBeenSet = false;
  bool m_deploymentConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_propagateTagsHasBeenSet = false;
  bool m_enableECSManagedTagsHasBeenSet = false;
  bool m_enableExecuteCommandHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
