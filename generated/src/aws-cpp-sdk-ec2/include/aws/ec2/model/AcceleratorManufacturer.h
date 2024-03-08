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
  enum class AcceleratorManufacturer
  {
    NOT_SET,
    amazon_web_services,
    amd,
    nvidia,
    xilinx,
    habana
  };

namespace AcceleratorManufacturerMapper
{
AWS_EC2_API AcceleratorManufacturer GetAcceleratorManufacturerForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAcceleratorManufacturer(AcceleratorManufacturer value);
} // namespace AcceleratorManufacturerMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
