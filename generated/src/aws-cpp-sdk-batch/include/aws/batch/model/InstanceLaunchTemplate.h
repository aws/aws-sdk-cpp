/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/CapacityReservationRequest.h>
#include <aws/batch/model/InstanceRequirementsRequest.h>
#include <aws/batch/model/ManagedInstancesLocalStorageConfiguration.h>
#include <aws/batch/model/ManagedInstancesNetworkConfiguration.h>
#include <aws/batch/model/ManagedInstancesStorageConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>The instance launch configuration for an Amazon ECS Managed Instances
 * capacity provider. Specifies the instance profile, networking, instance
 * selection constraints, capacity pricing model, storage, and monitoring
 * settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/InstanceLaunchTemplate">AWS
 * API Reference</a></p>
 */
class InstanceLaunchTemplate {
 public:
  AWS_BATCH_API InstanceLaunchTemplate() = default;
  AWS_BATCH_API InstanceLaunchTemplate(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API InstanceLaunchTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon EC2 instance profile for the
   * managed instances. The instance profile must use the
   * <code>AmazonECSInstanceRolePolicyForManagedInstances</code> managed policy with
   * a trust policy for <code>ec2.amazonaws.com</code>.</p>
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
   * <p>The network configuration for the managed instances. Specifies the VPC
   * subnets and security groups where instances are launched.</p>
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
   * <p>The instance type requirements for the capacity provider. Use this to
   * constrain which Amazon EC2 instance types Amazon ECS can launch. If not
   * specified, all available instance types are eligible.</p>
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
   * <p>The capacity pricing model for the managed instances. Valid values:</p> <ul>
   * <li> <p> <code>ON_DEMAND</code> (default) — On-Demand pricing.</p> </li> <li>
   * <p> <code>SPOT</code> — Spot Instances, which can provide significant cost
   * savings for fault-tolerant workloads.</p> </li> </ul>
   */
  inline const Aws::String& GetCapacityOptionType() const { return m_capacityOptionType; }
  inline bool CapacityOptionTypeHasBeenSet() const { return m_capacityOptionTypeHasBeenSet; }
  template <typename CapacityOptionTypeT = Aws::String>
  void SetCapacityOptionType(CapacityOptionTypeT&& value) {
    m_capacityOptionTypeHasBeenSet = true;
    m_capacityOptionType = std::forward<CapacityOptionTypeT>(value);
  }
  template <typename CapacityOptionTypeT = Aws::String>
  InstanceLaunchTemplate& WithCapacityOptionType(CapacityOptionTypeT&& value) {
    SetCapacityOptionType(std::forward<CapacityOptionTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage configuration for the managed instances. Configures the root EBS
   * volume size. If not specified, the service uses the default EBS volume size for
   * the instance type.</p>
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
   * <p>The level of CloudWatch monitoring for the managed instances. Valid values
   * are <code>BASIC</code> and <code>DETAILED</code>.</p>
   */
  inline const Aws::String& GetMonitoring() const { return m_monitoring; }
  inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
  template <typename MonitoringT = Aws::String>
  void SetMonitoring(MonitoringT&& value) {
    m_monitoringHasBeenSet = true;
    m_monitoring = std::forward<MonitoringT>(value);
  }
  template <typename MonitoringT = Aws::String>
  InstanceLaunchTemplate& WithMonitoring(MonitoringT&& value) {
    SetMonitoring(std::forward<MonitoringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether FIPS 140-2 validated cryptographic modules are enabled on
   * the managed instances. Not available in all Regions.</p>
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

  ///@{
  /**
   * <p>The capacity reservation configuration for the managed instances. Use this to
   * target On-Demand Capacity Reservations or Reserved Instances for predictable
   * capacity and cost optimization.</p>
   */
  inline const CapacityReservationRequest& GetCapacityReservations() const { return m_capacityReservations; }
  inline bool CapacityReservationsHasBeenSet() const { return m_capacityReservationsHasBeenSet; }
  template <typename CapacityReservationsT = CapacityReservationRequest>
  void SetCapacityReservations(CapacityReservationsT&& value) {
    m_capacityReservationsHasBeenSet = true;
    m_capacityReservations = std::forward<CapacityReservationsT>(value);
  }
  template <typename CapacityReservationsT = CapacityReservationRequest>
  InstanceLaunchTemplate& WithCapacityReservations(CapacityReservationsT&& value) {
    SetCapacityReservations(std::forward<CapacityReservationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether instance tags are accessible from the instance metadata
   * service (IMDS). If not specified, instance tags are not accessible from
   * IMDS.</p>
   */
  inline bool GetInstanceMetadataTagsPropagation() const { return m_instanceMetadataTagsPropagation; }
  inline bool InstanceMetadataTagsPropagationHasBeenSet() const { return m_instanceMetadataTagsPropagationHasBeenSet; }
  inline void SetInstanceMetadataTagsPropagation(bool value) {
    m_instanceMetadataTagsPropagationHasBeenSet = true;
    m_instanceMetadataTagsPropagation = value;
  }
  inline InstanceLaunchTemplate& WithInstanceMetadataTagsPropagation(bool value) {
    SetInstanceMetadataTagsPropagation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The local storage configuration for the managed instances. If not specified,
   * instance store volumes are not available to containers.</p>
   */
  inline const ManagedInstancesLocalStorageConfiguration& GetLocalStorageConfiguration() const { return m_localStorageConfiguration; }
  inline bool LocalStorageConfigurationHasBeenSet() const { return m_localStorageConfigurationHasBeenSet; }
  template <typename LocalStorageConfigurationT = ManagedInstancesLocalStorageConfiguration>
  void SetLocalStorageConfiguration(LocalStorageConfigurationT&& value) {
    m_localStorageConfigurationHasBeenSet = true;
    m_localStorageConfiguration = std::forward<LocalStorageConfigurationT>(value);
  }
  template <typename LocalStorageConfigurationT = ManagedInstancesLocalStorageConfiguration>
  InstanceLaunchTemplate& WithLocalStorageConfiguration(LocalStorageConfigurationT&& value) {
    SetLocalStorageConfiguration(std::forward<LocalStorageConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ec2InstanceProfileArn;

  ManagedInstancesNetworkConfiguration m_networkConfiguration;

  InstanceRequirementsRequest m_instanceRequirements;

  Aws::String m_capacityOptionType;

  ManagedInstancesStorageConfiguration m_storageConfiguration;

  Aws::String m_monitoring;

  bool m_fipsEnabled{false};

  CapacityReservationRequest m_capacityReservations;

  bool m_instanceMetadataTagsPropagation{false};

  ManagedInstancesLocalStorageConfiguration m_localStorageConfiguration;
  bool m_ec2InstanceProfileArnHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_instanceRequirementsHasBeenSet = false;
  bool m_capacityOptionTypeHasBeenSet = false;
  bool m_storageConfigurationHasBeenSet = false;
  bool m_monitoringHasBeenSet = false;
  bool m_fipsEnabledHasBeenSet = false;
  bool m_capacityReservationsHasBeenSet = false;
  bool m_instanceMetadataTagsPropagationHasBeenSet = false;
  bool m_localStorageConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
