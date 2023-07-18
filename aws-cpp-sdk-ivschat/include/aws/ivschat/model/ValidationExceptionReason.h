/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ivschat
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    UNKNOWN_OPERATION,
    FIELD_VALIDATION_FAILED,
    OTHER
  };

namespace ValidationExceptionReasonMapper
{
AWS_IVSCHAT_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_IVSCHAT_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace ivschat
} // namespace Aws
