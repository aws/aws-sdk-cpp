/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/DescribePlayerSessionsRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribePlayerSessionsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_gameSessionIdHasBeenSet) {
    mapSize++;
  }
  if (m_playerIdHasBeenSet) {
    mapSize++;
  }
  if (m_playerSessionIdHasBeenSet) {
    mapSize++;
  }
  if (m_playerSessionStatusFilterHasBeenSet) {
    mapSize++;
  }
  if (m_limitHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
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

  if (m_playerSessionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlayerSessionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_playerSessionId.c_str()));
  }

  if (m_playerSessionStatusFilterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PlayerSessionStatusFilter"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_playerSessionStatusFilter.c_str()));
  }

  if (m_limitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Limit"));
    (m_limit >= 0) ? encoder.WriteUInt(m_limit) : encoder.WriteNegInt(m_limit);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DescribePlayerSessionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
