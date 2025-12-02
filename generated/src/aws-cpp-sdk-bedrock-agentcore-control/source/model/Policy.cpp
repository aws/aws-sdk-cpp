/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Policy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

Policy::Policy(JsonView jsonValue) { *this = jsonValue; }

Policy& Policy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyId")) {
    m_policyId = jsonValue.GetString("policyId");
    m_policyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyEngineId")) {
    m_policyEngineId = jsonValue.GetString("policyEngineId");
    m_policyEngineIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("definition")) {
    m_definition = jsonValue.GetObject("definition");
    m_definitionHasBeenSet = true;
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
  if (jsonValue.ValueExists("policyArn")) {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PolicyStatusMapper::GetPolicyStatusForName(jsonValue.GetString("status"));
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

JsonValue Policy::Jsonize() const {
  JsonValue payload;

  if (m_policyIdHasBeenSet) {
    payload.WithString("policyId", m_policyId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_policyEngineIdHasBeenSet) {
    payload.WithString("policyEngineId", m_policyEngineId);
  }

  if (m_definitionHasBeenSet) {
    payload.WithObject("definition", m_definition.Jsonize());
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

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PolicyStatusMapper::GetNameForPolicyStatus(m_status));
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
