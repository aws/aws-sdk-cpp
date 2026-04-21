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
enum class ListingMode { NOT_SET, DEFAULT, DYNAMIC };

namespace ListingModeMapper {
AWS_BEDROCKAGENTCORECONTROL_API ListingMode GetListingModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForListingMode(ListingMode value);
}  // namespace ListingModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
