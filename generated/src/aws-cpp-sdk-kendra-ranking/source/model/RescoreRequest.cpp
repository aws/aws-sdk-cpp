/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/kendra-ranking/model/RescoreRequest.h>

#include <utility>

using namespace Aws::KendraRanking::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RescoreRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_rescoreExecutionPlanIdHasBeenSet) {
    mapSize++;
  }
  if (m_searchQueryHasBeenSet) {
    mapSize++;
  }
  if (m_documentsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_rescoreExecutionPlanIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RescoreExecutionPlanId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_rescoreExecutionPlanId.c_str()));
  }

  if (m_searchQueryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SearchQuery"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_searchQuery.c_str()));
  }

  if (m_documentsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Documents"));
    encoder.WriteArrayStart(m_documents.size());
    for (const auto& item_0 : m_documents) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RescoreRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
