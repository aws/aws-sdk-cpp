/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/IpAddressType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Configuration for a service-managed Private Connection.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ServiceManagedInput">AWS
 * API Reference</a></p>
 */
class ServiceManagedInput {
 public:
  AWS_DEVOPSAGENT_API ServiceManagedInput() = default;
  AWS_DEVOPSAGENT_API ServiceManagedInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ServiceManagedInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>IP address or DNS name of the target resource.</p>
   */
  inline const Aws::String& GetHostAddress() const { return m_hostAddress; }
  inline bool HostAddressHasBeenSet() const { return m_hostAddressHasBeenSet; }
  template <typename HostAddressT = Aws::String>
  void SetHostAddress(HostAddressT&& value) {
    m_hostAddressHasBeenSet = true;
    m_hostAddress = std::forward<HostAddressT>(value);
  }
  template <typename HostAddressT = Aws::String>
  ServiceManagedInput& WithHostAddress(HostAddressT&& value) {
    SetHostAddress(std::forward<HostAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>VPC to create the service-managed Resource Gateway in.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  ServiceManagedInput& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Subnets that the service-managed Resource Gateway will span.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  ServiceManagedInput& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  ServiceManagedInput& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Security groups to attach to the service-managed Resource Gateway. If not
   * specified, a default security group is created.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  ServiceManagedInput& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  ServiceManagedInput& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IP address type of the service-managed Resource Gateway.</p>
   */
  inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(IpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline ServiceManagedInput& WithIpAddressType(IpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of IPv4 addresses in each ENI for the service-managed Resource
   * Gateway.</p>
   */
  inline int GetIpv4AddressesPerEni() const { return m_ipv4AddressesPerEni; }
  inline bool Ipv4AddressesPerEniHasBeenSet() const { return m_ipv4AddressesPerEniHasBeenSet; }
  inline void SetIpv4AddressesPerEni(int value) {
    m_ipv4AddressesPerEniHasBeenSet = true;
    m_ipv4AddressesPerEni = value;
  }
  inline ServiceManagedInput& WithIpv4AddressesPerEni(int value) {
    SetIpv4AddressesPerEni(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>TCP port ranges that a consumer can use to access the resource.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPortRanges() const { return m_portRanges; }
  inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
  template <typename PortRangesT = Aws::Vector<Aws::String>>
  void SetPortRanges(PortRangesT&& value) {
    m_portRangesHasBeenSet = true;
    m_portRanges = std::forward<PortRangesT>(value);
  }
  template <typename PortRangesT = Aws::Vector<Aws::String>>
  ServiceManagedInput& WithPortRanges(PortRangesT&& value) {
    SetPortRanges(std::forward<PortRangesT>(value));
    return *this;
  }
  template <typename PortRangesT = Aws::String>
  ServiceManagedInput& AddPortRanges(PortRangesT&& value) {
    m_portRangesHasBeenSet = true;
    m_portRanges.emplace_back(std::forward<PortRangesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Certificate for the Private Connection.</p>
   */
  inline const Aws::String& GetCertificate() const { return m_certificate; }
  inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
  template <typename CertificateT = Aws::String>
  void SetCertificate(CertificateT&& value) {
    m_certificateHasBeenSet = true;
    m_certificate = std::forward<CertificateT>(value);
  }
  template <typename CertificateT = Aws::String>
  ServiceManagedInput& WithCertificate(CertificateT&& value) {
    SetCertificate(std::forward<CertificateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostAddress;

  Aws::String m_vpcId;

  Aws::Vector<Aws::String> m_subnetIds;

  Aws::Vector<Aws::String> m_securityGroupIds;

  IpAddressType m_ipAddressType{IpAddressType::NOT_SET};

  int m_ipv4AddressesPerEni{0};

  Aws::Vector<Aws::String> m_portRanges;

  Aws::String m_certificate;
  bool m_hostAddressHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_subnetIdsHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_ipAddressTypeHasBeenSet = false;
  bool m_ipv4AddressesPerEniHasBeenSet = false;
  bool m_portRangesHasBeenSet = false;
  bool m_certificateHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
