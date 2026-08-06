/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/VolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

VolumeConfiguration::VolumeConfiguration(JsonView jsonValue) { *this = jsonValue; }

VolumeConfiguration& VolumeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ebsConfiguration")) {
    m_ebsConfiguration = jsonValue.GetObject("ebsConfiguration");
    m_ebsConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue VolumeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_ebsConfigurationHasBeenSet) {
    payload.WithObject("ebsConfiguration", m_ebsConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
