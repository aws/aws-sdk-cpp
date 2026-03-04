/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>Network address(es) and port(s) for connecting to a game session.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PlayerConnectionEndpoint">AWS
 * API Reference</a></p>
 */
class PlayerConnectionEndpoint {
 public:
  AWS_GAMELIFT_API PlayerConnectionEndpoint() = default;
  AWS_GAMELIFT_API PlayerConnectionEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFT_API PlayerConnectionEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>IP address for connecting to the game session. When player gateway is
   * enabled, this is a player gateway IP address. When player gateway is disabled,
   * this is the game server IP address.</p>
   */
  inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
  inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
  template <typename IpAddressT = Aws::String>
  void SetIpAddress(IpAddressT&& value) {
    m_ipAddressHasBeenSet = true;
    m_ipAddress = std::forward<IpAddressT>(value);
  }
  template <typename IpAddressT = Aws::String>
  PlayerConnectionEndpoint& WithIpAddress(IpAddressT&& value) {
    SetIpAddress(std::forward<IpAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Port number for connecting to the game session. When player gateway is
   * enabled, this is a player gateway port. When player gateway is disabled, this is
   * the game server port.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline PlayerConnectionEndpoint& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_ipAddress;

  int m_port{0};
  bool m_ipAddressHasBeenSet = false;
  bool m_portHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
