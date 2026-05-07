/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CoinbaseCdpTokenResponseOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

CoinbaseCdpTokenResponseOutput::CoinbaseCdpTokenResponseOutput(JsonView jsonValue) { *this = jsonValue; }

CoinbaseCdpTokenResponseOutput& CoinbaseCdpTokenResponseOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bearerToken")) {
    m_bearerToken = jsonValue.GetString("bearerToken");
    m_bearerTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walletAuthToken")) {
    m_walletAuthToken = jsonValue.GetString("walletAuthToken");
    m_walletAuthTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue CoinbaseCdpTokenResponseOutput::Jsonize() const {
  JsonValue payload;

  if (m_bearerTokenHasBeenSet) {
    payload.WithString("bearerToken", m_bearerToken);
  }

  if (m_walletAuthTokenHasBeenSet) {
    payload.WithString("walletAuthToken", m_walletAuthToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
