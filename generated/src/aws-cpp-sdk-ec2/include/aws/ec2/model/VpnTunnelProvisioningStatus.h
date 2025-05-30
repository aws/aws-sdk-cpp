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
  enum class VpnTunnelProvisioningStatus
  {
    NOT_SET,
    available,
    pending,
    failed
  };

namespace VpnTunnelProvisioningStatusMapper
{
AWS_EC2_API VpnTunnelProvisioningStatus GetVpnTunnelProvisioningStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVpnTunnelProvisioningStatus(VpnTunnelProvisioningStatus value);
} // namespace VpnTunnelProvisioningStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
