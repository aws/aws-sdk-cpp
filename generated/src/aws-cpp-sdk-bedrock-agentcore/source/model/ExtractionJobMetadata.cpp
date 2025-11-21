/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ExtractionJobMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ExtractionJobMetadata::ExtractionJobMetadata(JsonView jsonValue) { *this = jsonValue; }

ExtractionJobMetadata& ExtractionJobMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobID")) {
    m_jobID = jsonValue.GetString("jobID");
    m_jobIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("messages")) {
    m_messages = jsonValue.GetObject("messages");
    m_messagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ExtractionJobStatusMapper::GetExtractionJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
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
  return *this;
}

JsonValue ExtractionJobMetadata::Jsonize() const {
  JsonValue payload;

  if (m_jobIDHasBeenSet) {
    payload.WithString("jobID", m_jobID);
  }

  if (m_messagesHasBeenSet) {
    payload.WithObject("messages", m_messages.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ExtractionJobStatusMapper::GetNameForExtractionJobStatus(m_status));
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("failureReason", m_failureReason);
  }

  if (m_strategyIdHasBeenSet) {
    payload.WithString("strategyId", m_strategyId);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_actorIdHasBeenSet) {
    payload.WithString("actorId", m_actorId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
