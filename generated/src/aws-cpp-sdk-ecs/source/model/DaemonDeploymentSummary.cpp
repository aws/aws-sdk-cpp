/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonDeploymentSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonDeploymentSummary::DaemonDeploymentSummary(JsonView jsonValue) { *this = jsonValue; }

DaemonDeploymentSummary& DaemonDeploymentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("daemonDeploymentArn")) {
    m_daemonDeploymentArn = jsonValue.GetString("daemonDeploymentArn");
    m_daemonDeploymentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("daemonArn")) {
    m_daemonArn = jsonValue.GetString("daemonArn");
    m_daemonArnHasBeenSet = true;
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
  if (jsonValue.ValueExists("targetDaemonRevisionArn")) {
    m_targetDaemonRevisionArn = jsonValue.GetString("targetDaemonRevisionArn");
    m_targetDaemonRevisionArnHasBeenSet = true;
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

JsonValue DaemonDeploymentSummary::Jsonize() const {
  JsonValue payload;

  if (m_daemonDeploymentArnHasBeenSet) {
    payload.WithString("daemonDeploymentArn", m_daemonDeploymentArn);
  }

  if (m_daemonArnHasBeenSet) {
    payload.WithString("daemonArn", m_daemonArn);
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

  if (m_targetDaemonRevisionArnHasBeenSet) {
    payload.WithString("targetDaemonRevisionArn", m_targetDaemonRevisionArn);
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
