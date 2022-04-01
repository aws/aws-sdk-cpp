/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    UNKNOWN_OPERATION,
    CANNOT_PARSE,
    FIELD_VALIDATION_FAILED,
    OTHER
  };

namespace ValidationExceptionReasonMapper
{
AWS_LOOKOUTMETRICS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
