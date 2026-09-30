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
enum class EventSourceState { NOT_SET, CREATING, ACTIVE, UPDATING, CREATE_FAILED, UPDATE_FAILED, DELETING, DELETE_FAILED };

namespace EventSourceStateMapper {
AWS_EVENTBRIDGEV2_API EventSourceState GetEventSourceStateForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForEventSourceState(EventSourceState value);
}  // namespace EventSourceStateMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
