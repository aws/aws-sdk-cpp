/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{
  enum class IpAddressFamily
  {
    NOT_SET,
    IPv4,
    IPv6
  };

namespace IpAddressFamilyMapper
{
AWS_GLOBALACCELERATOR_API IpAddressFamily GetIpAddressFamilyForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForIpAddressFamily(IpAddressFamily value);
} // namespace IpAddressFamilyMapper
} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
