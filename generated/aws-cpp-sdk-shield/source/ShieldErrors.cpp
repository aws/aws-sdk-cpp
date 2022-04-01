/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/shield/ShieldErrors.h>
#include <aws/shield/model/ResourceNotFoundException.h>
#include <aws/shield/model/ResourceAlreadyExistsException.h>
#include <aws/shield/model/LimitsExceededException.h>
#include <aws/shield/model/InvalidParameterException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Shield;
using namespace Aws::Shield::Model;

namespace Aws
{
namespace Shield
{
template<> AWS_SHIELD_API ResourceNotFoundException ShieldError::GetModeledError()
{
  assert(this->GetErrorType() == ShieldErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SHIELD_API ResourceAlreadyExistsException ShieldError::GetModeledError()
{
  assert(this->GetErrorType() == ShieldErrors::RESOURCE_ALREADY_EXISTS);
  return ResourceAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_SHIELD_API LimitsExceededException ShieldError::GetModeledError()
{
  assert(this->GetErrorType() == ShieldErrors::LIMITS_EXCEEDED);
  return LimitsExceededException(this->GetJsonPayload().View());
}

template<> AWS_SHIELD_API InvalidParameterException ShieldError::GetModeledError()
{
  assert(this->GetErrorType() == ShieldErrors::INVALID_PARAMETER);
  return InvalidParameterException(this->GetJsonPayload().View());
}

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
