/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/LambdaCoreErrors.h>
#include <aws/lambda-core/model/InvalidParameterValueException.h>
#include <aws/lambda-core/model/NetworkConnectorLimitExceededException.h>
#include <aws/lambda-core/model/ResourceConflictException.h>
#include <aws/lambda-core/model/ResourceNotFoundException.h>
#include <aws/lambda-core/model/ServiceException.h>
#include <aws/lambda-core/model/TooManyRequestsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LambdaCore;
using namespace Aws::LambdaCore::Model;

namespace Aws {
namespace LambdaCore {
template <>
AWS_LAMBDACORE_API ResourceNotFoundException LambdaCoreError::GetModeledError() {
  assert(this->GetErrorType() == LambdaCoreErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDACORE_API ResourceConflictException LambdaCoreError::GetModeledError() {
  assert(this->GetErrorType() == LambdaCoreErrors::RESOURCE_CONFLICT);
  return ResourceConflictException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDACORE_API NetworkConnectorLimitExceededException LambdaCoreError::GetModeledError() {
  assert(this->GetErrorType() == LambdaCoreErrors::NETWORK_CONNECTOR_LIMIT_EXCEEDED);
  return NetworkConnectorLimitExceededException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDACORE_API TooManyRequestsException LambdaCoreError::GetModeledError() {
  assert(this->GetErrorType() == LambdaCoreErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDACORE_API ServiceException LambdaCoreError::GetModeledError() {
  assert(this->GetErrorType() == LambdaCoreErrors::SERVICE);
  return ServiceException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDACORE_API InvalidParameterValueException LambdaCoreError::GetModeledError() {
  assert(this->GetErrorType() == LambdaCoreErrors::INVALID_PARAMETER_VALUE);
  return InvalidParameterValueException(this->GetJsonPayload().View());
}

namespace LambdaCoreErrorMapper {

static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");
static const int NETWORK_CONNECTOR_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("NetworkConnectorLimitExceededException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaCoreErrors::RESOURCE_CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == NETWORK_CONNECTOR_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaCoreErrors::NETWORK_CONNECTOR_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == TOO_MANY_REQUESTS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaCoreErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE_THROTTLING);
  } else if (hashCode == SERVICE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaCoreErrors::SERVICE), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace LambdaCoreErrorMapper
}  // namespace LambdaCore
}  // namespace Aws
