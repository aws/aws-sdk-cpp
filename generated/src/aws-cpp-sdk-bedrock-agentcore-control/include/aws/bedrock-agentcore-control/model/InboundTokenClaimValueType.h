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
enum class InboundTokenClaimValueType { NOT_SET, STRING, STRING_ARRAY };

namespace InboundTokenClaimValueTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API InboundTokenClaimValueType GetInboundTokenClaimValueTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForInboundTokenClaimValueType(InboundTokenClaimValueType value);
}  // namespace InboundTokenClaimValueTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
