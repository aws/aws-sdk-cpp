/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/AbuseSignalErrors.h>
#include <aws/abuse-signal/model/InternalServerException.h>
#include <aws/abuse-signal/model/ResourceNotFoundException.h>
#include <aws/abuse-signal/model/SubmissionRequirementException.h>
#include <aws/abuse-signal/model/ThrottlingException.h>
#include <aws/abuse-signal/model/ValidationException.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AbuseSignal;
using namespace Aws::AbuseSignal::Model;

namespace Aws {
namespace AbuseSignal {
template <>
AWS_ABUSESIGNAL_API ThrottlingException AbuseSignalError::GetModeledError() {
  assert(this->GetErrorType() == AbuseSignalErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_ABUSESIGNAL_API InternalServerException AbuseSignalError::GetModeledError() {
  assert(this->GetErrorType() == AbuseSignalErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_ABUSESIGNAL_API ResourceNotFoundException AbuseSignalError::GetModeledError() {
  assert(this->GetErrorType() == AbuseSignalErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_ABUSESIGNAL_API ValidationException AbuseSignalError::GetModeledError() {
  assert(this->GetErrorType() == AbuseSignalErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template <>
AWS_ABUSESIGNAL_API SubmissionRequirementException AbuseSignalError::GetModeledError() {
  assert(this->GetErrorType() == AbuseSignalErrors::SUBMISSION_REQUIREMENT);
  return SubmissionRequirementException(this->GetJsonPayload().View());
}

namespace AbuseSignalErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int SUBMISSION_REQUIREMENT_HASH = HashingUtils::HashString("SubmissionRequirementException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AbuseSignalErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AbuseSignalErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  } else if (hashCode == SUBMISSION_REQUIREMENT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AbuseSignalErrors::SUBMISSION_REQUIREMENT), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace AbuseSignalErrorMapper
}  // namespace AbuseSignal
}  // namespace Aws
