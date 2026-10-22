/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/healthlake/model/AgentErrorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {
namespace AgentErrorTypeMapper {

static const int InternalServerException_HASH = HashingUtils::HashString("InternalServerException");
static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");
static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");
static const int ThrottlingException_HASH = HashingUtils::HashString("ThrottlingException");

AgentErrorType GetAgentErrorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InternalServerException_HASH) {
    return AgentErrorType::InternalServerException;
  } else if (hashCode == ResourceNotFoundException_HASH) {
    return AgentErrorType::ResourceNotFoundException;
  } else if (hashCode == ValidationException_HASH) {
    return AgentErrorType::ValidationException;
  } else if (hashCode == AccessDeniedException_HASH) {
    return AgentErrorType::AccessDeniedException;
  } else if (hashCode == ThrottlingException_HASH) {
    return AgentErrorType::ThrottlingException;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentErrorType>(hashCode);
  }

  return AgentErrorType::NOT_SET;
}

Aws::String GetNameForAgentErrorType(AgentErrorType enumValue) {
  switch (enumValue) {
    case AgentErrorType::NOT_SET:
      return {};
    case AgentErrorType::InternalServerException:
      return "InternalServerException";
    case AgentErrorType::ResourceNotFoundException:
      return "ResourceNotFoundException";
    case AgentErrorType::ValidationException:
      return "ValidationException";
    case AgentErrorType::AccessDeniedException:
      return "AccessDeniedException";
    case AgentErrorType::ThrottlingException:
      return "ThrottlingException";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentErrorTypeMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
