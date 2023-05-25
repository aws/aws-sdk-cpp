/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class IpAddressType
  {
    NOT_SET,
    dualstack,
    ipv4
  };

namespace IpAddressTypeMapper
{
AWS_LIGHTSAIL_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForIpAddressType(IpAddressType value);
} // namespace IpAddressTypeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
