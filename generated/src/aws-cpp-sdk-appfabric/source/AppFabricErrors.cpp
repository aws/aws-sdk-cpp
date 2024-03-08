/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/appfabric/AppFabricErrors.h>
#include <aws/appfabric/model/ConflictException.h>
#include <aws/appfabric/model/ThrottlingException.h>
#include <aws/appfabric/model/ServiceQuotaExceededException.h>
#include <aws/appfabric/model/InternalServerException.h>
#include <aws/appfabric/model/ResourceNotFoundException.h>
#include <aws/appfabric/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AppFabric;
using namespace Aws::AppFabric::Model;

namespace Aws
{
namespace AppFabric
{
template<> AWS_APPFABRIC_API ConflictException AppFabricError::GetModeledError()
{
  assert(this->GetErrorType() == AppFabricErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_APPFABRIC_API ThrottlingException AppFabricError::GetModeledError()
{
  assert(this->GetErrorType() == AppFabricErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_APPFABRIC_API ServiceQuotaExceededException AppFabricError::GetModeledError()
{
  assert(this->GetErrorType() == AppFabricErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_APPFABRIC_API InternalServerException AppFabricError::GetModeledError()
{
  assert(this->GetErrorType() == AppFabricErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_APPFABRIC_API ResourceNotFoundException AppFabricError::GetModeledError()
{
  assert(this->GetErrorType() == AppFabricErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_APPFABRIC_API ValidationException AppFabricError::GetModeledError()
{
  assert(this->GetErrorType() == AppFabricErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace AppFabricErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppFabricErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppFabricErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppFabricErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppFabricErrorMapper
} // namespace AppFabric
} // namespace Aws
