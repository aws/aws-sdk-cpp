﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GatewayRouteData.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{
  class AWS_APPMESH_API DescribeGatewayRouteResult
  {
  public:
    DescribeGatewayRouteResult();
    DescribeGatewayRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeGatewayRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your gateway route.</p>
     */
    inline const GatewayRouteData& GetGatewayRoute() const{ return m_gatewayRoute; }

    /**
     * <p>The full description of your gateway route.</p>
     */
    inline void SetGatewayRoute(const GatewayRouteData& value) { m_gatewayRoute = value; }

    /**
     * <p>The full description of your gateway route.</p>
     */
    inline void SetGatewayRoute(GatewayRouteData&& value) { m_gatewayRoute = std::move(value); }

    /**
     * <p>The full description of your gateway route.</p>
     */
    inline DescribeGatewayRouteResult& WithGatewayRoute(const GatewayRouteData& value) { SetGatewayRoute(value); return *this;}

    /**
     * <p>The full description of your gateway route.</p>
     */
    inline DescribeGatewayRouteResult& WithGatewayRoute(GatewayRouteData&& value) { SetGatewayRoute(std::move(value)); return *this;}

  private:

    GatewayRouteData m_gatewayRoute;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
