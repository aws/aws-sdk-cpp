/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RetrievalInstructionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

RetrievalInstructionSummary::RetrievalInstructionSummary(JsonView jsonValue) { *this = jsonValue; }

RetrievalInstructionSummary& RetrievalInstructionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("retrievalInstructionId")) {
    m_retrievalInstructionId = jsonValue.GetString("retrievalInstructionId");
    m_retrievalInstructionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retrievalInstructionArn")) {
    m_retrievalInstructionArn = jsonValue.GetString("retrievalInstructionArn");
    m_retrievalInstructionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RetrievalInstructionStatusMapper::GetRetrievalInstructionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastTransitionStatus")) {
    m_lastTransitionStatus = RetrievalInstructionLastTransitionStatusMapper::GetRetrievalInstructionLastTransitionStatusForName(
        jsonValue.GetString("lastTransitionStatus"));
    m_lastTransitionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalInstructionSummary::Jsonize() const {
  JsonValue payload;

  if (m_retrievalInstructionIdHasBeenSet) {
    payload.WithString("retrievalInstructionId", m_retrievalInstructionId);
  }

  if (m_retrievalInstructionArnHasBeenSet) {
    payload.WithString("retrievalInstructionArn", m_retrievalInstructionArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RetrievalInstructionStatusMapper::GetNameForRetrievalInstructionStatus(m_status));
  }

  if (m_lastTransitionStatusHasBeenSet) {
    payload.WithString(
        "lastTransitionStatus",
        RetrievalInstructionLastTransitionStatusMapper::GetNameForRetrievalInstructionLastTransitionStatus(m_lastTransitionStatus));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
