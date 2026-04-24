/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessContentBlockStartEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessContentBlockStartEvent::HarnessContentBlockStartEvent(JsonView jsonValue) { *this = jsonValue; }

HarnessContentBlockStartEvent& HarnessContentBlockStartEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentBlockIndex")) {
    m_contentBlockIndex = jsonValue.GetInteger("contentBlockIndex");
    m_contentBlockIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("start")) {
    m_start = jsonValue.GetObject("start");
    m_startHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessContentBlockStartEvent::Jsonize() const {
  JsonValue payload;

  if (m_contentBlockIndexHasBeenSet) {
    payload.WithInteger("contentBlockIndex", m_contentBlockIndex);
  }

  if (m_startHasBeenSet) {
    payload.WithObject("start", m_start.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
