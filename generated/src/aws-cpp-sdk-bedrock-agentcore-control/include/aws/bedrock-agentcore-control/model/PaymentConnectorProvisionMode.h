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
enum class PaymentConnectorProvisionMode { NOT_SET, MANUAL, QUICK_CREATE };

namespace PaymentConnectorProvisionModeMapper {
AWS_BEDROCKAGENTCORECONTROL_API PaymentConnectorProvisionMode GetPaymentConnectorProvisionModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPaymentConnectorProvisionMode(PaymentConnectorProvisionMode value);
}  // namespace PaymentConnectorProvisionModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
