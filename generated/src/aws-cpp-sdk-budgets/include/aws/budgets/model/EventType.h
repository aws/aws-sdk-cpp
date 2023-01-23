/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Budgets
{
namespace Model
{
  enum class EventType
  {
    NOT_SET,
    SYSTEM,
    CREATE_ACTION,
    DELETE_ACTION,
    UPDATE_ACTION,
    EXECUTE_ACTION
  };

namespace EventTypeMapper
{
AWS_BUDGETS_API EventType GetEventTypeForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
