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
  enum class IpamAssociatedResourceDiscoveryStatus
  {
    NOT_SET,
    active,
    not_found
  };

namespace IpamAssociatedResourceDiscoveryStatusMapper
{
AWS_EC2_API IpamAssociatedResourceDiscoveryStatus GetIpamAssociatedResourceDiscoveryStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamAssociatedResourceDiscoveryStatus(IpamAssociatedResourceDiscoveryStatus value);
} // namespace IpamAssociatedResourceDiscoveryStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
