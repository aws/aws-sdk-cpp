/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
enum class AgenticRetrieveMemoryPersistenceMode { NOT_SET, DEFAULT, NONE };

namespace AgenticRetrieveMemoryPersistenceModeMapper {
AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryPersistenceMode GetAgenticRetrieveMemoryPersistenceModeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForAgenticRetrieveMemoryPersistenceMode(AgenticRetrieveMemoryPersistenceMode value);
}  // namespace AgenticRetrieveMemoryPersistenceModeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
