/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ProxyIpv4Addressability.h>
#include <aws/elb-proxy/model/ProxyIpv6Addressability.h>

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
 * <p>The IP addressing configuration for a proxy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ProxyIpAddressingConfiguration">AWS
 * API Reference</a></p>
 */
class ProxyIpAddressingConfiguration {
 public:
  AWS_ELBPROXY_API ProxyIpAddressingConfiguration() = default;
  AWS_ELBPROXY_API ProxyIpAddressingConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API ProxyIpAddressingConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The IPv4 addressability setting for the proxy.</p>
   */
  inline ProxyIpv4Addressability GetIpv4Addressability() const { return m_ipv4Addressability; }
  inline bool Ipv4AddressabilityHasBeenSet() const { return m_ipv4AddressabilityHasBeenSet; }
  inline void SetIpv4Addressability(ProxyIpv4Addressability value) {
    m_ipv4AddressabilityHasBeenSet = true;
    m_ipv4Addressability = value;
  }
  inline ProxyIpAddressingConfiguration& WithIpv4Addressability(ProxyIpv4Addressability value) {
    SetIpv4Addressability(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv6 addressability setting for the proxy.</p>
   */
  inline ProxyIpv6Addressability GetIpv6Addressability() const { return m_ipv6Addressability; }
  inline bool Ipv6AddressabilityHasBeenSet() const { return m_ipv6AddressabilityHasBeenSet; }
  inline void SetIpv6Addressability(ProxyIpv6Addressability value) {
    m_ipv6AddressabilityHasBeenSet = true;
    m_ipv6Addressability = value;
  }
  inline ProxyIpAddressingConfiguration& WithIpv6Addressability(ProxyIpv6Addressability value) {
    SetIpv6Addressability(value);
    return *this;
  }
  ///@}
 private:
  ProxyIpv4Addressability m_ipv4Addressability{ProxyIpv4Addressability::NOT_SET};

  ProxyIpv6Addressability m_ipv6Addressability{ProxyIpv6Addressability::NOT_SET};
  bool m_ipv4AddressabilityHasBeenSet = false;
  bool m_ipv6AddressabilityHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
