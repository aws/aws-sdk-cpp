/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EFS
{
namespace Model
{
  enum class IpAddressType
  {
    NOT_SET,
    IPV4_ONLY,
    IPV6_ONLY,
    DUAL_STACK
  };

namespace IpAddressTypeMapper
{
AWS_EFS_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForIpAddressType(IpAddressType value);
} // namespace IpAddressTypeMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
