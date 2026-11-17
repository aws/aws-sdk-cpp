/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AgentInsightSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

AgentInsightSummary::AgentInsightSummary(JsonView jsonValue) { *this = jsonValue; }

AgentInsightSummary& AgentInsightSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = InsightTypeMapper::GetInsightTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedSessionCount")) {
    m_affectedSessionCount = jsonValue.GetInteger("affectedSessionCount");
    m_affectedSessionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentInsightId")) {
    m_agentInsightId = jsonValue.GetString("agentInsightId");
    m_agentInsightIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationName")) {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("batchEvaluationId")) {
    m_batchEvaluationId = jsonValue.GetString("batchEvaluationId");
    m_batchEvaluationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customerMetadataStatus")) {
    m_customerMetadataStatus = AgentInsightCustomerMetadataStatusMapper::GetAgentInsightCustomerMetadataStatusForName(
        jsonValue.GetString("customerMetadataStatus"));
    m_customerMetadataStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("archiveStatus")) {
    m_archiveStatus = AgentInsightArchiveStatusMapper::GetAgentInsightArchiveStatusForName(jsonValue.GetString("archiveStatus"));
    m_archiveStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastSeenAt")) {
    m_lastSeenAt = jsonValue.GetString("lastSeenAt");
    m_lastSeenAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentInsightSummary::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", InsightTypeMapper::GetNameForInsightType(m_type));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_affectedSessionCountHasBeenSet) {
    payload.WithInteger("affectedSessionCount", m_affectedSessionCount);
  }

  if (m_agentInsightIdHasBeenSet) {
    payload.WithString("agentInsightId", m_agentInsightId);
  }

  if (m_applicationNameHasBeenSet) {
    payload.WithString("applicationName", m_applicationName);
  }

  if (m_batchEvaluationIdHasBeenSet) {
    payload.WithString("batchEvaluationId", m_batchEvaluationId);
  }

  if (m_customerMetadataStatusHasBeenSet) {
    payload.WithString("customerMetadataStatus",
                       AgentInsightCustomerMetadataStatusMapper::GetNameForAgentInsightCustomerMetadataStatus(m_customerMetadataStatus));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_archiveStatusHasBeenSet) {
    payload.WithString("archiveStatus", AgentInsightArchiveStatusMapper::GetNameForAgentInsightArchiveStatus(m_archiveStatus));
  }

  if (m_lastSeenAtHasBeenSet) {
    payload.WithString("lastSeenAt", m_lastSeenAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
