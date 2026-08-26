/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class AgentSpacePreferenceKey { NOT_SET, elevatedActionsEnabled };

namespace AgentSpacePreferenceKeyMapper {
AWS_DEVOPSAGENT_API AgentSpacePreferenceKey GetAgentSpacePreferenceKeyForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForAgentSpacePreferenceKey(AgentSpacePreferenceKey value);
}  // namespace AgentSpacePreferenceKeyMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
