/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PolicyGeneration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PolicyGeneration::PolicyGeneration(JsonView jsonValue) { *this = jsonValue; }

PolicyGeneration& PolicyGeneration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyEngineId")) {
    m_policyEngineId = jsonValue.GetString("policyEngineId");
    m_policyEngineIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyGenerationId")) {
    m_policyGenerationId = jsonValue.GetString("policyGenerationId");
    m_policyGenerationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyGenerationArn")) {
    m_policyGenerationArn = jsonValue.GetString("policyGenerationArn");
    m_policyGenerationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resource")) {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PolicyGenerationStatusMapper::GetPolicyGenerationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReasons")) {
    Aws::Utils::Array<JsonView> statusReasonsJsonList = jsonValue.GetArray("statusReasons");
    for (unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex) {
      m_statusReasons.push_back(statusReasonsJsonList[statusReasonsIndex].AsString());
    }
    m_statusReasonsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findings")) {
    m_findings = jsonValue.GetString("findings");
    m_findingsHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyGeneration::Jsonize() const {
  JsonValue payload;

  if (m_policyEngineIdHasBeenSet) {
    payload.WithString("policyEngineId", m_policyEngineId);
  }

  if (m_policyGenerationIdHasBeenSet) {
    payload.WithString("policyGenerationId", m_policyGenerationId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_policyGenerationArnHasBeenSet) {
    payload.WithString("policyGenerationArn", m_policyGenerationArn);
  }

  if (m_resourceHasBeenSet) {
    payload.WithObject("resource", m_resource.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PolicyGenerationStatusMapper::GetNameForPolicyGenerationStatus(m_status));
  }

  if (m_statusReasonsHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusReasonsJsonList(m_statusReasons.size());
    for (unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex) {
      statusReasonsJsonList[statusReasonsIndex].AsString(m_statusReasons[statusReasonsIndex]);
    }
    payload.WithArray("statusReasons", std::move(statusReasonsJsonList));
  }

  if (m_findingsHasBeenSet) {
    payload.WithString("findings", m_findings);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
