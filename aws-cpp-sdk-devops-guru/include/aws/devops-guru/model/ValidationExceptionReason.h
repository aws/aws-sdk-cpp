/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    UNKNOWN_OPERATION,
    CANNOT_PARSE,
    FIELD_VALIDATION_FAILED,
    OTHER,
    INVALID_PARAMETER_COMBINATION,
    PARAMETER_INCONSISTENT_WITH_SERVICE_STATE
  };

namespace ValidationExceptionReasonMapper
{
AWS_DEVOPSGURU_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
