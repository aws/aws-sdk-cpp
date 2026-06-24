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
enum class TargetType {
  NOT_SET,
  OPEN_API_SCHEMA,
  SMITHY_MODEL,
  MCP_SERVER,
  LAMBDA,
  API_GATEWAY,
  CONNECTOR,
  AGENTCORE_RUNTIME,
  PASSTHROUGH,
  PROVIDER
};

namespace TargetTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForTargetType(TargetType value);
}  // namespace TargetTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
