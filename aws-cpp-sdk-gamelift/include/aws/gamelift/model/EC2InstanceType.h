/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class EC2InstanceType
  {
    NOT_SET,
    t2_micro,
    t2_small,
    t2_medium,
    t2_large,
    c3_large,
    c3_xlarge,
    c3_2xlarge,
    c3_4xlarge,
    c3_8xlarge,
    c4_large,
    c4_xlarge,
    c4_2xlarge,
    c4_4xlarge,
    c4_8xlarge,
    c5_large,
    c5_xlarge,
    c5_2xlarge,
    c5_4xlarge,
    c5_9xlarge,
    c5_12xlarge,
    c5_18xlarge,
    c5_24xlarge,
    r3_large,
    r3_xlarge,
    r3_2xlarge,
    r3_4xlarge,
    r3_8xlarge,
    r4_large,
    r4_xlarge,
    r4_2xlarge,
    r4_4xlarge,
    r4_8xlarge,
    r4_16xlarge,
    r5_large,
    r5_xlarge,
    r5_2xlarge,
    r5_4xlarge,
    r5_8xlarge,
    r5_12xlarge,
    r5_16xlarge,
    r5_24xlarge,
    m3_medium,
    m3_large,
    m3_xlarge,
    m3_2xlarge,
    m4_large,
    m4_xlarge,
    m4_2xlarge,
    m4_4xlarge,
    m4_10xlarge,
    m5_large,
    m5_xlarge,
    m5_2xlarge,
    m5_4xlarge,
    m5_8xlarge,
    m5_12xlarge,
    m5_16xlarge,
    m5_24xlarge
  };

namespace EC2InstanceTypeMapper
{
AWS_GAMELIFT_API EC2InstanceType GetEC2InstanceTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForEC2InstanceType(EC2InstanceType value);
} // namespace EC2InstanceTypeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
