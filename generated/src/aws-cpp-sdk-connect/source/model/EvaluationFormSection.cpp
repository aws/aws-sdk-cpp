/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormSection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormSection::EvaluationFormSection(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormSection& EvaluationFormSection::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RefId")) {
    m_refId = jsonValue.GetString("RefId");
    m_refIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Instructions")) {
    m_instructions = jsonValue.GetString("Instructions");
    m_instructionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Items")) {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for (unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex) {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Weight")) {
    m_weight = jsonValue.GetDouble("Weight");
    m_weightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsExcludedFromScoring")) {
    m_isExcludedFromScoring = jsonValue.GetBool("IsExcludedFromScoring");
    m_isExcludedFromScoringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScoreThresholds")) {
    Aws::Utils::Array<JsonView> scoreThresholdsJsonList = jsonValue.GetArray("ScoreThresholds");
    for (unsigned scoreThresholdsIndex = 0; scoreThresholdsIndex < scoreThresholdsJsonList.GetLength(); ++scoreThresholdsIndex) {
      m_scoreThresholds.push_back(scoreThresholdsJsonList[scoreThresholdsIndex].AsObject());
    }
    m_scoreThresholdsHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormSection::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("Title", m_title);
  }

  if (m_refIdHasBeenSet) {
    payload.WithString("RefId", m_refId);
  }

  if (m_instructionsHasBeenSet) {
    payload.WithString("Instructions", m_instructions);
  }

  if (m_itemsHasBeenSet) {
    Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
    for (unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex) {
      itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
    }
    payload.WithArray("Items", std::move(itemsJsonList));
  }

  if (m_weightHasBeenSet) {
    payload.WithDouble("Weight", m_weight);
  }

  if (m_isExcludedFromScoringHasBeenSet) {
    payload.WithBool("IsExcludedFromScoring", m_isExcludedFromScoring);
  }

  if (m_scoreThresholdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> scoreThresholdsJsonList(m_scoreThresholds.size());
    for (unsigned scoreThresholdsIndex = 0; scoreThresholdsIndex < scoreThresholdsJsonList.GetLength(); ++scoreThresholdsIndex) {
      scoreThresholdsJsonList[scoreThresholdsIndex].AsObject(m_scoreThresholds[scoreThresholdsIndex].Jsonize());
    }
    payload.WithArray("ScoreThresholds", std::move(scoreThresholdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
