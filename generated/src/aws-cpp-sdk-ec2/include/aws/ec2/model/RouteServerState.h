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
  enum class RouteServerState
  {
    NOT_SET,
    pending,
    available,
    modifying,
    deleting,
    deleted
  };

namespace RouteServerStateMapper
{
AWS_EC2_API RouteServerState GetRouteServerStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForRouteServerState(RouteServerState value);
} // namespace RouteServerStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
