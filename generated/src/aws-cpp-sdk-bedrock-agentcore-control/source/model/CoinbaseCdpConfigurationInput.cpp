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
  if (jsonValue.ValueExists("walletSecret")) {
    m_walletSecret = jsonValue.GetString("walletSecret");
    m_walletSecretHasBeenSet = true;
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

  if (m_walletSecretHasBeenSet) {
    payload.WithString("walletSecret", m_walletSecret);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
