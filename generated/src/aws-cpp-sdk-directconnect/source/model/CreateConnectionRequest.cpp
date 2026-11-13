/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/CreateConnectionRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateConnectionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_locationHasBeenSet) {
    mapSize++;
  }
  if (m_bandwidthHasBeenSet) {
    mapSize++;
  }
  if (m_connectionNameHasBeenSet) {
    mapSize++;
  }
  if (m_lagIdHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
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

  if (m_locationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("location"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_location.c_str()));
  }

  if (m_bandwidthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("bandwidth"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_bandwidth.c_str()));
  }

  if (m_connectionNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connectionName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_connectionName.c_str()));
  }

  if (m_lagIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lagId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_lagId.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
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

Aws::Http::HeaderValueCollection CreateConnectionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
