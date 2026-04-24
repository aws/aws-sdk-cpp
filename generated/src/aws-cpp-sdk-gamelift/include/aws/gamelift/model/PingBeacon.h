/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/UDPEndpoint.h>

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
 * <p>Information about a UDP ping beacon that can be used to measure network
 * latency between a player device and an Amazon GameLift Servers hosting
 * location.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PingBeacon">AWS
 * API Reference</a></p>
 */
class PingBeacon {
 public:
  AWS_GAMELIFT_API PingBeacon() = default;
  AWS_GAMELIFT_API PingBeacon(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API PingBeacon& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The domain name and port of the UDP ping beacon. Your game client can send
   * UDP messages to this endpoint and receive responses to measure network
   * latency.</p>
   */
  inline const UDPEndpoint& GetUDPEndpoint() const { return m_uDPEndpoint; }
  inline bool UDPEndpointHasBeenSet() const { return m_uDPEndpointHasBeenSet; }
  template <typename UDPEndpointT = UDPEndpoint>
  void SetUDPEndpoint(UDPEndpointT&& value) {
    m_uDPEndpointHasBeenSet = true;
    m_uDPEndpoint = std::forward<UDPEndpointT>(value);
  }
  template <typename UDPEndpointT = UDPEndpoint>
  PingBeacon& WithUDPEndpoint(UDPEndpointT&& value) {
    SetUDPEndpoint(std::forward<UDPEndpointT>(value));
    return *this;
  }
  ///@}
 private:
  UDPEndpoint m_uDPEndpoint;
  bool m_uDPEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
