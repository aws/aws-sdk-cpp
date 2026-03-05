/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameServerIpProtocolSupported.h>

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
 * <p>Configuration settings for player gateway. Use these settings to specify
 * advanced options for how player gateway handles connections.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PlayerGatewayConfiguration">AWS
 * API Reference</a></p>
 */
class PlayerGatewayConfiguration {
 public:
  AWS_GAMELIFT_API PlayerGatewayConfiguration() = default;
  AWS_GAMELIFT_API PlayerGatewayConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFT_API PlayerGatewayConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IP protocol that your game servers support for player connections through
   * player gateway. If the value is set to <code>IPv4</code>, GameLift will install
   * and execute a lightweight IP translation software on fleet instances to receive
   * and transform incoming IPv6 traffic to IPv4. If the value is set to
   * <code>DUAL_STACK</code>, the lightweight IP translation software will not be
   * installed on fleet instances. <code>DUAL_STACK</code> provides slightly better
   * performance than <code>IPv4</code>.</p>
   */
  inline GameServerIpProtocolSupported GetGameServerIpProtocolSupported() const { return m_gameServerIpProtocolSupported; }
  inline bool GameServerIpProtocolSupportedHasBeenSet() const { return m_gameServerIpProtocolSupportedHasBeenSet; }
  inline void SetGameServerIpProtocolSupported(GameServerIpProtocolSupported value) {
    m_gameServerIpProtocolSupportedHasBeenSet = true;
    m_gameServerIpProtocolSupported = value;
  }
  inline PlayerGatewayConfiguration& WithGameServerIpProtocolSupported(GameServerIpProtocolSupported value) {
    SetGameServerIpProtocolSupported(value);
    return *this;
  }
  ///@}
 private:
  GameServerIpProtocolSupported m_gameServerIpProtocolSupported{GameServerIpProtocolSupported::NOT_SET};
  bool m_gameServerIpProtocolSupportedHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
