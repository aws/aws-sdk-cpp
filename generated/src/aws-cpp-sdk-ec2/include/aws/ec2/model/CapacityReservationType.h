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
  enum class CapacityReservationType
  {
    NOT_SET,
    default_,
    capacity_block
  };

namespace CapacityReservationTypeMapper
{
AWS_EC2_API CapacityReservationType GetCapacityReservationTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCapacityReservationType(CapacityReservationType value);
} // namespace CapacityReservationTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
