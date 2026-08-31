/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
enum class SourceType { NOT_SET, AWS_BedrockAgentCore_Runtime, AWS_BedrockAgentCore_Gateway };

namespace SourceTypeMapper {
AWS_AGENTREGISTRYCONTROL_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForSourceType(SourceType value);
}  // namespace SourceTypeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
