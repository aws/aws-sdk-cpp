/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgent {
namespace Model {
enum class VpcConfigurationStatus { NOT_SET, CREATING, CREATED, DELETING, CREATE_FAILED, DELETE_FAILED };

namespace VpcConfigurationStatusMapper {
AWS_BEDROCKAGENT_API VpcConfigurationStatus GetVpcConfigurationStatusForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForVpcConfigurationStatus(VpcConfigurationStatus value);
}  // namespace VpcConfigurationStatusMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
