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
enum class ContentLevel { NOT_SET, METADATA_ONLY, FULL_CONTENT };

namespace ContentLevelMapper {
AWS_BEDROCKAGENTCORECONTROL_API ContentLevel GetContentLevelForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForContentLevel(ContentLevel value);
}  // namespace ContentLevelMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
