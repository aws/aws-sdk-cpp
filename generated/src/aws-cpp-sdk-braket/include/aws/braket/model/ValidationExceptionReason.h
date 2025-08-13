/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Braket
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    ProgramSetValidationFailed
  };

namespace ValidationExceptionReasonMapper
{
AWS_BRAKET_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
