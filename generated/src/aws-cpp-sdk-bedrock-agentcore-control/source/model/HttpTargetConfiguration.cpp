/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HttpTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HttpTargetConfiguration::HttpTargetConfiguration(JsonView jsonValue) { *this = jsonValue; }

HttpTargetConfiguration& HttpTargetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentcoreRuntime")) {
    m_agentcoreRuntime = jsonValue.GetObject("agentcoreRuntime");
    m_agentcoreRuntimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("passthrough")) {
    m_passthrough = jsonValue.GetObject("passthrough");
    m_passthroughHasBeenSet = true;
  }
  return *this;
}

JsonValue HttpTargetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_agentcoreRuntimeHasBeenSet) {
    payload.WithObject("agentcoreRuntime", m_agentcoreRuntime.Jsonize());
  }

  if (m_passthroughHasBeenSet) {
    payload.WithObject("passthrough", m_passthrough.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
