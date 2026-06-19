/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormScoreThreshold.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormScoreThreshold::EvaluationFormScoreThreshold(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormScoreThreshold& EvaluationFormScoreThreshold::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PerformanceCategory")) {
    m_performanceCategory = PerformanceCategoryNameMapper::GetPerformanceCategoryNameForName(jsonValue.GetString("PerformanceCategory"));
    m_performanceCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MinScorePercentage")) {
    m_minScorePercentage = jsonValue.GetDouble("MinScorePercentage");
    m_minScorePercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxScorePercentage")) {
    m_maxScorePercentage = jsonValue.GetDouble("MaxScorePercentage");
    m_maxScorePercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormScoreThreshold::Jsonize() const {
  JsonValue payload;

  if (m_performanceCategoryHasBeenSet) {
    payload.WithString("PerformanceCategory", PerformanceCategoryNameMapper::GetNameForPerformanceCategoryName(m_performanceCategory));
  }

  if (m_minScorePercentageHasBeenSet) {
    payload.WithDouble("MinScorePercentage", m_minScorePercentage);
  }

  if (m_maxScorePercentageHasBeenSet) {
    payload.WithDouble("MaxScorePercentage", m_maxScorePercentage);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
