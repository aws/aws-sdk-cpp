/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    API_DOES_NOT_SUPPORT_LABELED_ARNS,
    MISSING_REQUIRED_PARAMETER,
    CANNOT_UPDATE_COMPLETED_MAP_RUN
  };

namespace ValidationExceptionReasonMapper
{
AWS_SFN_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
