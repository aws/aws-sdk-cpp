/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class AccessBudgetType
  {
    NOT_SET,
    CALENDAR_DAY,
    CALENDAR_MONTH,
    CALENDAR_WEEK,
    LIFETIME
  };

namespace AccessBudgetTypeMapper
{
AWS_CLEANROOMS_API AccessBudgetType GetAccessBudgetTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAccessBudgetType(AccessBudgetType value);
} // namespace AccessBudgetTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
