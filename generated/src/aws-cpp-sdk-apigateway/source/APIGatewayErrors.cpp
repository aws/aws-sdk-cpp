/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/apigateway/APIGatewayErrors.h>
#include <aws/apigateway/model/ServiceUnavailableException.h>
#include <aws/apigateway/model/LimitExceededException.h>
#include <aws/apigateway/model/TooManyRequestsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::APIGateway;
using namespace Aws::APIGateway::Model;

namespace Aws
{
namespace APIGateway
{
template<> AWS_APIGATEWAY_API ServiceUnavailableException APIGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == APIGatewayErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_APIGATEWAY_API LimitExceededException APIGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == APIGatewayErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_APIGATEWAY_API TooManyRequestsException APIGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == APIGatewayErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

namespace APIGatewayErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(APIGatewayErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(APIGatewayErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(APIGatewayErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(APIGatewayErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(APIGatewayErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(APIGatewayErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace APIGatewayErrorMapper
} // namespace APIGateway
} // namespace Aws
