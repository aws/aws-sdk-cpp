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
  enum class NetworkProtocol
  {
    NOT_SET,
    tcp,
    all,
    udp,
    icmp
  };

namespace NetworkProtocolMapper
{
AWS_LIGHTSAIL_API NetworkProtocol GetNetworkProtocolForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForNetworkProtocol(NetworkProtocol value);
} // namespace NetworkProtocolMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
