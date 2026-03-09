/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamelift/model/GetPlayerConnectionDetailsRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetPlayerConnectionDetailsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_gameSessionIdHasBeenSet) {
    payload.WithString("GameSessionId", m_gameSessionId);
  }

  if (m_playerIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> playerIdsJsonList(m_playerIds.size());
    for (unsigned playerIdsIndex = 0; playerIdsIndex < playerIdsJsonList.GetLength(); ++playerIdsIndex) {
      playerIdsJsonList[playerIdsIndex].AsString(m_playerIds[playerIdsIndex]);
    }
    payload.WithArray("PlayerIds", std::move(playerIdsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetPlayerConnectionDetailsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.GetPlayerConnectionDetails"));
  return headers;
}
