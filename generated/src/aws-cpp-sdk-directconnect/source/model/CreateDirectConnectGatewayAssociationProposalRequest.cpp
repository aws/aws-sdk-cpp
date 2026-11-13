/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/CreateDirectConnectGatewayAssociationProposalRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateDirectConnectGatewayAssociationProposalRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_directConnectGatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_directConnectGatewayOwnerAccountHasBeenSet) {
    mapSize++;
  }
  if (m_gatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    mapSize++;
  }
  if (m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directConnectGatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("directConnectGatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directConnectGatewayId.c_str()));
  }

  if (m_directConnectGatewayOwnerAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("directConnectGatewayOwnerAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directConnectGatewayOwnerAccount.c_str()));
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

Aws::Http::HeaderValueCollection CreateDirectConnectGatewayAssociationProposalRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
