/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GatewayFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GatewayFilter::GatewayFilter(JsonView jsonValue) { *this = jsonValue; }

GatewayFilter& GatewayFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetPaths")) {
    Aws::Utils::Array<JsonView> targetPathsJsonList = jsonValue.GetArray("targetPaths");
    for (unsigned targetPathsIndex = 0; targetPathsIndex < targetPathsJsonList.GetLength(); ++targetPathsIndex) {
      m_targetPaths.push_back(targetPathsJsonList[targetPathsIndex].AsString());
    }
    m_targetPathsHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayFilter::Jsonize() const {
  JsonValue payload;

  if (m_targetPathsHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetPathsJsonList(m_targetPaths.size());
    for (unsigned targetPathsIndex = 0; targetPathsIndex < targetPathsJsonList.GetLength(); ++targetPathsIndex) {
      targetPathsJsonList[targetPathsIndex].AsString(m_targetPaths[targetPathsIndex]);
    }
    payload.WithArray("targetPaths", std::move(targetPathsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
