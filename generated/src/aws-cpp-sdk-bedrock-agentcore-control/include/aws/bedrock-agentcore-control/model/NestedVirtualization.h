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
enum class NestedVirtualization { NOT_SET, ENABLED, DISABLED };

namespace NestedVirtualizationMapper {
AWS_BEDROCKAGENTCORECONTROL_API NestedVirtualization GetNestedVirtualizationForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForNestedVirtualization(NestedVirtualization value);
}  // namespace NestedVirtualizationMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
