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
enum class EventActionability { NOT_SET, ACTION_REQUIRED, ACTION_MAY_BE_REQUIRED, INFORMATIONAL };

namespace EventActionabilityMapper {
AWS_HEALTH_API EventActionability GetEventActionabilityForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForEventActionability(EventActionability value);
}  // namespace EventActionabilityMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
