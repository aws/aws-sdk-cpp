/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationScore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationScore::EvaluationScore(JsonView jsonValue) { *this = jsonValue; }

EvaluationScore& EvaluationScore::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Percentage")) {
    m_percentage = jsonValue.GetDouble("Percentage");
    m_percentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotApplicable")) {
    m_notApplicable = jsonValue.GetBool("NotApplicable");
    m_notApplicableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutomaticFail")) {
    m_automaticFail = jsonValue.GetBool("AutomaticFail");
    m_automaticFailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AppliedWeight")) {
    m_appliedWeight = jsonValue.GetDouble("AppliedWeight");
    m_appliedWeightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EarnedPoints")) {
    m_earnedPoints = jsonValue.GetInteger("EarnedPoints");
    m_earnedPointsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxBasePoint")) {
    m_maxBasePoint = jsonValue.GetInteger("MaxBasePoint");
    m_maxBasePointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PerformanceCategory")) {
    m_performanceCategory = PerformanceCategoryNameMapper::GetPerformanceCategoryNameForName(jsonValue.GetString("PerformanceCategory"));
    m_performanceCategoryHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationScore::Jsonize() const {
  JsonValue payload;

  if (m_percentageHasBeenSet) {
    payload.WithDouble("Percentage", m_percentage);
  }

  if (m_notApplicableHasBeenSet) {
    payload.WithBool("NotApplicable", m_notApplicable);
  }

  if (m_automaticFailHasBeenSet) {
    payload.WithBool("AutomaticFail", m_automaticFail);
  }

  if (m_appliedWeightHasBeenSet) {
    payload.WithDouble("AppliedWeight", m_appliedWeight);
  }

  if (m_earnedPointsHasBeenSet) {
    payload.WithInteger("EarnedPoints", m_earnedPoints);
  }

  if (m_maxBasePointHasBeenSet) {
    payload.WithInteger("MaxBasePoint", m_maxBasePoint);
  }

  if (m_performanceCategoryHasBeenSet) {
    payload.WithString("PerformanceCategory", PerformanceCategoryNameMapper::GetNameForPerformanceCategoryName(m_performanceCategory));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
