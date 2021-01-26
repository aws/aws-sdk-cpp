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
  enum class Connectivity
  {
    NOT_SET,
    CONNECTED,
    DISCONNECTED
  };

namespace ConnectivityMapper
{
AWS_ECS_API Connectivity GetConnectivityForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForConnectivity(Connectivity value);
} // namespace ConnectivityMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
