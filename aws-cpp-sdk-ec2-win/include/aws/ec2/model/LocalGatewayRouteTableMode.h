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
  enum class LocalGatewayRouteTableMode
  {
    NOT_SET,
    direct_vpc_routing,
    coip
  };

namespace LocalGatewayRouteTableModeMapper
{
AWS_EC2_API LocalGatewayRouteTableMode GetLocalGatewayRouteTableModeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForLocalGatewayRouteTableMode(LocalGatewayRouteTableMode value);
} // namespace LocalGatewayRouteTableModeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
