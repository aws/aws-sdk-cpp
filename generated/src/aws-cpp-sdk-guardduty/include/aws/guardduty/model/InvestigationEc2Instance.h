/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains details about an Amazon EC2 instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationEc2Instance">AWS
 * API Reference</a></p>
 */
class InvestigationEc2Instance {
 public:
  AWS_GUARDDUTY_API InvestigationEc2Instance() = default;
  AWS_GUARDDUTY_API InvestigationEc2Instance(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationEc2Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  InvestigationEc2Instance& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance type.</p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  InvestigationEc2Instance& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the instance.</p>
   */
  inline const Aws::String& GetInstanceState() const { return m_instanceState; }
  inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }
  template <typename InstanceStateT = Aws::String>
  void SetInstanceState(InstanceStateT&& value) {
    m_instanceStateHasBeenSet = true;
    m_instanceState = std::forward<InstanceStateT>(value);
  }
  template <typename InstanceStateT = Aws::String>
  InvestigationEc2Instance& WithInstanceState(InstanceStateT&& value) {
    SetInstanceState(std::forward<InstanceStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone of the instance.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  InvestigationEc2Instance& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private IP address of the instance.</p>
   */
  inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
  inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
  template <typename PrivateIpAddressT = Aws::String>
  void SetPrivateIpAddress(PrivateIpAddressT&& value) {
    m_privateIpAddressHasBeenSet = true;
    m_privateIpAddress = std::forward<PrivateIpAddressT>(value);
  }
  template <typename PrivateIpAddressT = Aws::String>
  InvestigationEc2Instance& WithPrivateIpAddress(PrivateIpAddressT&& value) {
    SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The public IP address of the instance.</p>
   */
  inline const Aws::String& GetPublicIp() const { return m_publicIp; }
  inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
  template <typename PublicIpT = Aws::String>
  void SetPublicIp(PublicIpT&& value) {
    m_publicIpHasBeenSet = true;
    m_publicIp = std::forward<PublicIpT>(value);
  }
  template <typename PublicIpT = Aws::String>
  InvestigationEc2Instance& WithPublicIp(PublicIpT&& value) {
    SetPublicIp(std::forward<PublicIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC in which the instance runs.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  InvestigationEc2Instance& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the subnet in which the instance runs.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  InvestigationEc2Instance& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Machine Image (AMI) that was used to launch the
   * instance.</p>
   */
  inline const Aws::String& GetImageId() const { return m_imageId; }
  inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
  template <typename ImageIdT = Aws::String>
  void SetImageId(ImageIdT&& value) {
    m_imageIdHasBeenSet = true;
    m_imageId = std::forward<ImageIdT>(value);
  }
  template <typename ImageIdT = Aws::String>
  InvestigationEc2Instance& WithImageId(ImageIdT&& value) {
    SetImageId(std::forward<ImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the instance was launched.</p>
   */
  inline const Aws::Utils::DateTime& GetLaunchedAt() const { return m_launchedAt; }
  inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }
  template <typename LaunchedAtT = Aws::Utils::DateTime>
  void SetLaunchedAt(LaunchedAtT&& value) {
    m_launchedAtHasBeenSet = true;
    m_launchedAt = std::forward<LaunchedAtT>(value);
  }
  template <typename LaunchedAtT = Aws::Utils::DateTime>
  InvestigationEc2Instance& WithLaunchedAt(LaunchedAtT&& value) {
    SetLaunchedAt(std::forward<LaunchedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_instanceType;

  Aws::String m_instanceState;

  Aws::String m_availabilityZone;

  Aws::String m_privateIpAddress;

  Aws::String m_publicIp;

  Aws::String m_vpcId;

  Aws::String m_subnetId;

  Aws::String m_imageId;

  Aws::Utils::DateTime m_launchedAt{};
  bool m_instanceIdHasBeenSet = false;
  bool m_instanceTypeHasBeenSet = false;
  bool m_instanceStateHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_privateIpAddressHasBeenSet = false;
  bool m_publicIpHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_subnetIdHasBeenSet = false;
  bool m_imageIdHasBeenSet = false;
  bool m_launchedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
