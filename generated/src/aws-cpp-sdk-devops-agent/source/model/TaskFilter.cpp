/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/TaskFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

TaskFilter::TaskFilter(JsonView jsonValue) { *this = jsonValue; }

TaskFilter& TaskFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("createdAfter")) {
    m_createdAfter = jsonValue.GetString("createdAfter");
    m_createdAfterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBefore")) {
    m_createdBefore = jsonValue.GetString("createdBefore");
    m_createdBeforeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    Aws::Utils::Array<JsonView> priorityJsonList = jsonValue.GetArray("priority");
    for (unsigned priorityIndex = 0; priorityIndex < priorityJsonList.GetLength(); ++priorityIndex) {
      m_priority.push_back(PriorityMapper::GetPriorityForName(priorityJsonList[priorityIndex].AsString()));
    }
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    Aws::Utils::Array<JsonView> statusJsonList = jsonValue.GetArray("status");
    for (unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex) {
      m_status.push_back(TaskStatusMapper::GetTaskStatusForName(statusJsonList[statusIndex].AsString()));
    }
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskType")) {
    Aws::Utils::Array<JsonView> taskTypeJsonList = jsonValue.GetArray("taskType");
    for (unsigned taskTypeIndex = 0; taskTypeIndex < taskTypeJsonList.GetLength(); ++taskTypeIndex) {
      m_taskType.push_back(TaskTypeMapper::GetTaskTypeForName(taskTypeJsonList[taskTypeIndex].AsString()));
    }
    m_taskTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("primaryTaskId")) {
    m_primaryTaskId = jsonValue.GetString("primaryTaskId");
    m_primaryTaskIdHasBeenSet = true;
  }
  return *this;
}

JsonValue TaskFilter::Jsonize() const {
  JsonValue payload;

  if (m_createdAfterHasBeenSet) {
    payload.WithString("createdAfter", m_createdAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_createdBeforeHasBeenSet) {
    payload.WithString("createdBefore", m_createdBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_priorityHasBeenSet) {
    Aws::Utils::Array<JsonValue> priorityJsonList(m_priority.size());
    for (unsigned priorityIndex = 0; priorityIndex < priorityJsonList.GetLength(); ++priorityIndex) {
      priorityJsonList[priorityIndex].AsString(PriorityMapper::GetNameForPriority(m_priority[priorityIndex]));
    }
    payload.WithArray("priority", std::move(priorityJsonList));
  }

  if (m_statusHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusJsonList(m_status.size());
    for (unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex) {
      statusJsonList[statusIndex].AsString(TaskStatusMapper::GetNameForTaskStatus(m_status[statusIndex]));
    }
    payload.WithArray("status", std::move(statusJsonList));
  }

  if (m_taskTypeHasBeenSet) {
    Aws::Utils::Array<JsonValue> taskTypeJsonList(m_taskType.size());
    for (unsigned taskTypeIndex = 0; taskTypeIndex < taskTypeJsonList.GetLength(); ++taskTypeIndex) {
      taskTypeJsonList[taskTypeIndex].AsString(TaskTypeMapper::GetNameForTaskType(m_taskType[taskTypeIndex]));
    }
    payload.WithArray("taskType", std::move(taskTypeJsonList));
  }

  if (m_primaryTaskIdHasBeenSet) {
    payload.WithString("primaryTaskId", m_primaryTaskId);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
