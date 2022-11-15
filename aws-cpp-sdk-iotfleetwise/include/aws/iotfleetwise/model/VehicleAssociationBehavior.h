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
  enum class VehicleAssociationBehavior
  {
    NOT_SET,
    CreateIotThing,
    ValidateIotThingExists
  };

namespace VehicleAssociationBehaviorMapper
{
AWS_IOTFLEETWISE_API VehicleAssociationBehavior GetVehicleAssociationBehaviorForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForVehicleAssociationBehavior(VehicleAssociationBehavior value);
} // namespace VehicleAssociationBehaviorMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
