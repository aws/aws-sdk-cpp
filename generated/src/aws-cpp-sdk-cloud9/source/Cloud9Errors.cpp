/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloud9/Cloud9Errors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Cloud9;

namespace Aws
{
namespace Cloud9
{
namespace Cloud9ErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int CONCURRENT_ACCESS_HASH = HashingUtils::HashString("ConcurrentAccessException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Cloud9Errors::CONFLICT), false);
  }
  else if (hashCode == CONCURRENT_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Cloud9Errors::CONCURRENT_ACCESS), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Cloud9Errors::NOT_FOUND), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Cloud9Errors::FORBIDDEN), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Cloud9Errors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Cloud9Errors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Cloud9Errors::BAD_REQUEST), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Cloud9Errors::INTERNAL_SERVER_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Cloud9ErrorMapper
} // namespace Cloud9
} // namespace Aws
