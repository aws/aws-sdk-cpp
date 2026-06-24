/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ExecutionSummaryAffectedSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ExecutionSummaryAffectedSession::ExecutionSummaryAffectedSession(JsonView jsonValue) { *this = jsonValue; }

ExecutionSummaryAffectedSession& ExecutionSummaryAffectedSession::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("approachTaken")) {
    m_approachTaken = jsonValue.GetString("approachTaken");
    m_approachTakenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("finalOutcome")) {
    m_finalOutcome = jsonValue.GetString("finalOutcome");
    m_finalOutcomeHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionSummaryAffectedSession::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_approachTakenHasBeenSet) {
    payload.WithString("approachTaken", m_approachTaken);
  }

  if (m_finalOutcomeHasBeenSet) {
    payload.WithString("finalOutcome", m_finalOutcome);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
