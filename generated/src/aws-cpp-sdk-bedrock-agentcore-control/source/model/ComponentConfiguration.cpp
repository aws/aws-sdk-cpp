/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ComponentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ComponentConfiguration::ComponentConfiguration(JsonView jsonValue) { *this = jsonValue; }

ComponentConfiguration& ComponentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ComponentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_configurationHasBeenSet) {
    if (!m_configuration.View().IsNull()) {
      payload.WithObject("configuration", JsonValue(m_configuration.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
