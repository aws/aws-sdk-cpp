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
enum class RecordExpiryAction { NOT_SET, REMOVE };

namespace RecordExpiryActionMapper {
AWS_BEDROCKAGENTCORECONTROL_API RecordExpiryAction GetRecordExpiryActionForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForRecordExpiryAction(RecordExpiryAction value);
}  // namespace RecordExpiryActionMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
