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
  enum class IpamAddressHistoryResourceType
  {
    NOT_SET,
    eip,
    vpc,
    subnet,
    network_interface,
    instance
  };

namespace IpamAddressHistoryResourceTypeMapper
{
AWS_EC2_API IpamAddressHistoryResourceType GetIpamAddressHistoryResourceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamAddressHistoryResourceType(IpamAddressHistoryResourceType value);
} // namespace IpamAddressHistoryResourceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
