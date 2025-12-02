/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/EcsTask.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

EcsTask::EcsTask(JsonView jsonValue) { *this = jsonValue; }

EcsTask& EcsTask::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskDefinitionArn")) {
    m_taskDefinitionArn = jsonValue.GetString("taskDefinitionArn");
    m_taskDefinitionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("launchType")) {
    m_launchType = EcsLaunchTypeMapper::GetEcsLaunchTypeForName(jsonValue.GetString("launchType"));
    m_launchTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerUids")) {
    Aws::Utils::Array<JsonView> containerUidsJsonList = jsonValue.GetArray("containerUids");
    for (unsigned containerUidsIndex = 0; containerUidsIndex < containerUidsJsonList.GetLength(); ++containerUidsIndex) {
      m_containerUids.push_back(containerUidsJsonList[containerUidsIndex].AsString());
    }
    m_containerUidsHasBeenSet = true;
  }
  return *this;
}

JsonValue EcsTask::Jsonize() const {
  JsonValue payload;

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_taskDefinitionArnHasBeenSet) {
    payload.WithString("taskDefinitionArn", m_taskDefinitionArn);
  }

  if (m_launchTypeHasBeenSet) {
    payload.WithString("launchType", EcsLaunchTypeMapper::GetNameForEcsLaunchType(m_launchType));
  }

  if (m_containerUidsHasBeenSet) {
    Aws::Utils::Array<JsonValue> containerUidsJsonList(m_containerUids.size());
    for (unsigned containerUidsIndex = 0; containerUidsIndex < containerUidsJsonList.GetLength(); ++containerUidsIndex) {
      containerUidsJsonList[containerUidsIndex].AsString(m_containerUids[containerUidsIndex]);
    }
    payload.WithArray("containerUids", std::move(containerUidsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
