/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/autoscaling/AutoScalingErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AutoScaling;

namespace Aws
{
namespace AutoScaling
{
namespace AutoScalingErrorMapper
{

static constexpr uint32_t INSTANCE_REFRESH_IN_PROGRESS_FAULT_HASH = ConstExprHashingUtils::HashString("InstanceRefreshInProgress");
static constexpr uint32_t ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("AlreadyExists");
static constexpr uint32_t LIMIT_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("LimitExceeded");
static constexpr uint32_t RESOURCE_CONTENTION_FAULT_HASH = ConstExprHashingUtils::HashString("ResourceContention");
static constexpr uint32_t SERVICE_LINKED_ROLE_FAILURE_HASH = ConstExprHashingUtils::HashString("ServiceLinkedRoleFailure");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextToken");
static constexpr uint32_t SCALING_ACTIVITY_IN_PROGRESS_FAULT_HASH = ConstExprHashingUtils::HashString("ScalingActivityInProgress");
static constexpr uint32_t IRREVERSIBLE_INSTANCE_REFRESH_FAULT_HASH = ConstExprHashingUtils::HashString("IrreversibleInstanceRefresh");
static constexpr uint32_t ACTIVE_INSTANCE_REFRESH_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ActiveInstanceRefreshNotFound");
static constexpr uint32_t RESOURCE_IN_USE_FAULT_HASH = ConstExprHashingUtils::HashString("ResourceInUse");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INSTANCE_REFRESH_IN_PROGRESS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::INSTANCE_REFRESH_IN_PROGRESS_FAULT), false);
  }
  else if (hashCode == ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::LIMIT_EXCEEDED_FAULT), false);
  }
  else if (hashCode == RESOURCE_CONTENTION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::RESOURCE_CONTENTION_FAULT), true);
  }
  else if (hashCode == SERVICE_LINKED_ROLE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::SERVICE_LINKED_ROLE_FAILURE), true);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == SCALING_ACTIVITY_IN_PROGRESS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::SCALING_ACTIVITY_IN_PROGRESS_FAULT), false);
  }
  else if (hashCode == IRREVERSIBLE_INSTANCE_REFRESH_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::IRREVERSIBLE_INSTANCE_REFRESH_FAULT), false);
  }
  else if (hashCode == ACTIVE_INSTANCE_REFRESH_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::ACTIVE_INSTANCE_REFRESH_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == RESOURCE_IN_USE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::RESOURCE_IN_USE_FAULT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AutoScalingErrorMapper
} // namespace AutoScaling
} // namespace Aws
