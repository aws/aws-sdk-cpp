/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CryptoWalletNetwork.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace CryptoWalletNetworkMapper {

static const int ETHEREUM_HASH = HashingUtils::HashString("ETHEREUM");
static const int SOLANA_HASH = HashingUtils::HashString("SOLANA");

CryptoWalletNetwork GetCryptoWalletNetworkForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ETHEREUM_HASH) {
    return CryptoWalletNetwork::ETHEREUM;
  } else if (hashCode == SOLANA_HASH) {
    return CryptoWalletNetwork::SOLANA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CryptoWalletNetwork>(hashCode);
  }

  return CryptoWalletNetwork::NOT_SET;
}

Aws::String GetNameForCryptoWalletNetwork(CryptoWalletNetwork enumValue) {
  switch (enumValue) {
    case CryptoWalletNetwork::NOT_SET:
      return {};
    case CryptoWalletNetwork::ETHEREUM:
      return "ETHEREUM";
    case CryptoWalletNetwork::SOLANA:
      return "SOLANA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CryptoWalletNetworkMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
