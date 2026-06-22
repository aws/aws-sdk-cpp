/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/CreateMicrovmImageRequest.h>

#include <utility>

using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMicrovmImageRequest::SerializePayload() const {
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

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
