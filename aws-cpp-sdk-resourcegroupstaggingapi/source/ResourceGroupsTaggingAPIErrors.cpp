/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ResourceGroupsTaggingAPI;

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace ResourceGroupsTaggingAPIErrorMapper
{

static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int PAGINATION_TOKEN_EXPIRED_HASH = HashingUtils::HashString("PaginationTokenExpiredException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int CONSTRAINT_VIOLATION_HASH = HashingUtils::HashString("ConstraintViolationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsTaggingAPIErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == PAGINATION_TOKEN_EXPIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsTaggingAPIErrors::PAGINATION_TOKEN_EXPIRED), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsTaggingAPIErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsTaggingAPIErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == CONSTRAINT_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ResourceGroupsTaggingAPIErrors::CONSTRAINT_VIOLATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ResourceGroupsTaggingAPIErrorMapper
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
