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
enum class PaymentInstrumentStatus { NOT_SET, INITIATED, ACTIVE, FAILED, DELETED };

namespace PaymentInstrumentStatusMapper {
AWS_BEDROCKAGENTCORE_API PaymentInstrumentStatus GetPaymentInstrumentStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForPaymentInstrumentStatus(PaymentInstrumentStatus value);
}  // namespace PaymentInstrumentStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
