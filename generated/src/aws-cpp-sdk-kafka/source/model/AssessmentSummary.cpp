/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/AssessmentSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

AssessmentSummary::AssessmentSummary(JsonView jsonValue) { *this = jsonValue; }

AssessmentSummary& AssessmentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("byCategory")) {
    Aws::Map<Aws::String, JsonView> byCategoryJsonMap = jsonValue.GetObject("byCategory").GetAllObjects();
    for (auto& byCategoryItem : byCategoryJsonMap) {
      m_byCategory[byCategoryItem.first] = byCategoryItem.second.AsInteger();
    }
    m_byCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bySeverity")) {
    Aws::Map<Aws::String, JsonView> bySeverityJsonMap = jsonValue.GetObject("bySeverity").GetAllObjects();
    for (auto& bySeverityItem : bySeverityJsonMap) {
      m_bySeverity[bySeverityItem.first] = bySeverityItem.second.AsInteger();
    }
    m_bySeverityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingsCapped")) {
    m_findingsCapped = jsonValue.GetBool("findingsCapped");
    m_findingsCappedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasBlockingFindings")) {
    m_hasBlockingFindings = jsonValue.GetBool("hasBlockingFindings");
    m_hasBlockingFindingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalFindings")) {
    m_totalFindings = jsonValue.GetInteger("totalFindings");
    m_totalFindingsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentSummary::Jsonize() const {
  JsonValue payload;

  if (m_byCategoryHasBeenSet) {
    JsonValue byCategoryJsonMap;
    for (auto& byCategoryItem : m_byCategory) {
      byCategoryJsonMap.WithInteger(byCategoryItem.first, byCategoryItem.second);
    }
    payload.WithObject("byCategory", std::move(byCategoryJsonMap));
  }

  if (m_bySeverityHasBeenSet) {
    JsonValue bySeverityJsonMap;
    for (auto& bySeverityItem : m_bySeverity) {
      bySeverityJsonMap.WithInteger(bySeverityItem.first, bySeverityItem.second);
    }
    payload.WithObject("bySeverity", std::move(bySeverityJsonMap));
  }

  if (m_findingsCappedHasBeenSet) {
    payload.WithBool("findingsCapped", m_findingsCapped);
  }

  if (m_hasBlockingFindingsHasBeenSet) {
    payload.WithBool("hasBlockingFindings", m_hasBlockingFindings);
  }

  if (m_totalFindingsHasBeenSet) {
    payload.WithInteger("totalFindings", m_totalFindings);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
