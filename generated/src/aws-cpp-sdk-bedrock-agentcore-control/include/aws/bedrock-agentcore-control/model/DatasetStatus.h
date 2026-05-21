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
enum class DatasetStatus { NOT_SET, CREATING, UPDATING, DELETING, ACTIVE, CREATE_FAILED, UPDATE_FAILED, DELETE_FAILED };

namespace DatasetStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API DatasetStatus GetDatasetStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForDatasetStatus(DatasetStatus value);
}  // namespace DatasetStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
