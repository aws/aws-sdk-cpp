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
enum class PaymentCredentialProviderVendorType { NOT_SET, CoinbaseCDP, StripePrivy };

namespace PaymentCredentialProviderVendorTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API PaymentCredentialProviderVendorType GetPaymentCredentialProviderVendorTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPaymentCredentialProviderVendorType(PaymentCredentialProviderVendorType value);
}  // namespace PaymentCredentialProviderVendorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
