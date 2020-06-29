/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/storagegateway/StorageGatewayErrors.h>

using namespace Aws::Client;
using namespace Aws::StorageGateway;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace StorageGatewayErrorMapper
{

static const int INVALID_GATEWAY_REQUEST_HASH = HashingUtils::HashString("InvalidGatewayRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_GATEWAY_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(StorageGatewayErrors::INVALID_GATEWAY_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace StorageGatewayErrorMapper
} // namespace StorageGateway
} // namespace Aws
