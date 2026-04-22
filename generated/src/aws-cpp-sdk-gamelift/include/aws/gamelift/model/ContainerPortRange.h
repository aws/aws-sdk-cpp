/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/IpProtocol.h>

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
 * <p>A set of one or more port numbers that can be opened on the container, and
 * the supported network protocol. </p> <p> <b>Part of:</b> <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ContainerPortConfiguration.html">ContainerPortConfiguration</a>
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerPortRange">AWS
 * API Reference</a></p>
 */
class ContainerPortRange {
 public:
  AWS_GAMELIFT_API ContainerPortRange() = default;
  AWS_GAMELIFT_API ContainerPortRange(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API ContainerPortRange& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A starting value for the range of allowed port numbers.</p>
   */
  inline int64_t GetFromPort() const { return m_fromPort; }
  inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
  inline void SetFromPort(int64_t value) {
    m_fromPortHasBeenSet = true;
    m_fromPort = value;
  }
  inline ContainerPortRange& WithFromPort(int64_t value) {
    SetFromPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ending value for the range of allowed port numbers. Port numbers are
   * end-inclusive. This value must be equal to or greater than
   * <code>FromPort</code>.</p>
   */
  inline int64_t GetToPort() const { return m_toPort; }
  inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
  inline void SetToPort(int64_t value) {
    m_toPortHasBeenSet = true;
    m_toPort = value;
  }
  inline ContainerPortRange& WithToPort(int64_t value) {
    SetToPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network protocol that these ports support. </p>
   */
  inline IpProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(IpProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline ContainerPortRange& WithProtocol(IpProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_fromPort{0};

  int64_t m_toPort{0};

  IpProtocol m_protocol{IpProtocol::NOT_SET};
  bool m_fromPortHasBeenSet = false;
  bool m_toPortHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
