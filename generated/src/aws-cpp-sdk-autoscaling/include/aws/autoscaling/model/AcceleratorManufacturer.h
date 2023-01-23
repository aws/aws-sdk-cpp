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
  enum class AcceleratorManufacturer
  {
    NOT_SET,
    nvidia,
    amd,
    amazon_web_services,
    xilinx
  };

namespace AcceleratorManufacturerMapper
{
AWS_AUTOSCALING_API AcceleratorManufacturer GetAcceleratorManufacturerForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForAcceleratorManufacturer(AcceleratorManufacturer value);
} // namespace AcceleratorManufacturerMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
