/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FoundationModelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

FoundationModelConfiguration::FoundationModelConfiguration(JsonView jsonValue) { *this = jsonValue; }

FoundationModelConfiguration& FoundationModelConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bedrockFoundationModelConfiguration")) {
    m_bedrockFoundationModelConfiguration = jsonValue.GetObject("bedrockFoundationModelConfiguration");
    m_bedrockFoundationModelConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = FoundationModelConfigurationTypeMapper::GetFoundationModelConfigurationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue FoundationModelConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_bedrockFoundationModelConfigurationHasBeenSet) {
    payload.WithObject("bedrockFoundationModelConfiguration", m_bedrockFoundationModelConfiguration.Jsonize());
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", FoundationModelConfigurationTypeMapper::GetNameForFoundationModelConfigurationType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
