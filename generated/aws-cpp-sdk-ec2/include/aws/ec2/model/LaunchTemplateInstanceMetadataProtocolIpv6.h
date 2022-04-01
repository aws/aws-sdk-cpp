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
  enum class LaunchTemplateInstanceMetadataProtocolIpv6
  {
    NOT_SET,
    disabled,
    enabled
  };

namespace LaunchTemplateInstanceMetadataProtocolIpv6Mapper
{
AWS_EC2_API LaunchTemplateInstanceMetadataProtocolIpv6 GetLaunchTemplateInstanceMetadataProtocolIpv6ForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForLaunchTemplateInstanceMetadataProtocolIpv6(LaunchTemplateInstanceMetadataProtocolIpv6 value);
} // namespace LaunchTemplateInstanceMetadataProtocolIpv6Mapper
} // namespace Model
} // namespace EC2
} // namespace Aws
