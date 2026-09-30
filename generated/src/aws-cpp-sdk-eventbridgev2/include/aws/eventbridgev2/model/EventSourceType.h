/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
enum class EventSourceType { NOT_SET, AWS_SERVICE_EVENTS, PARTNER_EVENTS };

namespace EventSourceTypeMapper {
AWS_EVENTBRIDGEV2_API EventSourceType GetEventSourceTypeForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForEventSourceType(EventSourceType value);
}  // namespace EventSourceTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
