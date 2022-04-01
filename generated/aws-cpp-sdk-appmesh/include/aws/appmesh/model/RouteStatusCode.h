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
  enum class RouteStatusCode
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    DELETED
  };

namespace RouteStatusCodeMapper
{
AWS_APPMESH_API RouteStatusCode GetRouteStatusCodeForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForRouteStatusCode(RouteStatusCode value);
} // namespace RouteStatusCodeMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
