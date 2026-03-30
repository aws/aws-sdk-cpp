/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/Execution.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

Execution::Execution(JsonView jsonValue) { *this = jsonValue; }

Execution& Execution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionId")) {
    m_executionId = jsonValue.GetString("executionId");
    m_executionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parentExecutionId")) {
    m_parentExecutionId = jsonValue.GetString("parentExecutionId");
    m_parentExecutionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSubTask")) {
    m_agentSubTask = jsonValue.GetString("agentSubTask");
    m_agentSubTaskHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionStatus")) {
    m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("executionStatus"));
    m_executionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentType")) {
    m_agentType = jsonValue.GetString("agentType");
    m_agentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("uid")) {
    m_uid = jsonValue.GetString("uid");
    m_uidHasBeenSet = true;
  }
  return *this;
}

JsonValue Execution::Jsonize() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_executionIdHasBeenSet) {
    payload.WithString("executionId", m_executionId);
  }

  if (m_parentExecutionIdHasBeenSet) {
    payload.WithString("parentExecutionId", m_parentExecutionId);
  }

  if (m_agentSubTaskHasBeenSet) {
    payload.WithString("agentSubTask", m_agentSubTask);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_executionStatusHasBeenSet) {
    payload.WithString("executionStatus", ExecutionStatusMapper::GetNameForExecutionStatus(m_executionStatus));
  }

  if (m_agentTypeHasBeenSet) {
    payload.WithString("agentType", m_agentType);
  }

  if (m_uidHasBeenSet) {
    payload.WithString("uid", m_uid);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
