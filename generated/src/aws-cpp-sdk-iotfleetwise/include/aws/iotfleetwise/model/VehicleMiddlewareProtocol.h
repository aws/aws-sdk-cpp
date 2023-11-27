/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{
  enum class VehicleMiddlewareProtocol
  {
    NOT_SET,
    ROS_2
  };

namespace VehicleMiddlewareProtocolMapper
{
AWS_IOTFLEETWISE_API VehicleMiddlewareProtocol GetVehicleMiddlewareProtocolForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForVehicleMiddlewareProtocol(VehicleMiddlewareProtocol value);
} // namespace VehicleMiddlewareProtocolMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
