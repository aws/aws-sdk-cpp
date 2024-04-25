/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class EntryViolationReason
  {
    NOT_SET,
    MISSING_EXPECTED_ENTRY,
    INCORRECT_ENTRY_ORDER,
    ENTRY_CONFLICT
  };

namespace EntryViolationReasonMapper
{
AWS_FMS_API EntryViolationReason GetEntryViolationReasonForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForEntryViolationReason(EntryViolationReason value);
} // namespace EntryViolationReasonMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
