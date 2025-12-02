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
enum class ClaimMatchOperatorType { NOT_SET, EQUALS, CONTAINS, CONTAINS_ANY };

namespace ClaimMatchOperatorTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API ClaimMatchOperatorType GetClaimMatchOperatorTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForClaimMatchOperatorType(ClaimMatchOperatorType value);
}  // namespace ClaimMatchOperatorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
