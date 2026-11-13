/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/CreateDirectConnectGatewayAssociationRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateDirectConnectGatewayAssociationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_directConnectGatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_gatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    mapSize++;
  }
  if (m_virtualGatewayIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directConnectGatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("directConnectGatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directConnectGatewayId.c_str()));
  }

  if (m_gatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("gatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gatewayId.c_str()));
  }

  if (m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("addAllowedPrefixesToDirectConnectGateway"));
    encoder.WriteArrayStart(m_addAllowedPrefixesToDirectConnectGateway.size());
    for (const auto& item_0 : m_addAllowedPrefixesToDirectConnectGateway) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_virtualGatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("virtualGatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_virtualGatewayId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateDirectConnectGatewayAssociationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
