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
enum class InterceptorPayloadExclusion { NOT_SET, RESPONSE_BODY };

namespace InterceptorPayloadExclusionMapper {
AWS_BEDROCKAGENTCORECONTROL_API InterceptorPayloadExclusion GetInterceptorPayloadExclusionForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForInterceptorPayloadExclusion(InterceptorPayloadExclusion value);
}  // namespace InterceptorPayloadExclusionMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
