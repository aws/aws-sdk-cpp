/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ABTestResults.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ABTestResults::ABTestResults(JsonView jsonValue) { *this = jsonValue; }

ABTestResults& ABTestResults::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("analysisTimestamp")) {
    m_analysisTimestamp = jsonValue.GetDouble("analysisTimestamp");
    m_analysisTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatorMetrics")) {
    Aws::Utils::Array<JsonView> evaluatorMetricsJsonList = jsonValue.GetArray("evaluatorMetrics");
    for (unsigned evaluatorMetricsIndex = 0; evaluatorMetricsIndex < evaluatorMetricsJsonList.GetLength(); ++evaluatorMetricsIndex) {
      m_evaluatorMetrics.push_back(evaluatorMetricsJsonList[evaluatorMetricsIndex].AsObject());
    }
    m_evaluatorMetricsHasBeenSet = true;
  }
  return *this;
}

JsonValue ABTestResults::Jsonize() const {
  JsonValue payload;

  if (m_analysisTimestampHasBeenSet) {
    payload.WithDouble("analysisTimestamp", m_analysisTimestamp.SecondsWithMSPrecision());
  }

  if (m_evaluatorMetricsHasBeenSet) {
    Aws::Utils::Array<JsonValue> evaluatorMetricsJsonList(m_evaluatorMetrics.size());
    for (unsigned evaluatorMetricsIndex = 0; evaluatorMetricsIndex < evaluatorMetricsJsonList.GetLength(); ++evaluatorMetricsIndex) {
      evaluatorMetricsJsonList[evaluatorMetricsIndex].AsObject(m_evaluatorMetrics[evaluatorMetricsIndex].Jsonize());
    }
    payload.WithArray("evaluatorMetrics", std::move(evaluatorMetricsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
