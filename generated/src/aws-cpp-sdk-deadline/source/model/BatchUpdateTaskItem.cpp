/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/BatchUpdateTaskItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

BatchUpdateTaskItem::BatchUpdateTaskItem(JsonView jsonValue) { *this = jsonValue; }

BatchUpdateTaskItem& BatchUpdateTaskItem::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("stepId")) {
    m_stepId = jsonValue.GetString("stepId");
    m_stepIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskId")) {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetRunStatus")) {
    m_targetRunStatus = TaskTargetRunStatusMapper::GetTaskTargetRunStatusForName(jsonValue.GetString("targetRunStatus"));
    m_targetRunStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateTaskItem::Jsonize() const {
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

  if (m_stepIdHasBeenSet) {
    payload.WithString("stepId", m_stepId);
  }

  if (m_taskIdHasBeenSet) {
    payload.WithString("taskId", m_taskId);
  }

  if (m_targetRunStatusHasBeenSet) {
    payload.WithString("targetRunStatus", TaskTargetRunStatusMapper::GetNameForTaskTargetRunStatus(m_targetRunStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
