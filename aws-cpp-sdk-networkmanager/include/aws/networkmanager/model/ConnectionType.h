/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class ConnectionType
  {
    NOT_SET,
    BGP,
    IPSEC
  };

namespace ConnectionTypeMapper
{
AWS_NETWORKMANAGER_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForConnectionType(ConnectionType value);
} // namespace ConnectionTypeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
