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
  enum class RouteServerPeerLivenessMode
  {
    NOT_SET,
    bfd,
    bgp_keepalive
  };

namespace RouteServerPeerLivenessModeMapper
{
AWS_EC2_API RouteServerPeerLivenessMode GetRouteServerPeerLivenessModeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForRouteServerPeerLivenessMode(RouteServerPeerLivenessMode value);
} // namespace RouteServerPeerLivenessModeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
