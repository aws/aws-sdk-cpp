/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/CreateGameSessionRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateGameSessionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_fleetIdHasBeenSet) {
    mapSize++;
  }
  if (m_aliasIdHasBeenSet) {
    mapSize++;
  }
  if (m_maximumPlayerSessionCountHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_gamePropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_creatorIdHasBeenSet) {
    mapSize++;
  }
  if (m_gameSessionIdHasBeenSet) {
    mapSize++;
  }
  if (m_idempotencyTokenHasBeenSet) {
    mapSize++;
  }
  if (m_gameSessionDataHasBeenSet) {
    mapSize++;
  }
  if (m_locationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_fleetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FleetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fleetId.c_str()));
  }

  if (m_aliasIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AliasId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_aliasId.c_str()));
  }

  if (m_maximumPlayerSessionCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaximumPlayerSessionCount"));
    (m_maximumPlayerSessionCount >= 0) ? encoder.WriteUInt(m_maximumPlayerSessionCount) : encoder.WriteNegInt(m_maximumPlayerSessionCount);
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_gamePropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameProperties"));
    encoder.WriteArrayStart(m_gameProperties.size());
    for (const auto& item_0 : m_gameProperties) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_creatorIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreatorId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_creatorId.c_str()));
  }

  if (m_gameSessionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSessionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameSessionId.c_str()));
  }

  if (m_idempotencyTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdempotencyToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idempotencyToken.c_str()));
  }

  if (m_gameSessionDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSessionData"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameSessionData.c_str()));
  }

  if (m_locationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Location"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_location.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateGameSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
