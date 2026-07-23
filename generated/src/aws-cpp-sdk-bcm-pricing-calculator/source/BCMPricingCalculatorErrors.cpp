/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/BCMPricingCalculatorErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BCMPricingCalculator;

namespace Aws {
namespace BCMPricingCalculator {
namespace BCMPricingCalculatorErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int DATA_UNAVAILABLE_HASH = HashingUtils::HashString("DataUnavailableException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BCMPricingCalculatorErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BCMPricingCalculatorErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BCMPricingCalculatorErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  } else if (hashCode == DATA_UNAVAILABLE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BCMPricingCalculatorErrors::DATA_UNAVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace BCMPricingCalculatorErrorMapper
}  // namespace BCMPricingCalculator
}  // namespace Aws
