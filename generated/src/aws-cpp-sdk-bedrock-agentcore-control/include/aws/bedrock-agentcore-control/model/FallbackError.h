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
enum class FallbackError { NOT_SET, CONNECTION_ERROR, FIRST_BYTE_TIMEOUT, UNROUTABLE };

namespace FallbackErrorMapper {
AWS_BEDROCKAGENTCORECONTROL_API FallbackError GetFallbackErrorForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForFallbackError(FallbackError value);
}  // namespace FallbackErrorMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
