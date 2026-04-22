/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessAgentCoreRuntimeEnvironment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessAgentCoreRuntimeEnvironment::HarnessAgentCoreRuntimeEnvironment(JsonView jsonValue) { *this = jsonValue; }

HarnessAgentCoreRuntimeEnvironment& HarnessAgentCoreRuntimeEnvironment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentRuntimeArn")) {
    m_agentRuntimeArn = jsonValue.GetString("agentRuntimeArn");
    m_agentRuntimeArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentRuntimeName")) {
    m_agentRuntimeName = jsonValue.GetString("agentRuntimeName");
    m_agentRuntimeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentRuntimeId")) {
    m_agentRuntimeId = jsonValue.GetString("agentRuntimeId");
    m_agentRuntimeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lifecycleConfiguration")) {
    m_lifecycleConfiguration = jsonValue.GetObject("lifecycleConfiguration");
    m_lifecycleConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkConfiguration")) {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");
    m_networkConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filesystemConfigurations")) {
    Aws::Utils::Array<JsonView> filesystemConfigurationsJsonList = jsonValue.GetArray("filesystemConfigurations");
    for (unsigned filesystemConfigurationsIndex = 0; filesystemConfigurationsIndex < filesystemConfigurationsJsonList.GetLength();
         ++filesystemConfigurationsIndex) {
      m_filesystemConfigurations.push_back(filesystemConfigurationsJsonList[filesystemConfigurationsIndex].AsObject());
    }
    m_filesystemConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessAgentCoreRuntimeEnvironment::Jsonize() const {
  JsonValue payload;

  if (m_agentRuntimeArnHasBeenSet) {
    payload.WithString("agentRuntimeArn", m_agentRuntimeArn);
  }

  if (m_agentRuntimeNameHasBeenSet) {
    payload.WithString("agentRuntimeName", m_agentRuntimeName);
  }

  if (m_agentRuntimeIdHasBeenSet) {
    payload.WithString("agentRuntimeId", m_agentRuntimeId);
  }

  if (m_lifecycleConfigurationHasBeenSet) {
    payload.WithObject("lifecycleConfiguration", m_lifecycleConfiguration.Jsonize());
  }

  if (m_networkConfigurationHasBeenSet) {
    payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());
  }

  if (m_filesystemConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> filesystemConfigurationsJsonList(m_filesystemConfigurations.size());
    for (unsigned filesystemConfigurationsIndex = 0; filesystemConfigurationsIndex < filesystemConfigurationsJsonList.GetLength();
         ++filesystemConfigurationsIndex) {
      filesystemConfigurationsJsonList[filesystemConfigurationsIndex].AsObject(
          m_filesystemConfigurations[filesystemConfigurationsIndex].Jsonize());
    }
    payload.WithArray("filesystemConfigurations", std::move(filesystemConfigurationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
