/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceLifecycle.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/LaunchTemplateAndOverridesResponse.h>
#include <aws/ec2/model/PlatformValues.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes the instances that were launched by the fleet.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFleetInstance">AWS
 * API Reference</a></p>
 */
class CreateFleetInstance {
 public:
  AWS_EC2_API CreateFleetInstance() = default;
  AWS_EC2_API CreateFleetInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CreateFleetInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The launch templates and overrides that were used for launching the
   * instances. The values that you specify in the Overrides replace the values in
   * the launch template.</p>
   */
  inline const LaunchTemplateAndOverridesResponse& GetLaunchTemplateAndOverrides() const { return m_launchTemplateAndOverrides; }
  inline bool LaunchTemplateAndOverridesHasBeenSet() const { return m_launchTemplateAndOverridesHasBeenSet; }
  template <typename LaunchTemplateAndOverridesT = LaunchTemplateAndOverridesResponse>
  void SetLaunchTemplateAndOverrides(LaunchTemplateAndOverridesT&& value) {
    m_launchTemplateAndOverridesHasBeenSet = true;
    m_launchTemplateAndOverrides = std::forward<LaunchTemplateAndOverridesT>(value);
  }
  template <typename LaunchTemplateAndOverridesT = LaunchTemplateAndOverridesResponse>
  CreateFleetInstance& WithLaunchTemplateAndOverrides(LaunchTemplateAndOverridesT&& value) {
    SetLaunchTemplateAndOverrides(std::forward<LaunchTemplateAndOverridesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates if the instance that was launched is a Spot, On-Demand, Capacity
   * Block, or Interruptible Capacity Reservation instance.</p>
   */
  inline InstanceLifecycle GetLifecycle() const { return m_lifecycle; }
  inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
  inline void SetLifecycle(InstanceLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline CreateFleetInstance& WithLifecycle(InstanceLifecycle value) {
    SetLifecycle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the instances.</p>
   */
  inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
  inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  void SetInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds = std::forward<InstanceIdsT>(value);
  }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  CreateFleetInstance& WithInstanceIds(InstanceIdsT&& value) {
    SetInstanceIds(std::forward<InstanceIdsT>(value));
    return *this;
  }
  template <typename InstanceIdsT = Aws::String>
  CreateFleetInstance& AddInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance type.</p>
   */
  inline InstanceType GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  inline void SetInstanceType(InstanceType value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = value;
  }
  inline CreateFleetInstance& WithInstanceType(InstanceType value) {
    SetInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value is <code>windows</code> for Windows instances in an EC2 Fleet.
   * Otherwise, the value is blank.</p>
   */
  inline PlatformValues GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  inline void SetPlatform(PlatformValues value) {
    m_platformHasBeenSet = true;
    m_platform = value;
  }
  inline CreateFleetInstance& WithPlatform(PlatformValues value) {
    SetPlatform(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone in which the instance was launched. For
   * example, <code>use2-az1</code>.</p> <p>Supported only for fleets of type
   * <code>instant</code>.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  CreateFleetInstance& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Availability Zone in which the instance was launched. For
   * example, <code>us-east-2a</code>.</p> <p>Supported only for fleets of type
   * <code>instant</code>.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  CreateFleetInstance& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the subnet in which the instance was launched.</p> <p>Supported
   * only for fleets of type <code>instant</code>.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  CreateFleetInstance& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}
 private:
  LaunchTemplateAndOverridesResponse m_launchTemplateAndOverrides;

  InstanceLifecycle m_lifecycle{InstanceLifecycle::NOT_SET};

  Aws::Vector<Aws::String> m_instanceIds;

  InstanceType m_instanceType{InstanceType::NOT_SET};

  PlatformValues m_platform{PlatformValues::NOT_SET};

  Aws::String m_availabilityZoneId;

  Aws::String m_availabilityZone;

  Aws::String m_subnetId;
  bool m_launchTemplateAndOverridesHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_instanceIdsHasBeenSet = false;
  bool m_instanceTypeHasBeenSet = false;
  bool m_platformHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_subnetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
