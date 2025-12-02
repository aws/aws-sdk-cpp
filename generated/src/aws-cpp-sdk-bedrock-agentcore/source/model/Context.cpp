/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/Context.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

Context::Context(JsonView jsonValue) { *this = jsonValue; }

Context& Context::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("spanContext")) {
    m_spanContext = jsonValue.GetObject("spanContext");
    m_spanContextHasBeenSet = true;
  }
  return *this;
}

JsonValue Context::Jsonize() const {
  JsonValue payload;

  if (m_spanContextHasBeenSet) {
    payload.WithObject("spanContext", m_spanContext.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
