/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

JobSummary::JobSummary(JsonView jsonValue) { *this = jsonValue; }

JobSummary& JobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobArn")) {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobName")) {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityUsage")) {
    Aws::Utils::Array<JsonView> capacityUsageJsonList = jsonValue.GetArray("capacityUsage");
    for (unsigned capacityUsageIndex = 0; capacityUsageIndex < capacityUsageJsonList.GetLength(); ++capacityUsageIndex) {
      m_capacityUsage.push_back(capacityUsageJsonList[capacityUsageIndex].AsObject());
    }
    m_capacityUsageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetInt64("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduledAt")) {
    m_scheduledAt = jsonValue.GetInt64("scheduledAt");
    m_scheduledAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shareIdentifier")) {
    m_shareIdentifier = jsonValue.GetString("shareIdentifier");
    m_shareIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetInt64("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stoppedAt")) {
    m_stoppedAt = jsonValue.GetInt64("stoppedAt");
    m_stoppedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("container")) {
    m_container = jsonValue.GetObject("container");
    m_containerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arrayProperties")) {
    m_arrayProperties = jsonValue.GetObject("arrayProperties");
    m_arrayPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nodeProperties")) {
    m_nodeProperties = jsonValue.GetObject("nodeProperties");
    m_nodePropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobDefinition")) {
    m_jobDefinition = jsonValue.GetString("jobDefinition");
    m_jobDefinitionHasBeenSet = true;
  }
  return *this;
}

JsonValue JobSummary::Jsonize() const {
  JsonValue payload;

  if (m_jobArnHasBeenSet) {
    payload.WithString("jobArn", m_jobArn);
  }

  if (m_jobIdHasBeenSet) {
    payload.WithString("jobId", m_jobId);
  }

  if (m_jobNameHasBeenSet) {
    payload.WithString("jobName", m_jobName);
  }

  if (m_capacityUsageHasBeenSet) {
    Aws::Utils::Array<JsonValue> capacityUsageJsonList(m_capacityUsage.size());
    for (unsigned capacityUsageIndex = 0; capacityUsageIndex < capacityUsageJsonList.GetLength(); ++capacityUsageIndex) {
      capacityUsageJsonList[capacityUsageIndex].AsObject(m_capacityUsage[capacityUsageIndex].Jsonize());
    }
    payload.WithArray("capacityUsage", std::move(capacityUsageJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithInt64("createdAt", m_createdAt);
  }

  if (m_scheduledAtHasBeenSet) {
    payload.WithInt64("scheduledAt", m_scheduledAt);
  }

  if (m_shareIdentifierHasBeenSet) {
    payload.WithString("shareIdentifier", m_shareIdentifier);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_startedAtHasBeenSet) {
    payload.WithInt64("startedAt", m_startedAt);
  }

  if (m_stoppedAtHasBeenSet) {
    payload.WithInt64("stoppedAt", m_stoppedAt);
  }

  if (m_containerHasBeenSet) {
    payload.WithObject("container", m_container.Jsonize());
  }

  if (m_arrayPropertiesHasBeenSet) {
    payload.WithObject("arrayProperties", m_arrayProperties.Jsonize());
  }

  if (m_nodePropertiesHasBeenSet) {
    payload.WithObject("nodeProperties", m_nodeProperties.Jsonize());
  }

  if (m_jobDefinitionHasBeenSet) {
    payload.WithString("jobDefinition", m_jobDefinition);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
