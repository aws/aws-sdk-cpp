/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/appstream/AppStreamErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AppStream;

namespace Aws
{
namespace AppStream
{
namespace AppStreamErrorMapper
{

static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermittedException");
static const int ENTITLEMENT_NOT_FOUND_HASH = HashingUtils::HashString("EntitlementNotFoundException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int ENTITLEMENT_ALREADY_EXISTS_HASH = HashingUtils::HashString("EntitlementAlreadyExistsException");
static const int INVALID_ROLE_HASH = HashingUtils::HashString("InvalidRoleException");
static const int INVALID_ACCOUNT_STATUS_HASH = HashingUtils::HashString("InvalidAccountStatusException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int RESOURCE_NOT_AVAILABLE_HASH = HashingUtils::HashString("ResourceNotAvailableException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int REQUEST_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RequestLimitExceededException");
static const int INCOMPATIBLE_IMAGE_HASH = HashingUtils::HashString("IncompatibleImageException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::OPERATION_NOT_PERMITTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ENTITLEMENT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::ENTITLEMENT_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::RESOURCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ENTITLEMENT_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::ENTITLEMENT_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::INVALID_ROLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ACCOUNT_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::INVALID_ACCOUNT_STATUS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == RESOURCE_NOT_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::RESOURCE_NOT_AVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::CONCURRENT_MODIFICATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == REQUEST_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::REQUEST_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INCOMPATIBLE_IMAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::INCOMPATIBLE_IMAGE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppStreamErrorMapper
} // namespace AppStream
} // namespace Aws
