/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/AggregationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudTrail {
namespace Model {

AggregationConfiguration::AggregationConfiguration(JsonView jsonValue) { *this = jsonValue; }

AggregationConfiguration& AggregationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Templates")) {
    Aws::Utils::Array<JsonView> templatesJsonList = jsonValue.GetArray("Templates");
    for (unsigned templatesIndex = 0; templatesIndex < templatesJsonList.GetLength(); ++templatesIndex) {
      m_templates.push_back(TemplateMapper::GetTemplateForName(templatesJsonList[templatesIndex].AsString()));
    }
    m_templatesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventCategory")) {
    m_eventCategory = EventCategoryAggregationMapper::GetEventCategoryAggregationForName(jsonValue.GetString("EventCategory"));
    m_eventCategoryHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_templatesHasBeenSet) {
    Aws::Utils::Array<JsonValue> templatesJsonList(m_templates.size());
    for (unsigned templatesIndex = 0; templatesIndex < templatesJsonList.GetLength(); ++templatesIndex) {
      templatesJsonList[templatesIndex].AsString(TemplateMapper::GetNameForTemplate(m_templates[templatesIndex]));
    }
    payload.WithArray("Templates", std::move(templatesJsonList));
  }

  if (m_eventCategoryHasBeenSet) {
    payload.WithString("EventCategory", EventCategoryAggregationMapper::GetNameForEventCategoryAggregation(m_eventCategory));
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws
