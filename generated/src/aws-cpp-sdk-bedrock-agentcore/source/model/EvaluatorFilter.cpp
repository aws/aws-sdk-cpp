/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluatorFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EvaluatorFilter::EvaluatorFilter(JsonView jsonValue) { *this = jsonValue; }

EvaluatorFilter& EvaluatorFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("evaluatorId")) {
    m_evaluatorId = jsonValue.GetString("evaluatorId");
    m_evaluatorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluationDimensionName")) {
    m_evaluationDimensionName = jsonValue.GetString("evaluationDimensionName");
    m_evaluationDimensionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operator")) {
    m_operator = GenerationFilterOperatorMapper::GetGenerationFilterOperatorForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetObject("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aggregation")) {
    m_aggregation = ResultAggregationMapper::GetResultAggregationForName(jsonValue.GetString("aggregation"));
    m_aggregationHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluatorFilter::Jsonize() const {
  JsonValue payload;

  if (m_evaluatorIdHasBeenSet) {
    payload.WithString("evaluatorId", m_evaluatorId);
  }

  if (m_evaluationDimensionNameHasBeenSet) {
    payload.WithString("evaluationDimensionName", m_evaluationDimensionName);
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("operator", GenerationFilterOperatorMapper::GetNameForGenerationFilterOperator(m_operator));
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("value", m_value.Jsonize());
  }

  if (m_aggregationHasBeenSet) {
    payload.WithString("aggregation", ResultAggregationMapper::GetNameForResultAggregation(m_aggregation));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
