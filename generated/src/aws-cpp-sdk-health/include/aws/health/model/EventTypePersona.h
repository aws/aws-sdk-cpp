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
enum class EventTypePersona { NOT_SET, OPERATIONS, SECURITY, BILLING };

namespace EventTypePersonaMapper {
AWS_HEALTH_API EventTypePersona GetEventTypePersonaForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForEventTypePersona(EventTypePersona value);
}  // namespace EventTypePersonaMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
