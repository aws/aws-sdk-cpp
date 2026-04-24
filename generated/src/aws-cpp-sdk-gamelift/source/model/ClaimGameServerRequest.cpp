/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/ClaimGameServerRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ClaimGameServerRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_gameServerGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_gameServerIdHasBeenSet) {
    mapSize++;
  }
  if (m_gameServerDataHasBeenSet) {
    mapSize++;
  }
  if (m_filterOptionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_gameServerGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameServerGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameServerGroupName.c_str()));
  }

  if (m_gameServerIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameServerId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameServerId.c_str()));
  }

  if (m_gameServerDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameServerData"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameServerData.c_str()));
  }

  if (m_filterOptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FilterOption"));
    m_filterOption.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ClaimGameServerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
