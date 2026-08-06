/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CapacityProviderVolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CapacityProviderVolumeConfiguration::CapacityProviderVolumeConfiguration(JsonView jsonValue) { *this = jsonValue; }

CapacityProviderVolumeConfiguration& CapacityProviderVolumeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("volumeName")) {
    m_volumeName = jsonValue.GetString("volumeName");
    m_volumeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mountPath")) {
    m_mountPath = jsonValue.GetString("mountPath");
    m_mountPathHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityProviderVolumeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_volumeNameHasBeenSet) {
    payload.WithString("volumeName", m_volumeName);
  }

  if (m_mountPathHasBeenSet) {
    payload.WithString("mountPath", m_mountPath);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
