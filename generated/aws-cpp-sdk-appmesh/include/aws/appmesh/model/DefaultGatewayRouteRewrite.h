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
  enum class DefaultGatewayRouteRewrite
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace DefaultGatewayRouteRewriteMapper
{
AWS_APPMESH_API DefaultGatewayRouteRewrite GetDefaultGatewayRouteRewriteForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForDefaultGatewayRouteRewrite(DefaultGatewayRouteRewrite value);
} // namespace DefaultGatewayRouteRewriteMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
