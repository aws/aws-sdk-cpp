/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/m2/MainframeModernizationErrors.h>
#include <aws/m2/model/ConflictException.h>
#include <aws/m2/model/ThrottlingException.h>
#include <aws/m2/model/ServiceQuotaExceededException.h>
#include <aws/m2/model/ResourceNotFoundException.h>
#include <aws/m2/model/InternalServerException.h>
#include <aws/m2/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MainframeModernization;
using namespace Aws::MainframeModernization::Model;

namespace Aws
{
namespace MainframeModernization
{
template<> AWS_MAINFRAMEMODERNIZATION_API ConflictException MainframeModernizationError::GetModeledError()
{
  assert(this->GetErrorType() == MainframeModernizationErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_MAINFRAMEMODERNIZATION_API ThrottlingException MainframeModernizationError::GetModeledError()
{
  assert(this->GetErrorType() == MainframeModernizationErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_MAINFRAMEMODERNIZATION_API ServiceQuotaExceededException MainframeModernizationError::GetModeledError()
{
  assert(this->GetErrorType() == MainframeModernizationErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_MAINFRAMEMODERNIZATION_API ResourceNotFoundException MainframeModernizationError::GetModeledError()
{
  assert(this->GetErrorType() == MainframeModernizationErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_MAINFRAMEMODERNIZATION_API InternalServerException MainframeModernizationError::GetModeledError()
{
  assert(this->GetErrorType() == MainframeModernizationErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_MAINFRAMEMODERNIZATION_API ValidationException MainframeModernizationError::GetModeledError()
{
  assert(this->GetErrorType() == MainframeModernizationErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace MainframeModernizationErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int EXECUTION_TIMEOUT_HASH = HashingUtils::HashString("ExecutionTimeoutException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MainframeModernizationErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MainframeModernizationErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MainframeModernizationErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == EXECUTION_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MainframeModernizationErrors::EXECUTION_TIMEOUT), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MainframeModernizationErrorMapper
} // namespace MainframeModernization
} // namespace Aws
