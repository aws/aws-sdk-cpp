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
  enum class TargetCapacityUnitType
  {
    NOT_SET,
    vcpu,
    memory_mib,
    units
  };

namespace TargetCapacityUnitTypeMapper
{
AWS_EC2_API TargetCapacityUnitType GetTargetCapacityUnitTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTargetCapacityUnitType(TargetCapacityUnitType value);
} // namespace TargetCapacityUnitTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
