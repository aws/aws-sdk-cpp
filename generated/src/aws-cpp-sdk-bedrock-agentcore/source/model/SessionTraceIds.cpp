/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SessionTraceIds.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SessionTraceIds::SessionTraceIds(JsonView jsonValue) { *this = jsonValue; }

SessionTraceIds& SessionTraceIds::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("traceIds")) {
    Aws::Utils::Array<JsonView> traceIdsJsonList = jsonValue.GetArray("traceIds");
    for (unsigned traceIdsIndex = 0; traceIdsIndex < traceIdsJsonList.GetLength(); ++traceIdsIndex) {
      m_traceIds.push_back(traceIdsJsonList[traceIdsIndex].AsString());
    }
    m_traceIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionTraceIds::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_traceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> traceIdsJsonList(m_traceIds.size());
    for (unsigned traceIdsIndex = 0; traceIdsIndex < traceIdsJsonList.GetLength(); ++traceIdsIndex) {
      traceIdsJsonList[traceIdsIndex].AsString(m_traceIds[traceIdsIndex]);
    }
    payload.WithArray("traceIds", std::move(traceIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
