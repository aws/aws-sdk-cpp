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

static constexpr uint32_t FORBIDDEN_HASH = ConstExprHashingUtils::HashString("ForbiddenException");
static constexpr uint32_t GONE_HASH = ConstExprHashingUtils::HashString("GoneException");
static constexpr uint32_t PAYLOAD_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("PayloadTooLargeException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
