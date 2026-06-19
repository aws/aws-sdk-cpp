/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RemoteAgentAuthorizationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RemoteAgentAuthorizationConfig::RemoteAgentAuthorizationConfig(JsonView jsonValue) { *this = jsonValue; }

RemoteAgentAuthorizationConfig& RemoteAgentAuthorizationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apiKey")) {
    m_apiKey = jsonValue.GetObject("apiKey");
    m_apiKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("oAuthClientCredentials")) {
    m_oAuthClientCredentials = jsonValue.GetObject("oAuthClientCredentials");
    m_oAuthClientCredentialsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bearerToken")) {
    m_bearerToken = jsonValue.GetObject("bearerToken");
    m_bearerTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue RemoteAgentAuthorizationConfig::Jsonize() const {
  JsonValue payload;

  if (m_apiKeyHasBeenSet) {
    payload.WithObject("apiKey", m_apiKey.Jsonize());
  }

  if (m_oAuthClientCredentialsHasBeenSet) {
    payload.WithObject("oAuthClientCredentials", m_oAuthClientCredentials.Jsonize());
  }

  if (m_bearerTokenHasBeenSet) {
    payload.WithObject("bearerToken", m_bearerToken.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
