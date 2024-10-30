/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoMaps
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    UnknownOperation,
    Missing,
    CannotParse,
    FieldValidationFailed,
    Other,
    UnknownField
  };

namespace ValidationExceptionReasonMapper
{
AWS_GEOMAPS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
