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
  enum class ManagementType
  {
    NOT_SET,
    AUTO_MANAGED,
    MANUAL,
    DISABLED
  };

namespace ManagementTypeMapper
{
AWS_GUARDDUTY_API ManagementType GetManagementTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForManagementType(ManagementType value);
} // namespace ManagementTypeMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
