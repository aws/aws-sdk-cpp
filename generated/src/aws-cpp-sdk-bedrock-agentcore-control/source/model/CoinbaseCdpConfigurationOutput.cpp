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
  if (jsonValue.ValueExists("walletSecretArn")) {
    m_walletSecretArn = jsonValue.GetObject("walletSecretArn");
    m_walletSecretArnHasBeenSet = true;
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

  if (m_walletSecretArnHasBeenSet) {
    payload.WithObject("walletSecretArn", m_walletSecretArn.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
