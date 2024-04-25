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
  enum class EntryType
  {
    NOT_SET,
    FMS_MANAGED_FIRST_ENTRY,
    FMS_MANAGED_LAST_ENTRY,
    CUSTOM_ENTRY
  };

namespace EntryTypeMapper
{
AWS_FMS_API EntryType GetEntryTypeForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForEntryType(EntryType value);
} // namespace EntryTypeMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
