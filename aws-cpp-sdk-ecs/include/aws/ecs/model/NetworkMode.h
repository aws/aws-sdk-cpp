/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class NetworkMode
  {
    NOT_SET,
    bridge,
    host,
    awsvpc,
    none
  };

namespace NetworkModeMapper
{
AWS_ECS_API NetworkMode GetNetworkModeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForNetworkMode(NetworkMode value);
} // namespace NetworkModeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
