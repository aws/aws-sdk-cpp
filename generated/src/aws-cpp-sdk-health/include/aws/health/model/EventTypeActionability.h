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
enum class EventTypeActionability { NOT_SET, ACTION_REQUIRED, ACTION_MAY_BE_REQUIRED, INFORMATIONAL };

namespace EventTypeActionabilityMapper {
AWS_HEALTH_API EventTypeActionability GetEventTypeActionabilityForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForEventTypeActionability(EventTypeActionability value);
}  // namespace EventTypeActionabilityMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
