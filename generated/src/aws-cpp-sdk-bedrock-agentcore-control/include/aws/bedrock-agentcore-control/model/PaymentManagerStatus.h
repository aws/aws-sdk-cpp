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
enum class PaymentManagerStatus { NOT_SET, CREATING, UPDATING, DELETING, READY, CREATE_FAILED, UPDATE_FAILED, DELETE_FAILED };

namespace PaymentManagerStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API PaymentManagerStatus GetPaymentManagerStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPaymentManagerStatus(PaymentManagerStatus value);
}  // namespace PaymentManagerStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
