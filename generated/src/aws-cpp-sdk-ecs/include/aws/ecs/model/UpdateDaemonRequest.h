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

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class UpdateDaemonRequest : public ECSRequest {
 public:
  AWS_ECS_API UpdateDaemonRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDaemon"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon to update.</p>
   */
  inline const Aws::String& GetDaemonArn() const { return m_daemonArn; }
  inline bool DaemonArnHasBeenSet() const { return m_daemonArnHasBeenSet; }
  template <typename DaemonArnT = Aws::String>
  void SetDaemonArn(DaemonArnT&& value) {
    m_daemonArnHasBeenSet = true;
    m_daemonArn = std::forward<DaemonArnT>(value);
  }
  template <typename DaemonArnT = Aws::String>
  UpdateDaemonRequest& WithDaemonArn(DaemonArnT&& value) {
    SetDaemonArn(std::forward<DaemonArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon task definition to use for the
   * updated daemon.</p>
   */
  inline const Aws::String& GetDaemonTaskDefinitionArn() const { return m_daemonTaskDefinitionArn; }
  inline bool DaemonTaskDefinitionArnHasBeenSet() const { return m_daemonTaskDefinitionArnHasBeenSet; }
  template <typename DaemonTaskDefinitionArnT = Aws::String>
  void SetDaemonTaskDefinitionArn(DaemonTaskDefinitionArnT&& value) {
    m_daemonTaskDefinitionArnHasBeenSet = true;
    m_daemonTaskDefinitionArn = std::forward<DaemonTaskDefinitionArnT>(value);
  }
  template <typename DaemonTaskDefinitionArnT = Aws::String>
  UpdateDaemonRequest& WithDaemonTaskDefinitionArn(DaemonTaskDefinitionArnT&& value) {
    SetDaemonTaskDefinitionArn(std::forward<DaemonTaskDefinitionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the capacity providers to associate with
   * the daemon.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCapacityProviderArns() const { return m_capacityProviderArns; }
  inline bool CapacityProviderArnsHasBeenSet() const { return m_capacityProviderArnsHasBeenSet; }
  template <typename CapacityProviderArnsT = Aws::Vector<Aws::String>>
  void SetCapacityProviderArns(CapacityProviderArnsT&& value) {
    m_capacityProviderArnsHasBeenSet = true;
    m_capacityProviderArns = std::forward<CapacityProviderArnsT>(value);
  }
  template <typename CapacityProviderArnsT = Aws::Vector<Aws::String>>
  UpdateDaemonRequest& WithCapacityProviderArns(CapacityProviderArnsT&& value) {
    SetCapacityProviderArns(std::forward<CapacityProviderArnsT>(value));
    return *this;
  }
  template <typename CapacityProviderArnsT = Aws::String>
  UpdateDaemonRequest& AddCapacityProviderArns(CapacityProviderArnsT&& value) {
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
  UpdateDaemonRequest& WithDeploymentConfiguration(DeploymentConfigurationT&& value) {
    SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to propagate the tags from the daemon to the daemon tasks.
   * If you don't specify a value, the tags aren't propagated. You can only propagate
   * tags to daemon tasks during task creation.</p>
   */
  inline DaemonPropagateTags GetPropagateTags() const { return m_propagateTags; }
  inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
  inline void SetPropagateTags(DaemonPropagateTags value) {
    m_propagateTagsHasBeenSet = true;
    m_propagateTags = value;
  }
  inline UpdateDaemonRequest& WithPropagateTags(DaemonPropagateTags value) {
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
  inline UpdateDaemonRequest& WithEnableECSManagedTags(bool value) {
    SetEnableECSManagedTags(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>true</code>, the execute command functionality is turned on for all
   * tasks in the daemon. If <code>false</code>, the execute command functionality is
   * turned off.</p>
   */
  inline bool GetEnableExecuteCommand() const { return m_enableExecuteCommand; }
  inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
  inline void SetEnableExecuteCommand(bool value) {
    m_enableExecuteCommandHasBeenSet = true;
    m_enableExecuteCommand = value;
  }
  inline UpdateDaemonRequest& WithEnableExecuteCommand(bool value) {
    SetEnableExecuteCommand(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the <code>critical</code> parameter of a daemon is <code>true</code>, and
   * the daemon task fails, stops, or becomes unhealthy, Amazon ECS drains the
   * container instance and stops the other tasks running on it. If the
   * <code>critical</code> parameter is <code>false</code>, the daemon task failure
   * doesn't affect the other tasks on the instance. The default value is
   * <code>true</code>.</p> <p>A non-critical daemon doesn't block instance
   * registration. The container instance becomes active and continues to run your
   * other tasks, whether the daemon task fails during scale-out or during a
   * deployment.</p> <p>Amazon ECS emits an EventBridge event when a daemon task
   * fails to start, for both critical and non-critical daemons.</p> <p>Daemon task
   * launch failures during a deployment are still counted by the deployment circuit
   * breaker. The circuit breaker can roll back an unstable target revision.</p>
   */
  inline bool GetCritical() const { return m_critical; }
  inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }
  inline void SetCritical(bool value) {
    m_criticalHasBeenSet = true;
    m_critical = value;
  }
  inline UpdateDaemonRequest& WithCritical(bool value) {
    SetCritical(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_daemonArn;

  Aws::String m_daemonTaskDefinitionArn;

  Aws::Vector<Aws::String> m_capacityProviderArns;

  DaemonDeploymentConfiguration m_deploymentConfiguration;

  DaemonPropagateTags m_propagateTags{DaemonPropagateTags::NOT_SET};

  bool m_enableECSManagedTags{false};

  bool m_enableExecuteCommand{false};

  bool m_critical{false};
  bool m_daemonArnHasBeenSet = false;
  bool m_daemonTaskDefinitionArnHasBeenSet = false;
  bool m_capacityProviderArnsHasBeenSet = false;
  bool m_deploymentConfigurationHasBeenSet = false;
  bool m_propagateTagsHasBeenSet = false;
  bool m_enableECSManagedTagsHasBeenSet = false;
  bool m_enableExecuteCommandHasBeenSet = false;
  bool m_criticalHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
