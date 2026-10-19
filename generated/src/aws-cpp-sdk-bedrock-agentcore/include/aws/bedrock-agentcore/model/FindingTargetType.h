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
enum class FindingTargetType { NOT_SET, SPAN_ID, TRACE_ID, SPAN_NAME };

namespace FindingTargetTypeMapper {
AWS_BEDROCKAGENTCORE_API FindingTargetType GetFindingTargetTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForFindingTargetType(FindingTargetType value);
}  // namespace FindingTargetTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
