/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessContentBlockDeltaEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessContentBlockDeltaEvent::HarnessContentBlockDeltaEvent(JsonView jsonValue) { *this = jsonValue; }

HarnessContentBlockDeltaEvent& HarnessContentBlockDeltaEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentBlockIndex")) {
    m_contentBlockIndex = jsonValue.GetInteger("contentBlockIndex");
    m_contentBlockIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("delta")) {
    m_delta = jsonValue.GetObject("delta");
    m_deltaHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessContentBlockDeltaEvent::Jsonize() const {
  JsonValue payload;

  if (m_contentBlockIndexHasBeenSet) {
    payload.WithInteger("contentBlockIndex", m_contentBlockIndex);
  }

  if (m_deltaHasBeenSet) {
    payload.WithObject("delta", m_delta.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
