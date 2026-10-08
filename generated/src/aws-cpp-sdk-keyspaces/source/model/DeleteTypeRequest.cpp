/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/keyspaces/model/DeleteTypeRequest.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DeleteTypeRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_keyspaceNameHasBeenSet) {
    mapSize++;
  }
  if (m_typeNameHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_keyspaceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("keyspaceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_keyspaceName.c_str()));
  }

  if (m_typeNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("typeName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_typeName.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DeleteTypeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
