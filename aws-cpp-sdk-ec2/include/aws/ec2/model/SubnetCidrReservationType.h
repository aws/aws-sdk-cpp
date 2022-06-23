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
  enum class SubnetCidrReservationType
  {
    NOT_SET,
    prefix,
    explicit_
  };

namespace SubnetCidrReservationTypeMapper
{
AWS_EC2_API SubnetCidrReservationType GetSubnetCidrReservationTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSubnetCidrReservationType(SubnetCidrReservationType value);
} // namespace SubnetCidrReservationTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
