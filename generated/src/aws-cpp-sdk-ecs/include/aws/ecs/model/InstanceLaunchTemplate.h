/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/CapacityOptionType.h>
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
 * <p>The launch template configuration for Amazon ECS Managed Instances. This
 * defines how Amazon ECS launches Amazon EC2 instances, including the instance
 * profile for your tasks, network and storage configuration, capacity options, and
 * instance requirements for flexible instance type selection.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/InstanceLaunchTemplate">AWS
 * API Reference</a></p>
 */
class InstanceLaunchTemplate {
 public:
  AWS_ECS_API InstanceLaunchTemplate() = default;
  AWS_ECS_API InstanceLaunchTemplate(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API InstanceLaunchTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the instance profile that Amazon ECS
   * applies to Amazon ECS Managed Instances. This instance profile must include the
   * necessary permissions for your tasks to access Amazon Web Services services and
   * resources.</p> <p>For more information, see <a
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
  InstanceLaunchTemplate& WithEc2InstanceProfileArn(Ec2InstanceProfileArnT&& value) {
    SetEc2InstanceProfileArn(std::forward<Ec2InstanceProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for Amazon ECS Managed Instances. This specifies
   * the subnets and security groups that instances use for network connectivity.</p>
   */
  inline const ManagedInstancesNetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = ManagedInstancesNetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = ManagedInstancesNetworkConfiguration>
  InstanceLaunchTemplate& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage configuration for Amazon ECS Managed Instances. This defines the
   * root volume size and type for the instances.</p>
   */
  inline const ManagedInstancesStorageConfiguration& GetStorageConfiguration() const { return m_storageConfiguration; }
  inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }
  template <typename StorageConfigurationT = ManagedInstancesStorageConfiguration>
  void SetStorageConfiguration(StorageConfigurationT&& value) {
    m_storageConfigurationHasBeenSet = true;
    m_storageConfiguration = std::forward<StorageConfigurationT>(value);
  }
  template <typename StorageConfigurationT = ManagedInstancesStorageConfiguration>
  InstanceLaunchTemplate& WithStorageConfiguration(StorageConfigurationT&& value) {
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
  inline InstanceLaunchTemplate& WithMonitoring(ManagedInstancesMonitoringOptions value) {
    SetMonitoring(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity option type. This determines whether Amazon ECS launches
   * On-Demand or Spot Instances for your managed instance capacity provider.</p>
   * <p>Valid values are:</p> <ul> <li> <p> <code>ON_DEMAND</code> - Launches
   * standard On-Demand Instances. On-Demand Instances provide predictable pricing
   * and availability.</p> </li> <li> <p> <code>SPOT</code> - Launches Spot Instances
   * that use spare Amazon EC2 capacity at reduced cost. Spot Instances can be
   * interrupted by Amazon EC2 with a two-minute notification when the capacity is
   * needed back.</p> </li> </ul> <p>The default is On-Demand</p> <p>For more
   * information about Amazon EC2 capacity options, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-purchasing-options.html">Instance
   * purchasing options</a> in the <i>Amazon EC2 User Guide</i>.</p>
   */
  inline CapacityOptionType GetCapacityOptionType() const { return m_capacityOptionType; }
  inline bool CapacityOptionTypeHasBeenSet() const { return m_capacityOptionTypeHasBeenSet; }
  inline void SetCapacityOptionType(CapacityOptionType value) {
    m_capacityOptionTypeHasBeenSet = true;
    m_capacityOptionType = value;
  }
  inline InstanceLaunchTemplate& WithCapacityOptionType(CapacityOptionType value) {
    SetCapacityOptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance requirements. You can specify:</p> <ul> <li> <p>The instance
   * types</p> </li> <li> <p>Instance requirements such as vCPU count, memory,
   * network performance, and accelerator specifications</p> </li> </ul> <p>Amazon
   * ECS automatically selects the instances that match the specified criteria.</p>
   */
  inline const InstanceRequirementsRequest& GetInstanceRequirements() const { return m_instanceRequirements; }
  inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
  template <typename InstanceRequirementsT = InstanceRequirementsRequest>
  void SetInstanceRequirements(InstanceRequirementsT&& value) {
    m_instanceRequirementsHasBeenSet = true;
    m_instanceRequirements = std::forward<InstanceRequirementsT>(value);
  }
  template <typename InstanceRequirementsT = InstanceRequirementsRequest>
  InstanceLaunchTemplate& WithInstanceRequirements(InstanceRequirementsT&& value) {
    SetInstanceRequirements(std::forward<InstanceRequirementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines whether to enable FIPS 140-2 validated cryptographic modules on
   * EC2 instances launched by the capacity provider. If <code>true</code>, instances
   * use FIPS-compliant cryptographic algorithms and modules for enhanced security
   * compliance. If <code>false</code>, instances use standard cryptographic
   * implementations.</p> <p>If not specified, instances are launched with FIPS
   * enabled in AWS GovCloud (US) regions and FIPS disabled in other regions.</p>
   */
  inline bool GetFipsEnabled() const { return m_fipsEnabled; }
  inline bool FipsEnabledHasBeenSet() const { return m_fipsEnabledHasBeenSet; }
  inline void SetFipsEnabled(bool value) {
    m_fipsEnabledHasBeenSet = true;
    m_fipsEnabled = value;
  }
  inline InstanceLaunchTemplate& WithFipsEnabled(bool value) {
    SetFipsEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_ec2InstanceProfileArn;

  ManagedInstancesNetworkConfiguration m_networkConfiguration;

  ManagedInstancesStorageConfiguration m_storageConfiguration;

  ManagedInstancesMonitoringOptions m_monitoring{ManagedInstancesMonitoringOptions::NOT_SET};

  CapacityOptionType m_capacityOptionType{CapacityOptionType::NOT_SET};

  InstanceRequirementsRequest m_instanceRequirements;

  bool m_fipsEnabled{false};
  bool m_ec2InstanceProfileArnHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_storageConfigurationHasBeenSet = false;
  bool m_monitoringHasBeenSet = false;
  bool m_capacityOptionTypeHasBeenSet = false;
  bool m_instanceRequirementsHasBeenSet = false;
  bool m_fipsEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
