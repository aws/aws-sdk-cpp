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
  enum class RouteServerEndpointState
  {
    NOT_SET,
    pending,
    available,
    deleting,
    deleted,
    failing,
    failed,
    delete_failed
  };

namespace RouteServerEndpointStateMapper
{
AWS_EC2_API RouteServerEndpointState GetRouteServerEndpointStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForRouteServerEndpointState(RouteServerEndpointState value);
} // namespace RouteServerEndpointStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
