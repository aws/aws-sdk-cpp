/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
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
AWS_CLEANROOMSML_API AccessBudgetType GetAccessBudgetTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForAccessBudgetType(AccessBudgetType value);
} // namespace AccessBudgetTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
