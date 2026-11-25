/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ProxyIpAddressingConfiguration.h>

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
 * <p>The IP configuration for a proxy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ProxyIpConfiguration">AWS
 * API Reference</a></p>
 */
class ProxyIpConfiguration {
 public:
  AWS_ELBPROXY_API ProxyIpConfiguration() = default;
  AWS_ELBPROXY_API ProxyIpConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API ProxyIpConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The IP addressing configuration for the proxy.</p>
   */
  inline const ProxyIpAddressingConfiguration& GetIpAddressingConfiguration() const { return m_ipAddressingConfiguration; }
  inline bool IpAddressingConfigurationHasBeenSet() const { return m_ipAddressingConfigurationHasBeenSet; }
  template <typename IpAddressingConfigurationT = ProxyIpAddressingConfiguration>
  void SetIpAddressingConfiguration(IpAddressingConfigurationT&& value) {
    m_ipAddressingConfigurationHasBeenSet = true;
    m_ipAddressingConfiguration = std::forward<IpAddressingConfigurationT>(value);
  }
  template <typename IpAddressingConfigurationT = ProxyIpAddressingConfiguration>
  ProxyIpConfiguration& WithIpAddressingConfiguration(IpAddressingConfigurationT&& value) {
    SetIpAddressingConfiguration(std::forward<IpAddressingConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ProxyIpAddressingConfiguration m_ipAddressingConfiguration;
  bool m_ipAddressingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
