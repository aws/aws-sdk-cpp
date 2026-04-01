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
enum class EventFilterCondition { NOT_SET, HAS_EVENTS };

namespace EventFilterConditionMapper {
AWS_BEDROCKAGENTCORE_API EventFilterCondition GetEventFilterConditionForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForEventFilterCondition(EventFilterCondition value);
}  // namespace EventFilterConditionMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
