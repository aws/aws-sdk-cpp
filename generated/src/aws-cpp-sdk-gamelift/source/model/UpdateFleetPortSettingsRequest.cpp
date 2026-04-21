/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/UpdateFleetPortSettingsRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateFleetPortSettingsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_fleetIdHasBeenSet) {
    mapSize++;
  }
  if (m_inboundPermissionAuthorizationsHasBeenSet) {
    mapSize++;
  }
  if (m_inboundPermissionRevocationsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_fleetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FleetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fleetId.c_str()));
  }

  if (m_inboundPermissionAuthorizationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InboundPermissionAuthorizations"));
    encoder.WriteArrayStart(m_inboundPermissionAuthorizations.size());
    for (const auto& item_0 : m_inboundPermissionAuthorizations) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_inboundPermissionRevocationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InboundPermissionRevocations"));
    encoder.WriteArrayStart(m_inboundPermissionRevocations.size());
    for (const auto& item_0 : m_inboundPermissionRevocations) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateFleetPortSettingsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
