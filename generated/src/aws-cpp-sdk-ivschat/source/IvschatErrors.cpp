/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ivschat/IvschatErrors.h>
#include <aws/ivschat/model/ConflictException.h>
#include <aws/ivschat/model/ServiceQuotaExceededException.h>
#include <aws/ivschat/model/ThrottlingException.h>
#include <aws/ivschat/model/ResourceNotFoundException.h>
#include <aws/ivschat/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ivschat;
using namespace Aws::ivschat::Model;

namespace Aws
{
namespace ivschat
{
template<> AWS_IVSCHAT_API ConflictException IvschatError::GetModeledError()
{
  assert(this->GetErrorType() == IvschatErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_IVSCHAT_API ServiceQuotaExceededException IvschatError::GetModeledError()
{
  assert(this->GetErrorType() == IvschatErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_IVSCHAT_API ThrottlingException IvschatError::GetModeledError()
{
  assert(this->GetErrorType() == IvschatErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_IVSCHAT_API ResourceNotFoundException IvschatError::GetModeledError()
{
  assert(this->GetErrorType() == IvschatErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_IVSCHAT_API ValidationException IvschatError::GetModeledError()
{
  assert(this->GetErrorType() == IvschatErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace IvschatErrorMapper
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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvschatErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvschatErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvschatErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PENDING_VERIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvschatErrors::PENDING_VERIFICATION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IvschatErrorMapper
} // namespace ivschat
} // namespace Aws
