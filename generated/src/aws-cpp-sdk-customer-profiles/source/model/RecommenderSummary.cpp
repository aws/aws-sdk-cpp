/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/RecommenderSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

RecommenderSummary::RecommenderSummary(JsonView jsonValue) { *this = jsonValue; }

RecommenderSummary& RecommenderSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecommenderName")) {
    m_recommenderName = jsonValue.GetString("RecommenderName");
    m_recommenderNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecipeName")) {
    m_recipeName = RecommenderRecipeNameMapper::GetRecommenderRecipeNameForName(jsonValue.GetString("RecipeName"));
    m_recipeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecommenderConfig")) {
    m_recommenderConfig = jsonValue.GetObject("RecommenderConfig");
    m_recommenderConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RecommenderStatusMapper::GetRecommenderStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LatestRecommenderUpdate")) {
    m_latestRecommenderUpdate = jsonValue.GetObject("LatestRecommenderUpdate");
    m_latestRecommenderUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommenderSummary::Jsonize() const {
  JsonValue payload;

  if (m_recommenderNameHasBeenSet) {
    payload.WithString("RecommenderName", m_recommenderName);
  }

  if (m_recipeNameHasBeenSet) {
    payload.WithString("RecipeName", RecommenderRecipeNameMapper::GetNameForRecommenderRecipeName(m_recipeName));
  }

  if (m_recommenderConfigHasBeenSet) {
    payload.WithObject("RecommenderConfig", m_recommenderConfig.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", RecommenderStatusMapper::GetNameForRecommenderStatus(m_status));
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("FailureReason", m_failureReason);
  }

  if (m_latestRecommenderUpdateHasBeenSet) {
    payload.WithObject("LatestRecommenderUpdate", m_latestRecommenderUpdate.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
