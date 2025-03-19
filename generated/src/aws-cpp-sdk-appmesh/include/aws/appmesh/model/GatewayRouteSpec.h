/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GrpcGatewayRoute.h>
#include <aws/appmesh/model/HttpGatewayRoute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents a gateway route specification. Specify one gateway
   * route type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GatewayRouteSpec">AWS
   * API Reference</a></p>
   */
  class GatewayRouteSpec
  {
  public:
    AWS_APPMESH_API GatewayRouteSpec() = default;
    AWS_APPMESH_API GatewayRouteSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GatewayRouteSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents the specification of a gRPC gateway route.</p>
     */
    inline const GrpcGatewayRoute& GetGrpcRoute() const { return m_grpcRoute; }
    inline bool GrpcRouteHasBeenSet() const { return m_grpcRouteHasBeenSet; }
    template<typename GrpcRouteT = GrpcGatewayRoute>
    void SetGrpcRoute(GrpcRouteT&& value) { m_grpcRouteHasBeenSet = true; m_grpcRoute = std::forward<GrpcRouteT>(value); }
    template<typename GrpcRouteT = GrpcGatewayRoute>
    GatewayRouteSpec& WithGrpcRoute(GrpcRouteT&& value) { SetGrpcRoute(std::forward<GrpcRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the specification of an HTTP/2 gateway route.</p>
     */
    inline const HttpGatewayRoute& GetHttp2Route() const { return m_http2Route; }
    inline bool Http2RouteHasBeenSet() const { return m_http2RouteHasBeenSet; }
    template<typename Http2RouteT = HttpGatewayRoute>
    void SetHttp2Route(Http2RouteT&& value) { m_http2RouteHasBeenSet = true; m_http2Route = std::forward<Http2RouteT>(value); }
    template<typename Http2RouteT = HttpGatewayRoute>
    GatewayRouteSpec& WithHttp2Route(Http2RouteT&& value) { SetHttp2Route(std::forward<Http2RouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the specification of an HTTP gateway route.</p>
     */
    inline const HttpGatewayRoute& GetHttpRoute() const { return m_httpRoute; }
    inline bool HttpRouteHasBeenSet() const { return m_httpRouteHasBeenSet; }
    template<typename HttpRouteT = HttpGatewayRoute>
    void SetHttpRoute(HttpRouteT&& value) { m_httpRouteHasBeenSet = true; m_httpRoute = std::forward<HttpRouteT>(value); }
    template<typename HttpRouteT = HttpGatewayRoute>
    GatewayRouteSpec& WithHttpRoute(HttpRouteT&& value) { SetHttpRoute(std::forward<HttpRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ordering of the gateway routes spec.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline GatewayRouteSpec& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}
  private:

    GrpcGatewayRoute m_grpcRoute;
    bool m_grpcRouteHasBeenSet = false;

    HttpGatewayRoute m_http2Route;
    bool m_http2RouteHasBeenSet = false;

    HttpGatewayRoute m_httpRoute;
    bool m_httpRouteHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
