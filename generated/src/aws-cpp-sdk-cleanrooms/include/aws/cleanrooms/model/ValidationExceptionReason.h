/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    FIELD_VALIDATION_FAILED,
    INVALID_CONFIGURATION,
    INVALID_QUERY,
    IAM_SYNCHRONIZATION_DELAY
  };

namespace ValidationExceptionReasonMapper
{
AWS_CLEANROOMS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
