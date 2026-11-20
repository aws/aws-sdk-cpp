/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentDiscovery {
namespace Model {
enum class RecordType { NOT_SET, AGENT, TOOL, SKILL, CUSTOM, GATEWAY, WEB_BOT };

namespace RecordTypeMapper {
AWS_AGENTDISCOVERY_API RecordType GetRecordTypeForName(const Aws::String& name);

AWS_AGENTDISCOVERY_API Aws::String GetNameForRecordType(RecordType value);
}  // namespace RecordTypeMapper
}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
