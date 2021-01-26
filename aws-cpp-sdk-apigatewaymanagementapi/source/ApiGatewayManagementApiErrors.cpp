/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ApiGatewayManagementApi;

namespace Aws
{
namespace ApiGatewayManagementApi
{
namespace ApiGatewayManagementApiErrorMapper
{

static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int GONE_HASH = HashingUtils::HashString("GoneException");
static const int PAYLOAD_TOO_LARGE_HASH = HashingUtils::HashString("PayloadTooLargeException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApiGatewayManagementApiErrors::FORBIDDEN), false);
  }
  else if (hashCode == GONE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApiGatewayManagementApiErrors::GONE), false);
  }
  else if (hashCode == PAYLOAD_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApiGatewayManagementApiErrors::PAYLOAD_TOO_LARGE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApiGatewayManagementApiErrors::LIMIT_EXCEEDED), true);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ApiGatewayManagementApiErrorMapper
} // namespace ApiGatewayManagementApi
} // namespace Aws
