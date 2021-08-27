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
  enum class FleetType
  {
    NOT_SET,
    request,
    maintain,
    instant
  };

namespace FleetTypeMapper
{
AWS_EC2_API FleetType GetFleetTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFleetType(FleetType value);
} // namespace FleetTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
