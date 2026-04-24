/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/GetProfileRecommendationsRequest.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetProfileRecommendationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recommenderNameHasBeenSet) {
    payload.WithString("RecommenderName", m_recommenderName);
  }

  if (m_contextHasBeenSet) {
    JsonValue contextJsonMap;
    for (auto& contextItem : m_context) {
      contextJsonMap.WithString(contextItem.first, contextItem.second);
    }
    payload.WithObject("Context", std::move(contextJsonMap));
  }

  if (m_recommenderFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> recommenderFiltersJsonList(m_recommenderFilters.size());
    for (unsigned recommenderFiltersIndex = 0; recommenderFiltersIndex < recommenderFiltersJsonList.GetLength();
         ++recommenderFiltersIndex) {
      recommenderFiltersJsonList[recommenderFiltersIndex].AsObject(m_recommenderFilters[recommenderFiltersIndex].Jsonize());
    }
    payload.WithArray("RecommenderFilters", std::move(recommenderFiltersJsonList));
  }

  if (m_recommenderPromotionalFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> recommenderPromotionalFiltersJsonList(m_recommenderPromotionalFilters.size());
    for (unsigned recommenderPromotionalFiltersIndex = 0;
         recommenderPromotionalFiltersIndex < recommenderPromotionalFiltersJsonList.GetLength(); ++recommenderPromotionalFiltersIndex) {
      recommenderPromotionalFiltersJsonList[recommenderPromotionalFiltersIndex].AsObject(
          m_recommenderPromotionalFilters[recommenderPromotionalFiltersIndex].Jsonize());
    }
    payload.WithArray("RecommenderPromotionalFilters", std::move(recommenderPromotionalFiltersJsonList));
  }

  if (m_candidateIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> candidateIdsJsonList(m_candidateIds.size());
    for (unsigned candidateIdsIndex = 0; candidateIdsIndex < candidateIdsJsonList.GetLength(); ++candidateIdsIndex) {
      candidateIdsJsonList[candidateIdsIndex].AsString(m_candidateIds[candidateIdsIndex]);
    }
    payload.WithArray("CandidateIds", std::move(candidateIdsJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_metadataConfigHasBeenSet) {
    payload.WithObject("MetadataConfig", m_metadataConfig.Jsonize());
  }

  return payload.View().WriteReadable();
}
