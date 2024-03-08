/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/amplifybackend/AmplifyBackendErrors.h>
#include <aws/amplifybackend/model/NotFoundException.h>
#include <aws/amplifybackend/model/TooManyRequestsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AmplifyBackend;
using namespace Aws::AmplifyBackend::Model;

namespace Aws
{
namespace AmplifyBackend
{
template<> AWS_AMPLIFYBACKEND_API NotFoundException AmplifyBackendError::GetModeledError()
{
  assert(this->GetErrorType() == AmplifyBackendErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_AMPLIFYBACKEND_API TooManyRequestsException AmplifyBackendError::GetModeledError()
{
  assert(this->GetErrorType() == AmplifyBackendErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

namespace AmplifyBackendErrorMapper
{

static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int GATEWAY_TIMEOUT_HASH = HashingUtils::HashString("GatewayTimeoutException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyBackendErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == GATEWAY_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyBackendErrors::GATEWAY_TIMEOUT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyBackendErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyBackendErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AmplifyBackendErrorMapper
} // namespace AmplifyBackend
} // namespace Aws
