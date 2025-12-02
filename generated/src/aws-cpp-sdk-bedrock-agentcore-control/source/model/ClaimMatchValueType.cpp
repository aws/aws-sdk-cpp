/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ClaimMatchValueType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ClaimMatchValueType::ClaimMatchValueType(JsonView jsonValue) { *this = jsonValue; }

ClaimMatchValueType& ClaimMatchValueType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("matchValueString")) {
    m_matchValueString = jsonValue.GetString("matchValueString");
    m_matchValueStringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("matchValueStringList")) {
    Aws::Utils::Array<JsonView> matchValueStringListJsonList = jsonValue.GetArray("matchValueStringList");
    for (unsigned matchValueStringListIndex = 0; matchValueStringListIndex < matchValueStringListJsonList.GetLength();
         ++matchValueStringListIndex) {
      m_matchValueStringList.push_back(matchValueStringListJsonList[matchValueStringListIndex].AsString());
    }
    m_matchValueStringListHasBeenSet = true;
  }
  return *this;
}

JsonValue ClaimMatchValueType::Jsonize() const {
  JsonValue payload;

  if (m_matchValueStringHasBeenSet) {
    payload.WithString("matchValueString", m_matchValueString);
  }

  if (m_matchValueStringListHasBeenSet) {
    Aws::Utils::Array<JsonValue> matchValueStringListJsonList(m_matchValueStringList.size());
    for (unsigned matchValueStringListIndex = 0; matchValueStringListIndex < matchValueStringListJsonList.GetLength();
         ++matchValueStringListIndex) {
      matchValueStringListJsonList[matchValueStringListIndex].AsString(m_matchValueStringList[matchValueStringListIndex]);
    }
    payload.WithArray("matchValueStringList", std::move(matchValueStringListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
