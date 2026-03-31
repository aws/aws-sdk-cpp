/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class FleetReservationType { NOT_SET, interruptible_capacity_reservation };

namespace FleetReservationTypeMapper {
AWS_EC2_API FleetReservationType GetFleetReservationTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFleetReservationType(FleetReservationType value);
}  // namespace FleetReservationTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
