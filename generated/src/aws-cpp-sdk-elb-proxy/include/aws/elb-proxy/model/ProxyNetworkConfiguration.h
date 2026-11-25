/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ProxyIpConfiguration.h>
#include <aws/elb-proxy/model/ProxyVpcConfiguration.h>

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
 * <p>The network configuration for a proxy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ProxyNetworkConfiguration">AWS
 * API Reference</a></p>
 */
class ProxyNetworkConfiguration {
 public:
  AWS_ELBPROXY_API ProxyNetworkConfiguration() = default;
  AWS_ELBPROXY_API ProxyNetworkConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API ProxyNetworkConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The IP configuration for the proxy.</p>
   */
  inline const ProxyIpConfiguration& GetIpConfiguration() const { return m_ipConfiguration; }
  inline bool IpConfigurationHasBeenSet() const { return m_ipConfigurationHasBeenSet; }
  template <typename IpConfigurationT = ProxyIpConfiguration>
  void SetIpConfiguration(IpConfigurationT&& value) {
    m_ipConfigurationHasBeenSet = true;
    m_ipConfiguration = std::forward<IpConfigurationT>(value);
  }
  template <typename IpConfigurationT = ProxyIpConfiguration>
  ProxyNetworkConfiguration& WithIpConfiguration(IpConfigurationT&& value) {
    SetIpConfiguration(std::forward<IpConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC configuration for the proxy.</p>
   */
  inline const ProxyVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
  inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
  template <typename VpcConfigurationT = ProxyVpcConfiguration>
  void SetVpcConfiguration(VpcConfigurationT&& value) {
    m_vpcConfigurationHasBeenSet = true;
    m_vpcConfiguration = std::forward<VpcConfigurationT>(value);
  }
  template <typename VpcConfigurationT = ProxyVpcConfiguration>
  ProxyNetworkConfiguration& WithVpcConfiguration(VpcConfigurationT&& value) {
    SetVpcConfiguration(std::forward<VpcConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ProxyIpConfiguration m_ipConfiguration;

  ProxyVpcConfiguration m_vpcConfiguration;
  bool m_ipConfigurationHasBeenSet = false;
  bool m_vpcConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
