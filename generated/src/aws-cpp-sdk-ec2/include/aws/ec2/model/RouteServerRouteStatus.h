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
  enum class RouteServerRouteStatus
  {
    NOT_SET,
    in_rib,
    in_fib
  };

namespace RouteServerRouteStatusMapper
{
AWS_EC2_API RouteServerRouteStatus GetRouteServerRouteStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForRouteServerRouteStatus(RouteServerRouteStatus value);
} // namespace RouteServerRouteStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
