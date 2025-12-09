/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/AccountErrors.h>
#include <aws/account/model/AccessDeniedException.h>
#include <aws/account/model/ConflictException.h>
#include <aws/account/model/InternalServerException.h>
#include <aws/account/model/ResourceNotFoundException.h>
#include <aws/account/model/ResourceUnavailableException.h>
#include <aws/account/model/TooManyRequestsException.h>
#include <aws/account/model/ValidationException.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Account;
using namespace Aws::Account::Model;

namespace Aws {
namespace Account {
template <>
AWS_ACCOUNT_API ConflictException AccountError::GetModeledError() {
  assert(this->GetErrorType() == AccountErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_ACCOUNT_API ResourceNotFoundException AccountError::GetModeledError() {
  assert(this->GetErrorType() == AccountErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_ACCOUNT_API InternalServerException AccountError::GetModeledError() {
  assert(this->GetErrorType() == AccountErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_ACCOUNT_API ValidationException AccountError::GetModeledError() {
  assert(this->GetErrorType() == AccountErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template <>
AWS_ACCOUNT_API AccessDeniedException AccountError::GetModeledError() {
  assert(this->GetErrorType() == AccountErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template <>
AWS_ACCOUNT_API TooManyRequestsException AccountError::GetModeledError() {
  assert(this->GetErrorType() == AccountErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template <>
AWS_ACCOUNT_API ResourceUnavailableException AccountError::GetModeledError() {
  assert(this->GetErrorType() == AccountErrors::RESOURCE_UNAVAILABLE);
  return ResourceUnavailableException(this->GetJsonPayload().View());
}

namespace AccountErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int RESOURCE_UNAVAILABLE_HASH = HashingUtils::HashString("ResourceUnavailableException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AccountErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AccountErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  } else if (hashCode == TOO_MANY_REQUESTS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AccountErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE_THROTTLING);
  } else if (hashCode == RESOURCE_UNAVAILABLE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AccountErrors::RESOURCE_UNAVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace AccountErrorMapper
}  // namespace Account
}  // namespace Aws
