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
enum class ResultAggregation { NOT_SET, Min, Max, Mean, AllMatch, AnyMatch };

namespace ResultAggregationMapper {
AWS_BEDROCKAGENTCORE_API ResultAggregation GetResultAggregationForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForResultAggregation(ResultAggregation value);
}  // namespace ResultAggregationMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
