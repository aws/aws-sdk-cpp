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
  enum class NetworkInterfaceStatus
  {
    NOT_SET,
    available,
    associated,
    attaching,
    in_use,
    detaching
  };

namespace NetworkInterfaceStatusMapper
{
AWS_EC2_API NetworkInterfaceStatus GetNetworkInterfaceStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForNetworkInterfaceStatus(NetworkInterfaceStatus value);
} // namespace NetworkInterfaceStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
