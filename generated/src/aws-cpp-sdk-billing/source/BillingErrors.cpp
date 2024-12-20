/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/billing/BillingErrors.h>
#include <aws/billing/model/ConflictException.h>
#include <aws/billing/model/ServiceQuotaExceededException.h>
#include <aws/billing/model/ResourceNotFoundException.h>
#include <aws/billing/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Billing;
using namespace Aws::Billing::Model;

namespace Aws
{
namespace Billing
{
template<> AWS_BILLING_API ConflictException BillingError::GetModeledError()
{
  assert(this->GetErrorType() == BillingErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_BILLING_API ServiceQuotaExceededException BillingError::GetModeledError()
{
  assert(this->GetErrorType() == BillingErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_BILLING_API ResourceNotFoundException BillingError::GetModeledError()
{
  assert(this->GetErrorType() == BillingErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_BILLING_API ValidationException BillingError::GetModeledError()
{
  assert(this->GetErrorType() == BillingErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace BillingErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BillingErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BillingErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BillingErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BillingErrorMapper
} // namespace Billing
} // namespace Aws
