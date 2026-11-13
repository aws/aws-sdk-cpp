/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/CreateTrustRequest.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateTrustRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_remoteDomainNameHasBeenSet) {
    mapSize++;
  }
  if (m_trustPasswordHasBeenSet) {
    mapSize++;
  }
  if (m_trustDirectionHasBeenSet) {
    mapSize++;
  }
  if (m_trustTypeHasBeenSet) {
    mapSize++;
  }
  if (m_conditionalForwarderIpAddrsHasBeenSet) {
    mapSize++;
  }
  if (m_conditionalForwarderIpv6AddrsHasBeenSet) {
    mapSize++;
  }
  if (m_selectiveAuthHasBeenSet) {
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

  if (m_trustPasswordHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrustPassword"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_trustPassword.c_str()));
  }

  if (m_trustDirectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrustDirection"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TrustDirectionMapper::GetNameForTrustDirection(m_trustDirection).c_str()));
  }

  if (m_trustTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrustType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TrustTypeMapper::GetNameForTrustType(m_trustType).c_str()));
  }

  if (m_conditionalForwarderIpAddrsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConditionalForwarderIpAddrs"));
    encoder.WriteArrayStart(m_conditionalForwarderIpAddrs.size());
    for (const auto& item_0 : m_conditionalForwarderIpAddrs) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_conditionalForwarderIpv6AddrsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConditionalForwarderIpv6Addrs"));
    encoder.WriteArrayStart(m_conditionalForwarderIpv6Addrs.size());
    for (const auto& item_0 : m_conditionalForwarderIpv6Addrs) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_selectiveAuthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SelectiveAuth"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SelectiveAuthMapper::GetNameForSelectiveAuth(m_selectiveAuth).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateTrustRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
