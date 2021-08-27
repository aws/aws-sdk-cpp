/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/apigatewayv2/ApiGatewayV2Errors.h>
#include <aws/apigatewayv2/model/NotFoundException.h>
#include <aws/apigatewayv2/model/TooManyRequestsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ApiGatewayV2;
using namespace Aws::ApiGatewayV2::Model;

namespace Aws
{
namespace ApiGatewayV2
{
template<> AWS_APIGATEWAYV2_API NotFoundException ApiGatewayV2Error::GetModeledError()
{
  assert(this->GetErrorType() == ApiGatewayV2Errors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_APIGATEWAYV2_API TooManyRequestsException ApiGatewayV2Error::GetModeledError()
{
  assert(this->GetErrorType() == ApiGatewayV2Errors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

namespace ApiGatewayV2ErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApiGatewayV2Errors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApiGatewayV2Errors::NOT_FOUND), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApiGatewayV2Errors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApiGatewayV2Errors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ApiGatewayV2ErrorMapper
} // namespace ApiGatewayV2
} // namespace Aws
