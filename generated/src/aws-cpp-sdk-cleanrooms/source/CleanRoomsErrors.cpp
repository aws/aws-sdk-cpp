/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cleanrooms/CleanRoomsErrors.h>
#include <aws/cleanrooms/model/ConflictException.h>
#include <aws/cleanrooms/model/ServiceQuotaExceededException.h>
#include <aws/cleanrooms/model/ResourceNotFoundException.h>
#include <aws/cleanrooms/model/ValidationException.h>
#include <aws/cleanrooms/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CleanRooms;
using namespace Aws::CleanRooms::Model;

namespace Aws
{
namespace CleanRooms
{
template<> AWS_CLEANROOMS_API ConflictException CleanRoomsError::GetModeledError()
{
  assert(this->GetErrorType() == CleanRoomsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CLEANROOMS_API ServiceQuotaExceededException CleanRoomsError::GetModeledError()
{
  assert(this->GetErrorType() == CleanRoomsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_CLEANROOMS_API ResourceNotFoundException CleanRoomsError::GetModeledError()
{
  assert(this->GetErrorType() == CleanRoomsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CLEANROOMS_API ValidationException CleanRoomsError::GetModeledError()
{
  assert(this->GetErrorType() == CleanRoomsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_CLEANROOMS_API AccessDeniedException CleanRoomsError::GetModeledError()
{
  assert(this->GetErrorType() == CleanRoomsErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace CleanRoomsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CleanRoomsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CleanRoomsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CleanRoomsErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CleanRoomsErrorMapper
} // namespace CleanRooms
} // namespace Aws
