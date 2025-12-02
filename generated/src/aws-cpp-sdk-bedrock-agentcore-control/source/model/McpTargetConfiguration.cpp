/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/McpTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

McpTargetConfiguration::McpTargetConfiguration(JsonView jsonValue) { *this = jsonValue; }

McpTargetConfiguration& McpTargetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("openApiSchema")) {
    m_openApiSchema = jsonValue.GetObject("openApiSchema");
    m_openApiSchemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("smithyModel")) {
    m_smithyModel = jsonValue.GetObject("smithyModel");
    m_smithyModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambda")) {
    m_lambda = jsonValue.GetObject("lambda");
    m_lambdaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpServer")) {
    m_mcpServer = jsonValue.GetObject("mcpServer");
    m_mcpServerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiGateway")) {
    m_apiGateway = jsonValue.GetObject("apiGateway");
    m_apiGatewayHasBeenSet = true;
  }
  return *this;
}

JsonValue McpTargetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_openApiSchemaHasBeenSet) {
    payload.WithObject("openApiSchema", m_openApiSchema.Jsonize());
  }

  if (m_smithyModelHasBeenSet) {
    payload.WithObject("smithyModel", m_smithyModel.Jsonize());
  }

  if (m_lambdaHasBeenSet) {
    payload.WithObject("lambda", m_lambda.Jsonize());
  }

  if (m_mcpServerHasBeenSet) {
    payload.WithObject("mcpServer", m_mcpServer.Jsonize());
  }

  if (m_apiGatewayHasBeenSet) {
    payload.WithObject("apiGateway", m_apiGateway.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
