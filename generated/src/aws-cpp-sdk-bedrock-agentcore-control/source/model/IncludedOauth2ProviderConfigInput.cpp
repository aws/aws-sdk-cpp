/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/IncludedOauth2ProviderConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

IncludedOauth2ProviderConfigInput::IncludedOauth2ProviderConfigInput(JsonView jsonValue) { *this = jsonValue; }

IncludedOauth2ProviderConfigInput& IncludedOauth2ProviderConfigInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientSecret")) {
    m_clientSecret = jsonValue.GetString("clientSecret");
    m_clientSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issuer")) {
    m_issuer = jsonValue.GetString("issuer");
    m_issuerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationEndpoint")) {
    m_authorizationEndpoint = jsonValue.GetString("authorizationEndpoint");
    m_authorizationEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenEndpoint")) {
    m_tokenEndpoint = jsonValue.GetString("tokenEndpoint");
    m_tokenEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue IncludedOauth2ProviderConfigInput::Jsonize() const {
  JsonValue payload;

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_clientSecretHasBeenSet) {
    payload.WithString("clientSecret", m_clientSecret);
  }

  if (m_issuerHasBeenSet) {
    payload.WithString("issuer", m_issuer);
  }

  if (m_authorizationEndpointHasBeenSet) {
    payload.WithString("authorizationEndpoint", m_authorizationEndpoint);
  }

  if (m_tokenEndpointHasBeenSet) {
    payload.WithString("tokenEndpoint", m_tokenEndpoint);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
