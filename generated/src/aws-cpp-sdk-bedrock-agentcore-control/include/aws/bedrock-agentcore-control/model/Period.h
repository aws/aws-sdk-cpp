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
enum class Period { NOT_SET, second, minute };

namespace PeriodMapper {
AWS_BEDROCKAGENTCORECONTROL_API Period GetPeriodForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPeriod(Period value);
}  // namespace PeriodMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
