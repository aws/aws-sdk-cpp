/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/KeyPressArguments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

KeyPressArguments::KeyPressArguments(JsonView jsonValue) { *this = jsonValue; }

KeyPressArguments& KeyPressArguments::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("presses")) {
    m_presses = jsonValue.GetInteger("presses");
    m_pressesHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyPressArguments::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_pressesHasBeenSet) {
    payload.WithInteger("presses", m_presses);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
