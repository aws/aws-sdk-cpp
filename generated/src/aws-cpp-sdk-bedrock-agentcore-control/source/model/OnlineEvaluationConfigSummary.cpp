/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OnlineEvaluationConfigSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

OnlineEvaluationConfigSummary::OnlineEvaluationConfigSummary(JsonView jsonValue) { *this = jsonValue; }

OnlineEvaluationConfigSummary& OnlineEvaluationConfigSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("onlineEvaluationConfigArn")) {
    m_onlineEvaluationConfigArn = jsonValue.GetString("onlineEvaluationConfigArn");
    m_onlineEvaluationConfigArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("onlineEvaluationConfigId")) {
    m_onlineEvaluationConfigId = jsonValue.GetString("onlineEvaluationConfigId");
    m_onlineEvaluationConfigIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("onlineEvaluationConfigName")) {
    m_onlineEvaluationConfigName = jsonValue.GetString("onlineEvaluationConfigName");
    m_onlineEvaluationConfigNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = OnlineEvaluationConfigStatusMapper::GetOnlineEvaluationConfigStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionStatus")) {
    m_executionStatus =
        OnlineEvaluationExecutionStatusMapper::GetOnlineEvaluationExecutionStatusForName(jsonValue.GetString("executionStatus"));
    m_executionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue OnlineEvaluationConfigSummary::Jsonize() const {
  JsonValue payload;

  if (m_onlineEvaluationConfigArnHasBeenSet) {
    payload.WithString("onlineEvaluationConfigArn", m_onlineEvaluationConfigArn);
  }

  if (m_onlineEvaluationConfigIdHasBeenSet) {
    payload.WithString("onlineEvaluationConfigId", m_onlineEvaluationConfigId);
  }

  if (m_onlineEvaluationConfigNameHasBeenSet) {
    payload.WithString("onlineEvaluationConfigName", m_onlineEvaluationConfigName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", OnlineEvaluationConfigStatusMapper::GetNameForOnlineEvaluationConfigStatus(m_status));
  }

  if (m_executionStatusHasBeenSet) {
    payload.WithString("executionStatus",
                       OnlineEvaluationExecutionStatusMapper::GetNameForOnlineEvaluationExecutionStatus(m_executionStatus));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("failureReason", m_failureReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
