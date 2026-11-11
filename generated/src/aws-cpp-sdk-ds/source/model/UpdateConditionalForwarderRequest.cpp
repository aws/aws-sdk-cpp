/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/UpdateConditionalForwarderRequest.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateConditionalForwarderRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_remoteDomainNameHasBeenSet) {
    mapSize++;
  }
  if (m_dnsIpAddrsHasBeenSet) {
    mapSize++;
  }
  if (m_dnsIpv6AddrsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryId.c_str()));
  }

  if (m_remoteDomainNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RemoteDomainName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_remoteDomainName.c_str()));
  }

  if (m_dnsIpAddrsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DnsIpAddrs"));
    encoder.WriteArrayStart(m_dnsIpAddrs.size());
    for (const auto& item_0 : m_dnsIpAddrs) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_dnsIpv6AddrsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DnsIpv6Addrs"));
    encoder.WriteArrayStart(m_dnsIpv6Addrs.size());
    for (const auto& item_0 : m_dnsIpv6Addrs) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateConditionalForwarderRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
