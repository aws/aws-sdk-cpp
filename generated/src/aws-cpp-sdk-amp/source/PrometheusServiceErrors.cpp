/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/amp/PrometheusServiceErrors.h>
#include <aws/amp/model/ConflictException.h>
#include <aws/amp/model/ThrottlingException.h>
#include <aws/amp/model/ServiceQuotaExceededException.h>
#include <aws/amp/model/ResourceNotFoundException.h>
#include <aws/amp/model/InternalServerException.h>
#include <aws/amp/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PrometheusService;
using namespace Aws::PrometheusService::Model;

namespace Aws
{
namespace PrometheusService
{
template<> AWS_PROMETHEUSSERVICE_API ConflictException PrometheusServiceError::GetModeledError()
{
  assert(this->GetErrorType() == PrometheusServiceErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_PROMETHEUSSERVICE_API ThrottlingException PrometheusServiceError::GetModeledError()
{
  assert(this->GetErrorType() == PrometheusServiceErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_PROMETHEUSSERVICE_API ServiceQuotaExceededException PrometheusServiceError::GetModeledError()
{
  assert(this->GetErrorType() == PrometheusServiceErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_PROMETHEUSSERVICE_API ResourceNotFoundException PrometheusServiceError::GetModeledError()
{
  assert(this->GetErrorType() == PrometheusServiceErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_PROMETHEUSSERVICE_API InternalServerException PrometheusServiceError::GetModeledError()
{
  assert(this->GetErrorType() == PrometheusServiceErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_PROMETHEUSSERVICE_API ValidationException PrometheusServiceError::GetModeledError()
{
  assert(this->GetErrorType() == PrometheusServiceErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace PrometheusServiceErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PrometheusServiceErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PrometheusServiceErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PrometheusServiceErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PrometheusServiceErrorMapper
} // namespace PrometheusService
} // namespace Aws
