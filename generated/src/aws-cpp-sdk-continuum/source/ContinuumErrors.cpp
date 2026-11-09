/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/ContinuumErrors.h>
#include <aws/continuum/model/ServiceQuotaExceededException.h>
#include <aws/continuum/model/ValidationException.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Continuum;
using namespace Aws::Continuum::Model;

namespace Aws {
namespace Continuum {
template <>
AWS_CONTINUUM_API ServiceQuotaExceededException ContinuumError::GetModeledError() {
  assert(this->GetErrorType() == ContinuumErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_CONTINUUM_API ValidationException ContinuumError::GetModeledError() {
  assert(this->GetErrorType() == ContinuumErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace ContinuumErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ContinuumErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ContinuumErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ContinuumErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace ContinuumErrorMapper
}  // namespace Continuum
}  // namespace Aws
