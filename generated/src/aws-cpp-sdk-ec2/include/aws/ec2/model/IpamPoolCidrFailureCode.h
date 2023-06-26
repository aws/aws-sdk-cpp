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
  enum class IpamPoolCidrFailureCode
  {
    NOT_SET,
    cidr_not_available,
    limit_exceeded
  };

namespace IpamPoolCidrFailureCodeMapper
{
AWS_EC2_API IpamPoolCidrFailureCode GetIpamPoolCidrFailureCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPoolCidrFailureCode(IpamPoolCidrFailureCode value);
} // namespace IpamPoolCidrFailureCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
