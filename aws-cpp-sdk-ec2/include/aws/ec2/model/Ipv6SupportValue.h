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
  enum class Ipv6SupportValue
  {
    NOT_SET,
    enable,
    disable
  };

namespace Ipv6SupportValueMapper
{
AWS_EC2_API Ipv6SupportValue GetIpv6SupportValueForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpv6SupportValue(Ipv6SupportValue value);
} // namespace Ipv6SupportValueMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
