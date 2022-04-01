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
    c5a_large,
    c5a_xlarge,
    c5a_2xlarge,
    c5a_4xlarge,
    c5a_8xlarge,
    c5a_12xlarge,
    c5a_16xlarge,
    c5a_24xlarge,
    c6g_medium,
    c6g_large,
    c6g_xlarge,
    c6g_2xlarge,
    c6g_4xlarge,
    c6g_8xlarge,
    c6g_12xlarge,
    c6g_16xlarge,
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
    r5a_large,
    r5a_xlarge,
    r5a_2xlarge,
    r5a_4xlarge,
    r5a_8xlarge,
    r5a_12xlarge,
    r5a_16xlarge,
    r5a_24xlarge,
    r6g_medium,
    r6g_large,
    r6g_xlarge,
    r6g_2xlarge,
    r6g_4xlarge,
    r6g_8xlarge,
    r6g_12xlarge,
    r6g_16xlarge,
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
    m5_24xlarge,
    m5a_large,
    m5a_xlarge,
    m5a_2xlarge,
    m5a_4xlarge,
    m5a_8xlarge,
    m5a_12xlarge,
    m5a_16xlarge,
    m5a_24xlarge,
    m6g_medium,
    m6g_large,
    m6g_xlarge,
    m6g_2xlarge,
    m6g_4xlarge,
    m6g_8xlarge,
    m6g_12xlarge,
    m6g_16xlarge
  };

namespace GameServerGroupInstanceTypeMapper
{
AWS_GAMELIFT_API GameServerGroupInstanceType GetGameServerGroupInstanceTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameServerGroupInstanceType(GameServerGroupInstanceType value);
} // namespace GameServerGroupInstanceTypeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
