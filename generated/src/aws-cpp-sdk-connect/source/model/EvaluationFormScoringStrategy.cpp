/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormScoringStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormScoringStrategy::EvaluationFormScoringStrategy(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormScoringStrategy& EvaluationFormScoringStrategy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Mode")) {
    m_mode = EvaluationFormScoringModeMapper::GetEvaluationFormScoringModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = EvaluationFormScoringStatusMapper::GetEvaluationFormScoringStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
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

JsonValue EvaluationFormScoringStrategy::Jsonize() const {
  JsonValue payload;

  if (m_modeHasBeenSet) {
    payload.WithString("Mode", EvaluationFormScoringModeMapper::GetNameForEvaluationFormScoringMode(m_mode));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", EvaluationFormScoringStatusMapper::GetNameForEvaluationFormScoringStatus(m_status));
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
