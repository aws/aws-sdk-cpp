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
enum class AgentErrorType {
  NOT_SET,
  InternalServerException,
  ResourceNotFoundException,
  ValidationException,
  AccessDeniedException,
  ThrottlingException
};

namespace AgentErrorTypeMapper {
AWS_HEALTHLAKE_API AgentErrorType GetAgentErrorTypeForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForAgentErrorType(AgentErrorType value);
}  // namespace AgentErrorTypeMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
