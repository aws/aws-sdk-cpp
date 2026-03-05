/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamelift/model/PlayerConnectionEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

PlayerConnectionEndpoint::PlayerConnectionEndpoint(JsonView jsonValue) { *this = jsonValue; }

PlayerConnectionEndpoint& PlayerConnectionEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IpAddress")) {
    m_ipAddress = jsonValue.GetString("IpAddress");
    m_ipAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Port")) {
    m_port = jsonValue.GetInteger("Port");
    m_portHasBeenSet = true;
  }
  return *this;
}

JsonValue PlayerConnectionEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_ipAddressHasBeenSet) {
    payload.WithString("IpAddress", m_ipAddress);
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("Port", m_port);
  }

  return payload;
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
