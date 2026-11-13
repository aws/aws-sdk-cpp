/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/UpdateVirtualInterfaceAttributesRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateVirtualInterfaceAttributesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_virtualInterfaceIdHasBeenSet) {
    mapSize++;
  }
  if (m_mtuHasBeenSet) {
    mapSize++;
  }
  if (m_enableSiteLinkHasBeenSet) {
    mapSize++;
  }
  if (m_virtualInterfaceNameHasBeenSet) {
    mapSize++;
  }
  if (m_prefixPoolAllocatedCountIpv4HasBeenSet) {
    mapSize++;
  }
  if (m_prefixPoolAllocatedCountIpv6HasBeenSet) {
    mapSize++;
  }
  if (m_rateLimitHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_virtualInterfaceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("virtualInterfaceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_virtualInterfaceId.c_str()));
  }

  if (m_mtuHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("mtu"));
    (m_mtu >= 0) ? encoder.WriteUInt(m_mtu) : encoder.WriteNegInt(m_mtu);
  }

  if (m_enableSiteLinkHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("enableSiteLink"));
    encoder.WriteBool(m_enableSiteLink);
  }

  if (m_virtualInterfaceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("virtualInterfaceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_virtualInterfaceName.c_str()));
  }

  if (m_prefixPoolAllocatedCountIpv4HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("prefixPoolAllocatedCountIpv4"));
    (m_prefixPoolAllocatedCountIpv4 >= 0) ? encoder.WriteUInt(m_prefixPoolAllocatedCountIpv4)
                                          : encoder.WriteNegInt(m_prefixPoolAllocatedCountIpv4);
  }

  if (m_prefixPoolAllocatedCountIpv6HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("prefixPoolAllocatedCountIpv6"));
    (m_prefixPoolAllocatedCountIpv6 >= 0) ? encoder.WriteUInt(m_prefixPoolAllocatedCountIpv6)
                                          : encoder.WriteNegInt(m_prefixPoolAllocatedCountIpv6);
  }

  if (m_rateLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rateLimit"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_rateLimit.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateVirtualInterfaceAttributesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
