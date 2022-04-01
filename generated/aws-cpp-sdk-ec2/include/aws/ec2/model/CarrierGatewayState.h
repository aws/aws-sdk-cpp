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
  enum class CarrierGatewayState
  {
    NOT_SET,
    pending,
    available,
    deleting,
    deleted
  };

namespace CarrierGatewayStateMapper
{
AWS_EC2_API CarrierGatewayState GetCarrierGatewayStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCarrierGatewayState(CarrierGatewayState value);
} // namespace CarrierGatewayStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
