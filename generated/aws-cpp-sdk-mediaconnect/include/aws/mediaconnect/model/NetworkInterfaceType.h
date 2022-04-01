/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class NetworkInterfaceType
  {
    NOT_SET,
    ena,
    efa
  };

namespace NetworkInterfaceTypeMapper
{
AWS_MEDIACONNECT_API NetworkInterfaceType GetNetworkInterfaceTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForNetworkInterfaceType(NetworkInterfaceType value);
} // namespace NetworkInterfaceTypeMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
