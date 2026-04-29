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
enum class ConfigurationBundleStatus { NOT_SET, ACTIVE, CREATING, CREATE_FAILED, UPDATING, UPDATE_FAILED, DELETING, DELETE_FAILED };

namespace ConfigurationBundleStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API ConfigurationBundleStatus GetConfigurationBundleStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForConfigurationBundleStatus(ConfigurationBundleStatus value);
}  // namespace ConfigurationBundleStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
