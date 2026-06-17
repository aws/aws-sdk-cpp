/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/BedrockFoundationModelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

BedrockFoundationModelConfiguration::BedrockFoundationModelConfiguration(JsonView jsonValue) { *this = jsonValue; }

BedrockFoundationModelConfiguration& BedrockFoundationModelConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelConfiguration")) {
    m_modelConfiguration = jsonValue.GetObject("modelConfiguration");
    m_modelConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockFoundationModelConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_modelConfigurationHasBeenSet) {
    payload.WithObject("modelConfiguration", m_modelConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
