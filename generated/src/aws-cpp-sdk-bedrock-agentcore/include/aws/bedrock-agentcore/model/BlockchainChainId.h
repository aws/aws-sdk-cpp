/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class BlockchainChainId { NOT_SET, BASE, BASE_SEPOLIA, ETHEREUM, SOLANA, SOLANA_DEVNET };

namespace BlockchainChainIdMapper {
AWS_BEDROCKAGENTCORE_API BlockchainChainId GetBlockchainChainIdForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForBlockchainChainId(BlockchainChainId value);
}  // namespace BlockchainChainIdMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
