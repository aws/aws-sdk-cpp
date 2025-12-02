/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EvaluationInput::EvaluationInput(JsonView jsonValue) { *this = jsonValue; }

EvaluationInput& EvaluationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionSpans")) {
    Aws::Utils::Array<JsonView> sessionSpansJsonList = jsonValue.GetArray("sessionSpans");
    for (unsigned sessionSpansIndex = 0; sessionSpansIndex < sessionSpansJsonList.GetLength(); ++sessionSpansIndex) {
      m_sessionSpans.push_back(sessionSpansJsonList[sessionSpansIndex].AsObject());
    }
    m_sessionSpansHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationInput::Jsonize() const {
  JsonValue payload;

  if (m_sessionSpansHasBeenSet) {
    Aws::Utils::Array<JsonValue> sessionSpansJsonList(m_sessionSpans.size());
    for (unsigned sessionSpansIndex = 0; sessionSpansIndex < sessionSpansJsonList.GetLength(); ++sessionSpansIndex) {
      sessionSpansJsonList[sessionSpansIndex].AsObject(m_sessionSpans[sessionSpansIndex].View());
    }
    payload.WithArray("sessionSpans", std::move(sessionSpansJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
