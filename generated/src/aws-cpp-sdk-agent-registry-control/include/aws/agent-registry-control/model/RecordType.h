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
enum class RecordType { NOT_SET, MCP, AGENT, CUSTOM, SKILL, GATEWAY };

namespace RecordTypeMapper {
AWS_AGENTREGISTRYCONTROL_API RecordType GetRecordTypeForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForRecordType(RecordType value);
}  // namespace RecordTypeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
