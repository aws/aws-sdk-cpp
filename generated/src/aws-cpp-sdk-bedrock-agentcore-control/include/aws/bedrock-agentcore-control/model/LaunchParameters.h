/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CapacityReservationSpecification.h>
#include <aws/bedrock-agentcore-control/model/EphemeralBlockDeviceMapping.h>
#include <aws/bedrock-agentcore-control/model/InstanceRequirements.h>
#include <aws/bedrock-agentcore-control/model/LicenseSpecification.h>
#include <aws/bedrock-agentcore-control/model/Monitoring.h>
#include <aws/bedrock-agentcore-control/model/OperatingSystem.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The parameters for launching Amazon EC2 instances in a capacity
 * provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/LaunchParameters">AWS
 * API Reference</a></p>
 */
class LaunchParameters {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API LaunchParameters() = default;
  AWS_BEDROCKAGENTCORECONTROL_API LaunchParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API LaunchParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The operating system and CPU architecture for the instances.</p>
   */
  inline OperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
  inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
  inline void SetOperatingSystem(OperatingSystem value) {
    m_operatingSystemHasBeenSet = true;
    m_operatingSystem = value;
  }
  inline LaunchParameters& WithOperatingSystem(OperatingSystem value) {
    SetOperatingSystem(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requirements that determine which instance types can be launched.</p>
   */
  inline const InstanceRequirements& GetInstanceRequirements() const { return m_instanceRequirements; }
  inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
  template <typename InstanceRequirementsT = InstanceRequirements>
  void SetInstanceRequirements(InstanceRequirementsT&& value) {
    m_instanceRequirementsHasBeenSet = true;
    m_instanceRequirements = std::forward<InstanceRequirementsT>(value);
  }
  template <typename InstanceRequirementsT = InstanceRequirements>
  LaunchParameters& WithInstanceRequirements(InstanceRequirementsT&& value) {
    SetInstanceRequirements(std::forward<InstanceRequirementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The block device mappings for instance store (ephemeral) volumes. You can
   * specify up to five mappings.</p>
   */
  inline const Aws::Vector<EphemeralBlockDeviceMapping>& GetEphemeralVolumes() const { return m_ephemeralVolumes; }
  inline bool EphemeralVolumesHasBeenSet() const { return m_ephemeralVolumesHasBeenSet; }
  template <typename EphemeralVolumesT = Aws::Vector<EphemeralBlockDeviceMapping>>
  void SetEphemeralVolumes(EphemeralVolumesT&& value) {
    m_ephemeralVolumesHasBeenSet = true;
    m_ephemeralVolumes = std::forward<EphemeralVolumesT>(value);
  }
  template <typename EphemeralVolumesT = Aws::Vector<EphemeralBlockDeviceMapping>>
  LaunchParameters& WithEphemeralVolumes(EphemeralVolumesT&& value) {
    SetEphemeralVolumes(std::forward<EphemeralVolumesT>(value));
    return *this;
  }
  template <typename EphemeralVolumesT = EphemeralBlockDeviceMapping>
  LaunchParameters& AddEphemeralVolumes(EphemeralVolumesT&& value) {
    m_ephemeralVolumesHasBeenSet = true;
    m_ephemeralVolumes.emplace_back(std::forward<EphemeralVolumesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The monitoring level for the instances.</p>
   */
  inline Monitoring GetMonitoring() const { return m_monitoring; }
  inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
  inline void SetMonitoring(Monitoring value) {
    m_monitoringHasBeenSet = true;
    m_monitoring = value;
  }
  inline LaunchParameters& WithMonitoring(Monitoring value) {
    SetMonitoring(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The license configurations to associate with the instances. You can specify
   * up to five configurations.</p>
   */
  inline const Aws::Vector<LicenseSpecification>& GetLicenseSpecifications() const { return m_licenseSpecifications; }
  inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }
  template <typename LicenseSpecificationsT = Aws::Vector<LicenseSpecification>>
  void SetLicenseSpecifications(LicenseSpecificationsT&& value) {
    m_licenseSpecificationsHasBeenSet = true;
    m_licenseSpecifications = std::forward<LicenseSpecificationsT>(value);
  }
  template <typename LicenseSpecificationsT = Aws::Vector<LicenseSpecification>>
  LaunchParameters& WithLicenseSpecifications(LicenseSpecificationsT&& value) {
    SetLicenseSpecifications(std::forward<LicenseSpecificationsT>(value));
    return *this;
  }
  template <typename LicenseSpecificationsT = LicenseSpecification>
  LaunchParameters& AddLicenseSpecifications(LicenseSpecificationsT&& value) {
    m_licenseSpecificationsHasBeenSet = true;
    m_licenseSpecifications.emplace_back(std::forward<LicenseSpecificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Capacity Reservation targeting option for the instances.</p>
   */
  inline const CapacityReservationSpecification& GetCapacityReservationSpecification() const { return m_capacityReservationSpecification; }
  inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }
  template <typename CapacityReservationSpecificationT = CapacityReservationSpecification>
  void SetCapacityReservationSpecification(CapacityReservationSpecificationT&& value) {
    m_capacityReservationSpecificationHasBeenSet = true;
    m_capacityReservationSpecification = std::forward<CapacityReservationSpecificationT>(value);
  }
  template <typename CapacityReservationSpecificationT = CapacityReservationSpecification>
  LaunchParameters& WithCapacityReservationSpecification(CapacityReservationSpecificationT&& value) {
    SetCapacityReservationSpecification(std::forward<CapacityReservationSpecificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the SSH key pair to configure on the instances for SSH
   * connectivity.</p>
   */
  inline const Aws::String& GetSshKeyName() const { return m_sshKeyName; }
  inline bool SshKeyNameHasBeenSet() const { return m_sshKeyNameHasBeenSet; }
  template <typename SshKeyNameT = Aws::String>
  void SetSshKeyName(SshKeyNameT&& value) {
    m_sshKeyNameHasBeenSet = true;
    m_sshKeyName = std::forward<SshKeyNameT>(value);
  }
  template <typename SshKeyNameT = Aws::String>
  LaunchParameters& WithSshKeyName(SshKeyNameT&& value) {
    SetSshKeyName(std::forward<SshKeyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM instance profile to associate with
   * launched instances. If provided, this overrides the default instance
   * profile.</p>
   */
  inline const Aws::String& GetInstanceProfileArn() const { return m_instanceProfileArn; }
  inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
  template <typename InstanceProfileArnT = Aws::String>
  void SetInstanceProfileArn(InstanceProfileArnT&& value) {
    m_instanceProfileArnHasBeenSet = true;
    m_instanceProfileArn = std::forward<InstanceProfileArnT>(value);
  }
  template <typename InstanceProfileArnT = Aws::String>
  LaunchParameters& WithInstanceProfileArn(InstanceProfileArnT&& value) {
    SetInstanceProfileArn(std::forward<InstanceProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to propagate to all Amazon EC2 resources (instances, volumes, and
   * network interfaces) that the capacity provider creates.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetPropagatedTags() const { return m_propagatedTags; }
  inline bool PropagatedTagsHasBeenSet() const { return m_propagatedTagsHasBeenSet; }
  template <typename PropagatedTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetPropagatedTags(PropagatedTagsT&& value) {
    m_propagatedTagsHasBeenSet = true;
    m_propagatedTags = std::forward<PropagatedTagsT>(value);
  }
  template <typename PropagatedTagsT = Aws::Map<Aws::String, Aws::String>>
  LaunchParameters& WithPropagatedTags(PropagatedTagsT&& value) {
    SetPropagatedTags(std::forward<PropagatedTagsT>(value));
    return *this;
  }
  template <typename PropagatedTagsKeyT = Aws::String, typename PropagatedTagsValueT = Aws::String>
  LaunchParameters& AddPropagatedTags(PropagatedTagsKeyT&& key, PropagatedTagsValueT&& value) {
    m_propagatedTagsHasBeenSet = true;
    m_propagatedTags.emplace(std::forward<PropagatedTagsKeyT>(key), std::forward<PropagatedTagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  OperatingSystem m_operatingSystem{OperatingSystem::NOT_SET};

  InstanceRequirements m_instanceRequirements;

  Aws::Vector<EphemeralBlockDeviceMapping> m_ephemeralVolumes;

  Monitoring m_monitoring{Monitoring::NOT_SET};

  Aws::Vector<LicenseSpecification> m_licenseSpecifications;

  CapacityReservationSpecification m_capacityReservationSpecification;

  Aws::String m_sshKeyName;

  Aws::String m_instanceProfileArn;

  Aws::Map<Aws::String, Aws::String> m_propagatedTags;
  bool m_operatingSystemHasBeenSet = false;
  bool m_instanceRequirementsHasBeenSet = false;
  bool m_ephemeralVolumesHasBeenSet = false;
  bool m_monitoringHasBeenSet = false;
  bool m_licenseSpecificationsHasBeenSet = false;
  bool m_capacityReservationSpecificationHasBeenSet = false;
  bool m_sshKeyNameHasBeenSet = false;
  bool m_instanceProfileArnHasBeenSet = false;
  bool m_propagatedTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
