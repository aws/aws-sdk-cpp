/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/Task.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

Task::Task(JsonView jsonValue) { *this = jsonValue; }

Task& Task::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskId")) {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionId")) {
    m_executionId = jsonValue.GetString("executionId");
    m_executionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reference")) {
    m_reference = jsonValue.GetObject("reference");
    m_referenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskType")) {
    m_taskType = TaskTypeMapper::GetTaskTypeForName(jsonValue.GetString("taskType"));
    m_taskTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = PriorityMapper::GetPriorityForName(jsonValue.GetString("priority"));
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetInteger("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportMetadata")) {
    m_supportMetadata = jsonValue.GetObject("supportMetadata");
    m_supportMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("primaryTaskId")) {
    m_primaryTaskId = jsonValue.GetString("primaryTaskId");
    m_primaryTaskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasLinkedTasks")) {
    m_hasLinkedTasks = jsonValue.GetBool("hasLinkedTasks");
    m_hasLinkedTasksHasBeenSet = true;
  }
  return *this;
}

JsonValue Task::Jsonize() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_taskIdHasBeenSet) {
    payload.WithString("taskId", m_taskId);
  }

  if (m_executionIdHasBeenSet) {
    payload.WithString("executionId", m_executionId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_referenceHasBeenSet) {
    payload.WithObject("reference", m_reference.Jsonize());
  }

  if (m_taskTypeHasBeenSet) {
    payload.WithString("taskType", TaskTypeMapper::GetNameForTaskType(m_taskType));
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("priority", PriorityMapper::GetNameForPriority(m_priority));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", TaskStatusMapper::GetNameForTaskStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_versionHasBeenSet) {
    payload.WithInteger("version", m_version);
  }

  if (m_supportMetadataHasBeenSet) {
    if (!m_supportMetadata.View().IsNull()) {
      payload.WithObject("supportMetadata", JsonValue(m_supportMetadata.View()));
    }
  }

  if (m_metadataHasBeenSet) {
    if (!m_metadata.View().IsNull()) {
      payload.WithObject("metadata", JsonValue(m_metadata.View()));
    }
  }

  if (m_primaryTaskIdHasBeenSet) {
    payload.WithString("primaryTaskId", m_primaryTaskId);
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_hasLinkedTasksHasBeenSet) {
    payload.WithBool("hasLinkedTasks", m_hasLinkedTasks);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
