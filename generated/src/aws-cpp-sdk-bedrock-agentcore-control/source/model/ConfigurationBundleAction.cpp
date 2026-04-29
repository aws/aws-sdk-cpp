/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ConfigurationBundleAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ConfigurationBundleAction::ConfigurationBundleAction(JsonView jsonValue) { *this = jsonValue; }

ConfigurationBundleAction& ConfigurationBundleAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("staticOverride")) {
    m_staticOverride = jsonValue.GetObject("staticOverride");
    m_staticOverrideHasBeenSet = true;
  }
  if (jsonValue.ValueExists("weightedOverride")) {
    m_weightedOverride = jsonValue.GetObject("weightedOverride");
    m_weightedOverrideHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationBundleAction::Jsonize() const {
  JsonValue payload;

  if (m_staticOverrideHasBeenSet) {
    payload.WithObject("staticOverride", m_staticOverride.Jsonize());
  }

  if (m_weightedOverrideHasBeenSet) {
    payload.WithObject("weightedOverride", m_weightedOverride.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
