/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ivs-realtime/IvsrealtimeErrors.h>
#include <aws/ivs-realtime/model/ConflictException.h>
#include <aws/ivs-realtime/model/ServiceQuotaExceededException.h>
#include <aws/ivs-realtime/model/ResourceNotFoundException.h>
#include <aws/ivs-realtime/model/InternalServerException.h>
#include <aws/ivs-realtime/model/ValidationException.h>
#include <aws/ivs-realtime/model/PendingVerification.h>
#include <aws/ivs-realtime/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ivsrealtime;
using namespace Aws::ivsrealtime::Model;

namespace Aws
{
namespace ivsrealtime
{
template<> AWS_IVSREALTIME_API ConflictException IvsrealtimeError::GetModeledError()
{
  assert(this->GetErrorType() == IvsrealtimeErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_IVSREALTIME_API ServiceQuotaExceededException IvsrealtimeError::GetModeledError()
{
  assert(this->GetErrorType() == IvsrealtimeErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_IVSREALTIME_API ResourceNotFoundException IvsrealtimeError::GetModeledError()
{
  assert(this->GetErrorType() == IvsrealtimeErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_IVSREALTIME_API InternalServerException IvsrealtimeError::GetModeledError()
{
  assert(this->GetErrorType() == IvsrealtimeErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_IVSREALTIME_API ValidationException IvsrealtimeError::GetModeledError()
{
  assert(this->GetErrorType() == IvsrealtimeErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_IVSREALTIME_API PendingVerification IvsrealtimeError::GetModeledError()
{
  assert(this->GetErrorType() == IvsrealtimeErrors::PENDING_VERIFICATION);
  return PendingVerification(this->GetJsonPayload().View());
}

template<> AWS_IVSREALTIME_API AccessDeniedException IvsrealtimeError::GetModeledError()
{
  assert(this->GetErrorType() == IvsrealtimeErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace IvsrealtimeErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int PENDING_VERIFICATION_HASH = HashingUtils::HashString("PendingVerification");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvsrealtimeErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvsrealtimeErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvsrealtimeErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PENDING_VERIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvsrealtimeErrors::PENDING_VERIFICATION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IvsrealtimeErrorMapper
} // namespace ivsrealtime
} // namespace Aws
