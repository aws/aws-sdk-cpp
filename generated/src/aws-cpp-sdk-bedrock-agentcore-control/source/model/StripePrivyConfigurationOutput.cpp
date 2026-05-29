/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StripePrivyConfigurationOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

StripePrivyConfigurationOutput::StripePrivyConfigurationOutput(JsonView jsonValue) { *this = jsonValue; }

StripePrivyConfigurationOutput& StripePrivyConfigurationOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("appId")) {
    m_appId = jsonValue.GetString("appId");
    m_appIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("appSecretArn")) {
    m_appSecretArn = jsonValue.GetObject("appSecretArn");
    m_appSecretArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("appSecretJsonKey")) {
    m_appSecretJsonKey = jsonValue.GetString("appSecretJsonKey");
    m_appSecretJsonKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("appSecretSource")) {
    m_appSecretSource = SecretSourceTypeMapper::GetSecretSourceTypeForName(jsonValue.GetString("appSecretSource"));
    m_appSecretSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationPrivateKeyArn")) {
    m_authorizationPrivateKeyArn = jsonValue.GetObject("authorizationPrivateKeyArn");
    m_authorizationPrivateKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationPrivateKeyJsonKey")) {
    m_authorizationPrivateKeyJsonKey = jsonValue.GetString("authorizationPrivateKeyJsonKey");
    m_authorizationPrivateKeyJsonKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationPrivateKeySource")) {
    m_authorizationPrivateKeySource =
        SecretSourceTypeMapper::GetSecretSourceTypeForName(jsonValue.GetString("authorizationPrivateKeySource"));
    m_authorizationPrivateKeySourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationId")) {
    m_authorizationId = jsonValue.GetString("authorizationId");
    m_authorizationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue StripePrivyConfigurationOutput::Jsonize() const {
  JsonValue payload;

  if (m_appIdHasBeenSet) {
    payload.WithString("appId", m_appId);
  }

  if (m_appSecretArnHasBeenSet) {
    payload.WithObject("appSecretArn", m_appSecretArn.Jsonize());
  }

  if (m_appSecretJsonKeyHasBeenSet) {
    payload.WithString("appSecretJsonKey", m_appSecretJsonKey);
  }

  if (m_appSecretSourceHasBeenSet) {
    payload.WithString("appSecretSource", SecretSourceTypeMapper::GetNameForSecretSourceType(m_appSecretSource));
  }

  if (m_authorizationPrivateKeyArnHasBeenSet) {
    payload.WithObject("authorizationPrivateKeyArn", m_authorizationPrivateKeyArn.Jsonize());
  }

  if (m_authorizationPrivateKeyJsonKeyHasBeenSet) {
    payload.WithString("authorizationPrivateKeyJsonKey", m_authorizationPrivateKeyJsonKey);
  }

  if (m_authorizationPrivateKeySourceHasBeenSet) {
    payload.WithString("authorizationPrivateKeySource",
                       SecretSourceTypeMapper::GetNameForSecretSourceType(m_authorizationPrivateKeySource));
  }

  if (m_authorizationIdHasBeenSet) {
    payload.WithString("authorizationId", m_authorizationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
