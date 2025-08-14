/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMRecommendedActions
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    unknownOperation,
    cannotParse,
    fieldValidationFailed,
    other
  };

namespace ValidationExceptionReasonMapper
{
AWS_BCMRECOMMENDEDACTIONS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_BCMRECOMMENDEDACTIONS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
