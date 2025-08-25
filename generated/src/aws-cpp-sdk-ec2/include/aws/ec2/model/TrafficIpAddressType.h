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
  enum class TrafficIpAddressType
  {
    NOT_SET,
    ipv4,
    ipv6,
    dual_stack
  };

namespace TrafficIpAddressTypeMapper
{
AWS_EC2_API TrafficIpAddressType GetTrafficIpAddressTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTrafficIpAddressType(TrafficIpAddressType value);
} // namespace TrafficIpAddressTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
