/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/endusermessaging/EndUserMessagingErrors.h>
#include <aws/endusermessaging/model/ConflictException.h>
#include <aws/endusermessaging/model/ResourceNotFoundException.h>
#include <aws/endusermessaging/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EndUserMessaging;
using namespace Aws::EndUserMessaging::Model;

namespace Aws {
namespace EndUserMessaging {
template <>
AWS_ENDUSERMESSAGING_API ConflictException EndUserMessagingError::GetModeledError() {
  assert(this->GetErrorType() == EndUserMessagingErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_ENDUSERMESSAGING_API ResourceNotFoundException EndUserMessagingError::GetModeledError() {
  assert(this->GetErrorType() == EndUserMessagingErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template <>
AWS_ENDUSERMESSAGING_API ValidationException EndUserMessagingError::GetModeledError() {
  assert(this->GetErrorType() == EndUserMessagingErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace EndUserMessagingErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EndUserMessagingErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EndUserMessagingErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EndUserMessagingErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace EndUserMessagingErrorMapper
}  // namespace EndUserMessaging
}  // namespace Aws
