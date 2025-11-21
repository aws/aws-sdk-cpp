/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ExtractionJobFilterInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ExtractionJobFilterInput::ExtractionJobFilterInput(JsonView jsonValue) { *this = jsonValue; }

ExtractionJobFilterInput& ExtractionJobFilterInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("strategyId")) {
    m_strategyId = jsonValue.GetString("strategyId");
    m_strategyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actorId")) {
    m_actorId = jsonValue.GetString("actorId");
    m_actorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ExtractionJobStatusMapper::GetExtractionJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractionJobFilterInput::Jsonize() const {
  JsonValue payload;

  if (m_strategyIdHasBeenSet) {
    payload.WithString("strategyId", m_strategyId);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_actorIdHasBeenSet) {
    payload.WithString("actorId", m_actorId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ExtractionJobStatusMapper::GetNameForExtractionJobStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
