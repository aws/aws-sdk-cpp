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
 * <p>Describes a mapping between a container port and a connection port on a fleet
 * instance. You define container ports in a container group definition. Amazon
 * GameLift Servers assigns connection ports when it deploys the container group to
 * an instance.</p> <p> <b>Part of:</b> <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ContainerGroupPortMapping.html">ContainerGroupPortMapping</a>
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerPortMapping">AWS
 * API Reference</a></p>
 */
class ContainerPortMapping {
 public:
  AWS_GAMELIFT_API ContainerPortMapping() = default;
  AWS_GAMELIFT_API ContainerPortMapping(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API ContainerPortMapping& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The port number on the container. This port is defined in the container group
   * definition. Container port numbers must be unique within a container group
   * definition.</p>
   */
  inline int64_t GetContainerPort() const { return m_containerPort; }
  inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }
  inline void SetContainerPort(int64_t value) {
    m_containerPortHasBeenSet = true;
    m_containerPort = value;
  }
  inline ContainerPortMapping& WithContainerPort(int64_t value) {
    SetContainerPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number on the fleet instance that maps to the container port.
   * Connection ports are assigned by Amazon GameLift Servers when the container
   * group is deployed to an instance.</p>
   */
  inline int64_t GetConnectionPort() const { return m_connectionPort; }
  inline bool ConnectionPortHasBeenSet() const { return m_connectionPortHasBeenSet; }
  inline void SetConnectionPort(int64_t value) {
    m_connectionPortHasBeenSet = true;
    m_connectionPort = value;
  }
  inline ContainerPortMapping& WithConnectionPort(int64_t value) {
    SetConnectionPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network protocol for the port mapping. Valid values are <code>TCP</code>
   * or <code>UDP</code>.</p>
   */
  inline IpProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(IpProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline ContainerPortMapping& WithProtocol(IpProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_containerPort{0};

  int64_t m_connectionPort{0};

  IpProtocol m_protocol{IpProtocol::NOT_SET};
  bool m_containerPortHasBeenSet = false;
  bool m_connectionPortHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
