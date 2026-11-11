/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/AssociateConnectionsToResiliencyGroupRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String AssociateConnectionsToResiliencyGroupRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_connectionIdentifiersHasBeenSet) {
    mapSize++;
  }
  if (m_resiliencyGroupIdHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_connectionIdentifiersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connectionIdentifiers"));
    encoder.WriteArrayStart(m_connectionIdentifiers.size());
    for (const auto& item_0 : m_connectionIdentifiers) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_resiliencyGroupIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resiliencyGroupId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resiliencyGroupId.c_str()));
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("clientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection AssociateConnectionsToResiliencyGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
