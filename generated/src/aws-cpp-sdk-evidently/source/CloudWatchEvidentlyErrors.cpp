/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/evidently/CloudWatchEvidentlyErrors.h>
#include <aws/evidently/model/ConflictException.h>
#include <aws/evidently/model/ThrottlingException.h>
#include <aws/evidently/model/ServiceQuotaExceededException.h>
#include <aws/evidently/model/ResourceNotFoundException.h>
#include <aws/evidently/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudWatchEvidently;
using namespace Aws::CloudWatchEvidently::Model;

namespace Aws
{
namespace CloudWatchEvidently
{
template<> AWS_CLOUDWATCHEVIDENTLY_API ConflictException CloudWatchEvidentlyError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchEvidentlyErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CLOUDWATCHEVIDENTLY_API ThrottlingException CloudWatchEvidentlyError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchEvidentlyErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_CLOUDWATCHEVIDENTLY_API ServiceQuotaExceededException CloudWatchEvidentlyError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchEvidentlyErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_CLOUDWATCHEVIDENTLY_API ResourceNotFoundException CloudWatchEvidentlyError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchEvidentlyErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CLOUDWATCHEVIDENTLY_API ValidationException CloudWatchEvidentlyError::GetModeledError()
{
  assert(this->GetErrorType() == CloudWatchEvidentlyErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace CloudWatchEvidentlyErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEvidentlyErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEvidentlyErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEvidentlyErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudWatchEvidentlyErrorMapper
} // namespace CloudWatchEvidently
} // namespace Aws
