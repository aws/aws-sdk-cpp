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

static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OperationNotPermittedException");
static constexpr uint32_t ENTITLEMENT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("EntitlementNotFoundException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t ENTITLEMENT_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("EntitlementAlreadyExistsException");
static constexpr uint32_t INVALID_ROLE_HASH = ConstExprHashingUtils::HashString("InvalidRoleException");
static constexpr uint32_t INVALID_ACCOUNT_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidAccountStatusException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t RESOURCE_NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("ResourceNotAvailableException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t REQUEST_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RequestLimitExceededException");
static constexpr uint32_t INCOMPATIBLE_IMAGE_HASH = ConstExprHashingUtils::HashString("IncompatibleImageException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::OPERATION_NOT_PERMITTED), false);
  }
  else if (hashCode == ENTITLEMENT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::ENTITLEMENT_NOT_FOUND), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == ENTITLEMENT_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::ENTITLEMENT_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::INVALID_ROLE), false);
  }
  else if (hashCode == INVALID_ACCOUNT_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::INVALID_ACCOUNT_STATUS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_NOT_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::RESOURCE_NOT_AVAILABLE), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == REQUEST_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::REQUEST_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INCOMPATIBLE_IMAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::INCOMPATIBLE_IMAGE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppStreamErrorMapper
} // namespace AppStream
} // namespace Aws
