/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/billingconductor/BillingConductorErrors.h>
#include <aws/billingconductor/model/ConflictException.h>
#include <aws/billingconductor/model/ThrottlingException.h>
#include <aws/billingconductor/model/InternalServerException.h>
#include <aws/billingconductor/model/ResourceNotFoundException.h>
#include <aws/billingconductor/model/ValidationException.h>
#include <aws/billingconductor/model/ServiceLimitExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BillingConductor;
using namespace Aws::BillingConductor::Model;

namespace Aws
{
namespace BillingConductor
{
template<> AWS_BILLINGCONDUCTOR_API ConflictException BillingConductorError::GetModeledError()
{
  assert(this->GetErrorType() == BillingConductorErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_BILLINGCONDUCTOR_API ThrottlingException BillingConductorError::GetModeledError()
{
  assert(this->GetErrorType() == BillingConductorErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_BILLINGCONDUCTOR_API InternalServerException BillingConductorError::GetModeledError()
{
  assert(this->GetErrorType() == BillingConductorErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_BILLINGCONDUCTOR_API ResourceNotFoundException BillingConductorError::GetModeledError()
{
  assert(this->GetErrorType() == BillingConductorErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_BILLINGCONDUCTOR_API ValidationException BillingConductorError::GetModeledError()
{
  assert(this->GetErrorType() == BillingConductorErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_BILLINGCONDUCTOR_API ServiceLimitExceededException BillingConductorError::GetModeledError()
{
  assert(this->GetErrorType() == BillingConductorErrors::SERVICE_LIMIT_EXCEEDED);
  return ServiceLimitExceededException(this->GetJsonPayload().View());
}

namespace BillingConductorErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int SERVICE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ServiceLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BillingConductorErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BillingConductorErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BillingConductorErrors::SERVICE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BillingConductorErrorMapper
} // namespace BillingConductor
} // namespace Aws
