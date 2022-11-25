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
  enum class VpnProtocol
  {
    NOT_SET,
    openvpn
  };

namespace VpnProtocolMapper
{
AWS_EC2_API VpnProtocol GetVpnProtocolForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVpnProtocol(VpnProtocol value);
} // namespace VpnProtocolMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
