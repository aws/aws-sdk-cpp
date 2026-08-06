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
enum class Monitoring { NOT_SET, BASIC, DETAILED };

namespace MonitoringMapper {
AWS_BEDROCKAGENTCORECONTROL_API Monitoring GetMonitoringForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForMonitoring(Monitoring value);
}  // namespace MonitoringMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
