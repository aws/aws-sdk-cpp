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
  enum class TransitGatewayMulticastDomainState
  {
    NOT_SET,
    pending,
    available,
    deleting,
    deleted
  };

namespace TransitGatewayMulticastDomainStateMapper
{
AWS_EC2_API TransitGatewayMulticastDomainState GetTransitGatewayMulticastDomainStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayMulticastDomainState(TransitGatewayMulticastDomainState value);
} // namespace TransitGatewayMulticastDomainStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
