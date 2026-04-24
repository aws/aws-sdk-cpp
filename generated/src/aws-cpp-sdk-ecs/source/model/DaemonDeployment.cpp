/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonDeployment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonDeployment::DaemonDeployment(JsonView jsonValue) { *this = jsonValue; }

DaemonDeployment& DaemonDeployment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("daemonDeploymentArn")) {
    m_daemonDeploymentArn = jsonValue.GetString("daemonDeploymentArn");
    m_daemonDeploymentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterArn")) {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DaemonDeploymentStatusMapper::GetDaemonDeploymentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetDaemonRevision")) {
    m_targetDaemonRevision = jsonValue.GetObject("targetDaemonRevision");
    m_targetDaemonRevisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceDaemonRevisions")) {
    Aws::Utils::Array<JsonView> sourceDaemonRevisionsJsonList = jsonValue.GetArray("sourceDaemonRevisions");
    for (unsigned sourceDaemonRevisionsIndex = 0; sourceDaemonRevisionsIndex < sourceDaemonRevisionsJsonList.GetLength();
         ++sourceDaemonRevisionsIndex) {
      m_sourceDaemonRevisions.push_back(sourceDaemonRevisionsJsonList[sourceDaemonRevisionsIndex].AsObject());
    }
    m_sourceDaemonRevisionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("circuitBreaker")) {
    m_circuitBreaker = jsonValue.GetObject("circuitBreaker");
    m_circuitBreakerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("alarms")) {
    m_alarms = jsonValue.GetObject("alarms");
    m_alarmsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rollback")) {
    m_rollback = jsonValue.GetObject("rollback");
    m_rollbackHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentConfiguration")) {
    m_deploymentConfiguration = jsonValue.GetObject("deploymentConfiguration");
    m_deploymentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stoppedAt")) {
    m_stoppedAt = jsonValue.GetDouble("stoppedAt");
    m_stoppedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("finishedAt")) {
    m_finishedAt = jsonValue.GetDouble("finishedAt");
    m_finishedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonDeployment::Jsonize() const {
  JsonValue payload;

  if (m_daemonDeploymentArnHasBeenSet) {
    payload.WithString("daemonDeploymentArn", m_daemonDeploymentArn);
  }

  if (m_clusterArnHasBeenSet) {
    payload.WithString("clusterArn", m_clusterArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DaemonDeploymentStatusMapper::GetNameForDaemonDeploymentStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_targetDaemonRevisionHasBeenSet) {
    payload.WithObject("targetDaemonRevision", m_targetDaemonRevision.Jsonize());
  }

  if (m_sourceDaemonRevisionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceDaemonRevisionsJsonList(m_sourceDaemonRevisions.size());
    for (unsigned sourceDaemonRevisionsIndex = 0; sourceDaemonRevisionsIndex < sourceDaemonRevisionsJsonList.GetLength();
         ++sourceDaemonRevisionsIndex) {
      sourceDaemonRevisionsJsonList[sourceDaemonRevisionsIndex].AsObject(m_sourceDaemonRevisions[sourceDaemonRevisionsIndex].Jsonize());
    }
    payload.WithArray("sourceDaemonRevisions", std::move(sourceDaemonRevisionsJsonList));
  }

  if (m_circuitBreakerHasBeenSet) {
    payload.WithObject("circuitBreaker", m_circuitBreaker.Jsonize());
  }

  if (m_alarmsHasBeenSet) {
    payload.WithObject("alarms", m_alarms.Jsonize());
  }

  if (m_rollbackHasBeenSet) {
    payload.WithObject("rollback", m_rollback.Jsonize());
  }

  if (m_deploymentConfigurationHasBeenSet) {
    payload.WithObject("deploymentConfiguration", m_deploymentConfiguration.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_stoppedAtHasBeenSet) {
    payload.WithDouble("stoppedAt", m_stoppedAt.SecondsWithMSPrecision());
  }

  if (m_finishedAtHasBeenSet) {
    payload.WithDouble("finishedAt", m_finishedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
