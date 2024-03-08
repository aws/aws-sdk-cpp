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
  enum class IpamPublicAddressType
  {
    NOT_SET,
    service_managed_ip,
    service_managed_byoip,
    amazon_owned_eip,
    byoip,
    ec2_public_ip
  };

namespace IpamPublicAddressTypeMapper
{
AWS_EC2_API IpamPublicAddressType GetIpamPublicAddressTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPublicAddressType(IpamPublicAddressType value);
} // namespace IpamPublicAddressTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
