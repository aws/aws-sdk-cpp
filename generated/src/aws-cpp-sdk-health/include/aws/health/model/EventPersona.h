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
enum class EventPersona { NOT_SET, OPERATIONS, SECURITY, BILLING };

namespace EventPersonaMapper {
AWS_HEALTH_API EventPersona GetEventPersonaForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForEventPersona(EventPersona value);
}  // namespace EventPersonaMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
