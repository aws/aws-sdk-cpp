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
enum class PaymentsAuthorizerType { NOT_SET, CUSTOM_JWT, AWS_IAM };

namespace PaymentsAuthorizerTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API PaymentsAuthorizerType GetPaymentsAuthorizerTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPaymentsAuthorizerType(PaymentsAuthorizerType value);
}  // namespace PaymentsAuthorizerTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
