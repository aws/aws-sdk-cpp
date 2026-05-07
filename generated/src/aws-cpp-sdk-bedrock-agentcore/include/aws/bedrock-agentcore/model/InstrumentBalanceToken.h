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
enum class InstrumentBalanceToken { NOT_SET, USDC };

namespace InstrumentBalanceTokenMapper {
AWS_BEDROCKAGENTCORE_API InstrumentBalanceToken GetInstrumentBalanceTokenForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForInstrumentBalanceToken(InstrumentBalanceToken value);
}  // namespace InstrumentBalanceTokenMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
