/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datasync/DataSyncErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DataSync;

namespace Aws {
namespace DataSync {
namespace DataSyncErrorMapper {

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataSyncErrors::INTERNAL), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_REQUEST_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataSyncErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace DataSyncErrorMapper
}  // namespace DataSync
}  // namespace Aws
