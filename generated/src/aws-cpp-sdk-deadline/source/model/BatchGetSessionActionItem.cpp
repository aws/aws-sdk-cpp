/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/BatchGetSessionActionItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

BatchGetSessionActionItem::BatchGetSessionActionItem(JsonView jsonValue) { *this = jsonValue; }

BatchGetSessionActionItem& BatchGetSessionActionItem::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("sessionActionId")) {
    m_sessionActionId = jsonValue.GetString("sessionActionId");
    m_sessionActionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SessionActionStatusMapper::GetSessionActionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workerUpdatedAt")) {
    m_workerUpdatedAt = jsonValue.GetString("workerUpdatedAt");
    m_workerUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("progressPercent")) {
    m_progressPercent = jsonValue.GetDouble("progressPercent");
    m_progressPercentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("manifests")) {
    Aws::Utils::Array<JsonView> manifestsJsonList = jsonValue.GetArray("manifests");
    for (unsigned manifestsIndex = 0; manifestsIndex < manifestsJsonList.GetLength(); ++manifestsIndex) {
      m_manifests.push_back(manifestsJsonList[manifestsIndex].AsObject());
    }
    m_manifestsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("processExitCode")) {
    m_processExitCode = jsonValue.GetInteger("processExitCode");
    m_processExitCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("progressMessage")) {
    m_progressMessage = jsonValue.GetString("progressMessage");
    m_progressMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("acquiredLimits")) {
    Aws::Utils::Array<JsonView> acquiredLimitsJsonList = jsonValue.GetArray("acquiredLimits");
    for (unsigned acquiredLimitsIndex = 0; acquiredLimitsIndex < acquiredLimitsJsonList.GetLength(); ++acquiredLimitsIndex) {
      m_acquiredLimits.push_back(acquiredLimitsJsonList[acquiredLimitsIndex].AsObject());
    }
    m_acquiredLimitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("definition")) {
    m_definition = jsonValue.GetObject("definition");
    m_definitionHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetSessionActionItem::Jsonize() const {
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

  if (m_sessionActionIdHasBeenSet) {
    payload.WithString("sessionActionId", m_sessionActionId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SessionActionStatusMapper::GetNameForSessionActionStatus(m_status));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endedAtHasBeenSet) {
    payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_workerUpdatedAtHasBeenSet) {
    payload.WithString("workerUpdatedAt", m_workerUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_progressPercentHasBeenSet) {
    payload.WithDouble("progressPercent", m_progressPercent);
  }

  if (m_manifestsHasBeenSet) {
    Aws::Utils::Array<JsonValue> manifestsJsonList(m_manifests.size());
    for (unsigned manifestsIndex = 0; manifestsIndex < manifestsJsonList.GetLength(); ++manifestsIndex) {
      manifestsJsonList[manifestsIndex].AsObject(m_manifests[manifestsIndex].Jsonize());
    }
    payload.WithArray("manifests", std::move(manifestsJsonList));
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_processExitCodeHasBeenSet) {
    payload.WithInteger("processExitCode", m_processExitCode);
  }

  if (m_progressMessageHasBeenSet) {
    payload.WithString("progressMessage", m_progressMessage);
  }

  if (m_acquiredLimitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> acquiredLimitsJsonList(m_acquiredLimits.size());
    for (unsigned acquiredLimitsIndex = 0; acquiredLimitsIndex < acquiredLimitsJsonList.GetLength(); ++acquiredLimitsIndex) {
      acquiredLimitsJsonList[acquiredLimitsIndex].AsObject(m_acquiredLimits[acquiredLimitsIndex].Jsonize());
    }
    payload.WithArray("acquiredLimits", std::move(acquiredLimitsJsonList));
  }

  if (m_definitionHasBeenSet) {
    payload.WithObject("definition", m_definition.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
