/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/AllocateHostedConnectionRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String AllocateHostedConnectionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_connectionIdHasBeenSet) {
    mapSize++;
  }
  if (m_ownerAccountHasBeenSet) {
    mapSize++;
  }
  if (m_bandwidthHasBeenSet) {
    mapSize++;
  }
  if (m_connectionNameHasBeenSet) {
    mapSize++;
  }
  if (m_vlanHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_connectionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connectionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_connectionId.c_str()));
  }

  if (m_ownerAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ownerAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ownerAccount.c_str()));
  }

  if (m_bandwidthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("bandwidth"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_bandwidth.c_str()));
  }

  if (m_connectionNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connectionName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_connectionName.c_str()));
  }

  if (m_vlanHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("vlan"));
    (m_vlan >= 0) ? encoder.WriteUInt(m_vlan) : encoder.WriteNegInt(m_vlan);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection AllocateHostedConnectionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
