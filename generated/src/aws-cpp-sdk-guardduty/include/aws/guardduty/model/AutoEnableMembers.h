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
  enum class AutoEnableMembers
  {
    NOT_SET,
    NEW_,
    ALL,
    NONE
  };

namespace AutoEnableMembersMapper
{
AWS_GUARDDUTY_API AutoEnableMembers GetAutoEnableMembersForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForAutoEnableMembers(AutoEnableMembers value);
} // namespace AutoEnableMembersMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
