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
  enum class ReservationType
  {
    NOT_SET,
    capacity_block,
    odcr
  };

namespace ReservationTypeMapper
{
AWS_EC2_API ReservationType GetReservationTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForReservationType(ReservationType value);
} // namespace ReservationTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
