/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppMesh
{
namespace Model
{
  enum class GatewayRouteStatusCode
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    DELETED
  };

namespace GatewayRouteStatusCodeMapper
{
AWS_APPMESH_API GatewayRouteStatusCode GetGatewayRouteStatusCodeForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForGatewayRouteStatusCode(GatewayRouteStatusCode value);
} // namespace GatewayRouteStatusCodeMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
