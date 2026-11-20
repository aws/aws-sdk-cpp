/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class EventType { NOT_SET, WAF_API_SECURITY };

namespace EventTypeMapper {
AWS_APIPORTAL_API EventType GetEventTypeForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForEventType(EventType value);
}  // namespace EventTypeMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
