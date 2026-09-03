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
enum class ResultDestination { NOT_SET, DEDICATED_LOG_GROUP, SOURCE_LOG_GROUP };

namespace ResultDestinationMapper {
AWS_BEDROCKAGENTCORE_API ResultDestination GetResultDestinationForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForResultDestination(ResultDestination value);
}  // namespace ResultDestinationMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
