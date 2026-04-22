/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessAgentCoreGatewayConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessAgentCoreGatewayConfig::HarnessAgentCoreGatewayConfig(JsonView jsonValue) { *this = jsonValue; }

HarnessAgentCoreGatewayConfig& HarnessAgentCoreGatewayConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gatewayArn")) {
    m_gatewayArn = jsonValue.GetString("gatewayArn");
    m_gatewayArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outboundAuth")) {
    m_outboundAuth = jsonValue.GetObject("outboundAuth");
    m_outboundAuthHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessAgentCoreGatewayConfig::Jsonize() const {
  JsonValue payload;

  if (m_gatewayArnHasBeenSet) {
    payload.WithString("gatewayArn", m_gatewayArn);
  }

  if (m_outboundAuthHasBeenSet) {
    payload.WithObject("outboundAuth", m_outboundAuth.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
