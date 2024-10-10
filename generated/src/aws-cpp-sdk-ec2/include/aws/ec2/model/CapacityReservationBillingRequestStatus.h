/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class CapacityReservationBillingRequestStatus
  {
    NOT_SET,
    pending,
    accepted,
    rejected,
    cancelled,
    revoked,
    expired
  };

namespace CapacityReservationBillingRequestStatusMapper
{
AWS_EC2_API CapacityReservationBillingRequestStatus GetCapacityReservationBillingRequestStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCapacityReservationBillingRequestStatus(CapacityReservationBillingRequestStatus value);
} // namespace CapacityReservationBillingRequestStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
