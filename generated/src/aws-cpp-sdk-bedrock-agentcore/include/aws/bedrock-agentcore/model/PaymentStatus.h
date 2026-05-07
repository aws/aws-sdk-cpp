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
enum class PaymentStatus { NOT_SET, PROOF_GENERATED };

namespace PaymentStatusMapper {
AWS_BEDROCKAGENTCORE_API PaymentStatus GetPaymentStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForPaymentStatus(PaymentStatus value);
}  // namespace PaymentStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
