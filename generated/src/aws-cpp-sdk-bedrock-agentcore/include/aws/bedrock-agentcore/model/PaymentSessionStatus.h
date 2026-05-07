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
enum class PaymentSessionStatus { NOT_SET, ACTIVE, EXPIRED, DELETED };

namespace PaymentSessionStatusMapper {
AWS_BEDROCKAGENTCORE_API PaymentSessionStatus GetPaymentSessionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForPaymentSessionStatus(PaymentSessionStatus value);
}  // namespace PaymentSessionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
