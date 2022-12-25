/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualNodeGrpcConnectionPool.h>
#include <aws/appmesh/model/VirtualNodeHttpConnectionPool.h>
#include <aws/appmesh/model/VirtualNodeHttp2ConnectionPool.h>
#include <aws/appmesh/model/VirtualNodeTcpConnectionPool.h>
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
   * <p>An object that represents the type of virtual node connection pool.</p>
   * <p>Only one protocol is used at a time and should be the same protocol as the
   * one chosen under port mapping.</p> <p>If not present the default value for
   * <code>maxPendingRequests</code> is <code>2147483647</code>.</p> <p/><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualNodeConnectionPool">AWS
   * API Reference</a></p>
   */
  class VirtualNodeConnectionPool
  {
  public:
    AWS_APPMESH_API VirtualNodeConnectionPool();
    AWS_APPMESH_API VirtualNodeConnectionPool(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualNodeConnectionPool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline const VirtualNodeGrpcConnectionPool& GetGrpc() const{ return m_grpc; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline bool GrpcHasBeenSet() const { return m_grpcHasBeenSet; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetGrpc(const VirtualNodeGrpcConnectionPool& value) { m_grpcHasBeenSet = true; m_grpc = value; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetGrpc(VirtualNodeGrpcConnectionPool&& value) { m_grpcHasBeenSet = true; m_grpc = std::move(value); }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualNodeConnectionPool& WithGrpc(const VirtualNodeGrpcConnectionPool& value) { SetGrpc(value); return *this;}

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualNodeConnectionPool& WithGrpc(VirtualNodeGrpcConnectionPool&& value) { SetGrpc(std::move(value)); return *this;}


    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline const VirtualNodeHttpConnectionPool& GetHttp() const{ return m_http; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetHttp(const VirtualNodeHttpConnectionPool& value) { m_httpHasBeenSet = true; m_http = value; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetHttp(VirtualNodeHttpConnectionPool&& value) { m_httpHasBeenSet = true; m_http = std::move(value); }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualNodeConnectionPool& WithHttp(const VirtualNodeHttpConnectionPool& value) { SetHttp(value); return *this;}

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualNodeConnectionPool& WithHttp(VirtualNodeHttpConnectionPool&& value) { SetHttp(std::move(value)); return *this;}


    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline const VirtualNodeHttp2ConnectionPool& GetHttp2() const{ return m_http2; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline bool Http2HasBeenSet() const { return m_http2HasBeenSet; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetHttp2(const VirtualNodeHttp2ConnectionPool& value) { m_http2HasBeenSet = true; m_http2 = value; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetHttp2(VirtualNodeHttp2ConnectionPool&& value) { m_http2HasBeenSet = true; m_http2 = std::move(value); }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualNodeConnectionPool& WithHttp2(const VirtualNodeHttp2ConnectionPool& value) { SetHttp2(value); return *this;}

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualNodeConnectionPool& WithHttp2(VirtualNodeHttp2ConnectionPool&& value) { SetHttp2(std::move(value)); return *this;}


    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline const VirtualNodeTcpConnectionPool& GetTcp() const{ return m_tcp; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline bool TcpHasBeenSet() const { return m_tcpHasBeenSet; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetTcp(const VirtualNodeTcpConnectionPool& value) { m_tcpHasBeenSet = true; m_tcp = value; }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline void SetTcp(VirtualNodeTcpConnectionPool&& value) { m_tcpHasBeenSet = true; m_tcp = std::move(value); }

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualNodeConnectionPool& WithTcp(const VirtualNodeTcpConnectionPool& value) { SetTcp(value); return *this;}

    /**
     * <p>An object that represents a type of connection pool.</p>
     */
    inline VirtualNodeConnectionPool& WithTcp(VirtualNodeTcpConnectionPool&& value) { SetTcp(std::move(value)); return *this;}

  private:

    VirtualNodeGrpcConnectionPool m_grpc;
    bool m_grpcHasBeenSet = false;

    VirtualNodeHttpConnectionPool m_http;
    bool m_httpHasBeenSet = false;

    VirtualNodeHttp2ConnectionPool m_http2;
    bool m_http2HasBeenSet = false;

    VirtualNodeTcpConnectionPool m_tcp;
    bool m_tcpHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
