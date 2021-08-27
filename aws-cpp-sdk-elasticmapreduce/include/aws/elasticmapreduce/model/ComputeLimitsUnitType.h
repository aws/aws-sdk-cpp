/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class ComputeLimitsUnitType
  {
    NOT_SET,
    InstanceFleetUnits,
    Instances,
    VCPU
  };

namespace ComputeLimitsUnitTypeMapper
{
AWS_EMR_API ComputeLimitsUnitType GetComputeLimitsUnitTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForComputeLimitsUnitType(ComputeLimitsUnitType value);
} // namespace ComputeLimitsUnitTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
