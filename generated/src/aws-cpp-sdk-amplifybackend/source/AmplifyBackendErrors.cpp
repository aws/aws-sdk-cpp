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

static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t GATEWAY_TIMEOUT_HASH = ConstExprHashingUtils::HashString("GatewayTimeoutException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyBackendErrors::NOT_FOUND), false);
  }
  else if (hashCode == GATEWAY_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyBackendErrors::GATEWAY_TIMEOUT), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyBackendErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyBackendErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AmplifyBackendErrorMapper
} // namespace AmplifyBackend
} // namespace Aws
