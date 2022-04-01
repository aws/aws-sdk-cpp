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
  enum class IpAddressType
  {
    NOT_SET,
    IPV4
  };

namespace IpAddressTypeMapper
{
AWS_GLOBALACCELERATOR_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForIpAddressType(IpAddressType value);
} // namespace IpAddressTypeMapper
} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
