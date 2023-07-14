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
  enum class LocationType
  {
    NOT_SET,
    region,
    availability_zone,
    availability_zone_id
  };

namespace LocationTypeMapper
{
AWS_EC2_API LocationType GetLocationTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForLocationType(LocationType value);
} // namespace LocationTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
