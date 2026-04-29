/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MatchPaths.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

MatchPaths::MatchPaths(JsonView jsonValue) { *this = jsonValue; }

MatchPaths& MatchPaths::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("anyOf")) {
    Aws::Utils::Array<JsonView> anyOfJsonList = jsonValue.GetArray("anyOf");
    for (unsigned anyOfIndex = 0; anyOfIndex < anyOfJsonList.GetLength(); ++anyOfIndex) {
      m_anyOf.push_back(anyOfJsonList[anyOfIndex].AsString());
    }
    m_anyOfHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchPaths::Jsonize() const {
  JsonValue payload;

  if (m_anyOfHasBeenSet) {
    Aws::Utils::Array<JsonValue> anyOfJsonList(m_anyOf.size());
    for (unsigned anyOfIndex = 0; anyOfIndex < anyOfJsonList.GetLength(); ++anyOfIndex) {
      anyOfJsonList[anyOfIndex].AsString(m_anyOf[anyOfIndex]);
    }
    payload.WithArray("anyOf", std::move(anyOfJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
