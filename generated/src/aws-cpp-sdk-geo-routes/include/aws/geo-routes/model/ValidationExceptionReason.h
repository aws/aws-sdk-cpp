/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoRoutes
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
AWS_GEOROUTES_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
