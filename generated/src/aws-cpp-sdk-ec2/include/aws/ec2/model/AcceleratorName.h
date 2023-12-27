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
  enum class AcceleratorName
  {
    NOT_SET,
    a100,
    inferentia,
    k520,
    k80,
    m60,
    radeon_pro_v520,
    t4,
    vu9p,
    v100,
    a10g,
    h100,
    t4g
  };

namespace AcceleratorNameMapper
{
AWS_EC2_API AcceleratorName GetAcceleratorNameForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAcceleratorName(AcceleratorName value);
} // namespace AcceleratorNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
