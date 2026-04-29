/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/VariantConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

VariantConfiguration::VariantConfiguration(JsonView jsonValue) { *this = jsonValue; }

VariantConfiguration& VariantConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("configurationBundle")) {
    m_configurationBundle = jsonValue.GetObject("configurationBundle");
    m_configurationBundleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("target")) {
    m_target = jsonValue.GetObject("target");
    m_targetHasBeenSet = true;
  }
  return *this;
}

JsonValue VariantConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_configurationBundleHasBeenSet) {
    payload.WithObject("configurationBundle", m_configurationBundle.Jsonize());
  }

  if (m_targetHasBeenSet) {
    payload.WithObject("target", m_target.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
