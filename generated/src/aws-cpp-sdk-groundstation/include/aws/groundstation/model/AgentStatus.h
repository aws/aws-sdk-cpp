/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

namespace Aws {
namespace GroundStation {
namespace Model {
enum class AgentStatus { NOT_SET, SUCCESS, FAILED, ACTIVE, INACTIVE };

namespace AgentStatusMapper {
AWS_GROUNDSTATION_API AgentStatus GetAgentStatusForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForAgentStatus(AgentStatus value);
}  // namespace AgentStatusMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
