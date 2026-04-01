/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonSummary::DaemonSummary(JsonView jsonValue) { *this = jsonValue; }

DaemonSummary& DaemonSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("daemonArn")) {
    m_daemonArn = jsonValue.GetString("daemonArn");
    m_daemonArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DaemonStatusMapper::GetDaemonStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonSummary::Jsonize() const {
  JsonValue payload;

  if (m_daemonArnHasBeenSet) {
    payload.WithString("daemonArn", m_daemonArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DaemonStatusMapper::GetNameForDaemonStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
