/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RedactionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

RedactionSummary::RedactionSummary(JsonView jsonValue) { *this = jsonValue; }

RedactionSummary& RedactionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scenariosScanned")) {
    m_scenariosScanned = jsonValue.GetInteger("scenariosScanned");
    m_scenariosScannedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingCounts")) {
    Aws::Map<Aws::String, JsonView> findingCountsJsonMap = jsonValue.GetObject("findingCounts").GetAllObjects();
    for (auto& findingCountsItem : findingCountsJsonMap) {
      m_findingCounts[findingCountsItem.first] = findingCountsItem.second.AsInteger();
    }
    m_findingCountsHasBeenSet = true;
  }
  return *this;
}

JsonValue RedactionSummary::Jsonize() const {
  JsonValue payload;

  if (m_scenariosScannedHasBeenSet) {
    payload.WithInteger("scenariosScanned", m_scenariosScanned);
  }

  if (m_findingCountsHasBeenSet) {
    JsonValue findingCountsJsonMap;
    for (auto& findingCountsItem : m_findingCounts) {
      findingCountsJsonMap.WithInteger(findingCountsItem.first, findingCountsItem.second);
    }
    payload.WithObject("findingCounts", std::move(findingCountsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
