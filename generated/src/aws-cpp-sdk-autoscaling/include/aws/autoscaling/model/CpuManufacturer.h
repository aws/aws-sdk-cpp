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
  enum class CpuManufacturer
  {
    NOT_SET,
    intel,
    amd,
    amazon_web_services
  };

namespace CpuManufacturerMapper
{
AWS_AUTOSCALING_API CpuManufacturer GetCpuManufacturerForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForCpuManufacturer(CpuManufacturer value);
} // namespace CpuManufacturerMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
