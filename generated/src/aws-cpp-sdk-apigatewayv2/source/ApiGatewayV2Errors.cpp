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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
