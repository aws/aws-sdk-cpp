/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/SearchRecommendationsRequest.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchRecommendationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_keyNameHasBeenSet) {
    payload.WithString("KeyName", m_keyName);
  }

  if (m_keyValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> keyValuesJsonList(m_keyValues.size());
    for (unsigned keyValuesIndex = 0; keyValuesIndex < keyValuesJsonList.GetLength(); ++keyValuesIndex) {
      keyValuesJsonList[keyValuesIndex].AsString(m_keyValues[keyValuesIndex]);
    }
    payload.WithArray("KeyValues", std::move(keyValuesJsonList));
  }

  if (m_recommenderHasBeenSet) {
    payload.WithObject("Recommender", m_recommender.Jsonize());
  }

  if (m_candidateIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> candidateIdsJsonList(m_candidateIds.size());
    for (unsigned candidateIdsIndex = 0; candidateIdsIndex < candidateIdsJsonList.GetLength(); ++candidateIdsIndex) {
      candidateIdsJsonList[candidateIdsIndex].AsString(m_candidateIds[candidateIdsIndex]);
    }
    payload.WithArray("CandidateIds", std::move(candidateIdsJsonList));
  }

  if (m_contextHasBeenSet) {
    JsonValue contextJsonMap;
    for (auto& contextItem : m_context) {
      contextJsonMap.WithString(contextItem.first, contextItem.second);
    }
    payload.WithObject("Context", std::move(contextJsonMap));
  }

  if (m_diversityHasBeenSet) {
    payload.WithObject("Diversity", m_diversity.Jsonize());
  }

  if (m_metadataHasBeenSet) {
    payload.WithObject("Metadata", m_metadata.Jsonize());
  }

  if (m_maxRecommendationsHasBeenSet) {
    payload.WithInteger("MaxRecommendations", m_maxRecommendations);
  }

  return payload.View().WriteReadable();
}
