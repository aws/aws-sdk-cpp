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
  enum class IpamPoolAwsService
  {
    NOT_SET,
    ec2
  };

namespace IpamPoolAwsServiceMapper
{
AWS_EC2_API IpamPoolAwsService GetIpamPoolAwsServiceForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPoolAwsService(IpamPoolAwsService value);
} // namespace IpamPoolAwsServiceMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
