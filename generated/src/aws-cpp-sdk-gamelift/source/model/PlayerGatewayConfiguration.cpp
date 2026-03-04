/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamelift/model/PlayerGatewayConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

PlayerGatewayConfiguration::PlayerGatewayConfiguration(JsonView jsonValue) { *this = jsonValue; }

PlayerGatewayConfiguration& PlayerGatewayConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GameServerIpProtocolSupported")) {
    m_gameServerIpProtocolSupported =
        GameServerIpProtocolSupportedMapper::GetGameServerIpProtocolSupportedForName(jsonValue.GetString("GameServerIpProtocolSupported"));
    m_gameServerIpProtocolSupportedHasBeenSet = true;
  }
  return *this;
}

JsonValue PlayerGatewayConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_gameServerIpProtocolSupportedHasBeenSet) {
    payload.WithString("GameServerIpProtocolSupported",
                       GameServerIpProtocolSupportedMapper::GetNameForGameServerIpProtocolSupported(m_gameServerIpProtocolSupported));
  }

  return payload;
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
