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
  enum class VpcAttributeName
  {
    NOT_SET,
    enableDnsSupport,
    enableDnsHostnames,
    enableNetworkAddressUsageMetrics
  };

namespace VpcAttributeNameMapper
{
AWS_EC2_API VpcAttributeName GetVpcAttributeNameForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVpcAttributeName(VpcAttributeName value);
} // namespace VpcAttributeNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
