/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class StandbyInstances
  {
    NOT_SET,
    Terminate,
    Ignore,
    Wait
  };

namespace StandbyInstancesMapper
{
AWS_AUTOSCALING_API StandbyInstances GetStandbyInstancesForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForStandbyInstances(StandbyInstances value);
} // namespace StandbyInstancesMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
