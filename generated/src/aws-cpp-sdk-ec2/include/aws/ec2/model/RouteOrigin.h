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
  enum class RouteOrigin
  {
    NOT_SET,
    CreateRouteTable,
    CreateRoute,
    EnableVgwRoutePropagation
  };

namespace RouteOriginMapper
{
AWS_EC2_API RouteOrigin GetRouteOriginForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForRouteOrigin(RouteOrigin value);
} // namespace RouteOriginMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
