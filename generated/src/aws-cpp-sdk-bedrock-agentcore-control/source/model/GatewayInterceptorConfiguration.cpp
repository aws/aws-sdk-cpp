/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GatewayInterceptorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

GatewayInterceptorConfiguration::GatewayInterceptorConfiguration(JsonView jsonValue) { *this = jsonValue; }

GatewayInterceptorConfiguration& GatewayInterceptorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("interceptor")) {
    m_interceptor = jsonValue.GetObject("interceptor");
    m_interceptorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("interceptionPoints")) {
    Aws::Utils::Array<JsonView> interceptionPointsJsonList = jsonValue.GetArray("interceptionPoints");
    for (unsigned interceptionPointsIndex = 0; interceptionPointsIndex < interceptionPointsJsonList.GetLength();
         ++interceptionPointsIndex) {
      m_interceptionPoints.push_back(GatewayInterceptionPointMapper::GetGatewayInterceptionPointForName(
          interceptionPointsJsonList[interceptionPointsIndex].AsString()));
    }
    m_interceptionPointsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputConfiguration")) {
    m_inputConfiguration = jsonValue.GetObject("inputConfiguration");
    m_inputConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayInterceptorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_interceptorHasBeenSet) {
    payload.WithObject("interceptor", m_interceptor.Jsonize());
  }

  if (m_interceptionPointsHasBeenSet) {
    Aws::Utils::Array<JsonValue> interceptionPointsJsonList(m_interceptionPoints.size());
    for (unsigned interceptionPointsIndex = 0; interceptionPointsIndex < interceptionPointsJsonList.GetLength();
         ++interceptionPointsIndex) {
      interceptionPointsJsonList[interceptionPointsIndex].AsString(
          GatewayInterceptionPointMapper::GetNameForGatewayInterceptionPoint(m_interceptionPoints[interceptionPointsIndex]));
    }
    payload.WithArray("interceptionPoints", std::move(interceptionPointsJsonList));
  }

  if (m_inputConfigurationHasBeenSet) {
    payload.WithObject("inputConfiguration", m_inputConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
