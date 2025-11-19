/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/InsightSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudTrail {
namespace Model {

InsightSelector::InsightSelector(JsonView jsonValue) { *this = jsonValue; }

InsightSelector& InsightSelector::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InsightType")) {
    m_insightType = InsightTypeMapper::GetInsightTypeForName(jsonValue.GetString("InsightType"));
    m_insightTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventCategories")) {
    Aws::Utils::Array<JsonView> eventCategoriesJsonList = jsonValue.GetArray("EventCategories");
    for (unsigned eventCategoriesIndex = 0; eventCategoriesIndex < eventCategoriesJsonList.GetLength(); ++eventCategoriesIndex) {
      m_eventCategories.push_back(
          SourceEventCategoryMapper::GetSourceEventCategoryForName(eventCategoriesJsonList[eventCategoriesIndex].AsString()));
    }
    m_eventCategoriesHasBeenSet = true;
  }
  return *this;
}

JsonValue InsightSelector::Jsonize() const {
  JsonValue payload;

  if (m_insightTypeHasBeenSet) {
    payload.WithString("InsightType", InsightTypeMapper::GetNameForInsightType(m_insightType));
  }

  if (m_eventCategoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> eventCategoriesJsonList(m_eventCategories.size());
    for (unsigned eventCategoriesIndex = 0; eventCategoriesIndex < eventCategoriesJsonList.GetLength(); ++eventCategoriesIndex) {
      eventCategoriesJsonList[eventCategoriesIndex].AsString(
          SourceEventCategoryMapper::GetNameForSourceEventCategory(m_eventCategories[eventCategoriesIndex]));
    }
    payload.WithArray("EventCategories", std::move(eventCategoriesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws
