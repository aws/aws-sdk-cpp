/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentInsightStoreSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

AgentInsightStoreSummary::AgentInsightStoreSummary(JsonView jsonValue) { *this = jsonValue; }

AgentInsightStoreSummary& AgentInsightStoreSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentInsightStoreArn")) {
    m_agentInsightStoreArn = jsonValue.GetString("agentInsightStoreArn");
    m_agentInsightStoreArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentInsightStoreId")) {
    m_agentInsightStoreId = jsonValue.GetString("agentInsightStoreId");
    m_agentInsightStoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AgentInsightStoreStatusMapper::GetAgentInsightStoreStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enablementStatus")) {
    m_enablementStatus =
        AgentInsightStoreEnablementStatusMapper::GetAgentInsightStoreEnablementStatusForName(jsonValue.GetString("enablementStatus"));
    m_enablementStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentInsightStoreSummary::Jsonize() const {
  JsonValue payload;

  if (m_agentInsightStoreArnHasBeenSet) {
    payload.WithString("agentInsightStoreArn", m_agentInsightStoreArn);
  }

  if (m_agentInsightStoreIdHasBeenSet) {
    payload.WithString("agentInsightStoreId", m_agentInsightStoreId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AgentInsightStoreStatusMapper::GetNameForAgentInsightStoreStatus(m_status));
  }

  if (m_enablementStatusHasBeenSet) {
    payload.WithString("enablementStatus",
                       AgentInsightStoreEnablementStatusMapper::GetNameForAgentInsightStoreEnablementStatus(m_enablementStatus));
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
