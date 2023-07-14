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
  enum class RouteTableType
  {
    NOT_SET,
    TRANSIT_GATEWAY_ROUTE_TABLE,
    CORE_NETWORK_SEGMENT
  };

namespace RouteTableTypeMapper
{
AWS_NETWORKMANAGER_API RouteTableType GetRouteTableTypeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForRouteTableType(RouteTableType value);
} // namespace RouteTableTypeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
