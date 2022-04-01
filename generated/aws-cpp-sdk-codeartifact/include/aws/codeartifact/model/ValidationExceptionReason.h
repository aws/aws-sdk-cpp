/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    CANNOT_PARSE,
    ENCRYPTION_KEY_ERROR,
    FIELD_VALIDATION_FAILED,
    UNKNOWN_OPERATION,
    OTHER
  };

namespace ValidationExceptionReasonMapper
{
AWS_CODEARTIFACT_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
