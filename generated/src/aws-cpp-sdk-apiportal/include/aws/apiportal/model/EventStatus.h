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
enum class EventStatus { NOT_SET, EVENT_STARTED, EVENT_IN_PROGRESS, EVENT_ENDED };

namespace EventStatusMapper {
AWS_APIPORTAL_API EventStatus GetEventStatusForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForEventStatus(EventStatus value);
}  // namespace EventStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
