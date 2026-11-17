/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GenerationIdentifierCounts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GenerationIdentifierCounts::GenerationIdentifierCounts(JsonView jsonValue) { *this = jsonValue; }

GenerationIdentifierCounts& GenerationIdentifierCounts::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionIdCount")) {
    m_sessionIdCount = jsonValue.GetInteger("sessionIdCount");
    m_sessionIdCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("traceIdCount")) {
    m_traceIdCount = jsonValue.GetInteger("traceIdCount");
    m_traceIdCountHasBeenSet = true;
  }
  return *this;
}

JsonValue GenerationIdentifierCounts::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdCountHasBeenSet) {
    payload.WithInteger("sessionIdCount", m_sessionIdCount);
  }

  if (m_traceIdCountHasBeenSet) {
    payload.WithInteger("traceIdCount", m_traceIdCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
