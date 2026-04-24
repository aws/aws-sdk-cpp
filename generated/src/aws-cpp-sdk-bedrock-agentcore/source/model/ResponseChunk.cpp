/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ResponseChunk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ResponseChunk::ResponseChunk(JsonView jsonValue) { *this = jsonValue; }

ResponseChunk& ResponseChunk::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentStart")) {
    m_contentStart = jsonValue.GetObject("contentStart");
    m_contentStartHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contentDelta")) {
    m_contentDelta = jsonValue.GetObject("contentDelta");
    m_contentDeltaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contentStop")) {
    m_contentStop = jsonValue.GetObject("contentStop");
    m_contentStopHasBeenSet = true;
  }
  return *this;
}

JsonValue ResponseChunk::Jsonize() const {
  JsonValue payload;

  if (m_contentStartHasBeenSet) {
    payload.WithObject("contentStart", m_contentStart.Jsonize());
  }

  if (m_contentDeltaHasBeenSet) {
    payload.WithObject("contentDelta", m_contentDelta.Jsonize());
  }

  if (m_contentStopHasBeenSet) {
    payload.WithObject("contentStop", m_contentStop.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
