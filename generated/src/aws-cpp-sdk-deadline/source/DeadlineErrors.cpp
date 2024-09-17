/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/DeadlineErrors.h>
#include <aws/deadline/model/ConflictException.h>
#include <aws/deadline/model/ThrottlingException.h>
#include <aws/deadline/model/ServiceQuotaExceededException.h>
#include <aws/deadline/model/ResourceNotFoundException.h>
#include <aws/deadline/model/ValidationException.h>
#include <aws/deadline/model/AccessDeniedException.h>
#include <aws/deadline/model/InternalServerErrorException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::deadline;
using namespace Aws::deadline::Model;

namespace Aws
{
namespace deadline
{
template<> AWS_DEADLINE_API ConflictException DeadlineError::GetModeledError()
{
  assert(this->GetErrorType() == DeadlineErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_DEADLINE_API ThrottlingException DeadlineError::GetModeledError()
{
  assert(this->GetErrorType() == DeadlineErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_DEADLINE_API ServiceQuotaExceededException DeadlineError::GetModeledError()
{
  assert(this->GetErrorType() == DeadlineErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_DEADLINE_API ResourceNotFoundException DeadlineError::GetModeledError()
{
  assert(this->GetErrorType() == DeadlineErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_DEADLINE_API ValidationException DeadlineError::GetModeledError()
{
  assert(this->GetErrorType() == DeadlineErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_DEADLINE_API AccessDeniedException DeadlineError::GetModeledError()
{
  assert(this->GetErrorType() == DeadlineErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_DEADLINE_API InternalServerErrorException DeadlineError::GetModeledError()
{
  assert(this->GetErrorType() == DeadlineErrors::INTERNAL_SERVER_ERROR);
  return InternalServerErrorException(this->GetJsonPayload().View());
}

namespace DeadlineErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeadlineErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeadlineErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeadlineErrors::INTERNAL_SERVER_ERROR), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DeadlineErrorMapper
} // namespace deadline
} // namespace Aws
