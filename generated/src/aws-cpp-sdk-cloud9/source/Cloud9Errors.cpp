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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t CONCURRENT_ACCESS_HASH = ConstExprHashingUtils::HashString("ConcurrentAccessException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t FORBIDDEN_HASH = ConstExprHashingUtils::HashString("ForbiddenException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");
static constexpr uint32_t INTERNAL_SERVER_ERROR_HASH = ConstExprHashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
