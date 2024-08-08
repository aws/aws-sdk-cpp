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
  enum class Ipv6AddressAttribute
  {
    NOT_SET,
    public_,
    private_
  };

namespace Ipv6AddressAttributeMapper
{
AWS_EC2_API Ipv6AddressAttribute GetIpv6AddressAttributeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpv6AddressAttribute(Ipv6AddressAttribute value);
} // namespace Ipv6AddressAttributeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
