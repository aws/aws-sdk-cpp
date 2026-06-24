/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/MicrovmImageVersionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

MicrovmImageVersionSummary::MicrovmImageVersionSummary(JsonView jsonValue) { *this = jsonValue; }

MicrovmImageVersionSummary& MicrovmImageVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("baseImageArn")) {
    m_baseImageArn = jsonValue.GetString("baseImageArn");
    m_baseImageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("baseImageVersion")) {
    m_baseImageVersion = jsonValue.GetString("baseImageVersion");
    m_baseImageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("buildRoleArn")) {
    m_buildRoleArn = jsonValue.GetString("buildRoleArn");
    m_buildRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeArtifact")) {
    m_codeArtifact = jsonValue.GetObject("codeArtifact");
    m_codeArtifactHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logging")) {
    m_logging = jsonValue.GetObject("logging");
    m_loggingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("egressNetworkConnectors")) {
    Aws::Utils::Array<JsonView> egressNetworkConnectorsJsonList = jsonValue.GetArray("egressNetworkConnectors");
    for (unsigned egressNetworkConnectorsIndex = 0; egressNetworkConnectorsIndex < egressNetworkConnectorsJsonList.GetLength();
         ++egressNetworkConnectorsIndex) {
      m_egressNetworkConnectors.push_back(egressNetworkConnectorsJsonList[egressNetworkConnectorsIndex].AsString());
    }
    m_egressNetworkConnectorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cpuConfigurations")) {
    Aws::Utils::Array<JsonView> cpuConfigurationsJsonList = jsonValue.GetArray("cpuConfigurations");
    for (unsigned cpuConfigurationsIndex = 0; cpuConfigurationsIndex < cpuConfigurationsJsonList.GetLength(); ++cpuConfigurationsIndex) {
      m_cpuConfigurations.push_back(cpuConfigurationsJsonList[cpuConfigurationsIndex].AsObject());
    }
    m_cpuConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalOsCapabilities")) {
    Aws::Utils::Array<JsonView> additionalOsCapabilitiesJsonList = jsonValue.GetArray("additionalOsCapabilities");
    for (unsigned additionalOsCapabilitiesIndex = 0; additionalOsCapabilitiesIndex < additionalOsCapabilitiesJsonList.GetLength();
         ++additionalOsCapabilitiesIndex) {
      m_additionalOsCapabilities.push_back(
          CapabilityMapper::GetCapabilityForName(additionalOsCapabilitiesJsonList[additionalOsCapabilitiesIndex].AsString()));
    }
    m_additionalOsCapabilitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hooks")) {
    m_hooks = jsonValue.GetObject("hooks");
    m_hooksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentVariables")) {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("environmentVariables").GetAllObjects();
    for (auto& environmentVariablesItem : environmentVariablesJsonMap) {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageArn")) {
    m_imageArn = jsonValue.GetString("imageArn");
    m_imageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageVersion")) {
    m_imageVersion = jsonValue.GetString("imageVersion");
    m_imageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = MicrovmImageVersionStateMapper::GetMicrovmImageVersionStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = MicrovmImageVersionStatusMapper::GetMicrovmImageVersionStatusForName(jsonValue.GetString("status"));
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
  if (jsonValue.ValueExists("stateReason")) {
    m_stateReason = jsonValue.GetString("stateReason");
    m_stateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue MicrovmImageVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_baseImageArnHasBeenSet) {
    payload.WithString("baseImageArn", m_baseImageArn);
  }

  if (m_baseImageVersionHasBeenSet) {
    payload.WithString("baseImageVersion", m_baseImageVersion);
  }

  if (m_buildRoleArnHasBeenSet) {
    payload.WithString("buildRoleArn", m_buildRoleArn);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_codeArtifactHasBeenSet) {
    payload.WithObject("codeArtifact", m_codeArtifact.Jsonize());
  }

  if (m_loggingHasBeenSet) {
    payload.WithObject("logging", m_logging.Jsonize());
  }

  if (m_egressNetworkConnectorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> egressNetworkConnectorsJsonList(m_egressNetworkConnectors.size());
    for (unsigned egressNetworkConnectorsIndex = 0; egressNetworkConnectorsIndex < egressNetworkConnectorsJsonList.GetLength();
         ++egressNetworkConnectorsIndex) {
      egressNetworkConnectorsJsonList[egressNetworkConnectorsIndex].AsString(m_egressNetworkConnectors[egressNetworkConnectorsIndex]);
    }
    payload.WithArray("egressNetworkConnectors", std::move(egressNetworkConnectorsJsonList));
  }

  if (m_cpuConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cpuConfigurationsJsonList(m_cpuConfigurations.size());
    for (unsigned cpuConfigurationsIndex = 0; cpuConfigurationsIndex < cpuConfigurationsJsonList.GetLength(); ++cpuConfigurationsIndex) {
      cpuConfigurationsJsonList[cpuConfigurationsIndex].AsObject(m_cpuConfigurations[cpuConfigurationsIndex].Jsonize());
    }
    payload.WithArray("cpuConfigurations", std::move(cpuConfigurationsJsonList));
  }

  if (m_resourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
    }
    payload.WithArray("resources", std::move(resourcesJsonList));
  }

  if (m_additionalOsCapabilitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> additionalOsCapabilitiesJsonList(m_additionalOsCapabilities.size());
    for (unsigned additionalOsCapabilitiesIndex = 0; additionalOsCapabilitiesIndex < additionalOsCapabilitiesJsonList.GetLength();
         ++additionalOsCapabilitiesIndex) {
      additionalOsCapabilitiesJsonList[additionalOsCapabilitiesIndex].AsString(
          CapabilityMapper::GetNameForCapability(m_additionalOsCapabilities[additionalOsCapabilitiesIndex]));
    }
    payload.WithArray("additionalOsCapabilities", std::move(additionalOsCapabilitiesJsonList));
  }

  if (m_hooksHasBeenSet) {
    payload.WithObject("hooks", m_hooks.Jsonize());
  }

  if (m_environmentVariablesHasBeenSet) {
    JsonValue environmentVariablesJsonMap;
    for (auto& environmentVariablesItem : m_environmentVariables) {
      environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
    }
    payload.WithObject("environmentVariables", std::move(environmentVariablesJsonMap));
  }

  if (m_imageArnHasBeenSet) {
    payload.WithString("imageArn", m_imageArn);
  }

  if (m_imageVersionHasBeenSet) {
    payload.WithString("imageVersion", m_imageVersion);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", MicrovmImageVersionStateMapper::GetNameForMicrovmImageVersionState(m_state));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", MicrovmImageVersionStatusMapper::GetNameForMicrovmImageVersionStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_stateReasonHasBeenSet) {
    payload.WithString("stateReason", m_stateReason);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
