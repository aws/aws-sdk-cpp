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
enum class BusState { NOT_SET, CREATING, CREATE_FAILED, UPDATING, UPDATE_FAILED, DELETING, ACTIVE, DELETE_FAILED };

namespace BusStateMapper {
AWS_EVENTBRIDGEV2_API BusState GetBusStateForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForBusState(BusState value);
}  // namespace BusStateMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
