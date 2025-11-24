/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/RecommendedActionTotal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

RecommendedActionTotal::RecommendedActionTotal(JsonView jsonValue) { *this = jsonValue; }

RecommendedActionTotal& RecommendedActionTotal::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recommendedActionCount")) {
    m_recommendedActionCount = jsonValue.GetInteger("recommendedActionCount");
    m_recommendedActionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedMonthlySavings")) {
    m_estimatedMonthlySavings = jsonValue.GetObject("estimatedMonthlySavings");
    m_estimatedMonthlySavingsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendedActionTotal::Jsonize() const {
  JsonValue payload;

  if (m_recommendedActionCountHasBeenSet) {
    payload.WithInteger("recommendedActionCount", m_recommendedActionCount);
  }

  if (m_estimatedMonthlySavingsHasBeenSet) {
    payload.WithObject("estimatedMonthlySavings", m_estimatedMonthlySavings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
