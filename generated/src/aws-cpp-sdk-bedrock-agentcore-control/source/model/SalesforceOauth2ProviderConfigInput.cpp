/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SalesforceOauth2ProviderConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

SalesforceOauth2ProviderConfigInput::SalesforceOauth2ProviderConfigInput(JsonView jsonValue) { *this = jsonValue; }

SalesforceOauth2ProviderConfigInput& SalesforceOauth2ProviderConfigInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientSecret")) {
    m_clientSecret = jsonValue.GetString("clientSecret");
    m_clientSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientSecretConfig")) {
    m_clientSecretConfig = jsonValue.GetObject("clientSecretConfig");
    m_clientSecretConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientSecretSource")) {
    m_clientSecretSource = SecretSourceTypeMapper::GetSecretSourceTypeForName(jsonValue.GetString("clientSecretSource"));
    m_clientSecretSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue SalesforceOauth2ProviderConfigInput::Jsonize() const {
  JsonValue payload;

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_clientSecretHasBeenSet) {
    payload.WithString("clientSecret", m_clientSecret);
  }

  if (m_clientSecretConfigHasBeenSet) {
    payload.WithObject("clientSecretConfig", m_clientSecretConfig.Jsonize());
  }

  if (m_clientSecretSourceHasBeenSet) {
    payload.WithString("clientSecretSource", SecretSourceTypeMapper::GetNameForSecretSourceType(m_clientSecretSource));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
