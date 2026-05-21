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
enum class DatasetSchemaType { NOT_SET, AGENTCORE_EVALUATION_PREDEFINED_V1, AGENTCORE_EVALUATION_SIMULATED_V1 };

namespace DatasetSchemaTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API DatasetSchemaType GetDatasetSchemaTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForDatasetSchemaType(DatasetSchemaType value);
}  // namespace DatasetSchemaTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
