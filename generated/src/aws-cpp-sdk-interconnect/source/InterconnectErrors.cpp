/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/interconnect/InterconnectErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Interconnect;

namespace Aws {
namespace Interconnect {
namespace InterconnectErrorMapper {

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERCONNECT_CLIENT_HASH = HashingUtils::HashString("InterconnectClientException");
static const int INTERCONNECT_VALIDATION_HASH = HashingUtils::HashString("InterconnectValidationException");
static const int INTERCONNECT_SERVER_HASH = HashingUtils::HashString("InterconnectServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InterconnectErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERCONNECT_CLIENT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InterconnectErrors::INTERCONNECT_CLIENT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERCONNECT_VALIDATION_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InterconnectErrors::INTERCONNECT_VALIDATION), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERCONNECT_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InterconnectErrors::INTERCONNECT_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace InterconnectErrorMapper
}  // namespace Interconnect
}  // namespace Aws
