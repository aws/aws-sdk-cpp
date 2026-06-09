/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CoinbaseCdpConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CoinbaseCdpConfigurationInput::CoinbaseCdpConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

CoinbaseCdpConfigurationInput& CoinbaseCdpConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apiKeyId")) {
    m_apiKeyId = jsonValue.GetString("apiKeyId");
    m_apiKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKeySecret")) {
    m_apiKeySecret = jsonValue.GetString("apiKeySecret");
    m_apiKeySecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKeySecretSource")) {
    m_apiKeySecretSource = SecretSourceTypeMapper::GetSecretSourceTypeForName(jsonValue.GetString("apiKeySecretSource"));
    m_apiKeySecretSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKeySecretConfig")) {
    m_apiKeySecretConfig = jsonValue.GetObject("apiKeySecretConfig");
    m_apiKeySecretConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walletSecret")) {
    m_walletSecret = jsonValue.GetString("walletSecret");
    m_walletSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walletSecretSource")) {
    m_walletSecretSource = SecretSourceTypeMapper::GetSecretSourceTypeForName(jsonValue.GetString("walletSecretSource"));
    m_walletSecretSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walletSecretConfig")) {
    m_walletSecretConfig = jsonValue.GetObject("walletSecretConfig");
    m_walletSecretConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue CoinbaseCdpConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_apiKeyIdHasBeenSet) {
    payload.WithString("apiKeyId", m_apiKeyId);
  }

  if (m_apiKeySecretHasBeenSet) {
    payload.WithString("apiKeySecret", m_apiKeySecret);
  }

  if (m_apiKeySecretSourceHasBeenSet) {
    payload.WithString("apiKeySecretSource", SecretSourceTypeMapper::GetNameForSecretSourceType(m_apiKeySecretSource));
  }

  if (m_apiKeySecretConfigHasBeenSet) {
    payload.WithObject("apiKeySecretConfig", m_apiKeySecretConfig.Jsonize());
  }

  if (m_walletSecretHasBeenSet) {
    payload.WithString("walletSecret", m_walletSecret);
  }

  if (m_walletSecretSourceHasBeenSet) {
    payload.WithString("walletSecretSource", SecretSourceTypeMapper::GetNameForSecretSourceType(m_walletSecretSource));
  }

  if (m_walletSecretConfigHasBeenSet) {
    payload.WithObject("walletSecretConfig", m_walletSecretConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
