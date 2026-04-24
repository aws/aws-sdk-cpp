/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CustomOauth2ProviderConfigOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CustomOauth2ProviderConfigOutput::CustomOauth2ProviderConfigOutput(JsonView jsonValue) { *this = jsonValue; }

CustomOauth2ProviderConfigOutput& CustomOauth2ProviderConfigOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("oauthDiscovery")) {
    m_oauthDiscovery = jsonValue.GetObject("oauthDiscovery");
    m_oauthDiscoveryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privateEndpoint")) {
    m_privateEndpoint = jsonValue.GetObject("privateEndpoint");
    m_privateEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privateEndpointOverrides")) {
    Aws::Utils::Array<JsonView> privateEndpointOverridesJsonList = jsonValue.GetArray("privateEndpointOverrides");
    for (unsigned privateEndpointOverridesIndex = 0; privateEndpointOverridesIndex < privateEndpointOverridesJsonList.GetLength();
         ++privateEndpointOverridesIndex) {
      m_privateEndpointOverrides.push_back(privateEndpointOverridesJsonList[privateEndpointOverridesIndex].AsObject());
    }
    m_privateEndpointOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomOauth2ProviderConfigOutput::Jsonize() const {
  JsonValue payload;

  if (m_oauthDiscoveryHasBeenSet) {
    payload.WithObject("oauthDiscovery", m_oauthDiscovery.Jsonize());
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_privateEndpointHasBeenSet) {
    payload.WithObject("privateEndpoint", m_privateEndpoint.Jsonize());
  }

  if (m_privateEndpointOverridesHasBeenSet) {
    Aws::Utils::Array<JsonValue> privateEndpointOverridesJsonList(m_privateEndpointOverrides.size());
    for (unsigned privateEndpointOverridesIndex = 0; privateEndpointOverridesIndex < privateEndpointOverridesJsonList.GetLength();
         ++privateEndpointOverridesIndex) {
      privateEndpointOverridesJsonList[privateEndpointOverridesIndex].AsObject(
          m_privateEndpointOverrides[privateEndpointOverridesIndex].Jsonize());
    }
    payload.WithArray("privateEndpointOverrides", std::move(privateEndpointOverridesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
