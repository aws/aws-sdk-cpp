/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/DeleteTrustRequest.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DeleteTrustRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_trustIdHasBeenSet) {
    mapSize++;
  }
  if (m_deleteAssociatedConditionalForwarderHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_trustIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrustId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_trustId.c_str()));
  }

  if (m_deleteAssociatedConditionalForwarderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeleteAssociatedConditionalForwarder"));
    encoder.WriteBool(m_deleteAssociatedConditionalForwarder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DeleteTrustRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
