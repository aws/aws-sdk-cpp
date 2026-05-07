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
enum class Currency { NOT_SET, USD };

namespace CurrencyMapper {
AWS_BEDROCKAGENTCORE_API Currency GetCurrencyForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForCurrency(Currency value);
}  // namespace CurrencyMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
