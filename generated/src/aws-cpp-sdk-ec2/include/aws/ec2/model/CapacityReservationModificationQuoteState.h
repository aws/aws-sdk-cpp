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
enum class CapacityReservationModificationQuoteState { NOT_SET, active, expired };

namespace CapacityReservationModificationQuoteStateMapper {
AWS_EC2_API CapacityReservationModificationQuoteState GetCapacityReservationModificationQuoteStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCapacityReservationModificationQuoteState(CapacityReservationModificationQuoteState value);
}  // namespace CapacityReservationModificationQuoteStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
