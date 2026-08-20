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
 * <p>The instance launch configuration for updating an Amazon ECS Managed
 * Instances capacity provider. You cannot change <code>capacityOptionType</code>
 * or <code>fipsEnabled</code> after the compute environment is
 * created.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/InstanceLaunchTemplateUpdate">AWS
 * API Reference</a></p>
 */
class InstanceLaunchTemplateUpdate {
 public:
  AWS_BATCH_API InstanceLaunchTemplateUpdate() = default;
  AWS_BATCH_API InstanceLaunchTemplateUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API InstanceLaunchTemplateUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated Amazon Resource Name (ARN) of the Amazon EC2 instance profile for
   * the managed instances.</p>
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
   * <p>The updated network configuration for the managed instances.</p>
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
   * <p>The updated instance type requirements for the capacity provider.</p>
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

  ///@{
  /**
   * <p>The updated storage configuration for the managed instances.</p>
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
   * <p>The updated monitoring level. Valid values are <code>BASIC</code> and
   * <code>DETAILED</code>.</p>
   */
  inline const Aws::String& GetMonitoring() const { return m_monitoring; }
  inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
  template <typename MonitoringT = Aws::String>
  void SetMonitoring(MonitoringT&& value) {
    m_monitoringHasBeenSet = true;
    m_monitoring = std::forward<MonitoringT>(value);
  }
  template <typename MonitoringT = Aws::String>
  InstanceLaunchTemplateUpdate& WithMonitoring(MonitoringT&& value) {
    SetMonitoring(std::forward<MonitoringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated capacity reservation configuration.</p>
   */
  inline const CapacityReservationRequest& GetCapacityReservations() const { return m_capacityReservations; }
  inline bool CapacityReservationsHasBeenSet() const { return m_capacityReservationsHasBeenSet; }
  template <typename CapacityReservationsT = CapacityReservationRequest>
  void SetCapacityReservations(CapacityReservationsT&& value) {
    m_capacityReservationsHasBeenSet = true;
    m_capacityReservations = std::forward<CapacityReservationsT>(value);
  }
  template <typename CapacityReservationsT = CapacityReservationRequest>
  InstanceLaunchTemplateUpdate& WithCapacityReservations(CapacityReservationsT&& value) {
    SetCapacityReservations(std::forward<CapacityReservationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether instance tags are accessible from the instance metadata
   * service (IMDS).</p>
   */
  inline bool GetInstanceMetadataTagsPropagation() const { return m_instanceMetadataTagsPropagation; }
  inline bool InstanceMetadataTagsPropagationHasBeenSet() const { return m_instanceMetadataTagsPropagationHasBeenSet; }
  inline void SetInstanceMetadataTagsPropagation(bool value) {
    m_instanceMetadataTagsPropagationHasBeenSet = true;
    m_instanceMetadataTagsPropagation = value;
  }
  inline InstanceLaunchTemplateUpdate& WithInstanceMetadataTagsPropagation(bool value) {
    SetInstanceMetadataTagsPropagation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated local storage configuration.</p>
   */
  inline const ManagedInstancesLocalStorageConfiguration& GetLocalStorageConfiguration() const { return m_localStorageConfiguration; }
  inline bool LocalStorageConfigurationHasBeenSet() const { return m_localStorageConfigurationHasBeenSet; }
  template <typename LocalStorageConfigurationT = ManagedInstancesLocalStorageConfiguration>
  void SetLocalStorageConfiguration(LocalStorageConfigurationT&& value) {
    m_localStorageConfigurationHasBeenSet = true;
    m_localStorageConfiguration = std::forward<LocalStorageConfigurationT>(value);
  }
  template <typename LocalStorageConfigurationT = ManagedInstancesLocalStorageConfiguration>
  InstanceLaunchTemplateUpdate& WithLocalStorageConfiguration(LocalStorageConfigurationT&& value) {
    SetLocalStorageConfiguration(std::forward<LocalStorageConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ec2InstanceProfileArn;

  ManagedInstancesNetworkConfiguration m_networkConfiguration;

  InstanceRequirementsRequest m_instanceRequirements;

  ManagedInstancesStorageConfiguration m_storageConfiguration;

  Aws::String m_monitoring;

  CapacityReservationRequest m_capacityReservations;

  bool m_instanceMetadataTagsPropagation{false};

  ManagedInstancesLocalStorageConfiguration m_localStorageConfiguration;
  bool m_ec2InstanceProfileArnHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_instanceRequirementsHasBeenSet = false;
  bool m_storageConfigurationHasBeenSet = false;
  bool m_monitoringHasBeenSet = false;
  bool m_capacityReservationsHasBeenSet = false;
  bool m_instanceMetadataTagsPropagationHasBeenSet = false;
  bool m_localStorageConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
