/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/ConnectSchedulingErrors.h>
#include <aws/connectscheduling/model/ConflictException.h>
#include <aws/connectscheduling/model/InternalServerException.h>
#include <aws/connectscheduling/model/ResourceNotFoundException.h>
#include <aws/connectscheduling/model/ServiceQuotaExceededException.h>
#include <aws/connectscheduling/model/ThrottlingException.h>
#include <aws/connectscheduling/model/ValidationException.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ConnectScheduling;
using namespace Aws::ConnectScheduling::Model;

namespace Aws {
namespace ConnectScheduling {
template <>
AWS_CONNECTSCHEDULING_API ConflictException ConnectSchedulingError::GetModeledError() {
  assert(this->GetErrorType() == ConnectSchedulingErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_CONNECTSCHEDULING_API ThrottlingException ConnectSchedulingError::GetModeledError() {
  assert(this->GetErrorType() == ConnectSchedulingErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_CONNECTSCHEDULING_API ServiceQuotaExceededException ConnectSchedulingError::GetModeledError() {
  assert(this->GetErrorType() == ConnectSchedulingErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_CONNECTSCHEDULING_API InternalServerException ConnectSchedulingError::GetModeledError() {
  assert(this->GetErrorType() == ConnectSchedulingErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_CONNECTSCHEDULING_API ResourceNotFoundException ConnectSchedulingError::GetModeledError() {
  assert(this->GetErrorType() == ConnectSchedulingErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_CONNECTSCHEDULING_API ValidationException ConnectSchedulingError::GetModeledError() {
  assert(this->GetErrorType() == ConnectSchedulingErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace ConnectSchedulingErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectSchedulingErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectSchedulingErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectSchedulingErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace ConnectSchedulingErrorMapper
}  // namespace ConnectScheduling
}  // namespace Aws
