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
  enum class TransitGatewayRouteTableAnnouncementState
  {
    NOT_SET,
    available,
    pending,
    failing,
    failed,
    deleting,
    deleted
  };

namespace TransitGatewayRouteTableAnnouncementStateMapper
{
AWS_EC2_API TransitGatewayRouteTableAnnouncementState GetTransitGatewayRouteTableAnnouncementStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayRouteTableAnnouncementState(TransitGatewayRouteTableAnnouncementState value);
} // namespace TransitGatewayRouteTableAnnouncementStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
