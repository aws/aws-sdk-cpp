/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class IpAddressType
  {
    NOT_SET,
    IPV4,
    DUALSTACK
  };

namespace IpAddressTypeMapper
{
AWS_TRANSFER_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForIpAddressType(IpAddressType value);
} // namespace IpAddressTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
