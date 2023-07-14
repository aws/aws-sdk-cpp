﻿/**
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
  enum class TransitGatewayState
  {
    NOT_SET,
    pending,
    available,
    modifying,
    deleting,
    deleted
  };

namespace TransitGatewayStateMapper
{
AWS_EC2_API TransitGatewayState GetTransitGatewayStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayState(TransitGatewayState value);
} // namespace TransitGatewayStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
