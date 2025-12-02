/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PolicyEngine.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PolicyEngine::PolicyEngine(JsonView jsonValue) { *this = jsonValue; }

PolicyEngine& PolicyEngine::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyEngineId")) {
    m_policyEngineId = jsonValue.GetString("policyEngineId");
    m_policyEngineIdHasBeenSet = true;
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
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyEngineArn")) {
    m_policyEngineArn = jsonValue.GetString("policyEngineArn");
    m_policyEngineArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PolicyEngineStatusMapper::GetPolicyEngineStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReasons")) {
    Aws::Utils::Array<JsonView> statusReasonsJsonList = jsonValue.GetArray("statusReasons");
    for (unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex) {
      m_statusReasons.push_back(statusReasonsJsonList[statusReasonsIndex].AsString());
    }
    m_statusReasonsHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyEngine::Jsonize() const {
  JsonValue payload;

  if (m_policyEngineIdHasBeenSet) {
    payload.WithString("policyEngineId", m_policyEngineId);
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

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_policyEngineArnHasBeenSet) {
    payload.WithString("policyEngineArn", m_policyEngineArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PolicyEngineStatusMapper::GetNameForPolicyEngineStatus(m_status));
  }

  if (m_statusReasonsHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusReasonsJsonList(m_statusReasons.size());
    for (unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex) {
      statusReasonsJsonList[statusReasonsIndex].AsString(m_statusReasons[statusReasonsIndex]);
    }
    payload.WithArray("statusReasons", std::move(statusReasonsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
