/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistry {
namespace Model {
enum class RecordType { NOT_SET, MCP, AGENT, CUSTOM, SKILL };

namespace RecordTypeMapper {
AWS_AGENTREGISTRY_API RecordType GetRecordTypeForName(const Aws::String& name);

AWS_AGENTREGISTRY_API Aws::String GetNameForRecordType(RecordType value);
}  // namespace RecordTypeMapper
}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
