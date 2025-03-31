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
  enum class RouteServerPeerState
  {
    NOT_SET,
    pending,
    available,
    deleting,
    deleted,
    failing,
    failed
  };

namespace RouteServerPeerStateMapper
{
AWS_EC2_API RouteServerPeerState GetRouteServerPeerStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForRouteServerPeerState(RouteServerPeerState value);
} // namespace RouteServerPeerStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
