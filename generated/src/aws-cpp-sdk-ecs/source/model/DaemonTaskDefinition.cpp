/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonTaskDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonTaskDefinition::DaemonTaskDefinition(JsonView jsonValue) { *this = jsonValue; }

DaemonTaskDefinition& DaemonTaskDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("daemonTaskDefinitionArn")) {
    m_daemonTaskDefinitionArn = jsonValue.GetString("daemonTaskDefinitionArn");
    m_daemonTaskDefinitionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("family")) {
    m_family = jsonValue.GetString("family");
    m_familyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revision")) {
    m_revision = jsonValue.GetInteger("revision");
    m_revisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskRoleArn")) {
    m_taskRoleArn = jsonValue.GetString("taskRoleArn");
    m_taskRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerDefinitions")) {
    Aws::Utils::Array<JsonView> containerDefinitionsJsonList = jsonValue.GetArray("containerDefinitions");
    for (unsigned containerDefinitionsIndex = 0; containerDefinitionsIndex < containerDefinitionsJsonList.GetLength();
         ++containerDefinitionsIndex) {
      m_containerDefinitions.push_back(containerDefinitionsJsonList[containerDefinitionsIndex].AsObject());
    }
    m_containerDefinitionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("volumes")) {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for (unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex) {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cpu")) {
    m_cpu = jsonValue.GetString("cpu");
    m_cpuHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memory")) {
    m_memory = jsonValue.GetString("memory");
    m_memoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DaemonTaskDefinitionStatusMapper::GetDaemonTaskDefinitionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registeredAt")) {
    m_registeredAt = jsonValue.GetDouble("registeredAt");
    m_registeredAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deleteRequestedAt")) {
    m_deleteRequestedAt = jsonValue.GetDouble("deleteRequestedAt");
    m_deleteRequestedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registeredBy")) {
    m_registeredBy = jsonValue.GetString("registeredBy");
    m_registeredByHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonTaskDefinition::Jsonize() const {
  JsonValue payload;

  if (m_daemonTaskDefinitionArnHasBeenSet) {
    payload.WithString("daemonTaskDefinitionArn", m_daemonTaskDefinitionArn);
  }

  if (m_familyHasBeenSet) {
    payload.WithString("family", m_family);
  }

  if (m_revisionHasBeenSet) {
    payload.WithInteger("revision", m_revision);
  }

  if (m_taskRoleArnHasBeenSet) {
    payload.WithString("taskRoleArn", m_taskRoleArn);
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_containerDefinitionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> containerDefinitionsJsonList(m_containerDefinitions.size());
    for (unsigned containerDefinitionsIndex = 0; containerDefinitionsIndex < containerDefinitionsJsonList.GetLength();
         ++containerDefinitionsIndex) {
      containerDefinitionsJsonList[containerDefinitionsIndex].AsObject(m_containerDefinitions[containerDefinitionsIndex].Jsonize());
    }
    payload.WithArray("containerDefinitions", std::move(containerDefinitionsJsonList));
  }

  if (m_volumesHasBeenSet) {
    Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
    for (unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex) {
      volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
    }
    payload.WithArray("volumes", std::move(volumesJsonList));
  }

  if (m_cpuHasBeenSet) {
    payload.WithString("cpu", m_cpu);
  }

  if (m_memoryHasBeenSet) {
    payload.WithString("memory", m_memory);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DaemonTaskDefinitionStatusMapper::GetNameForDaemonTaskDefinitionStatus(m_status));
  }

  if (m_registeredAtHasBeenSet) {
    payload.WithDouble("registeredAt", m_registeredAt.SecondsWithMSPrecision());
  }

  if (m_deleteRequestedAtHasBeenSet) {
    payload.WithDouble("deleteRequestedAt", m_deleteRequestedAt.SecondsWithMSPrecision());
  }

  if (m_registeredByHasBeenSet) {
    payload.WithString("registeredBy", m_registeredBy);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
