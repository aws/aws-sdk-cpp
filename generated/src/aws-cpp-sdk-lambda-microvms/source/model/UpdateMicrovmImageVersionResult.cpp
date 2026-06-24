/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-microvms/model/UpdateMicrovmImageVersionResult.h>

#include <utility>

using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateMicrovmImageVersionResult::UpdateMicrovmImageVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateMicrovmImageVersionResult& UpdateMicrovmImageVersionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
