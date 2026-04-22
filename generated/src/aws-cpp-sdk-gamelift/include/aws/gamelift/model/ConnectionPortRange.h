/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>The set of port numbers to open on each instance in a container fleet.
 * Connection ports are used by inbound traffic to connect with processes that are
 * running in containers on the fleet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ConnectionPortRange">AWS
 * API Reference</a></p>
 */
class ConnectionPortRange {
 public:
  AWS_GAMELIFT_API ConnectionPortRange() = default;
  AWS_GAMELIFT_API ConnectionPortRange(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API ConnectionPortRange& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Starting value for the port range.</p>
   */
  inline int64_t GetFromPort() const { return m_fromPort; }
  inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
  inline void SetFromPort(int64_t value) {
    m_fromPortHasBeenSet = true;
    m_fromPort = value;
  }
  inline ConnectionPortRange& WithFromPort(int64_t value) {
    SetFromPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ending value for the port. Port numbers are end-inclusive. This value must be
   * equal to or greater than <code>FromPort</code>.</p>
   */
  inline int64_t GetToPort() const { return m_toPort; }
  inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
  inline void SetToPort(int64_t value) {
    m_toPortHasBeenSet = true;
    m_toPort = value;
  }
  inline ConnectionPortRange& WithToPort(int64_t value) {
    SetToPort(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_fromPort{0};

  int64_t m_toPort{0};
  bool m_fromPortHasBeenSet = false;
  bool m_toPortHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
