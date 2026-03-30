/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MCPServerAuthorizationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MCPServerAuthorizationConfig::MCPServerAuthorizationConfig(JsonView jsonValue) { *this = jsonValue; }

MCPServerAuthorizationConfig& MCPServerAuthorizationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("oAuthClientCredentials")) {
    m_oAuthClientCredentials = jsonValue.GetObject("oAuthClientCredentials");
    m_oAuthClientCredentialsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("oAuth3LO")) {
    m_oAuth3LO = jsonValue.GetObject("oAuth3LO");
    m_oAuth3LOHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKey")) {
    m_apiKey = jsonValue.GetObject("apiKey");
    m_apiKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bearerToken")) {
    m_bearerToken = jsonValue.GetObject("bearerToken");
    m_bearerTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationDiscovery")) {
    m_authorizationDiscovery = jsonValue.GetObject("authorizationDiscovery");
    m_authorizationDiscoveryHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPServerAuthorizationConfig::Jsonize() const {
  JsonValue payload;

  if (m_oAuthClientCredentialsHasBeenSet) {
    payload.WithObject("oAuthClientCredentials", m_oAuthClientCredentials.Jsonize());
  }

  if (m_oAuth3LOHasBeenSet) {
    payload.WithObject("oAuth3LO", m_oAuth3LO.Jsonize());
  }

  if (m_apiKeyHasBeenSet) {
    payload.WithObject("apiKey", m_apiKey.Jsonize());
  }

  if (m_bearerTokenHasBeenSet) {
    payload.WithObject("bearerToken", m_bearerToken.Jsonize());
  }

  if (m_authorizationDiscoveryHasBeenSet) {
    payload.WithObject("authorizationDiscovery", m_authorizationDiscovery.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
