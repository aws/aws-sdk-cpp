/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/AcceptMatchRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String AcceptMatchRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_ticketIdHasBeenSet) {
    mapSize++;
  }
  if (m_playerIdsHasBeenSet) {
    mapSize++;
  }
  if (m_acceptanceTypeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ticketIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TicketId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ticketId.c_str()));
  }

  if (m_playerIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlayerIds"));
    encoder.WriteArrayStart(m_playerIds.size());
    for (const auto& item_0 : m_playerIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_acceptanceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptanceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AcceptanceTypeMapper::GetNameForAcceptanceType(m_acceptanceType).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection AcceptMatchRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
