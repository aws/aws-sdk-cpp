/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/CreateGatewayRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateGatewayRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_activationKeyHasBeenSet) {
    mapSize++;
  }
  if (m_gatewayDisplayNameHasBeenSet) {
    mapSize++;
  }
  if (m_gatewayTypeHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_activationKeyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActivationKey"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_activationKey.c_str()));
  }

  if (m_gatewayDisplayNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GatewayDisplayName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gatewayDisplayName.c_str()));
  }

  if (m_gatewayTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GatewayType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(GatewayTypeMapper::GetNameForGatewayType(m_gatewayType).c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateGatewayRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
