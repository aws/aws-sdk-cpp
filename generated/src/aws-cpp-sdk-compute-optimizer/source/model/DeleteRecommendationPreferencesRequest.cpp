/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/DeleteRecommendationPreferencesRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DeleteRecommendationPreferencesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_scopeHasBeenSet) {
    mapSize++;
  }
  if (m_recommendationPreferenceNamesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resourceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ResourceTypeMapper::GetNameForResourceType(m_resourceType).c_str()));
  }

  if (m_scopeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("scope"));
    m_scope.CborEncode(encoder);
  }

  if (m_recommendationPreferenceNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("recommendationPreferenceNames"));
    encoder.WriteArrayStart(m_recommendationPreferenceNames.size());
    for (const auto& item_0 : m_recommendationPreferenceNames) {
      encoder.WriteText(
          Aws::Crt::ByteCursorFromCString(RecommendationPreferenceNameMapper::GetNameForRecommendationPreferenceName(item_0).c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DeleteRecommendationPreferencesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
