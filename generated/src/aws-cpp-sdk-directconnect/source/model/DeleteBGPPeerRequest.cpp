/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/DeleteBGPPeerRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DeleteBGPPeerRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_virtualInterfaceIdHasBeenSet) {
    mapSize++;
  }
  if (m_asnHasBeenSet) {
    mapSize++;
  }
  if (m_asnLongHasBeenSet) {
    mapSize++;
  }
  if (m_customerAddressHasBeenSet) {
    mapSize++;
  }
  if (m_bgpPeerIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_virtualInterfaceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("virtualInterfaceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_virtualInterfaceId.c_str()));
  }

  if (m_asnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("asn"));
    (m_asn >= 0) ? encoder.WriteUInt(m_asn) : encoder.WriteNegInt(m_asn);
  }

  if (m_asnLongHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("asnLong"));
    (m_asnLong >= 0) ? encoder.WriteUInt(m_asnLong) : encoder.WriteNegInt(m_asnLong);
  }

  if (m_customerAddressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("customerAddress"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_customerAddress.c_str()));
  }

  if (m_bgpPeerIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("bgpPeerId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_bgpPeerId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DeleteBGPPeerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
