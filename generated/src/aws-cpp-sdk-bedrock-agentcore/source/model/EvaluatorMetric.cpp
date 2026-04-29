/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluatorMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EvaluatorMetric::EvaluatorMetric(JsonView jsonValue) { *this = jsonValue; }

EvaluatorMetric& EvaluatorMetric::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("evaluatorArn")) {
    m_evaluatorArn = jsonValue.GetString("evaluatorArn");
    m_evaluatorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("controlStats")) {
    m_controlStats = jsonValue.GetObject("controlStats");
    m_controlStatsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("variantResults")) {
    Aws::Utils::Array<JsonView> variantResultsJsonList = jsonValue.GetArray("variantResults");
    for (unsigned variantResultsIndex = 0; variantResultsIndex < variantResultsJsonList.GetLength(); ++variantResultsIndex) {
      m_variantResults.push_back(variantResultsJsonList[variantResultsIndex].AsObject());
    }
    m_variantResultsHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluatorMetric::Jsonize() const {
  JsonValue payload;

  if (m_evaluatorArnHasBeenSet) {
    payload.WithString("evaluatorArn", m_evaluatorArn);
  }

  if (m_controlStatsHasBeenSet) {
    payload.WithObject("controlStats", m_controlStats.Jsonize());
  }

  if (m_variantResultsHasBeenSet) {
    Aws::Utils::Array<JsonValue> variantResultsJsonList(m_variantResults.size());
    for (unsigned variantResultsIndex = 0; variantResultsIndex < variantResultsJsonList.GetLength(); ++variantResultsIndex) {
      variantResultsJsonList[variantResultsIndex].AsObject(m_variantResults[variantResultsIndex].Jsonize());
    }
    payload.WithArray("variantResults", std::move(variantResultsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
