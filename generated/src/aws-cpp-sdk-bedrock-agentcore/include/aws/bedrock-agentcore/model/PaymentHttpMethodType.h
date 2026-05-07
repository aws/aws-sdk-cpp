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
enum class PaymentHttpMethodType { NOT_SET, GET_, POST, PUT, DELETE_, PATCH };

namespace PaymentHttpMethodTypeMapper {
AWS_BEDROCKAGENTCORE_API PaymentHttpMethodType GetPaymentHttpMethodTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForPaymentHttpMethodType(PaymentHttpMethodType value);
}  // namespace PaymentHttpMethodTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
