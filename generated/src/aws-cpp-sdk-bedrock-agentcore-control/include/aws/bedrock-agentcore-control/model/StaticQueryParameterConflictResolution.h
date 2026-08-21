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
enum class StaticQueryParameterConflictResolution { NOT_SET, CLIENT_OVERRIDE, STATIC_OVERRIDE };

namespace StaticQueryParameterConflictResolutionMapper {
AWS_BEDROCKAGENTCORECONTROL_API StaticQueryParameterConflictResolution
GetStaticQueryParameterConflictResolutionForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForStaticQueryParameterConflictResolution(StaticQueryParameterConflictResolution value);
}  // namespace StaticQueryParameterConflictResolutionMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
