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
enum class RestApiMethod { NOT_SET, GET_, DELETE_, HEAD, OPTIONS, PATCH, PUT, POST };

namespace RestApiMethodMapper {
AWS_BEDROCKAGENTCORECONTROL_API RestApiMethod GetRestApiMethodForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForRestApiMethod(RestApiMethod value);
}  // namespace RestApiMethodMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
