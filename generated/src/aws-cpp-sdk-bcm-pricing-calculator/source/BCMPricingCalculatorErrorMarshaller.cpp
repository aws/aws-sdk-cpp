/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorErrorMarshaller.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorErrors.h>

using namespace Aws::Client;
using namespace Aws::BCMPricingCalculator;

AWSError<CoreErrors> BCMPricingCalculatorErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BCMPricingCalculatorErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}