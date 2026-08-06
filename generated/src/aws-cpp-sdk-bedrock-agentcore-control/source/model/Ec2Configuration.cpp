/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Ec2Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

Ec2Configuration::Ec2Configuration(JsonView jsonValue) { *this = jsonValue; }

Ec2Configuration& Ec2Configuration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("launchTemplateSource")) {
    m_launchTemplateSource = jsonValue.GetObject("launchTemplateSource");
    m_launchTemplateSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcConfiguration")) {
    m_vpcConfiguration = jsonValue.GetObject("vpcConfiguration");
    m_vpcConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("volumes")) {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for (unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex) {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lifecycleConfiguration")) {
    m_lifecycleConfiguration = jsonValue.GetObject("lifecycleConfiguration");
    m_lifecycleConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rootVolume")) {
    m_rootVolume = jsonValue.GetObject("rootVolume");
    m_rootVolumeHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2Configuration::Jsonize() const {
  JsonValue payload;

  if (m_launchTemplateSourceHasBeenSet) {
    payload.WithObject("launchTemplateSource", m_launchTemplateSource.Jsonize());
  }

  if (m_vpcConfigurationHasBeenSet) {
    payload.WithObject("vpcConfiguration", m_vpcConfiguration.Jsonize());
  }

  if (m_volumesHasBeenSet) {
    Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
    for (unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex) {
      volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
    }
    payload.WithArray("volumes", std::move(volumesJsonList));
  }

  if (m_lifecycleConfigurationHasBeenSet) {
    payload.WithObject("lifecycleConfiguration", m_lifecycleConfiguration.Jsonize());
  }

  if (m_rootVolumeHasBeenSet) {
    payload.WithObject("rootVolume", m_rootVolume.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
