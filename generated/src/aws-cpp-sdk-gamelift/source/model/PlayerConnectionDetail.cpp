/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamelift/model/PlayerConnectionDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

PlayerConnectionDetail::PlayerConnectionDetail(JsonView jsonValue) { *this = jsonValue; }

PlayerConnectionDetail& PlayerConnectionDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PlayerId")) {
    m_playerId = jsonValue.GetString("PlayerId");
    m_playerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Endpoints")) {
    Aws::Utils::Array<JsonView> endpointsJsonList = jsonValue.GetArray("Endpoints");
    for (unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex) {
      m_endpoints.push_back(endpointsJsonList[endpointsIndex].AsObject());
    }
    m_endpointsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PlayerGatewayToken")) {
    m_playerGatewayToken = jsonValue.GetString("PlayerGatewayToken");
    m_playerGatewayTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Expiration")) {
    m_expiration = jsonValue.GetDouble("Expiration");
    m_expirationHasBeenSet = true;
  }
  return *this;
}

JsonValue PlayerConnectionDetail::Jsonize() const {
  JsonValue payload;

  if (m_playerIdHasBeenSet) {
    payload.WithString("PlayerId", m_playerId);
  }

  if (m_endpointsHasBeenSet) {
    Aws::Utils::Array<JsonValue> endpointsJsonList(m_endpoints.size());
    for (unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex) {
      endpointsJsonList[endpointsIndex].AsObject(m_endpoints[endpointsIndex].Jsonize());
    }
    payload.WithArray("Endpoints", std::move(endpointsJsonList));
  }

  if (m_playerGatewayTokenHasBeenSet) {
    payload.WithString("PlayerGatewayToken", m_playerGatewayToken);
  }

  if (m_expirationHasBeenSet) {
    payload.WithDouble("Expiration", m_expiration.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
