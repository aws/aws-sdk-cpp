/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ExampleFieldCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ExampleFieldCondition::ExampleFieldCondition(JsonView jsonValue) { *this = jsonValue; }

ExampleFieldCondition& ExampleFieldCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("anyOf")) {
    Aws::Utils::Array<JsonView> anyOfJsonList = jsonValue.GetArray("anyOf");
    for (unsigned anyOfIndex = 0; anyOfIndex < anyOfJsonList.GetLength(); ++anyOfIndex) {
      m_anyOf.push_back(ExampleFieldMapper::GetExampleFieldForName(anyOfJsonList[anyOfIndex].AsString()));
    }
    m_anyOfHasBeenSet = true;
  }
  return *this;
}

JsonValue ExampleFieldCondition::Jsonize() const {
  JsonValue payload;

  if (m_anyOfHasBeenSet) {
    Aws::Utils::Array<JsonValue> anyOfJsonList(m_anyOf.size());
    for (unsigned anyOfIndex = 0; anyOfIndex < anyOfJsonList.GetLength(); ++anyOfIndex) {
      anyOfJsonList[anyOfIndex].AsString(ExampleFieldMapper::GetNameForExampleField(m_anyOf[anyOfIndex]));
    }
    payload.WithArray("anyOf", std::move(anyOfJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
