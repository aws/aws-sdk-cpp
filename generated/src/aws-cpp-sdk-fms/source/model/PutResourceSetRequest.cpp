/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/PutResourceSetRequest.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutResourceSetRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceSetHasBeenSet) {
    mapSize++;
  }
  if (m_tagListHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceSetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceSet"));
    m_resourceSet.CborEncode(encoder);
  }

  if (m_tagListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TagList"));
    encoder.WriteArrayStart(m_tagList.size());
    for (const auto& item_0 : m_tagList) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutResourceSetRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
