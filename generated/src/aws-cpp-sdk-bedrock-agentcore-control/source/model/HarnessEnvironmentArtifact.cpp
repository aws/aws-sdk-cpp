/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessEnvironmentArtifact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessEnvironmentArtifact::HarnessEnvironmentArtifact(JsonView jsonValue) { *this = jsonValue; }

HarnessEnvironmentArtifact& HarnessEnvironmentArtifact::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("containerConfiguration")) {
    m_containerConfiguration = jsonValue.GetObject("containerConfiguration");
    m_containerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessEnvironmentArtifact::Jsonize() const {
  JsonValue payload;

  if (m_containerConfigurationHasBeenSet) {
    payload.WithObject("containerConfiguration", m_containerConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
