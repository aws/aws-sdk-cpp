/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/CreateRecommenderRequest.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRecommenderRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recommenderRecipeNameHasBeenSet) {
    payload.WithString("RecommenderRecipeName", RecommenderRecipeNameMapper::GetNameForRecommenderRecipeName(m_recommenderRecipeName));
  }

  if (m_recommenderConfigHasBeenSet) {
    payload.WithObject("RecommenderConfig", m_recommenderConfig.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
