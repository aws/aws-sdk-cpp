/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DerivedEvaluatorConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

DerivedEvaluatorConfig::DerivedEvaluatorConfig(JsonView jsonValue) { *this = jsonValue; }

DerivedEvaluatorConfig& DerivedEvaluatorConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("baseEvaluatorId")) {
    m_baseEvaluatorId = jsonValue.GetString("baseEvaluatorId");
    m_baseEvaluatorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelConfig")) {
    m_modelConfig = jsonValue.GetObject("modelConfig");
    m_modelConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue DerivedEvaluatorConfig::Jsonize() const {
  JsonValue payload;

  if (m_baseEvaluatorIdHasBeenSet) {
    payload.WithString("baseEvaluatorId", m_baseEvaluatorId);
  }

  if (m_modelConfigHasBeenSet) {
    payload.WithObject("modelConfig", m_modelConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
