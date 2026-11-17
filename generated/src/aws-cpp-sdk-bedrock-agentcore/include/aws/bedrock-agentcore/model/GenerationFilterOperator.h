/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class GenerationFilterOperator {
  NOT_SET,
  Equals,
  NotEquals,
  GreaterThan,
  LessThan,
  GreaterThanOrEqual,
  LessThanOrEqual,
  Contains,
  NotContains
};

namespace GenerationFilterOperatorMapper {
AWS_BEDROCKAGENTCORE_API GenerationFilterOperator GetGenerationFilterOperatorForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForGenerationFilterOperator(GenerationFilterOperator value);
}  // namespace GenerationFilterOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
