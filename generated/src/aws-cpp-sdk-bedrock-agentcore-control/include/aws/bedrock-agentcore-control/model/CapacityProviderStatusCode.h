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
enum class CapacityProviderStatusCode { NOT_SET, VALIDATION_ERROR, QUOTA_EXCEEDED, THROTTLED, INTERNAL_SERVER_EXCEPTION };

namespace CapacityProviderStatusCodeMapper {
AWS_BEDROCKAGENTCORECONTROL_API CapacityProviderStatusCode GetCapacityProviderStatusCodeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForCapacityProviderStatusCode(CapacityProviderStatusCode value);
}  // namespace CapacityProviderStatusCodeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
