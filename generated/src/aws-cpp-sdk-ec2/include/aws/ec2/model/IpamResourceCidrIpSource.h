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
  enum class IpamResourceCidrIpSource
  {
    NOT_SET,
    amazon,
    byoip,
    none
  };

namespace IpamResourceCidrIpSourceMapper
{
AWS_EC2_API IpamResourceCidrIpSource GetIpamResourceCidrIpSourceForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamResourceCidrIpSource(IpamResourceCidrIpSource value);
} // namespace IpamResourceCidrIpSourceMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
