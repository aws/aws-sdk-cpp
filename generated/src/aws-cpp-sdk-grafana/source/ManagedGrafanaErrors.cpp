/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/grafana/ManagedGrafanaErrors.h>
#include <aws/grafana/model/ConflictException.h>
#include <aws/grafana/model/ThrottlingException.h>
#include <aws/grafana/model/ServiceQuotaExceededException.h>
#include <aws/grafana/model/ResourceNotFoundException.h>
#include <aws/grafana/model/InternalServerException.h>
#include <aws/grafana/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ManagedGrafana;
using namespace Aws::ManagedGrafana::Model;

namespace Aws
{
namespace ManagedGrafana
{
template<> AWS_MANAGEDGRAFANA_API ConflictException ManagedGrafanaError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedGrafanaErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_MANAGEDGRAFANA_API ThrottlingException ManagedGrafanaError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedGrafanaErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_MANAGEDGRAFANA_API ServiceQuotaExceededException ManagedGrafanaError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedGrafanaErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_MANAGEDGRAFANA_API ResourceNotFoundException ManagedGrafanaError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedGrafanaErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_MANAGEDGRAFANA_API InternalServerException ManagedGrafanaError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedGrafanaErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_MANAGEDGRAFANA_API ValidationException ManagedGrafanaError::GetModeledError()
{
  assert(this->GetErrorType() == ManagedGrafanaErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace ManagedGrafanaErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedGrafanaErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedGrafanaErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ManagedGrafanaErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ManagedGrafanaErrorMapper
} // namespace ManagedGrafana
} // namespace Aws
