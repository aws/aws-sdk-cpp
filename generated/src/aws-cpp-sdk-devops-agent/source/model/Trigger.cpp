/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/Trigger.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

Trigger::Trigger(JsonView jsonValue) { *this = jsonValue; }

Trigger& Trigger::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("triggerId")) {
    m_triggerId = jsonValue.GetString("triggerId");
    m_triggerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("condition")) {
    m_condition = jsonValue.GetObject("condition");
    m_conditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("action")) {
    m_action = jsonValue.GetObject("action");
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
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

JsonValue Trigger::Jsonize() const {
  JsonValue payload;

  if (m_triggerIdHasBeenSet) {
    payload.WithString("triggerId", m_triggerId);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_conditionHasBeenSet) {
    payload.WithObject("condition", m_condition.Jsonize());
  }

  if (m_actionHasBeenSet) {
    if (!m_action.View().IsNull()) {
      payload.WithObject("action", JsonValue(m_action.View()));
    }
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
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
}  // namespace DevOpsAgent
}  // namespace Aws
