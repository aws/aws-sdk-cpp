/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/APIPortalErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::APIPortal;

namespace Aws {
namespace APIPortal {
namespace APIPortalErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(APIPortalErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(APIPortalErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  } else if (hashCode == LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(APIPortalErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE_THROTTLING);
  } else if (hashCode == BAD_REQUEST_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(APIPortalErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace APIPortalErrorMapper
}  // namespace APIPortal
}  // namespace Aws
