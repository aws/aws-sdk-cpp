/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-microvms/LambdaMicrovmsErrors.h>
#include <aws/lambda-microvms/model/ConflictException.h>
#include <aws/lambda-microvms/model/InternalServerException.h>
#include <aws/lambda-microvms/model/InvalidParameterValueException.h>
#include <aws/lambda-microvms/model/ResourceConflictException.h>
#include <aws/lambda-microvms/model/ResourceNotFoundException.h>
#include <aws/lambda-microvms/model/ServiceException.h>
#include <aws/lambda-microvms/model/ServiceQuotaExceededException.h>
#include <aws/lambda-microvms/model/ThrottlingException.h>
#include <aws/lambda-microvms/model/TooManyRequestsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LambdaMicrovms;
using namespace Aws::LambdaMicrovms::Model;

namespace Aws {
namespace LambdaMicrovms {
template <>
AWS_LAMBDAMICROVMS_API ConflictException LambdaMicrovmsError::GetModeledError() {
  assert(this->GetErrorType() == LambdaMicrovmsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDAMICROVMS_API ThrottlingException LambdaMicrovmsError::GetModeledError() {
  assert(this->GetErrorType() == LambdaMicrovmsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDAMICROVMS_API ServiceQuotaExceededException LambdaMicrovmsError::GetModeledError() {
  assert(this->GetErrorType() == LambdaMicrovmsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDAMICROVMS_API InternalServerException LambdaMicrovmsError::GetModeledError() {
  assert(this->GetErrorType() == LambdaMicrovmsErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDAMICROVMS_API ResourceNotFoundException LambdaMicrovmsError::GetModeledError() {
  assert(this->GetErrorType() == LambdaMicrovmsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDAMICROVMS_API ResourceConflictException LambdaMicrovmsError::GetModeledError() {
  assert(this->GetErrorType() == LambdaMicrovmsErrors::RESOURCE_CONFLICT);
  return ResourceConflictException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDAMICROVMS_API TooManyRequestsException LambdaMicrovmsError::GetModeledError() {
  assert(this->GetErrorType() == LambdaMicrovmsErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDAMICROVMS_API ServiceException LambdaMicrovmsError::GetModeledError() {
  assert(this->GetErrorType() == LambdaMicrovmsErrors::SERVICE);
  return ServiceException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDAMICROVMS_API InvalidParameterValueException LambdaMicrovmsError::GetModeledError() {
  assert(this->GetErrorType() == LambdaMicrovmsErrors::INVALID_PARAMETER_VALUE);
  return InvalidParameterValueException(this->GetJsonPayload().View());
}

namespace LambdaMicrovmsErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaMicrovmsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaMicrovmsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaMicrovmsErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  } else if (hashCode == RESOURCE_CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaMicrovmsErrors::RESOURCE_CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == TOO_MANY_REQUESTS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaMicrovmsErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  } else if (hashCode == SERVICE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaMicrovmsErrors::SERVICE), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace LambdaMicrovmsErrorMapper
}  // namespace LambdaMicrovms
}  // namespace Aws
