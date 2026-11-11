/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/UpdateDirectConnectGatewayAssociationRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateDirectConnectGatewayAssociationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_associationIdHasBeenSet) {
    mapSize++;
  }
  if (m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    mapSize++;
  }
  if (m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_associationIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("associationId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_associationId.c_str()));
  }

  if (m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("addAllowedPrefixesToDirectConnectGateway"));
    encoder.WriteArrayStart(m_addAllowedPrefixesToDirectConnectGateway.size());
    for (const auto& item_0 : m_addAllowedPrefixesToDirectConnectGateway) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("removeAllowedPrefixesToDirectConnectGateway"));
    encoder.WriteArrayStart(m_removeAllowedPrefixesToDirectConnectGateway.size());
    for (const auto& item_0 : m_removeAllowedPrefixesToDirectConnectGateway) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateDirectConnectGatewayAssociationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
