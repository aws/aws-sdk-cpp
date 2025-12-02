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
enum class FindingType { NOT_SET, VALID, INVALID, NOT_TRANSLATABLE, ALLOW_ALL, ALLOW_NONE, DENY_ALL, DENY_NONE };

namespace FindingTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API FindingType GetFindingTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForFindingType(FindingType value);
}  // namespace FindingTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
