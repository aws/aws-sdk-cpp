/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EvaluationDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EvaluationDimension::EvaluationDimension(JsonView jsonValue) { *this = jsonValue; }

EvaluationDimension& EvaluationDimension::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dimensionName")) {
    m_dimensionName = jsonValue.GetString("dimensionName");
    m_dimensionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dimensionInstruction")) {
    m_dimensionInstruction = jsonValue.GetString("dimensionInstruction");
    m_dimensionInstructionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dimensionRatingScale")) {
    m_dimensionRatingScale = jsonValue.GetObject("dimensionRatingScale");
    m_dimensionRatingScaleHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationDimension::Jsonize() const {
  JsonValue payload;

  if (m_dimensionNameHasBeenSet) {
    payload.WithString("dimensionName", m_dimensionName);
  }

  if (m_dimensionInstructionHasBeenSet) {
    payload.WithString("dimensionInstruction", m_dimensionInstruction);
  }

  if (m_dimensionRatingScaleHasBeenSet) {
    payload.WithObject("dimensionRatingScale", m_dimensionRatingScale.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
