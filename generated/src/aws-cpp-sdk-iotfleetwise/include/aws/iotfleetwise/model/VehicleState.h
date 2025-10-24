﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>

namespace Aws {
namespace IoTFleetWise {
namespace Model {
enum class VehicleState { NOT_SET, CREATED, READY, HEALTHY, SUSPENDED, DELETING, READY_FOR_CHECKIN };

namespace VehicleStateMapper {
AWS_IOTFLEETWISE_API VehicleState GetVehicleStateForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForVehicleState(VehicleState value);
}  // namespace VehicleStateMapper
}  // namespace Model
}  // namespace IoTFleetWise
}  // namespace Aws
