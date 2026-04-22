/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/CreatePlayerSessionRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreatePlayerSessionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_gameSessionIdHasBeenSet) {
    mapSize++;
  }
  if (m_playerIdHasBeenSet) {
    mapSize++;
  }
  if (m_playerDataHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_gameSessionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSessionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameSessionId.c_str()));
  }

  if (m_playerIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlayerId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_playerId.c_str()));
  }

  if (m_playerDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlayerData"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_playerData.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreatePlayerSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
