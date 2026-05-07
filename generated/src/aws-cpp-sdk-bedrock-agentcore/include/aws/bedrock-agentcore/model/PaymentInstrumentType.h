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
enum class PaymentInstrumentType { NOT_SET, EMBEDDED_CRYPTO_WALLET };

namespace PaymentInstrumentTypeMapper {
AWS_BEDROCKAGENTCORE_API PaymentInstrumentType GetPaymentInstrumentTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForPaymentInstrumentType(PaymentInstrumentType value);
}  // namespace PaymentInstrumentTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
