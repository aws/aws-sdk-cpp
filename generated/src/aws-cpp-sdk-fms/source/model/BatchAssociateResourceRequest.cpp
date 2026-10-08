/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/BatchAssociateResourceRequest.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String BatchAssociateResourceRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceSetIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_itemsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceSetIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceSetIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceSetIdentifier.c_str()));
  }

  if (m_itemsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Items"));
    encoder.WriteArrayStart(m_items.size());
    for (const auto& item_0 : m_items) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection BatchAssociateResourceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
