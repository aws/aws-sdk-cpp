/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/shield/ShieldErrors.h>

using namespace Aws::Client;
using namespace Aws::Shield;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace ShieldErrorMapper
{

static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("InternalErrorException");
static const int LOCKED_SUBSCRIPTION_HASH = HashingUtils::HashString("LockedSubscriptionException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int ACCESS_DENIED_FOR_DEPENDENCY_HASH = HashingUtils::HashString("AccessDeniedForDependencyException");
static const int NO_ASSOCIATED_ROLE_HASH = HashingUtils::HashString("NoAssociatedRoleException");
static const int LIMITS_EXCEEDED_HASH = HashingUtils::HashString("LimitsExceededException");
static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("InvalidPaginationTokenException");
static const int OPTIMISTIC_LOCK_HASH = HashingUtils::HashString("OptimisticLockException");
static const int INVALID_OPERATION_HASH = HashingUtils::HashString("InvalidOperationException");
static const int INVALID_RESOURCE_HASH = HashingUtils::HashString("InvalidResourceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ShieldErrors::INTERNAL_ERROR), false);
  }
  else if (hashCode == LOCKED_SUBSCRIPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ShieldErrors::LOCKED_SUBSCRIPTION), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ShieldErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ShieldErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == ACCESS_DENIED_FOR_DEPENDENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ShieldErrors::ACCESS_DENIED_FOR_DEPENDENCY), false);
  }
  else if (hashCode == NO_ASSOCIATED_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ShieldErrors::NO_ASSOCIATED_ROLE), false);
  }
  else if (hashCode == LIMITS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ShieldErrors::LIMITS_EXCEEDED), false);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ShieldErrors::INVALID_PAGINATION_TOKEN), false);
  }
  else if (hashCode == OPTIMISTIC_LOCK_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ShieldErrors::OPTIMISTIC_LOCK), false);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ShieldErrors::INVALID_OPERATION), false);
  }
  else if (hashCode == INVALID_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ShieldErrors::INVALID_RESOURCE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ShieldErrorMapper
} // namespace Shield
} // namespace Aws
