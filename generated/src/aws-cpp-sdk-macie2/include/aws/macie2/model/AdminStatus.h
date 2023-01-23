/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class AdminStatus
  {
    NOT_SET,
    ENABLED,
    DISABLING_IN_PROGRESS
  };

namespace AdminStatusMapper
{
AWS_MACIE2_API AdminStatus GetAdminStatusForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForAdminStatus(AdminStatus value);
} // namespace AdminStatusMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
