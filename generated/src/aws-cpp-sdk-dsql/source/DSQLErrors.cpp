/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dsql/DSQLErrors.h>
#include <aws/dsql/model/ConflictException.h>
#include <aws/dsql/model/ServiceQuotaExceededException.h>
#include <aws/dsql/model/ThrottlingException.h>
#include <aws/dsql/model/InternalServerException.h>
#include <aws/dsql/model/ResourceNotFoundException.h>
#include <aws/dsql/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DSQL;
using namespace Aws::DSQL::Model;

namespace Aws
{
namespace DSQL
{
template<> AWS_DSQL_API ConflictException DSQLError::GetModeledError()
{
  assert(this->GetErrorType() == DSQLErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_DSQL_API ServiceQuotaExceededException DSQLError::GetModeledError()
{
  assert(this->GetErrorType() == DSQLErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_DSQL_API ThrottlingException DSQLError::GetModeledError()
{
  assert(this->GetErrorType() == DSQLErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_DSQL_API InternalServerException DSQLError::GetModeledError()
{
  assert(this->GetErrorType() == DSQLErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_DSQL_API ResourceNotFoundException DSQLError::GetModeledError()
{
  assert(this->GetErrorType() == DSQLErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_DSQL_API ValidationException DSQLError::GetModeledError()
{
  assert(this->GetErrorType() == DSQLErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace DSQLErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DSQLErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DSQLErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DSQLErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DSQLErrorMapper
} // namespace DSQL
} // namespace Aws
