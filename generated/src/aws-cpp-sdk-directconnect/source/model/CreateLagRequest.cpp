/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/CreateLagRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateLagRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_numberOfConnectionsHasBeenSet) {
    mapSize++;
  }
  if (m_locationHasBeenSet) {
    mapSize++;
  }
  if (m_connectionsBandwidthHasBeenSet) {
    mapSize++;
  }
  if (m_lagNameHasBeenSet) {
    mapSize++;
  }
  if (m_connectionIdHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_childConnectionTagsHasBeenSet) {
    mapSize++;
  }
  if (m_providerNameHasBeenSet) {
    mapSize++;
  }
  if (m_requestMACSecHasBeenSet) {
    mapSize++;
  }
  if (m_billingModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_numberOfConnectionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("numberOfConnections"));
    (m_numberOfConnections >= 0) ? encoder.WriteUInt(m_numberOfConnections) : encoder.WriteNegInt(m_numberOfConnections);
  }

  if (m_locationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("location"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_location.c_str()));
  }

  if (m_connectionsBandwidthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connectionsBandwidth"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_connectionsBandwidth.c_str()));
  }

  if (m_lagNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lagName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_lagName.c_str()));
  }

  if (m_connectionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connectionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_connectionId.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_childConnectionTagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("childConnectionTags"));
    encoder.WriteArrayStart(m_childConnectionTags.size());
    for (const auto& item_0 : m_childConnectionTags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_providerNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("providerName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_providerName.c_str()));
  }

  if (m_requestMACSecHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("requestMACSec"));
    encoder.WriteBool(m_requestMACSec);
  }

  if (m_billingModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("billingMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RequestBillingModeMapper::GetNameForRequestBillingMode(m_billingMode).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateLagRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
