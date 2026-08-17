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
enum class AgenticRetrieveMemoryMetadataFilterOperator {
  NOT_SET,
  EQUALS_TO,
  EXISTS,
  NOT_EXISTS,
  BEFORE,
  AFTER,
  CONTAINS,
  GREATER_THAN,
  GREATER_THAN_OR_EQUALS,
  LESS_THAN,
  LESS_THAN_OR_EQUALS
};

namespace AgenticRetrieveMemoryMetadataFilterOperatorMapper {
AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataFilterOperator
GetAgenticRetrieveMemoryMetadataFilterOperatorForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForAgenticRetrieveMemoryMetadataFilterOperator(
    AgenticRetrieveMemoryMetadataFilterOperator value);
}  // namespace AgenticRetrieveMemoryMetadataFilterOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
