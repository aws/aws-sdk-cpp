/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EmbeddedCryptoWallet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EmbeddedCryptoWallet::EmbeddedCryptoWallet(JsonView jsonValue) { *this = jsonValue; }

EmbeddedCryptoWallet& EmbeddedCryptoWallet::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("network")) {
    m_network = CryptoWalletNetworkMapper::GetCryptoWalletNetworkForName(jsonValue.GetString("network"));
    m_networkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("linkedAccounts")) {
    Aws::Utils::Array<JsonView> linkedAccountsJsonList = jsonValue.GetArray("linkedAccounts");
    for (unsigned linkedAccountsIndex = 0; linkedAccountsIndex < linkedAccountsJsonList.GetLength(); ++linkedAccountsIndex) {
      m_linkedAccounts.push_back(linkedAccountsJsonList[linkedAccountsIndex].AsObject());
    }
    m_linkedAccountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walletAddress")) {
    m_walletAddress = jsonValue.GetString("walletAddress");
    m_walletAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("redirectUrl")) {
    m_redirectUrl = jsonValue.GetString("redirectUrl");
    m_redirectUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue EmbeddedCryptoWallet::Jsonize() const {
  JsonValue payload;

  if (m_networkHasBeenSet) {
    payload.WithString("network", CryptoWalletNetworkMapper::GetNameForCryptoWalletNetwork(m_network));
  }

  if (m_linkedAccountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> linkedAccountsJsonList(m_linkedAccounts.size());
    for (unsigned linkedAccountsIndex = 0; linkedAccountsIndex < linkedAccountsJsonList.GetLength(); ++linkedAccountsIndex) {
      linkedAccountsJsonList[linkedAccountsIndex].AsObject(m_linkedAccounts[linkedAccountsIndex].Jsonize());
    }
    payload.WithArray("linkedAccounts", std::move(linkedAccountsJsonList));
  }

  if (m_walletAddressHasBeenSet) {
    payload.WithString("walletAddress", m_walletAddress);
  }

  if (m_redirectUrlHasBeenSet) {
    payload.WithString("redirectUrl", m_redirectUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
