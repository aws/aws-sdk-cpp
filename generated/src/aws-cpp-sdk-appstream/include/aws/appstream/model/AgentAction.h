/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AppStream {
namespace Model {
enum class AgentAction { NOT_SET, COMPUTER_VISION, COMPUTER_INPUT, FORWARD_MCP_TOOLS };

namespace AgentActionMapper {
AWS_APPSTREAM_API AgentAction GetAgentActionForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForAgentAction(AgentAction value);
}  // namespace AgentActionMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
