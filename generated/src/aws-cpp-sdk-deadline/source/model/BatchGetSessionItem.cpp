/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/BatchGetSessionItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

BatchGetSessionItem::BatchGetSessionItem(JsonView jsonValue) { *this = jsonValue; }

BatchGetSessionItem& BatchGetSessionItem::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fleetId")) {
    m_fleetId = jsonValue.GetString("fleetId");
    m_fleetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workerId")) {
    m_workerId = jsonValue.GetString("workerId");
    m_workerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lifecycleStatus")) {
    m_lifecycleStatus = SessionLifecycleStatusMapper::GetSessionLifecycleStatusForName(jsonValue.GetString("lifecycleStatus"));
    m_lifecycleStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetLifecycleStatus")) {
    m_targetLifecycleStatus =
        SessionLifecycleTargetStatusMapper::GetSessionLifecycleTargetStatusForName(jsonValue.GetString("targetLifecycleStatus"));
    m_targetLifecycleStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedBy")) {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("log")) {
    m_log = jsonValue.GetObject("log");
    m_logHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hostProperties")) {
    m_hostProperties = jsonValue.GetObject("hostProperties");
    m_hostPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workerLog")) {
    m_workerLog = jsonValue.GetObject("workerLog");
    m_workerLogHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetSessionItem::Jsonize() const {
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

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_fleetIdHasBeenSet) {
    payload.WithString("fleetId", m_fleetId);
  }

  if (m_workerIdHasBeenSet) {
    payload.WithString("workerId", m_workerId);
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lifecycleStatusHasBeenSet) {
    payload.WithString("lifecycleStatus", SessionLifecycleStatusMapper::GetNameForSessionLifecycleStatus(m_lifecycleStatus));
  }

  if (m_endedAtHasBeenSet) {
    payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_targetLifecycleStatusHasBeenSet) {
    payload.WithString("targetLifecycleStatus",
                       SessionLifecycleTargetStatusMapper::GetNameForSessionLifecycleTargetStatus(m_targetLifecycleStatus));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedByHasBeenSet) {
    payload.WithString("updatedBy", m_updatedBy);
  }

  if (m_logHasBeenSet) {
    payload.WithObject("log", m_log.Jsonize());
  }

  if (m_hostPropertiesHasBeenSet) {
    payload.WithObject("hostProperties", m_hostProperties.Jsonize());
  }

  if (m_workerLogHasBeenSet) {
    payload.WithObject("workerLog", m_workerLog.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
