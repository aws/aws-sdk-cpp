/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/KeyShortcutArguments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

KeyShortcutArguments::KeyShortcutArguments(JsonView jsonValue) { *this = jsonValue; }

KeyShortcutArguments& KeyShortcutArguments::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("keys")) {
    Aws::Utils::Array<JsonView> keysJsonList = jsonValue.GetArray("keys");
    for (unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex) {
      m_keys.push_back(keysJsonList[keysIndex].AsString());
    }
    m_keysHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyShortcutArguments::Jsonize() const {
  JsonValue payload;

  if (m_keysHasBeenSet) {
    Aws::Utils::Array<JsonValue> keysJsonList(m_keys.size());
    for (unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex) {
      keysJsonList[keysIndex].AsString(m_keys[keysIndex]);
    }
    payload.WithArray("keys", std::move(keysJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
