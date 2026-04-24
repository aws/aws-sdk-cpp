/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/PutRecommendationPreferencesRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutRecommendationPreferencesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_scopeHasBeenSet) {
    mapSize++;
  }
  if (m_enhancedInfrastructureMetricsHasBeenSet) {
    mapSize++;
  }
  if (m_inferredWorkloadTypesHasBeenSet) {
    mapSize++;
  }
  if (m_externalMetricsPreferenceHasBeenSet) {
    mapSize++;
  }
  if (m_lookBackPeriodHasBeenSet) {
    mapSize++;
  }
  if (m_utilizationPreferencesHasBeenSet) {
    mapSize++;
  }
  if (m_preferredResourcesHasBeenSet) {
    mapSize++;
  }
  if (m_savingsEstimationModeHasBeenSet) {
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

  if (m_enhancedInfrastructureMetricsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("enhancedInfrastructureMetrics"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        EnhancedInfrastructureMetricsMapper::GetNameForEnhancedInfrastructureMetrics(m_enhancedInfrastructureMetrics).c_str()));
  }

  if (m_inferredWorkloadTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("inferredWorkloadTypes"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        InferredWorkloadTypesPreferenceMapper::GetNameForInferredWorkloadTypesPreference(m_inferredWorkloadTypes).c_str()));
  }

  if (m_externalMetricsPreferenceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("externalMetricsPreference"));
    m_externalMetricsPreference.CborEncode(encoder);
  }

  if (m_lookBackPeriodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lookBackPeriod"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(LookBackPeriodPreferenceMapper::GetNameForLookBackPeriodPreference(m_lookBackPeriod).c_str()));
  }

  if (m_utilizationPreferencesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("utilizationPreferences"));
    encoder.WriteArrayStart(m_utilizationPreferences.size());
    for (const auto& item_0 : m_utilizationPreferences) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_preferredResourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("preferredResources"));
    encoder.WriteArrayStart(m_preferredResources.size());
    for (const auto& item_0 : m_preferredResources) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_savingsEstimationModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("savingsEstimationMode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(SavingsEstimationModeMapper::GetNameForSavingsEstimationMode(m_savingsEstimationMode).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutRecommendationPreferencesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
