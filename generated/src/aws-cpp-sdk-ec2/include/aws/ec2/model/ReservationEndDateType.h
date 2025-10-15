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
  enum class ReservationEndDateType
  {
    NOT_SET,
    limited,
    unlimited
  };

namespace ReservationEndDateTypeMapper
{
AWS_EC2_API ReservationEndDateType GetReservationEndDateTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForReservationEndDateType(ReservationEndDateType value);
} // namespace ReservationEndDateTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
