/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/TokenBalance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

TokenBalance::TokenBalance(JsonView jsonValue) { *this = jsonValue; }

TokenBalance& TokenBalance::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetString("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("decimals")) {
    m_decimals = jsonValue.GetInteger("decimals");
    m_decimalsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("token")) {
    m_token = InstrumentBalanceTokenMapper::GetInstrumentBalanceTokenForName(jsonValue.GetString("token"));
    m_tokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("network")) {
    m_network = CryptoWalletNetworkMapper::GetCryptoWalletNetworkForName(jsonValue.GetString("network"));
    m_networkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chain")) {
    m_chain = BlockchainChainIdMapper::GetBlockchainChainIdForName(jsonValue.GetString("chain"));
    m_chainHasBeenSet = true;
  }
  return *this;
}

JsonValue TokenBalance::Jsonize() const {
  JsonValue payload;

  if (m_amountHasBeenSet) {
    payload.WithString("amount", m_amount);
  }

  if (m_decimalsHasBeenSet) {
    payload.WithInteger("decimals", m_decimals);
  }

  if (m_tokenHasBeenSet) {
    payload.WithString("token", InstrumentBalanceTokenMapper::GetNameForInstrumentBalanceToken(m_token));
  }

  if (m_networkHasBeenSet) {
    payload.WithString("network", CryptoWalletNetworkMapper::GetNameForCryptoWalletNetwork(m_network));
  }

  if (m_chainHasBeenSet) {
    payload.WithString("chain", BlockchainChainIdMapper::GetNameForBlockchainChainId(m_chain));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
