/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BlockchainChainId.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace BlockchainChainIdMapper {

static const int BASE_HASH = HashingUtils::HashString("BASE");
static const int BASE_SEPOLIA_HASH = HashingUtils::HashString("BASE_SEPOLIA");
static const int ETHEREUM_HASH = HashingUtils::HashString("ETHEREUM");
static const int SOLANA_HASH = HashingUtils::HashString("SOLANA");
static const int SOLANA_DEVNET_HASH = HashingUtils::HashString("SOLANA_DEVNET");

BlockchainChainId GetBlockchainChainIdForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BASE_HASH) {
    return BlockchainChainId::BASE;
  } else if (hashCode == BASE_SEPOLIA_HASH) {
    return BlockchainChainId::BASE_SEPOLIA;
  } else if (hashCode == ETHEREUM_HASH) {
    return BlockchainChainId::ETHEREUM;
  } else if (hashCode == SOLANA_HASH) {
    return BlockchainChainId::SOLANA;
  } else if (hashCode == SOLANA_DEVNET_HASH) {
    return BlockchainChainId::SOLANA_DEVNET;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BlockchainChainId>(hashCode);
  }

  return BlockchainChainId::NOT_SET;
}

Aws::String GetNameForBlockchainChainId(BlockchainChainId enumValue) {
  switch (enumValue) {
    case BlockchainChainId::NOT_SET:
      return {};
    case BlockchainChainId::BASE:
      return "BASE";
    case BlockchainChainId::BASE_SEPOLIA:
      return "BASE_SEPOLIA";
    case BlockchainChainId::ETHEREUM:
      return "ETHEREUM";
    case BlockchainChainId::SOLANA:
      return "SOLANA";
    case BlockchainChainId::SOLANA_DEVNET:
      return "SOLANA_DEVNET";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BlockchainChainIdMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
