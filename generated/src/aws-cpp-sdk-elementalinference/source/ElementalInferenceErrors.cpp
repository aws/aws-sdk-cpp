/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/ElementalInferenceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ElementalInference;

namespace Aws {
namespace ElementalInference {
namespace ElementalInferenceErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int TOO_MANY_REQUEST_HASH = HashingUtils::HashString("TooManyRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElementalInferenceErrors::CONFLICT), RetryableType::RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElementalInferenceErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == TOO_MANY_REQUEST_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElementalInferenceErrors::TOO_MANY_REQUEST), RetryableType::RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_ERROR_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElementalInferenceErrors::INTERNAL_SERVER_ERROR), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace ElementalInferenceErrorMapper
}  // namespace ElementalInference
}  // namespace Aws
