/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorErrors.h>
#include <aws/bcm-pricing-calculator/model/ConflictException.h>
#include <aws/bcm-pricing-calculator/model/ThrottlingException.h>
#include <aws/bcm-pricing-calculator/model/ServiceQuotaExceededException.h>
#include <aws/bcm-pricing-calculator/model/InternalServerException.h>
#include <aws/bcm-pricing-calculator/model/ResourceNotFoundException.h>
#include <aws/bcm-pricing-calculator/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BCMPricingCalculator;
using namespace Aws::BCMPricingCalculator::Model;

namespace Aws
{
namespace BCMPricingCalculator
{
template<> AWS_BCMPRICINGCALCULATOR_API ConflictException BCMPricingCalculatorError::GetModeledError()
{
  assert(this->GetErrorType() == BCMPricingCalculatorErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_BCMPRICINGCALCULATOR_API ThrottlingException BCMPricingCalculatorError::GetModeledError()
{
  assert(this->GetErrorType() == BCMPricingCalculatorErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_BCMPRICINGCALCULATOR_API ServiceQuotaExceededException BCMPricingCalculatorError::GetModeledError()
{
  assert(this->GetErrorType() == BCMPricingCalculatorErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_BCMPRICINGCALCULATOR_API InternalServerException BCMPricingCalculatorError::GetModeledError()
{
  assert(this->GetErrorType() == BCMPricingCalculatorErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_BCMPRICINGCALCULATOR_API ResourceNotFoundException BCMPricingCalculatorError::GetModeledError()
{
  assert(this->GetErrorType() == BCMPricingCalculatorErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_BCMPRICINGCALCULATOR_API ValidationException BCMPricingCalculatorError::GetModeledError()
{
  assert(this->GetErrorType() == BCMPricingCalculatorErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace BCMPricingCalculatorErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int DATA_UNAVAILABLE_HASH = HashingUtils::HashString("DataUnavailableException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BCMPricingCalculatorErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BCMPricingCalculatorErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BCMPricingCalculatorErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DATA_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BCMPricingCalculatorErrors::DATA_UNAVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BCMPricingCalculatorErrorMapper
} // namespace BCMPricingCalculator
} // namespace Aws
