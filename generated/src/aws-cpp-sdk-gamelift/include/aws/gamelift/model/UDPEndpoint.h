/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>The domain name and port information for a UDP endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UDPEndpoint">AWS
 * API Reference</a></p>
 */
class UDPEndpoint {
 public:
  AWS_GAMELIFT_API UDPEndpoint() = default;
  AWS_GAMELIFT_API UDPEndpoint(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API UDPEndpoint& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The domain name of the UDP endpoint.</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  UDPEndpoint& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number of the UDP endpoint. For Amazon GameLift Servers ping
   * beacons, this is typically port 7770.</p>
   */
  inline int64_t GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int64_t value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline UDPEndpoint& WithPort(int64_t value) {
    SetPort(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_domain;

  int64_t m_port{0};
  bool m_domainHasBeenSet = false;
  bool m_portHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
