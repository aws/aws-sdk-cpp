/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ContainerTaskConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

ContainerTaskConfiguration::ContainerTaskConfiguration(JsonView jsonValue) { *this = jsonValue; }

ContainerTaskConfiguration& ContainerTaskConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ecrUri")) {
    m_ecrUri = jsonValue.GetString("ecrUri");
    m_ecrUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskExecutionRole")) {
    m_taskExecutionRole = jsonValue.GetString("taskExecutionRole");
    m_taskExecutionRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("processingType")) {
    m_processingType = ProcessingTypeMapper::GetProcessingTypeForName(jsonValue.GetString("processingType"));
    m_processingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("processingUnit")) {
    m_processingUnit = ProcessingUnitMapper::GetProcessingUnitForName(jsonValue.GetString("processingUnit"));
    m_processingUnitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ephemeralStorageConfiguration")) {
    m_ephemeralStorageConfiguration = jsonValue.GetObject("ephemeralStorageConfiguration");
    m_ephemeralStorageConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("command")) {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("command");
    for (unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex) {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeoutSeconds")) {
    m_timeoutSeconds = jsonValue.GetInt64("timeoutSeconds");
    m_timeoutSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentVariables")) {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("environmentVariables").GetAllObjects();
    for (auto& environmentVariablesItem : environmentVariablesJsonMap) {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mounts")) {
    Aws::Utils::Array<JsonView> mountsJsonList = jsonValue.GetArray("mounts");
    for (unsigned mountsIndex = 0; mountsIndex < mountsJsonList.GetLength(); ++mountsIndex) {
      m_mounts.push_back(mountsJsonList[mountsIndex].AsObject());
    }
    m_mountsHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerTaskConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_ecrUriHasBeenSet) {
    payload.WithString("ecrUri", m_ecrUri);
  }

  if (m_taskExecutionRoleHasBeenSet) {
    payload.WithString("taskExecutionRole", m_taskExecutionRole);
  }

  if (m_processingTypeHasBeenSet) {
    payload.WithString("processingType", ProcessingTypeMapper::GetNameForProcessingType(m_processingType));
  }

  if (m_processingUnitHasBeenSet) {
    payload.WithString("processingUnit", ProcessingUnitMapper::GetNameForProcessingUnit(m_processingUnit));
  }

  if (m_ephemeralStorageConfigurationHasBeenSet) {
    payload.WithObject("ephemeralStorageConfiguration", m_ephemeralStorageConfiguration.Jsonize());
  }

  if (m_commandHasBeenSet) {
    Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
    for (unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex) {
      commandJsonList[commandIndex].AsString(m_command[commandIndex]);
    }
    payload.WithArray("command", std::move(commandJsonList));
  }

  if (m_timeoutSecondsHasBeenSet) {
    payload.WithInt64("timeoutSeconds", m_timeoutSeconds);
  }

  if (m_environmentVariablesHasBeenSet) {
    JsonValue environmentVariablesJsonMap;
    for (auto& environmentVariablesItem : m_environmentVariables) {
      environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
    }
    payload.WithObject("environmentVariables", std::move(environmentVariablesJsonMap));
  }

  if (m_mountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> mountsJsonList(m_mounts.size());
    for (unsigned mountsIndex = 0; mountsIndex < mountsJsonList.GetLength(); ++mountsIndex) {
      mountsJsonList[mountsIndex].AsObject(m_mounts[mountsIndex].Jsonize());
    }
    payload.WithArray("mounts", std::move(mountsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
