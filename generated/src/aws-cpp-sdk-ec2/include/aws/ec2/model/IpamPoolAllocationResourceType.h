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
  enum class IpamPoolAllocationResourceType
  {
    NOT_SET,
    ipam_pool,
    vpc,
    ec2_public_ipv4_pool,
    custom,
    subnet
  };

namespace IpamPoolAllocationResourceTypeMapper
{
AWS_EC2_API IpamPoolAllocationResourceType GetIpamPoolAllocationResourceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPoolAllocationResourceType(IpamPoolAllocationResourceType value);
} // namespace IpamPoolAllocationResourceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
