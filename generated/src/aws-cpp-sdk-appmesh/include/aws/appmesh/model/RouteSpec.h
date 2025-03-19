/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GrpcRoute.h>
#include <aws/appmesh/model/HttpRoute.h>
#include <aws/appmesh/model/TcpRoute.h>
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
   * <p>An object that represents a route specification. Specify one route
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/RouteSpec">AWS
   * API Reference</a></p>
   */
  class RouteSpec
  {
  public:
    AWS_APPMESH_API RouteSpec() = default;
    AWS_APPMESH_API RouteSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API RouteSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents the specification of a gRPC route.</p>
     */
    inline const GrpcRoute& GetGrpcRoute() const { return m_grpcRoute; }
    inline bool GrpcRouteHasBeenSet() const { return m_grpcRouteHasBeenSet; }
    template<typename GrpcRouteT = GrpcRoute>
    void SetGrpcRoute(GrpcRouteT&& value) { m_grpcRouteHasBeenSet = true; m_grpcRoute = std::forward<GrpcRouteT>(value); }
    template<typename GrpcRouteT = GrpcRoute>
    RouteSpec& WithGrpcRoute(GrpcRouteT&& value) { SetGrpcRoute(std::forward<GrpcRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the specification of an HTTP/2 route.</p>
     */
    inline const HttpRoute& GetHttp2Route() const { return m_http2Route; }
    inline bool Http2RouteHasBeenSet() const { return m_http2RouteHasBeenSet; }
    template<typename Http2RouteT = HttpRoute>
    void SetHttp2Route(Http2RouteT&& value) { m_http2RouteHasBeenSet = true; m_http2Route = std::forward<Http2RouteT>(value); }
    template<typename Http2RouteT = HttpRoute>
    RouteSpec& WithHttp2Route(Http2RouteT&& value) { SetHttp2Route(std::forward<Http2RouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the specification of an HTTP route.</p>
     */
    inline const HttpRoute& GetHttpRoute() const { return m_httpRoute; }
    inline bool HttpRouteHasBeenSet() const { return m_httpRouteHasBeenSet; }
    template<typename HttpRouteT = HttpRoute>
    void SetHttpRoute(HttpRouteT&& value) { m_httpRouteHasBeenSet = true; m_httpRoute = std::forward<HttpRouteT>(value); }
    template<typename HttpRouteT = HttpRoute>
    RouteSpec& WithHttpRoute(HttpRouteT&& value) { SetHttpRoute(std::forward<HttpRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority for the route. Routes are matched based on the specified value,
     * where 0 is the highest priority.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline RouteSpec& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the specification of a TCP route.</p>
     */
    inline const TcpRoute& GetTcpRoute() const { return m_tcpRoute; }
    inline bool TcpRouteHasBeenSet() const { return m_tcpRouteHasBeenSet; }
    template<typename TcpRouteT = TcpRoute>
    void SetTcpRoute(TcpRouteT&& value) { m_tcpRouteHasBeenSet = true; m_tcpRoute = std::forward<TcpRouteT>(value); }
    template<typename TcpRouteT = TcpRoute>
    RouteSpec& WithTcpRoute(TcpRouteT&& value) { SetTcpRoute(std::forward<TcpRouteT>(value)); return *this;}
    ///@}
  private:

    GrpcRoute m_grpcRoute;
    bool m_grpcRouteHasBeenSet = false;

    HttpRoute m_http2Route;
    bool m_http2RouteHasBeenSet = false;

    HttpRoute m_httpRoute;
    bool m_httpRouteHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    TcpRoute m_tcpRoute;
    bool m_tcpRouteHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
