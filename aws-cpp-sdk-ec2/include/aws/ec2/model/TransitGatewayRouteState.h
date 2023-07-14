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
  enum class TransitGatewayRouteState
  {
    NOT_SET,
    pending,
    active,
    blackhole,
    deleting,
    deleted
  };

namespace TransitGatewayRouteStateMapper
{
AWS_EC2_API TransitGatewayRouteState GetTransitGatewayRouteStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayRouteState(TransitGatewayRouteState value);
} // namespace TransitGatewayRouteStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
