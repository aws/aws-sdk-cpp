/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluationExpectedTrajectory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EvaluationExpectedTrajectory::EvaluationExpectedTrajectory(JsonView jsonValue) { *this = jsonValue; }

EvaluationExpectedTrajectory& EvaluationExpectedTrajectory::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolNames")) {
    Aws::Utils::Array<JsonView> toolNamesJsonList = jsonValue.GetArray("toolNames");
    for (unsigned toolNamesIndex = 0; toolNamesIndex < toolNamesJsonList.GetLength(); ++toolNamesIndex) {
      m_toolNames.push_back(toolNamesJsonList[toolNamesIndex].AsString());
    }
    m_toolNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationExpectedTrajectory::Jsonize() const {
  JsonValue payload;

  if (m_toolNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> toolNamesJsonList(m_toolNames.size());
    for (unsigned toolNamesIndex = 0; toolNamesIndex < toolNamesJsonList.GetLength(); ++toolNamesIndex) {
      toolNamesJsonList[toolNamesIndex].AsString(m_toolNames[toolNamesIndex]);
    }
    payload.WithArray("toolNames", std::move(toolNamesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
