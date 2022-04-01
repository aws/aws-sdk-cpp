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
  enum class NetworkInterfacePermissionStateCode
  {
    NOT_SET,
    pending,
    granted,
    revoking,
    revoked
  };

namespace NetworkInterfacePermissionStateCodeMapper
{
AWS_EC2_API NetworkInterfacePermissionStateCode GetNetworkInterfacePermissionStateCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForNetworkInterfacePermissionStateCode(NetworkInterfacePermissionStateCode value);
} // namespace NetworkInterfacePermissionStateCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
