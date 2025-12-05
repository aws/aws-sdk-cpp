/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/AutoScalingGroupProviderUpdate.h>
#include <aws/ecs/model/UpdateManagedInstancesProviderConfiguration.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class UpdateCapacityProviderRequest : public ECSRequest {
 public:
  AWS_ECS_API UpdateCapacityProviderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCapacityProvider"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the capacity provider to update.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateCapacityProviderRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the cluster that contains the capacity provider to update.
   * Managed instances capacity providers are cluster-scoped and can only be updated
   * within their associated cluster.</p>
   */
  inline const Aws::String& GetCluster() const { return m_cluster; }
  inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
  template <typename ClusterT = Aws::String>
  void SetCluster(ClusterT&& value) {
    m_clusterHasBeenSet = true;
    m_cluster = std::forward<ClusterT>(value);
  }
  template <typename ClusterT = Aws::String>
  UpdateCapacityProviderRequest& WithCluster(ClusterT&& value) {
    SetCluster(std::forward<ClusterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that represent the parameters to update for the Auto Scaling group
   * capacity provider.</p>
   */
  inline const AutoScalingGroupProviderUpdate& GetAutoScalingGroupProvider() const { return m_autoScalingGroupProvider; }
  inline bool AutoScalingGroupProviderHasBeenSet() const { return m_autoScalingGroupProviderHasBeenSet; }
  template <typename AutoScalingGroupProviderT = AutoScalingGroupProviderUpdate>
  void SetAutoScalingGroupProvider(AutoScalingGroupProviderT&& value) {
    m_autoScalingGroupProviderHasBeenSet = true;
    m_autoScalingGroupProvider = std::forward<AutoScalingGroupProviderT>(value);
  }
  template <typename AutoScalingGroupProviderT = AutoScalingGroupProviderUpdate>
  UpdateCapacityProviderRequest& WithAutoScalingGroupProvider(AutoScalingGroupProviderT&& value) {
    SetAutoScalingGroupProvider(std::forward<AutoScalingGroupProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration for the Amazon ECS Managed Instances provider. You
   * can modify the infrastructure role, instance launch template, and tag
   * propagation settings. Changes take effect for new instances launched after the
   * update.</p>
   */
  inline const UpdateManagedInstancesProviderConfiguration& GetManagedInstancesProvider() const { return m_managedInstancesProvider; }
  inline bool ManagedInstancesProviderHasBeenSet() const { return m_managedInstancesProviderHasBeenSet; }
  template <typename ManagedInstancesProviderT = UpdateManagedInstancesProviderConfiguration>
  void SetManagedInstancesProvider(ManagedInstancesProviderT&& value) {
    m_managedInstancesProviderHasBeenSet = true;
    m_managedInstancesProvider = std::forward<ManagedInstancesProviderT>(value);
  }
  template <typename ManagedInstancesProviderT = UpdateManagedInstancesProviderConfiguration>
  UpdateCapacityProviderRequest& WithManagedInstancesProvider(ManagedInstancesProviderT&& value) {
    SetManagedInstancesProvider(std::forward<ManagedInstancesProviderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_cluster;

  AutoScalingGroupProviderUpdate m_autoScalingGroupProvider;

  UpdateManagedInstancesProviderConfiguration m_managedInstancesProvider;
  bool m_nameHasBeenSet = false;
  bool m_clusterHasBeenSet = false;
  bool m_autoScalingGroupProviderHasBeenSet = false;
  bool m_managedInstancesProviderHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
