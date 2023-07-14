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
  enum class GatewayType
  {
    NOT_SET,
    ipsec_1
  };

namespace GatewayTypeMapper
{
AWS_EC2_API GatewayType GetGatewayTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForGatewayType(GatewayType value);
} // namespace GatewayTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
