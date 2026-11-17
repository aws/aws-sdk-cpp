/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ExampleCountByFieldCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ExampleCountByFieldCondition::ExampleCountByFieldCondition(JsonView jsonValue) { *this = jsonValue; }

ExampleCountByFieldCondition& ExampleCountByFieldCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("anyOf")) {
    Aws::Utils::Array<JsonView> anyOfJsonList = jsonValue.GetArray("anyOf");
    for (unsigned anyOfIndex = 0; anyOfIndex < anyOfJsonList.GetLength(); ++anyOfIndex) {
      m_anyOf.push_back(ExampleFieldMapper::GetExampleFieldForName(anyOfJsonList[anyOfIndex].AsString()));
    }
    m_anyOfHasBeenSet = true;
  }
  if (jsonValue.ValueExists("min")) {
    m_min = jsonValue.GetInt64("min");
    m_minHasBeenSet = true;
  }
  if (jsonValue.ValueExists("max")) {
    m_max = jsonValue.GetInt64("max");
    m_maxHasBeenSet = true;
  }
  return *this;
}

JsonValue ExampleCountByFieldCondition::Jsonize() const {
  JsonValue payload;

  if (m_anyOfHasBeenSet) {
    Aws::Utils::Array<JsonValue> anyOfJsonList(m_anyOf.size());
    for (unsigned anyOfIndex = 0; anyOfIndex < anyOfJsonList.GetLength(); ++anyOfIndex) {
      anyOfJsonList[anyOfIndex].AsString(ExampleFieldMapper::GetNameForExampleField(m_anyOf[anyOfIndex]));
    }
    payload.WithArray("anyOf", std::move(anyOfJsonList));
  }

  if (m_minHasBeenSet) {
    payload.WithInt64("min", m_min);
  }

  if (m_maxHasBeenSet) {
    payload.WithInt64("max", m_max);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
