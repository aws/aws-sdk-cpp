/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/WeightedOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

WeightedOverride::WeightedOverride(JsonView jsonValue) { *this = jsonValue; }

WeightedOverride& WeightedOverride::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("trafficSplit")) {
    Aws::Utils::Array<JsonView> trafficSplitJsonList = jsonValue.GetArray("trafficSplit");
    for (unsigned trafficSplitIndex = 0; trafficSplitIndex < trafficSplitJsonList.GetLength(); ++trafficSplitIndex) {
      m_trafficSplit.push_back(trafficSplitJsonList[trafficSplitIndex].AsObject());
    }
    m_trafficSplitHasBeenSet = true;
  }
  return *this;
}

JsonValue WeightedOverride::Jsonize() const {
  JsonValue payload;

  if (m_trafficSplitHasBeenSet) {
    Aws::Utils::Array<JsonValue> trafficSplitJsonList(m_trafficSplit.size());
    for (unsigned trafficSplitIndex = 0; trafficSplitIndex < trafficSplitJsonList.GetLength(); ++trafficSplitIndex) {
      trafficSplitJsonList[trafficSplitIndex].AsObject(m_trafficSplit[trafficSplitIndex].Jsonize());
    }
    payload.WithArray("trafficSplit", std::move(trafficSplitJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
