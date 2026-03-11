/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/RecommenderFilterSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

RecommenderFilterSummary::RecommenderFilterSummary(JsonView jsonValue) { *this = jsonValue; }

RecommenderFilterSummary& RecommenderFilterSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecommenderFilterName")) {
    m_recommenderFilterName = jsonValue.GetString("RecommenderFilterName");
    m_recommenderFilterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecommenderFilterExpression")) {
    m_recommenderFilterExpression = jsonValue.GetString("RecommenderFilterExpression");
    m_recommenderFilterExpressionHasBeenSet = true;
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
    m_status = RecommenderFilterStatusMapper::GetRecommenderFilterStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommenderFilterSummary::Jsonize() const {
  JsonValue payload;

  if (m_recommenderFilterNameHasBeenSet) {
    payload.WithString("RecommenderFilterName", m_recommenderFilterName);
  }

  if (m_recommenderFilterExpressionHasBeenSet) {
    payload.WithString("RecommenderFilterExpression", m_recommenderFilterExpression);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", RecommenderFilterStatusMapper::GetNameForRecommenderFilterStatus(m_status));
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("FailureReason", m_failureReason);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
