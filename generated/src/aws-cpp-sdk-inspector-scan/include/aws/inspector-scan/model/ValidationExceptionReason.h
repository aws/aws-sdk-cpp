/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector-scan/Inspectorscan_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace inspectorscan
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    UNKNOWN_OPERATION,
    CANNOT_PARSE,
    FIELD_VALIDATION_FAILED,
    UNSUPPORTED_SBOM_TYPE,
    OTHER
  };

namespace ValidationExceptionReasonMapper
{
AWS_INSPECTORSCAN_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_INSPECTORSCAN_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace inspectorscan
} // namespace Aws
