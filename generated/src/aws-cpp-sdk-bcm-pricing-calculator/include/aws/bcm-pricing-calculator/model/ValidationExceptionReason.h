/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    unknownOperation,
    cannotParse,
    fieldValidationFailed,
    invalidRequestFromMember,
    disallowedRate,
    other
  };

namespace ValidationExceptionReasonMapper
{
AWS_BCMPRICINGCALCULATOR_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
