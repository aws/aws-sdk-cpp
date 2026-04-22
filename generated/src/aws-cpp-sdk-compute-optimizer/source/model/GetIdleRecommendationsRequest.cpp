/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetIdleRecommendationsRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetIdleRecommendationsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceArnsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_filtersHasBeenSet) {
    mapSize++;
  }
  if (m_accountIdsHasBeenSet) {
    mapSize++;
  }
  if (m_orderByHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resourceArns"));
    encoder.WriteArrayStart(m_resourceArns.size());
    for (const auto& item_0 : m_resourceArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("nextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("maxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_filtersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("filters"));
    encoder.WriteArrayStart(m_filters.size());
    for (const auto& item_0 : m_filters) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_accountIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("accountIds"));
    encoder.WriteArrayStart(m_accountIds.size());
    for (const auto& item_0 : m_accountIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_orderByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("orderBy"));
    m_orderBy.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetIdleRecommendationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
