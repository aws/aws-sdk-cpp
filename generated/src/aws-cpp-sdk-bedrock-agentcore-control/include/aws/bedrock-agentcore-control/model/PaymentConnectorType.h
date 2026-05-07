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
enum class PaymentConnectorType { NOT_SET, CoinbaseCDP, StripePrivy };

namespace PaymentConnectorTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API PaymentConnectorType GetPaymentConnectorTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPaymentConnectorType(PaymentConnectorType value);
}  // namespace PaymentConnectorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
