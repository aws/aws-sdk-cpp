/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonRollback.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonRollback::DaemonRollback(JsonView jsonValue) { *this = jsonValue; }

DaemonRollback& DaemonRollback::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rollbackTargetDaemonRevisionArn")) {
    m_rollbackTargetDaemonRevisionArn = jsonValue.GetString("rollbackTargetDaemonRevisionArn");
    m_rollbackTargetDaemonRevisionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rollbackCapacityProviders")) {
    Aws::Utils::Array<JsonView> rollbackCapacityProvidersJsonList = jsonValue.GetArray("rollbackCapacityProviders");
    for (unsigned rollbackCapacityProvidersIndex = 0; rollbackCapacityProvidersIndex < rollbackCapacityProvidersJsonList.GetLength();
         ++rollbackCapacityProvidersIndex) {
      m_rollbackCapacityProviders.push_back(rollbackCapacityProvidersJsonList[rollbackCapacityProvidersIndex].AsString());
    }
    m_rollbackCapacityProvidersHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonRollback::Jsonize() const {
  JsonValue payload;

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_rollbackTargetDaemonRevisionArnHasBeenSet) {
    payload.WithString("rollbackTargetDaemonRevisionArn", m_rollbackTargetDaemonRevisionArn);
  }

  if (m_rollbackCapacityProvidersHasBeenSet) {
    Aws::Utils::Array<JsonValue> rollbackCapacityProvidersJsonList(m_rollbackCapacityProviders.size());
    for (unsigned rollbackCapacityProvidersIndex = 0; rollbackCapacityProvidersIndex < rollbackCapacityProvidersJsonList.GetLength();
         ++rollbackCapacityProvidersIndex) {
      rollbackCapacityProvidersJsonList[rollbackCapacityProvidersIndex].AsString(
          m_rollbackCapacityProviders[rollbackCapacityProvidersIndex]);
    }
    payload.WithArray("rollbackCapacityProviders", std::move(rollbackCapacityProvidersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
