/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayGrpcConnectionPool.h>
#include <aws/appmesh/model/VirtualGatewayHttpConnectionPool.h>
#include <aws/appmesh/model/VirtualGatewayHttp2ConnectionPool.h>
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
   * <p>An object that represents the type of virtual gateway connection pool.</p>
   * <p>Only one protocol is used at a time and should be the same protocol as the
   * one chosen under port mapping.</p> <p>If not present the default value for
   * <code>maxPendingRequests</code> is <code>2147483647</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayConnectionPool">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayConnectionPool
  {
  public:
    AWS_APPMESH_API VirtualGatewayConnectionPool();
    AWS_APPMESH_API VirtualGatewayConnectionPool(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayConnectionPool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents a type of connection pool. </p>
     */
    inline const VirtualGatewayGrpcConnectionPool& GetGrpc() const{ return m_grpc; }

    /**
     * <p>An object that represents a type of connection pool. </p>
     */
    inline bool GrpcHasBeenSet() const { return m_grpcHasBeenSet; }

    /**
     * <p>An object that represents a type of connection pool. </p>
     */
    inline void SetGrpc(const VirtualGatewayGrpcConnectionPool& value) { m_grpcHasBeenSet = true; m_grpc = value; }

    /**
     * <p>An object that represents a type of connection pool. </p>
     */
    inline void SetGrpc(VirtualGatewayGrpcConnectionPool&& value) { m_grpcHasBeenSet = true; m_grpc = std::move(value); }

    /**
     * <p>An object that represents a type of connection pool. </p>
     */
    inline VirtualGatewayConnectionPool& WithGrpc(const VirtualGatewayGrpcConnectionPool& value) { SetGrpc(value); return *this;}

    /**
     * <p>An object that represents a type of connection pool. </p>
     */
    inline VirtualGatewayConnectionPool& WithGrpc(VirtualGatewayGrpcConnectionPool&& value) { SetGrpc(std::move(value)); return *this;}


    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline const VirtualGatewayHttpConnectionPool& GetHttp() const{ return m_http; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetHttp(const VirtualGatewayHttpConnectionPool& value) { m_httpHasBeenSet = true; m_http = value; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetHttp(VirtualGatewayHttpConnectionPool&& value) { m_httpHasBeenSet = true; m_http = std::move(value); }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualGatewayConnectionPool& WithHttp(const VirtualGatewayHttpConnectionPool& value) { SetHttp(value); return *this;}

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualGatewayConnectionPool& WithHttp(VirtualGatewayHttpConnectionPool&& value) { SetHttp(std::move(value)); return *this;}


    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline const VirtualGatewayHttp2ConnectionPool& GetHttp2() const{ return m_http2; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline bool Http2HasBeenSet() const { return m_http2HasBeenSet; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetHttp2(const VirtualGatewayHttp2ConnectionPool& value) { m_http2HasBeenSet = true; m_http2 = value; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetHttp2(VirtualGatewayHttp2ConnectionPool&& value) { m_http2HasBeenSet = true; m_http2 = std::move(value); }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualGatewayConnectionPool& WithHttp2(const VirtualGatewayHttp2ConnectionPool& value) { SetHttp2(value); return *this;}

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualGatewayConnectionPool& WithHttp2(VirtualGatewayHttp2ConnectionPool&& value) { SetHttp2(std::move(value)); return *this;}

  private:

    VirtualGatewayGrpcConnectionPool m_grpc;
    bool m_grpcHasBeenSet = false;

    VirtualGatewayHttpConnectionPool m_http;
    bool m_httpHasBeenSet = false;

    VirtualGatewayHttp2ConnectionPool m_http2;
    bool m_http2HasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
