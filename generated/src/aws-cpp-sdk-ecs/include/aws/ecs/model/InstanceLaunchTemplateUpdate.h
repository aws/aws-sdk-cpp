/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/InstanceRequirementsRequest.h>
#include <aws/ecs/model/ManagedInstancesMonitoringOptions.h>
#include <aws/ecs/model/ManagedInstancesNetworkConfiguration.h>
#include <aws/ecs/model/ManagedInstancesStorageConfiguration.h>

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
 * <p>The updated launch template configuration for Amazon ECS Managed Instances.
 * You can modify the instance profile, network configuration, storage settings,
 * and instance requirements. Changes apply to new instances launched after the
 * update.</p> <p>For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">Store
 * instance launch parameters in Amazon EC2 launch templates</a> in the <i>Amazon
 * EC2 User Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/InstanceLaunchTemplateUpdate">AWS
 * API Reference</a></p>
 */
class InstanceLaunchTemplateUpdate {
 public:
  AWS_ECS_API InstanceLaunchTemplateUpdate() = default;
  AWS_ECS_API InstanceLaunchTemplateUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API InstanceLaunchTemplateUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated Amazon Resource Name (ARN) of the instance profile. The new
   * instance profile must have the necessary permissions for your tasks.</p> <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/managed-instances-instance-profile.html">Amazon
   * ECS instance profile for Managed Instances</a> in the <i>Amazon ECS Developer
   * Guide</i>. </p>
   */
  inline const Aws::String& GetEc2InstanceProfileArn() const { return m_ec2InstanceProfileArn; }
  inline bool Ec2InstanceProfileArnHasBeenSet() const { return m_ec2InstanceProfileArnHasBeenSet; }
  template <typename Ec2InstanceProfileArnT = Aws::String>
  void SetEc2InstanceProfileArn(Ec2InstanceProfileArnT&& value) {
    m_ec2InstanceProfileArnHasBeenSet = true;
    m_ec2InstanceProfileArn = std::forward<Ec2InstanceProfileArnT>(value);
  }
  template <typename Ec2InstanceProfileArnT = Aws::String>
  InstanceLaunchTemplateUpdate& WithEc2InstanceProfileArn(Ec2InstanceProfileArnT&& value) {
    SetEc2InstanceProfileArn(std::forward<Ec2InstanceProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated network configuration for Amazon ECS Managed Instances. Changes
   * to subnets and security groups affect new instances launched after the
   * update.</p>
   */
  inline const ManagedInstancesNetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = ManagedInstancesNetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = ManagedInstancesNetworkConfiguration>
  InstanceLaunchTemplateUpdate& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated storage configuration for Amazon ECS Managed Instances. Changes
   * to storage settings apply to new instances launched after the update.</p>
   */
  inline const ManagedInstancesStorageConfiguration& GetStorageConfiguration() const { return m_storageConfiguration; }
  inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }
  template <typename StorageConfigurationT = ManagedInstancesStorageConfiguration>
  void SetStorageConfiguration(StorageConfigurationT&& value) {
    m_storageConfigurationHasBeenSet = true;
    m_storageConfiguration = std::forward<StorageConfigurationT>(value);
  }
  template <typename StorageConfigurationT = ManagedInstancesStorageConfiguration>
  InstanceLaunchTemplateUpdate& WithStorageConfiguration(StorageConfigurationT&& value) {
    SetStorageConfiguration(std::forward<StorageConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>CloudWatch provides two categories of monitoring: basic monitoring and
   * detailed monitoring. By default, your managed instance is configured for basic
   * monitoring. You can optionally enable detailed monitoring to help you more
   * quickly identify and act on operational issues. You can enable or turn off
   * detailed monitoring at launch or when the managed instance is running or
   * stopped. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/detailed-monitoring-managed-instances.html">Detailed
   * monitoring for Amazon ECS Managed Instances</a> in the Amazon ECS Developer
   * Guide.</p>
   */
  inline ManagedInstancesMonitoringOptions GetMonitoring() const { return m_monitoring; }
  inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
  inline void SetMonitoring(ManagedInstancesMonitoringOptions value) {
    m_monitoringHasBeenSet = true;
    m_monitoring = value;
  }
  inline InstanceLaunchTemplateUpdate& WithMonitoring(ManagedInstancesMonitoringOptions value) {
    SetMonitoring(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated instance requirements for attribute-based instance type
   * selection. Changes to instance requirements affect which instance types Amazon
   * ECS selects for new instances.</p>
   */
  inline const InstanceRequirementsRequest& GetInstanceRequirements() const { return m_instanceRequirements; }
  inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
  template <typename InstanceRequirementsT = InstanceRequirementsRequest>
  void SetInstanceRequirements(InstanceRequirementsT&& value) {
    m_instanceRequirementsHasBeenSet = true;
    m_instanceRequirements = std::forward<InstanceRequirementsT>(value);
  }
  template <typename InstanceRequirementsT = InstanceRequirementsRequest>
  InstanceLaunchTemplateUpdate& WithInstanceRequirements(InstanceRequirementsT&& value) {
    SetInstanceRequirements(std::forward<InstanceRequirementsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ec2InstanceProfileArn;

  ManagedInstancesNetworkConfiguration m_networkConfiguration;

  ManagedInstancesStorageConfiguration m_storageConfiguration;

  ManagedInstancesMonitoringOptions m_monitoring{ManagedInstancesMonitoringOptions::NOT_SET};

  InstanceRequirementsRequest m_instanceRequirements;
  bool m_ec2InstanceProfileArnHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_storageConfigurationHasBeenSet = false;
  bool m_monitoringHasBeenSet = false;
  bool m_instanceRequirementsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
