/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessStreamMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessStreamMetrics::HarnessStreamMetrics(JsonView jsonValue) { *this = jsonValue; }

HarnessStreamMetrics& HarnessStreamMetrics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("latencyMs")) {
    m_latencyMs = jsonValue.GetInt64("latencyMs");
    m_latencyMsHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessStreamMetrics::Jsonize() const {
  JsonValue payload;

  if (m_latencyMsHasBeenSet) {
    payload.WithInt64("latencyMs", m_latencyMs);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
