/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dataexchange/DataExchangeErrors.h>
#include <aws/dataexchange/model/ConflictException.h>
#include <aws/dataexchange/model/ResourceNotFoundException.h>
#include <aws/dataexchange/model/ValidationException.h>
#include <aws/dataexchange/model/ServiceLimitExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DataExchange;
using namespace Aws::DataExchange::Model;

namespace Aws
{
namespace DataExchange
{
template<> AWS_DATAEXCHANGE_API ConflictException DataExchangeError::GetModeledError()
{
  assert(this->GetErrorType() == DataExchangeErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_DATAEXCHANGE_API ResourceNotFoundException DataExchangeError::GetModeledError()
{
  assert(this->GetErrorType() == DataExchangeErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_DATAEXCHANGE_API ValidationException DataExchangeError::GetModeledError()
{
  assert(this->GetErrorType() == DataExchangeErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_DATAEXCHANGE_API ServiceLimitExceededException DataExchangeError::GetModeledError()
{
  assert(this->GetErrorType() == DataExchangeErrors::SERVICE_LIMIT_EXCEEDED);
  return ServiceLimitExceededException(this->GetJsonPayload().View());
}

namespace DataExchangeErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t SERVICE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataExchangeErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataExchangeErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == SERVICE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DataExchangeErrors::SERVICE_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DataExchangeErrorMapper
} // namespace DataExchange
} // namespace Aws
