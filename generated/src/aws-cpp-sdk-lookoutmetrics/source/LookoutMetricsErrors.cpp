/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lookoutmetrics/LookoutMetricsErrors.h>
#include <aws/lookoutmetrics/model/ConflictException.h>
#include <aws/lookoutmetrics/model/ServiceQuotaExceededException.h>
#include <aws/lookoutmetrics/model/ResourceNotFoundException.h>
#include <aws/lookoutmetrics/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LookoutMetrics;
using namespace Aws::LookoutMetrics::Model;

namespace Aws
{
namespace LookoutMetrics
{
template<> AWS_LOOKOUTMETRICS_API ConflictException LookoutMetricsError::GetModeledError()
{
  assert(this->GetErrorType() == LookoutMetricsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_LOOKOUTMETRICS_API ServiceQuotaExceededException LookoutMetricsError::GetModeledError()
{
  assert(this->GetErrorType() == LookoutMetricsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_LOOKOUTMETRICS_API ResourceNotFoundException LookoutMetricsError::GetModeledError()
{
  assert(this->GetErrorType() == LookoutMetricsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_LOOKOUTMETRICS_API ValidationException LookoutMetricsError::GetModeledError()
{
  assert(this->GetErrorType() == LookoutMetricsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace LookoutMetricsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LookoutMetricsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LookoutMetricsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LookoutMetricsErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LookoutMetricsErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LookoutMetricsErrorMapper
} // namespace LookoutMetrics
} // namespace Aws
