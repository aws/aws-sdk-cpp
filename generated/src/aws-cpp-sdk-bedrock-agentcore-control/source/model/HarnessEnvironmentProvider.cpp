/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessEnvironmentProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessEnvironmentProvider::HarnessEnvironmentProvider(JsonView jsonValue) { *this = jsonValue; }

HarnessEnvironmentProvider& HarnessEnvironmentProvider::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentCoreRuntimeEnvironment")) {
    m_agentCoreRuntimeEnvironment = jsonValue.GetObject("agentCoreRuntimeEnvironment");
    m_agentCoreRuntimeEnvironmentHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessEnvironmentProvider::Jsonize() const {
  JsonValue payload;

  if (m_agentCoreRuntimeEnvironmentHasBeenSet) {
    payload.WithObject("agentCoreRuntimeEnvironment", m_agentCoreRuntimeEnvironment.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
