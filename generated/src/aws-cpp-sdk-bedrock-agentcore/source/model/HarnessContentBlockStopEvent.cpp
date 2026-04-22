/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessContentBlockStopEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessContentBlockStopEvent::HarnessContentBlockStopEvent(JsonView jsonValue) { *this = jsonValue; }

HarnessContentBlockStopEvent& HarnessContentBlockStopEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentBlockIndex")) {
    m_contentBlockIndex = jsonValue.GetInteger("contentBlockIndex");
    m_contentBlockIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessContentBlockStopEvent::Jsonize() const {
  JsonValue payload;

  if (m_contentBlockIndexHasBeenSet) {
    payload.WithInteger("contentBlockIndex", m_contentBlockIndex);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
