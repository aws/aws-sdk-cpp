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
    AWS_APPMESH_API GatewayRouteSpec();
    AWS_APPMESH_API GatewayRouteSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GatewayRouteSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents the specification of a gRPC gateway route.</p>
     */
    inline const GrpcGatewayRoute& GetGrpcRoute() const{ return m_grpcRoute; }

    /**
     * <p>An object that represents the specification of a gRPC gateway route.</p>
     */
    inline bool GrpcRouteHasBeenSet() const { return m_grpcRouteHasBeenSet; }

    /**
     * <p>An object that represents the specification of a gRPC gateway route.</p>
     */
    inline void SetGrpcRoute(const GrpcGatewayRoute& value) { m_grpcRouteHasBeenSet = true; m_grpcRoute = value; }

    /**
     * <p>An object that represents the specification of a gRPC gateway route.</p>
     */
    inline void SetGrpcRoute(GrpcGatewayRoute&& value) { m_grpcRouteHasBeenSet = true; m_grpcRoute = std::move(value); }

    /**
     * <p>An object that represents the specification of a gRPC gateway route.</p>
     */
    inline GatewayRouteSpec& WithGrpcRoute(const GrpcGatewayRoute& value) { SetGrpcRoute(value); return *this;}

    /**
     * <p>An object that represents the specification of a gRPC gateway route.</p>
     */
    inline GatewayRouteSpec& WithGrpcRoute(GrpcGatewayRoute&& value) { SetGrpcRoute(std::move(value)); return *this;}


    /**
     * <p>An object that represents the specification of an HTTP/2 gateway route.</p>
     */
    inline const HttpGatewayRoute& GetHttp2Route() const{ return m_http2Route; }

    /**
     * <p>An object that represents the specification of an HTTP/2 gateway route.</p>
     */
    inline bool Http2RouteHasBeenSet() const { return m_http2RouteHasBeenSet; }

    /**
     * <p>An object that represents the specification of an HTTP/2 gateway route.</p>
     */
    inline void SetHttp2Route(const HttpGatewayRoute& value) { m_http2RouteHasBeenSet = true; m_http2Route = value; }

    /**
     * <p>An object that represents the specification of an HTTP/2 gateway route.</p>
     */
    inline void SetHttp2Route(HttpGatewayRoute&& value) { m_http2RouteHasBeenSet = true; m_http2Route = std::move(value); }

    /**
     * <p>An object that represents the specification of an HTTP/2 gateway route.</p>
     */
    inline GatewayRouteSpec& WithHttp2Route(const HttpGatewayRoute& value) { SetHttp2Route(value); return *this;}

    /**
     * <p>An object that represents the specification of an HTTP/2 gateway route.</p>
     */
    inline GatewayRouteSpec& WithHttp2Route(HttpGatewayRoute&& value) { SetHttp2Route(std::move(value)); return *this;}


    /**
     * <p>An object that represents the specification of an HTTP gateway route.</p>
     */
    inline const HttpGatewayRoute& GetHttpRoute() const{ return m_httpRoute; }

    /**
     * <p>An object that represents the specification of an HTTP gateway route.</p>
     */
    inline bool HttpRouteHasBeenSet() const { return m_httpRouteHasBeenSet; }

    /**
     * <p>An object that represents the specification of an HTTP gateway route.</p>
     */
    inline void SetHttpRoute(const HttpGatewayRoute& value) { m_httpRouteHasBeenSet = true; m_httpRoute = value; }

    /**
     * <p>An object that represents the specification of an HTTP gateway route.</p>
     */
    inline void SetHttpRoute(HttpGatewayRoute&& value) { m_httpRouteHasBeenSet = true; m_httpRoute = std::move(value); }

    /**
     * <p>An object that represents the specification of an HTTP gateway route.</p>
     */
    inline GatewayRouteSpec& WithHttpRoute(const HttpGatewayRoute& value) { SetHttpRoute(value); return *this;}

    /**
     * <p>An object that represents the specification of an HTTP gateway route.</p>
     */
    inline GatewayRouteSpec& WithHttpRoute(HttpGatewayRoute&& value) { SetHttpRoute(std::move(value)); return *this;}


    /**
     * <p>The ordering of the gateway routes spec.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The ordering of the gateway routes spec.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The ordering of the gateway routes spec.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The ordering of the gateway routes spec.</p>
     */
    inline GatewayRouteSpec& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    GrpcGatewayRoute m_grpcRoute;
    bool m_grpcRouteHasBeenSet = false;

    HttpGatewayRoute m_http2Route;
    bool m_http2RouteHasBeenSet = false;

    HttpGatewayRoute m_httpRoute;
    bool m_httpRouteHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
