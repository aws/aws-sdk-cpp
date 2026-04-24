/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CustomReflectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CustomReflectionConfiguration::CustomReflectionConfiguration(JsonView jsonValue) { *this = jsonValue; }

CustomReflectionConfiguration& CustomReflectionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("episodicReflectionOverride")) {
    m_episodicReflectionOverride = jsonValue.GetObject("episodicReflectionOverride");
    m_episodicReflectionOverrideHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomReflectionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_episodicReflectionOverrideHasBeenSet) {
    payload.WithObject("episodicReflectionOverride", m_episodicReflectionOverride.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
