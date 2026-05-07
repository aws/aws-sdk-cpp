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
enum class PaymentType { NOT_SET, CRYPTO_X402 };

namespace PaymentTypeMapper {
AWS_BEDROCKAGENTCORE_API PaymentType GetPaymentTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForPaymentType(PaymentType value);
}  // namespace PaymentTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
