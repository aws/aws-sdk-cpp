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
enum class ExampleField { NOT_SET, TURNS, INPUT, ACTOR_PROFILE };

namespace ExampleFieldMapper {
AWS_BEDROCKAGENTCORECONTROL_API ExampleField GetExampleFieldForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForExampleField(ExampleField value);
}  // namespace ExampleFieldMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
