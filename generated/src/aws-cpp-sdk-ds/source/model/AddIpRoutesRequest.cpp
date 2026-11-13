/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/AddIpRoutesRequest.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String AddIpRoutesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_ipRoutesHasBeenSet) {
    mapSize++;
  }
  if (m_updateSecurityGroupForDirectoryControllersHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryId.c_str()));
  }

  if (m_ipRoutesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IpRoutes"));
    encoder.WriteArrayStart(m_ipRoutes.size());
    for (const auto& item_0 : m_ipRoutes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_updateSecurityGroupForDirectoryControllersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateSecurityGroupForDirectoryControllers"));
    encoder.WriteBool(m_updateSecurityGroupForDirectoryControllers);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection AddIpRoutesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
