/**
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
  class DeleteGatewayRouteResult
  {
  public:
    AWS_APPMESH_API DeleteGatewayRouteResult();
    AWS_APPMESH_API DeleteGatewayRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API DeleteGatewayRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The gateway route that was deleted.</p>
     */
    inline const GatewayRouteData& GetGatewayRoute() const{ return m_gatewayRoute; }

    /**
     * <p>The gateway route that was deleted.</p>
     */
    inline void SetGatewayRoute(const GatewayRouteData& value) { m_gatewayRoute = value; }

    /**
     * <p>The gateway route that was deleted.</p>
     */
    inline void SetGatewayRoute(GatewayRouteData&& value) { m_gatewayRoute = std::move(value); }

    /**
     * <p>The gateway route that was deleted.</p>
     */
    inline DeleteGatewayRouteResult& WithGatewayRoute(const GatewayRouteData& value) { SetGatewayRoute(value); return *this;}

    /**
     * <p>The gateway route that was deleted.</p>
     */
    inline DeleteGatewayRouteResult& WithGatewayRoute(GatewayRouteData&& value) { SetGatewayRoute(std::move(value)); return *this;}

  private:

    GatewayRouteData m_gatewayRoute;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
