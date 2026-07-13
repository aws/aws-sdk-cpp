/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Contains details about a VM instance involved in a finding.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Vm">AWS API
 * Reference</a></p>
 */
class Vm {
 public:
  AWS_INSPECTOR2_API Vm() = default;
  AWS_INSPECTOR2_API Vm(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Vm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the VM instance.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  Vm& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the VM instance.</p>
   */
  inline const Aws::String& GetVmName() const { return m_vmName; }
  inline bool VmNameHasBeenSet() const { return m_vmNameHasBeenSet; }
  template <typename VmNameT = Aws::String>
  void SetVmName(VmNameT&& value) {
    m_vmNameHasBeenSet = true;
    m_vmName = std::forward<VmNameT>(value);
  }
  template <typename VmNameT = Aws::String>
  Vm& WithVmName(VmNameT&& value) {
    SetVmName(std::forward<VmNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image reference of the VM instance.</p>
   */
  inline const Aws::String& GetVmImageReference() const { return m_vmImageReference; }
  inline bool VmImageReferenceHasBeenSet() const { return m_vmImageReferenceHasBeenSet; }
  template <typename VmImageReferenceT = Aws::String>
  void SetVmImageReference(VmImageReferenceT&& value) {
    m_vmImageReferenceHasBeenSet = true;
    m_vmImageReference = std::forward<VmImageReferenceT>(value);
  }
  template <typename VmImageReferenceT = Aws::String>
  Vm& WithVmImageReference(VmImageReferenceT&& value) {
    SetVmImageReference(std::forward<VmImageReferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 addresses of the VM instance.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIpV4Addresses() const { return m_ipV4Addresses; }
  inline bool IpV4AddressesHasBeenSet() const { return m_ipV4AddressesHasBeenSet; }
  template <typename IpV4AddressesT = Aws::Vector<Aws::String>>
  void SetIpV4Addresses(IpV4AddressesT&& value) {
    m_ipV4AddressesHasBeenSet = true;
    m_ipV4Addresses = std::forward<IpV4AddressesT>(value);
  }
  template <typename IpV4AddressesT = Aws::Vector<Aws::String>>
  Vm& WithIpV4Addresses(IpV4AddressesT&& value) {
    SetIpV4Addresses(std::forward<IpV4AddressesT>(value));
    return *this;
  }
  template <typename IpV4AddressesT = Aws::String>
  Vm& AddIpV4Addresses(IpV4AddressesT&& value) {
    m_ipV4AddressesHasBeenSet = true;
    m_ipV4Addresses.emplace_back(std::forward<IpV4AddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv6 addresses of the VM instance.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIpV6Addresses() const { return m_ipV6Addresses; }
  inline bool IpV6AddressesHasBeenSet() const { return m_ipV6AddressesHasBeenSet; }
  template <typename IpV6AddressesT = Aws::Vector<Aws::String>>
  void SetIpV6Addresses(IpV6AddressesT&& value) {
    m_ipV6AddressesHasBeenSet = true;
    m_ipV6Addresses = std::forward<IpV6AddressesT>(value);
  }
  template <typename IpV6AddressesT = Aws::Vector<Aws::String>>
  Vm& WithIpV6Addresses(IpV6AddressesT&& value) {
    SetIpV6Addresses(std::forward<IpV6AddressesT>(value));
    return *this;
  }
  template <typename IpV6AddressesT = Aws::String>
  Vm& AddIpV6Addresses(IpV6AddressesT&& value) {
    m_ipV6AddressesHasBeenSet = true;
    m_ipV6Addresses.emplace_back(std::forward<IpV6AddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network ID associated with the VM instance.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  Vm& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subnet IDs of the VM instance.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  Vm& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  Vm& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security group IDs associated with the VM instance.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  Vm& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  Vm& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the VM instance was launched.</p>
   */
  inline const Aws::Utils::DateTime& GetLaunchedAt() const { return m_launchedAt; }
  inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }
  template <typename LaunchedAtT = Aws::Utils::DateTime>
  void SetLaunchedAt(LaunchedAtT&& value) {
    m_launchedAtHasBeenSet = true;
    m_launchedAt = std::forward<LaunchedAtT>(value);
  }
  template <typename LaunchedAtT = Aws::Utils::DateTime>
  Vm& WithLaunchedAt(LaunchedAtT&& value) {
    SetLaunchedAt(std::forward<LaunchedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The platform of the VM instance.</p>
   */
  inline const Aws::String& GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  template <typename PlatformT = Aws::String>
  void SetPlatform(PlatformT&& value) {
    m_platformHasBeenSet = true;
    m_platform = std::forward<PlatformT>(value);
  }
  template <typename PlatformT = Aws::String>
  Vm& WithPlatform(PlatformT&& value) {
    SetPlatform(std::forward<PlatformT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution role of the VM instance.</p>
   */
  inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
  inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
  template <typename ExecutionRoleT = Aws::String>
  void SetExecutionRole(ExecutionRoleT&& value) {
    m_executionRoleHasBeenSet = true;
    m_executionRole = std::forward<ExecutionRoleT>(value);
  }
  template <typename ExecutionRoleT = Aws::String>
  Vm& WithExecutionRole(ExecutionRoleT&& value) {
    SetExecutionRole(std::forward<ExecutionRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key name associated with the VM instance.</p>
   */
  inline const Aws::String& GetKeyName() const { return m_keyName; }
  inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
  template <typename KeyNameT = Aws::String>
  void SetKeyName(KeyNameT&& value) {
    m_keyNameHasBeenSet = true;
    m_keyName = std::forward<KeyNameT>(value);
  }
  template <typename KeyNameT = Aws::String>
  Vm& WithKeyName(KeyNameT&& value) {
    SetKeyName(std::forward<KeyNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;

  Aws::String m_vmName;

  Aws::String m_vmImageReference;

  Aws::Vector<Aws::String> m_ipV4Addresses;

  Aws::Vector<Aws::String> m_ipV6Addresses;

  Aws::String m_networkId;

  Aws::Vector<Aws::String> m_subnetIds;

  Aws::Vector<Aws::String> m_securityGroupIds;

  Aws::Utils::DateTime m_launchedAt{};

  Aws::String m_platform;

  Aws::String m_executionRole;

  Aws::String m_keyName;
  bool m_typeHasBeenSet = false;
  bool m_vmNameHasBeenSet = false;
  bool m_vmImageReferenceHasBeenSet = false;
  bool m_ipV4AddressesHasBeenSet = false;
  bool m_ipV6AddressesHasBeenSet = false;
  bool m_networkIdHasBeenSet = false;
  bool m_subnetIdsHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_launchedAtHasBeenSet = false;
  bool m_platformHasBeenSet = false;
  bool m_executionRoleHasBeenSet = false;
  bool m_keyNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
