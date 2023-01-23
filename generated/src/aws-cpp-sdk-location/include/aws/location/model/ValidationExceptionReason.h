/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LocationService
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
    Other
  };

namespace ValidationExceptionReasonMapper
{
AWS_LOCATIONSERVICE_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
