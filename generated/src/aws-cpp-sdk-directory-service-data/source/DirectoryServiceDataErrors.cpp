/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/directory-service-data/DirectoryServiceDataErrors.h>
#include <aws/directory-service-data/model/ThrottlingException.h>
#include <aws/directory-service-data/model/ValidationException.h>
#include <aws/directory-service-data/model/DirectoryUnavailableException.h>
#include <aws/directory-service-data/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DirectoryServiceData;
using namespace Aws::DirectoryServiceData::Model;

namespace Aws
{
namespace DirectoryServiceData
{
template<> AWS_DIRECTORYSERVICEDATA_API ThrottlingException DirectoryServiceDataError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceDataErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICEDATA_API ValidationException DirectoryServiceDataError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceDataErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICEDATA_API DirectoryUnavailableException DirectoryServiceDataError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceDataErrors::DIRECTORY_UNAVAILABLE);
  return DirectoryUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_DIRECTORYSERVICEDATA_API AccessDeniedException DirectoryServiceDataError::GetModeledError()
{
  assert(this->GetErrorType() == DirectoryServiceDataErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace DirectoryServiceDataErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int DIRECTORY_UNAVAILABLE_HASH = HashingUtils::HashString("DirectoryUnavailableException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceDataErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceDataErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == DIRECTORY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectoryServiceDataErrors::DIRECTORY_UNAVAILABLE), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DirectoryServiceDataErrorMapper
} // namespace DirectoryServiceData
} // namespace Aws
