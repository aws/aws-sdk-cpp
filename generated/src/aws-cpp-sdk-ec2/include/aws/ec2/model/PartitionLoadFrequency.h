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
  enum class PartitionLoadFrequency
  {
    NOT_SET,
    none,
    daily,
    weekly,
    monthly
  };

namespace PartitionLoadFrequencyMapper
{
AWS_EC2_API PartitionLoadFrequency GetPartitionLoadFrequencyForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForPartitionLoadFrequency(PartitionLoadFrequency value);
} // namespace PartitionLoadFrequencyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
