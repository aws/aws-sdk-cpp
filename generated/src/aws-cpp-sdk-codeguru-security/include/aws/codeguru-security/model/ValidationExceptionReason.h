/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    unknownOperation,
    cannotParse,
    fieldValidationFailed,
    other,
    lambdaCodeShaMisMatch
  };

namespace ValidationExceptionReasonMapper
{
AWS_CODEGURUSECURITY_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_CODEGURUSECURITY_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
