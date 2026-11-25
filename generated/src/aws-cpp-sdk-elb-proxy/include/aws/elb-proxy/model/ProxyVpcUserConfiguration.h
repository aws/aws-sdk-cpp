/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/SecurityGroupDetails.h>
#include <aws/elb-proxy/model/SubnetDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ELBProxy {
namespace Model {

/**
 * <p>The VPC configuration for a proxy, used by mutating operations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ProxyVpcUserConfiguration">AWS
 * API Reference</a></p>
 */
class ProxyVpcUserConfiguration {
 public:
  AWS_ELBPROXY_API ProxyVpcUserConfiguration() = default;
  AWS_ELBPROXY_API ProxyVpcUserConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API ProxyVpcUserConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The subnets used by the proxy.</p>
   */
  inline const Aws::Vector<SubnetDetails>& GetSubnets() const { return m_subnets; }
  inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
  template <typename SubnetsT = Aws::Vector<SubnetDetails>>
  void SetSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets = std::forward<SubnetsT>(value);
  }
  template <typename SubnetsT = Aws::Vector<SubnetDetails>>
  ProxyVpcUserConfiguration& WithSubnets(SubnetsT&& value) {
    SetSubnets(std::forward<SubnetsT>(value));
    return *this;
  }
  template <typename SubnetsT = SubnetDetails>
  ProxyVpcUserConfiguration& AddSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets.emplace_back(std::forward<SubnetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security groups used by the proxy.</p>
   */
  inline const Aws::Vector<SecurityGroupDetails>& GetSecurityGroups() const { return m_securityGroups; }
  inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
  template <typename SecurityGroupsT = Aws::Vector<SecurityGroupDetails>>
  void SetSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups = std::forward<SecurityGroupsT>(value);
  }
  template <typename SecurityGroupsT = Aws::Vector<SecurityGroupDetails>>
  ProxyVpcUserConfiguration& WithSecurityGroups(SecurityGroupsT&& value) {
    SetSecurityGroups(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  template <typename SecurityGroupsT = SecurityGroupDetails>
  ProxyVpcUserConfiguration& AddSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SubnetDetails> m_subnets;

  Aws::Vector<SecurityGroupDetails> m_securityGroups;
  bool m_subnetsHasBeenSet = false;
  bool m_securityGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
