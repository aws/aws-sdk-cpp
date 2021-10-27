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
  enum class InstanceGeneration
  {
    NOT_SET,
    current,
    previous
  };

namespace InstanceGenerationMapper
{
AWS_AUTOSCALING_API InstanceGeneration GetInstanceGenerationForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForInstanceGeneration(InstanceGeneration value);
} // namespace InstanceGenerationMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
