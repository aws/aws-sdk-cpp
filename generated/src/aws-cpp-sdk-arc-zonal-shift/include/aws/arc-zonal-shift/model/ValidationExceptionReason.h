/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    InvalidExpiresIn,
    InvalidStatus,
    MissingValue,
    InvalidToken,
    InvalidResourceIdentifier,
    InvalidAz,
    UnsupportedAz
  };

namespace ValidationExceptionReasonMapper
{
AWS_ARCZONALSHIFT_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_ARCZONALSHIFT_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
