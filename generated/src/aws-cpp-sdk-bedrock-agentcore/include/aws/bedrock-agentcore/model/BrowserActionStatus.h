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
enum class BrowserActionStatus { NOT_SET, SUCCESS, FAILED };

namespace BrowserActionStatusMapper {
AWS_BEDROCKAGENTCORE_API BrowserActionStatus GetBrowserActionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForBrowserActionStatus(BrowserActionStatus value);
}  // namespace BrowserActionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
