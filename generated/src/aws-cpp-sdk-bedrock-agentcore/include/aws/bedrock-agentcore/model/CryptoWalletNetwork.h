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
enum class CryptoWalletNetwork { NOT_SET, ETHEREUM, SOLANA };

namespace CryptoWalletNetworkMapper {
AWS_BEDROCKAGENTCORE_API CryptoWalletNetwork GetCryptoWalletNetworkForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForCryptoWalletNetwork(CryptoWalletNetwork value);
}  // namespace CryptoWalletNetworkMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
