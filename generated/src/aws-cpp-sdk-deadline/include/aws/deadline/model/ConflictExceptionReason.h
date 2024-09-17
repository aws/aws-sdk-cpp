/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class ConflictExceptionReason
  {
    NOT_SET,
    CONFLICT_EXCEPTION,
    CONCURRENT_MODIFICATION,
    RESOURCE_ALREADY_EXISTS,
    RESOURCE_IN_USE,
    STATUS_CONFLICT
  };

namespace ConflictExceptionReasonMapper
{
AWS_DEADLINE_API ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason value);
} // namespace ConflictExceptionReasonMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
