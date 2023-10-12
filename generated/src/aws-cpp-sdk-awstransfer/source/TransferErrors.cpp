/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/awstransfer/TransferErrors.h>
#include <aws/awstransfer/model/ResourceExistsException.h>
#include <aws/awstransfer/model/ThrottlingException.h>
#include <aws/awstransfer/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Transfer;
using namespace Aws::Transfer::Model;

namespace Aws
{
namespace Transfer
{
template<> AWS_TRANSFER_API ResourceExistsException TransferError::GetModeledError()
{
  assert(this->GetErrorType() == TransferErrors::RESOURCE_EXISTS);
  return ResourceExistsException(this->GetJsonPayload().View());
}

template<> AWS_TRANSFER_API ThrottlingException TransferError::GetModeledError()
{
  assert(this->GetErrorType() == TransferErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_TRANSFER_API ResourceNotFoundException TransferError::GetModeledError()
{
  assert(this->GetErrorType() == TransferErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace TransferErrorMapper
{

static constexpr uint32_t RESOURCE_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceExistsException");
static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceError");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TransferErrors::RESOURCE_EXISTS), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TransferErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TransferErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TransferErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TransferErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TransferErrorMapper
} // namespace Transfer
} // namespace Aws
