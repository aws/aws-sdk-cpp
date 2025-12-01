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

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}
