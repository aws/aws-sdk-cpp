/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/UpdateGatewayInformationRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateGatewayInformationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_gatewayArnHasBeenSet) {
    mapSize++;
  }
  if (m_gatewayDisplayNameHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_gatewayArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GatewayArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gatewayArn.c_str()));
  }

  if (m_gatewayDisplayNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GatewayDisplayName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gatewayDisplayName.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateGatewayInformationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
