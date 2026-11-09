/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access-runtime/AccountAccessRuntimeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AccountAccessRuntime;

namespace Aws {
namespace AccountAccessRuntime {
namespace AccountAccessRuntimeErrorMapper {

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AccountAccessRuntimeErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == UNAUTHORIZED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AccountAccessRuntimeErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace AccountAccessRuntimeErrorMapper
}  // namespace AccountAccessRuntime
}  // namespace Aws
