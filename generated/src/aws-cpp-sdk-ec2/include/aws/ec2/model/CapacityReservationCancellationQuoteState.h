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
enum class CapacityReservationCancellationQuoteState { NOT_SET, pending, active, expired };

namespace CapacityReservationCancellationQuoteStateMapper {
AWS_EC2_API CapacityReservationCancellationQuoteState GetCapacityReservationCancellationQuoteStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCapacityReservationCancellationQuoteState(CapacityReservationCancellationQuoteState value);
}  // namespace CapacityReservationCancellationQuoteStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
