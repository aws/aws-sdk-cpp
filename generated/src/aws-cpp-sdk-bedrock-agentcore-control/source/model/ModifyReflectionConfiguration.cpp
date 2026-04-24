/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ModifyReflectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ModifyReflectionConfiguration::ModifyReflectionConfiguration(JsonView jsonValue) { *this = jsonValue; }

ModifyReflectionConfiguration& ModifyReflectionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("episodicReflectionConfiguration")) {
    m_episodicReflectionConfiguration = jsonValue.GetObject("episodicReflectionConfiguration");
    m_episodicReflectionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customReflectionConfiguration")) {
    m_customReflectionConfiguration = jsonValue.GetObject("customReflectionConfiguration");
    m_customReflectionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ModifyReflectionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_episodicReflectionConfigurationHasBeenSet) {
    payload.WithObject("episodicReflectionConfiguration", m_episodicReflectionConfiguration.Jsonize());
  }

  if (m_customReflectionConfigurationHasBeenSet) {
    payload.WithObject("customReflectionConfiguration", m_customReflectionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
