/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
enum class CoinbaseCdpSecret { NOT_SET, API_KEY, WALLET_SECRET };

namespace CoinbaseCdpSecretMapper {
AWS_BEDROCKAGENTCORECONTROL_API CoinbaseCdpSecret GetCoinbaseCdpSecretForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForCoinbaseCdpSecret(CoinbaseCdpSecret value);
}  // namespace CoinbaseCdpSecretMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
