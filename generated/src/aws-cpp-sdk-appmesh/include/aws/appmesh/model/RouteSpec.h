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
    AWS_APPMESH_API RouteSpec();
    AWS_APPMESH_API RouteSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API RouteSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents the specification of a gRPC route.</p>
     */
    inline const GrpcRoute& GetGrpcRoute() const{ return m_grpcRoute; }

    /**
     * <p>An object that represents the specification of a gRPC route.</p>
     */
    inline bool GrpcRouteHasBeenSet() const { return m_grpcRouteHasBeenSet; }

    /**
     * <p>An object that represents the specification of a gRPC route.</p>
     */
    inline void SetGrpcRoute(const GrpcRoute& value) { m_grpcRouteHasBeenSet = true; m_grpcRoute = value; }

    /**
     * <p>An object that represents the specification of a gRPC route.</p>
     */
    inline void SetGrpcRoute(GrpcRoute&& value) { m_grpcRouteHasBeenSet = true; m_grpcRoute = std::move(value); }

    /**
     * <p>An object that represents the specification of a gRPC route.</p>
     */
    inline RouteSpec& WithGrpcRoute(const GrpcRoute& value) { SetGrpcRoute(value); return *this;}

    /**
     * <p>An object that represents the specification of a gRPC route.</p>
     */
    inline RouteSpec& WithGrpcRoute(GrpcRoute&& value) { SetGrpcRoute(std::move(value)); return *this;}


    /**
     * <p>An object that represents the specification of an HTTP/2 route.</p>
     */
    inline const HttpRoute& GetHttp2Route() const{ return m_http2Route; }

    /**
     * <p>An object that represents the specification of an HTTP/2 route.</p>
     */
    inline bool Http2RouteHasBeenSet() const { return m_http2RouteHasBeenSet; }

    /**
     * <p>An object that represents the specification of an HTTP/2 route.</p>
     */
    inline void SetHttp2Route(const HttpRoute& value) { m_http2RouteHasBeenSet = true; m_http2Route = value; }

    /**
     * <p>An object that represents the specification of an HTTP/2 route.</p>
     */
    inline void SetHttp2Route(HttpRoute&& value) { m_http2RouteHasBeenSet = true; m_http2Route = std::move(value); }

    /**
     * <p>An object that represents the specification of an HTTP/2 route.</p>
     */
    inline RouteSpec& WithHttp2Route(const HttpRoute& value) { SetHttp2Route(value); return *this;}

    /**
     * <p>An object that represents the specification of an HTTP/2 route.</p>
     */
    inline RouteSpec& WithHttp2Route(HttpRoute&& value) { SetHttp2Route(std::move(value)); return *this;}


    /**
     * <p>An object that represents the specification of an HTTP route.</p>
     */
    inline const HttpRoute& GetHttpRoute() const{ return m_httpRoute; }

    /**
     * <p>An object that represents the specification of an HTTP route.</p>
     */
    inline bool HttpRouteHasBeenSet() const { return m_httpRouteHasBeenSet; }

    /**
     * <p>An object that represents the specification of an HTTP route.</p>
     */
    inline void SetHttpRoute(const HttpRoute& value) { m_httpRouteHasBeenSet = true; m_httpRoute = value; }

    /**
     * <p>An object that represents the specification of an HTTP route.</p>
     */
    inline void SetHttpRoute(HttpRoute&& value) { m_httpRouteHasBeenSet = true; m_httpRoute = std::move(value); }

    /**
     * <p>An object that represents the specification of an HTTP route.</p>
     */
    inline RouteSpec& WithHttpRoute(const HttpRoute& value) { SetHttpRoute(value); return *this;}

    /**
     * <p>An object that represents the specification of an HTTP route.</p>
     */
    inline RouteSpec& WithHttpRoute(HttpRoute&& value) { SetHttpRoute(std::move(value)); return *this;}


    /**
     * <p>The priority for the route. Routes are matched based on the specified value,
     * where 0 is the highest priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority for the route. Routes are matched based on the specified value,
     * where 0 is the highest priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority for the route. Routes are matched based on the specified value,
     * where 0 is the highest priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority for the route. Routes are matched based on the specified value,
     * where 0 is the highest priority.</p>
     */
    inline RouteSpec& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>An object that represents the specification of a TCP route.</p>
     */
    inline const TcpRoute& GetTcpRoute() const{ return m_tcpRoute; }

    /**
     * <p>An object that represents the specification of a TCP route.</p>
     */
    inline bool TcpRouteHasBeenSet() const { return m_tcpRouteHasBeenSet; }

    /**
     * <p>An object that represents the specification of a TCP route.</p>
     */
    inline void SetTcpRoute(const TcpRoute& value) { m_tcpRouteHasBeenSet = true; m_tcpRoute = value; }

    /**
     * <p>An object that represents the specification of a TCP route.</p>
     */
    inline void SetTcpRoute(TcpRoute&& value) { m_tcpRouteHasBeenSet = true; m_tcpRoute = std::move(value); }

    /**
     * <p>An object that represents the specification of a TCP route.</p>
     */
    inline RouteSpec& WithTcpRoute(const TcpRoute& value) { SetTcpRoute(value); return *this;}

    /**
     * <p>An object that represents the specification of a TCP route.</p>
     */
    inline RouteSpec& WithTcpRoute(TcpRoute&& value) { SetTcpRoute(std::move(value)); return *this;}

  private:

    GrpcRoute m_grpcRoute;
    bool m_grpcRouteHasBeenSet = false;

    HttpRoute m_http2Route;
    bool m_http2RouteHasBeenSet = false;

    HttpRoute m_httpRoute;
    bool m_httpRouteHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    TcpRoute m_tcpRoute;
    bool m_tcpRouteHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
