/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PassthroughTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PassthroughTargetConfiguration::PassthroughTargetConfiguration(JsonView jsonValue) { *this = jsonValue; }

PassthroughTargetConfiguration& PassthroughTargetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocolType")) {
    m_protocolType = PassthroughProtocolTypeMapper::GetPassthroughProtocolTypeForName(jsonValue.GetString("protocolType"));
    m_protocolTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schema")) {
    m_schema = jsonValue.GetObject("schema");
    m_schemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stickinessConfiguration")) {
    m_stickinessConfiguration = jsonValue.GetObject("stickinessConfiguration");
    m_stickinessConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PassthroughTargetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  if (m_protocolTypeHasBeenSet) {
    payload.WithString("protocolType", PassthroughProtocolTypeMapper::GetNameForPassthroughProtocolType(m_protocolType));
  }

  if (m_schemaHasBeenSet) {
    payload.WithObject("schema", m_schema.Jsonize());
  }

  if (m_stickinessConfigurationHasBeenSet) {
    payload.WithObject("stickinessConfiguration", m_stickinessConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
