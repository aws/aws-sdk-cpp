/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/storagegateway/StorageGatewayErrors.h>
#include <aws/storagegateway/model/ServiceUnavailableError.h>
#include <aws/storagegateway/model/InternalServerError.h>
#include <aws/storagegateway/model/InvalidGatewayRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::StorageGateway;
using namespace Aws::StorageGateway::Model;

namespace Aws
{
namespace StorageGateway
{
template<> AWS_STORAGEGATEWAY_API ServiceUnavailableError StorageGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == StorageGatewayErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableError(this->GetJsonPayload().View());
}

template<> AWS_STORAGEGATEWAY_API InternalServerError StorageGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == StorageGatewayErrors::INTERNAL_FAILURE);
  return InternalServerError(this->GetJsonPayload().View());
}

template<> AWS_STORAGEGATEWAY_API InvalidGatewayRequestException StorageGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == StorageGatewayErrors::INVALID_GATEWAY_REQUEST);
  return InvalidGatewayRequestException(this->GetJsonPayload().View());
}

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
