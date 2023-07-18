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
  enum class BurstablePerformance
  {
    NOT_SET,
    included,
    required,
    excluded
  };

namespace BurstablePerformanceMapper
{
AWS_EC2_API BurstablePerformance GetBurstablePerformanceForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForBurstablePerformance(BurstablePerformance value);
} // namespace BurstablePerformanceMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
