/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Account
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    invalidRegionOptTarget,
    fieldValidationFailed
  };

namespace ValidationExceptionReasonMapper
{
AWS_ACCOUNT_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_ACCOUNT_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace Account
} // namespace Aws
