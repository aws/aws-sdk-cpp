/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EvaluatorReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EvaluatorReference::EvaluatorReference(JsonView jsonValue) { *this = jsonValue; }

EvaluatorReference& EvaluatorReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("evaluatorId")) {
    m_evaluatorId = jsonValue.GetString("evaluatorId");
    m_evaluatorIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluatorReference::Jsonize() const {
  JsonValue payload;

  if (m_evaluatorIdHasBeenSet) {
    payload.WithString("evaluatorId", m_evaluatorId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
