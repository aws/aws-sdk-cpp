/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/Health_EXPORTS.h>

namespace Aws {
namespace Health {
namespace Model {
enum class EventTypeCategory { NOT_SET, issue, accountNotification, scheduledChange, investigation };

namespace EventTypeCategoryMapper {
AWS_HEALTH_API EventTypeCategory GetEventTypeCategoryForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForEventTypeCategory(EventTypeCategory value);
}  // namespace EventTypeCategoryMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
