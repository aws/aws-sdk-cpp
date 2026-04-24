/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/StartGameSessionPlacementRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartGameSessionPlacementRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_placementIdHasBeenSet) {
    mapSize++;
  }
  if (m_gameSessionQueueNameHasBeenSet) {
    mapSize++;
  }
  if (m_gamePropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_maximumPlayerSessionCountHasBeenSet) {
    mapSize++;
  }
  if (m_gameSessionNameHasBeenSet) {
    mapSize++;
  }
  if (m_playerLatenciesHasBeenSet) {
    mapSize++;
  }
  if (m_desiredPlayerSessionsHasBeenSet) {
    mapSize++;
  }
  if (m_gameSessionDataHasBeenSet) {
    mapSize++;
  }
  if (m_priorityConfigurationOverrideHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_placementIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlacementId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_placementId.c_str()));
  }

  if (m_gameSessionQueueNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSessionQueueName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameSessionQueueName.c_str()));
  }

  if (m_gamePropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameProperties"));
    encoder.WriteArrayStart(m_gameProperties.size());
    for (const auto& item_0 : m_gameProperties) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_maximumPlayerSessionCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaximumPlayerSessionCount"));
    (m_maximumPlayerSessionCount >= 0) ? encoder.WriteUInt(m_maximumPlayerSessionCount) : encoder.WriteNegInt(m_maximumPlayerSessionCount);
  }

  if (m_gameSessionNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSessionName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameSessionName.c_str()));
  }

  if (m_playerLatenciesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlayerLatencies"));
    encoder.WriteArrayStart(m_playerLatencies.size());
    for (const auto& item_0 : m_playerLatencies) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_desiredPlayerSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DesiredPlayerSessions"));
    encoder.WriteArrayStart(m_desiredPlayerSessions.size());
    for (const auto& item_0 : m_desiredPlayerSessions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_gameSessionDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSessionData"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameSessionData.c_str()));
  }

  if (m_priorityConfigurationOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PriorityConfigurationOverride"));
    m_priorityConfigurationOverride.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection StartGameSessionPlacementRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
