/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-web/LambdaWebErrors.h>
#include <aws/lambda-web/model/ConflictException.h>
#include <aws/lambda-web/model/ResourceNotFoundException.h>
#include <aws/lambda-web/model/ServiceQuotaExceededException.h>
#include <aws/lambda-web/model/ThrottlingException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LambdaWeb;
using namespace Aws::LambdaWeb::Model;

namespace Aws {
namespace LambdaWeb {
template <>
AWS_LAMBDAWEB_API ConflictException LambdaWebError::GetModeledError() {
  assert(this->GetErrorType() == LambdaWebErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDAWEB_API ThrottlingException LambdaWebError::GetModeledError() {
  assert(this->GetErrorType() == LambdaWebErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDAWEB_API ServiceQuotaExceededException LambdaWebError::GetModeledError() {
  assert(this->GetErrorType() == LambdaWebErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_LAMBDAWEB_API ResourceNotFoundException LambdaWebError::GetModeledError() {
  assert(this->GetErrorType() == LambdaWebErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace LambdaWebErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaWebErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaWebErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaWebErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace LambdaWebErrorMapper
}  // namespace LambdaWeb
}  // namespace Aws
