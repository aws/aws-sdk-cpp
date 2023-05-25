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
  enum class AcceleratorType
  {
    NOT_SET,
    gpu,
    fpga,
    inference
  };

namespace AcceleratorTypeMapper
{
AWS_AUTOSCALING_API AcceleratorType GetAcceleratorTypeForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForAcceleratorType(AcceleratorType value);
} // namespace AcceleratorTypeMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
