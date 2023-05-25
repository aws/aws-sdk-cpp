/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AuditManager
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    unknownOperation,
    cannotParse,
    fieldValidationFailed,
    other
  };

namespace ValidationExceptionReasonMapper
{
AWS_AUDITMANAGER_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
