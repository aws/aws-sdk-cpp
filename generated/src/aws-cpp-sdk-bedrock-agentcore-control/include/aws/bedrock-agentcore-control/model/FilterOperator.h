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
enum class FilterOperator { NOT_SET, Equals, NotEquals, GreaterThan, LessThan, GreaterThanOrEqual, LessThanOrEqual, Contains, NotContains };

namespace FilterOperatorMapper {
AWS_BEDROCKAGENTCORECONTROL_API FilterOperator GetFilterOperatorForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForFilterOperator(FilterOperator value);
}  // namespace FilterOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
