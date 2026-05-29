/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CoinbaseCdpConfigurationOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CoinbaseCdpConfigurationOutput::CoinbaseCdpConfigurationOutput(JsonView jsonValue) { *this = jsonValue; }

CoinbaseCdpConfigurationOutput& CoinbaseCdpConfigurationOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apiKeyId")) {
    m_apiKeyId = jsonValue.GetString("apiKeyId");
    m_apiKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKeySecretArn")) {
    m_apiKeySecretArn = jsonValue.GetObject("apiKeySecretArn");
    m_apiKeySecretArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKeySecretJsonKey")) {
    m_apiKeySecretJsonKey = jsonValue.GetString("apiKeySecretJsonKey");
    m_apiKeySecretJsonKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKeySecretSource")) {
    m_apiKeySecretSource = SecretSourceTypeMapper::GetSecretSourceTypeForName(jsonValue.GetString("apiKeySecretSource"));
    m_apiKeySecretSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walletSecretArn")) {
    m_walletSecretArn = jsonValue.GetObject("walletSecretArn");
    m_walletSecretArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walletSecretJsonKey")) {
    m_walletSecretJsonKey = jsonValue.GetString("walletSecretJsonKey");
    m_walletSecretJsonKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walletSecretSource")) {
    m_walletSecretSource = SecretSourceTypeMapper::GetSecretSourceTypeForName(jsonValue.GetString("walletSecretSource"));
    m_walletSecretSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue CoinbaseCdpConfigurationOutput::Jsonize() const {
  JsonValue payload;

  if (m_apiKeyIdHasBeenSet) {
    payload.WithString("apiKeyId", m_apiKeyId);
  }

  if (m_apiKeySecretArnHasBeenSet) {
    payload.WithObject("apiKeySecretArn", m_apiKeySecretArn.Jsonize());
  }

  if (m_apiKeySecretJsonKeyHasBeenSet) {
    payload.WithString("apiKeySecretJsonKey", m_apiKeySecretJsonKey);
  }

  if (m_apiKeySecretSourceHasBeenSet) {
    payload.WithString("apiKeySecretSource", SecretSourceTypeMapper::GetNameForSecretSourceType(m_apiKeySecretSource));
  }

  if (m_walletSecretArnHasBeenSet) {
    payload.WithObject("walletSecretArn", m_walletSecretArn.Jsonize());
  }

  if (m_walletSecretJsonKeyHasBeenSet) {
    payload.WithString("walletSecretJsonKey", m_walletSecretJsonKey);
  }

  if (m_walletSecretSourceHasBeenSet) {
    payload.WithString("walletSecretSource", SecretSourceTypeMapper::GetNameForSecretSourceType(m_walletSecretSource));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
