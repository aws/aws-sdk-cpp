﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>

namespace Aws {
namespace GeoPlaces {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, UnknownOperation, Missing, CannotParse, FieldValidationFailed, Other, UnknownField };

namespace ValidationExceptionReasonMapper {
AWS_GEOPLACES_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
