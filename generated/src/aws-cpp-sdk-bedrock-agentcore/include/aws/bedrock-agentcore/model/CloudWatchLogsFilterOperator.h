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
enum class CloudWatchLogsFilterOperator {
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

namespace CloudWatchLogsFilterOperatorMapper {
AWS_BEDROCKAGENTCORE_API CloudWatchLogsFilterOperator GetCloudWatchLogsFilterOperatorForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForCloudWatchLogsFilterOperator(CloudWatchLogsFilterOperator value);
}  // namespace CloudWatchLogsFilterOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
