/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluationReferenceInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EvaluationReferenceInput::EvaluationReferenceInput(JsonView jsonValue) { *this = jsonValue; }

EvaluationReferenceInput& EvaluationReferenceInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("context")) {
    m_context = jsonValue.GetObject("context");
    m_contextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expectedResponse")) {
    m_expectedResponse = jsonValue.GetObject("expectedResponse");
    m_expectedResponseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assertions")) {
    Aws::Utils::Array<JsonView> assertionsJsonList = jsonValue.GetArray("assertions");
    for (unsigned assertionsIndex = 0; assertionsIndex < assertionsJsonList.GetLength(); ++assertionsIndex) {
      m_assertions.push_back(assertionsJsonList[assertionsIndex].AsObject());
    }
    m_assertionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expectedTrajectory")) {
    m_expectedTrajectory = jsonValue.GetObject("expectedTrajectory");
    m_expectedTrajectoryHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationReferenceInput::Jsonize() const {
  JsonValue payload;

  if (m_contextHasBeenSet) {
    payload.WithObject("context", m_context.Jsonize());
  }

  if (m_expectedResponseHasBeenSet) {
    payload.WithObject("expectedResponse", m_expectedResponse.Jsonize());
  }

  if (m_assertionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> assertionsJsonList(m_assertions.size());
    for (unsigned assertionsIndex = 0; assertionsIndex < assertionsJsonList.GetLength(); ++assertionsIndex) {
      assertionsJsonList[assertionsIndex].AsObject(m_assertions[assertionsIndex].Jsonize());
    }
    payload.WithArray("assertions", std::move(assertionsJsonList));
  }

  if (m_expectedTrajectoryHasBeenSet) {
    payload.WithObject("expectedTrajectory", m_expectedTrajectory.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
