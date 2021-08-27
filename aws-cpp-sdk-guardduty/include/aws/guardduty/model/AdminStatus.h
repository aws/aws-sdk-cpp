/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class AdminStatus
  {
    NOT_SET,
    ENABLED,
    DISABLE_IN_PROGRESS
  };

namespace AdminStatusMapper
{
AWS_GUARDDUTY_API AdminStatus GetAdminStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForAdminStatus(AdminStatus value);
} // namespace AdminStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
