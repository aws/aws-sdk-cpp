/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SampleSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SampleSession::SampleSession(JsonView jsonValue) { *this = jsonValue; }

SampleSession& SampleSession::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastSeenAt")) {
    m_lastSeenAt = jsonValue.GetString("lastSeenAt");
    m_lastSeenAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findings")) {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("findings");
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      m_findings.push_back(findingsJsonList[findingsIndex].AsObject());
    }
    m_findingsHasBeenSet = true;
  }
  return *this;
}

JsonValue SampleSession::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_lastSeenAtHasBeenSet) {
    payload.WithString("lastSeenAt", m_lastSeenAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_findingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingsJsonList(m_findings.size());
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      findingsJsonList[findingsIndex].AsObject(m_findings[findingsIndex].Jsonize());
    }
    payload.WithArray("findings", std::move(findingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
