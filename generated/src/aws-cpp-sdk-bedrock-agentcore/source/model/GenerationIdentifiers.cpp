/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GenerationIdentifiers.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GenerationIdentifiers::GenerationIdentifiers(JsonView jsonValue) { *this = jsonValue; }

GenerationIdentifiers& GenerationIdentifiers::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionIds")) {
    Aws::Utils::Array<JsonView> sessionIdsJsonList = jsonValue.GetArray("sessionIds");
    for (unsigned sessionIdsIndex = 0; sessionIdsIndex < sessionIdsJsonList.GetLength(); ++sessionIdsIndex) {
      m_sessionIds.push_back(sessionIdsJsonList[sessionIdsIndex].AsString());
    }
    m_sessionIdsHasBeenSet = true;
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

JsonValue GenerationIdentifiers::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sessionIdsJsonList(m_sessionIds.size());
    for (unsigned sessionIdsIndex = 0; sessionIdsIndex < sessionIdsJsonList.GetLength(); ++sessionIdsIndex) {
      sessionIdsJsonList[sessionIdsIndex].AsString(m_sessionIds[sessionIdsIndex]);
    }
    payload.WithArray("sessionIds", std::move(sessionIdsJsonList));
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
