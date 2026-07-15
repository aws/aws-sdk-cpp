/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

namespace Aws {
namespace HealthLake {
namespace Model {
enum class AgentInputMessageType { NOT_SET, normal, confirmation_response };

namespace AgentInputMessageTypeMapper {
AWS_HEALTHLAKE_API AgentInputMessageType GetAgentInputMessageTypeForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForAgentInputMessageType(AgentInputMessageType value);
}  // namespace AgentInputMessageTypeMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
