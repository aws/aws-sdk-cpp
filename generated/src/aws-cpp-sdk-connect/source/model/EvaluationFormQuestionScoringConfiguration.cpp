/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormQuestionScoringConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormQuestionScoringConfiguration::EvaluationFormQuestionScoringConfiguration(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormQuestionScoringConfiguration& EvaluationFormQuestionScoringConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PointsConfiguration")) {
    m_pointsConfiguration = jsonValue.GetObject("PointsConfiguration");
    m_pointsConfigurationHasBeenSet = true;
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

JsonValue EvaluationFormQuestionScoringConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_pointsConfigurationHasBeenSet) {
    payload.WithObject("PointsConfiguration", m_pointsConfiguration.Jsonize());
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
