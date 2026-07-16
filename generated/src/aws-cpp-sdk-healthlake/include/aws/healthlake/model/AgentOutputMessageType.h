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
enum class AgentOutputMessageType { NOT_SET, INITIAL_GREETING, normal, confirmation, complete, error, options, choices };

namespace AgentOutputMessageTypeMapper {
AWS_HEALTHLAKE_API AgentOutputMessageType GetAgentOutputMessageTypeForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForAgentOutputMessageType(AgentOutputMessageType value);
}  // namespace AgentOutputMessageTypeMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
