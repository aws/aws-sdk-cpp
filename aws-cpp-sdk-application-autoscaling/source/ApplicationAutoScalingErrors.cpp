/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/application-autoscaling/ApplicationAutoScalingErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ApplicationAutoScaling;

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace ApplicationAutoScalingErrorMapper
{

static const int FAILED_RESOURCE_ACCESS_HASH = HashingUtils::HashString("FailedResourceAccessException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONCURRENT_UPDATE_HASH = HashingUtils::HashString("ConcurrentUpdateException");
static const int OBJECT_NOT_FOUND_HASH = HashingUtils::HashString("ObjectNotFoundException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == FAILED_RESOURCE_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::FAILED_RESOURCE_ACCESS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == CONCURRENT_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::CONCURRENT_UPDATE), false);
  }
  else if (hashCode == OBJECT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::OBJECT_NOT_FOUND), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationAutoScalingErrors::INVALID_NEXT_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ApplicationAutoScalingErrorMapper
} // namespace ApplicationAutoScaling
} // namespace Aws
