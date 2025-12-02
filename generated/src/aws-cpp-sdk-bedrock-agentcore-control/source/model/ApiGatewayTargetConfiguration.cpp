/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ApiGatewayTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ApiGatewayTargetConfiguration::ApiGatewayTargetConfiguration(JsonView jsonValue) { *this = jsonValue; }

ApiGatewayTargetConfiguration& ApiGatewayTargetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("restApiId")) {
    m_restApiId = jsonValue.GetString("restApiId");
    m_restApiIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stage")) {
    m_stage = jsonValue.GetString("stage");
    m_stageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiGatewayToolConfiguration")) {
    m_apiGatewayToolConfiguration = jsonValue.GetObject("apiGatewayToolConfiguration");
    m_apiGatewayToolConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiGatewayTargetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_restApiIdHasBeenSet) {
    payload.WithString("restApiId", m_restApiId);
  }

  if (m_stageHasBeenSet) {
    payload.WithString("stage", m_stage);
  }

  if (m_apiGatewayToolConfigurationHasBeenSet) {
    payload.WithObject("apiGatewayToolConfiguration", m_apiGatewayToolConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
