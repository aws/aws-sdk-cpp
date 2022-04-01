/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Health
{
namespace Model
{
  enum class EventAggregateField
  {
    NOT_SET,
    eventTypeCategory
  };

namespace EventAggregateFieldMapper
{
AWS_HEALTH_API EventAggregateField GetEventAggregateFieldForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForEventAggregateField(EventAggregateField value);
} // namespace EventAggregateFieldMapper
} // namespace Model
} // namespace Health
} // namespace Aws
