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
enum class BrowserProfileStatus { NOT_SET, READY, DELETING, DELETED, SAVING };

namespace BrowserProfileStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API BrowserProfileStatus GetBrowserProfileStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForBrowserProfileStatus(BrowserProfileStatus value);
}  // namespace BrowserProfileStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
