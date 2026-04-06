/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/BatchUpdateJobItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

BatchUpdateJobItem::BatchUpdateJobItem(JsonView jsonValue) { *this = jsonValue; }

BatchUpdateJobItem& BatchUpdateJobItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("farmId")) {
    m_farmId = jsonValue.GetString("farmId");
    m_farmIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queueId")) {
    m_queueId = jsonValue.GetString("queueId");
    m_queueIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetTaskRunStatus")) {
    m_targetTaskRunStatus = JobTargetTaskRunStatusMapper::GetJobTargetTaskRunStatusForName(jsonValue.GetString("targetTaskRunStatus"));
    m_targetTaskRunStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxFailedTasksCount")) {
    m_maxFailedTasksCount = jsonValue.GetInteger("maxFailedTasksCount");
    m_maxFailedTasksCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxRetriesPerTask")) {
    m_maxRetriesPerTask = jsonValue.GetInteger("maxRetriesPerTask");
    m_maxRetriesPerTaskHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lifecycleStatus")) {
    m_lifecycleStatus = UpdateJobLifecycleStatusMapper::GetUpdateJobLifecycleStatusForName(jsonValue.GetString("lifecycleStatus"));
    m_lifecycleStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxWorkerCount")) {
    m_maxWorkerCount = jsonValue.GetInteger("maxWorkerCount");
    m_maxWorkerCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateJobItem::Jsonize() const {
  JsonValue payload;

  if (m_farmIdHasBeenSet) {
    payload.WithString("farmId", m_farmId);
  }

  if (m_queueIdHasBeenSet) {
    payload.WithString("queueId", m_queueId);
  }

  if (m_jobIdHasBeenSet) {
    payload.WithString("jobId", m_jobId);
  }

  if (m_targetTaskRunStatusHasBeenSet) {
    payload.WithString("targetTaskRunStatus", JobTargetTaskRunStatusMapper::GetNameForJobTargetTaskRunStatus(m_targetTaskRunStatus));
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("priority", m_priority);
  }

  if (m_maxFailedTasksCountHasBeenSet) {
    payload.WithInteger("maxFailedTasksCount", m_maxFailedTasksCount);
  }

  if (m_maxRetriesPerTaskHasBeenSet) {
    payload.WithInteger("maxRetriesPerTask", m_maxRetriesPerTask);
  }

  if (m_lifecycleStatusHasBeenSet) {
    payload.WithString("lifecycleStatus", UpdateJobLifecycleStatusMapper::GetNameForUpdateJobLifecycleStatus(m_lifecycleStatus));
  }

  if (m_maxWorkerCountHasBeenSet) {
    payload.WithInteger("maxWorkerCount", m_maxWorkerCount);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
