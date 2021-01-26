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
  enum class GameServerGroupInstanceType
  {
    NOT_SET,
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

namespace GameServerGroupInstanceTypeMapper
{
AWS_GAMELIFT_API GameServerGroupInstanceType GetGameServerGroupInstanceTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameServerGroupInstanceType(GameServerGroupInstanceType value);
} // namespace GameServerGroupInstanceTypeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
