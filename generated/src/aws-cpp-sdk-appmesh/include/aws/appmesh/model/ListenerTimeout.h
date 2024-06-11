﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GrpcTimeout.h>
#include <aws/appmesh/model/HttpTimeout.h>
#include <aws/appmesh/model/TcpTimeout.h>
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
   * <p>An object that represents timeouts for different protocols.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListenerTimeout">AWS
   * API Reference</a></p>
   */
  class ListenerTimeout
  {
  public:
    AWS_APPMESH_API ListenerTimeout();
    AWS_APPMESH_API ListenerTimeout(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API ListenerTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const GrpcTimeout& GetGrpc() const{ return m_grpc; }
    inline bool GrpcHasBeenSet() const { return m_grpcHasBeenSet; }
    inline void SetGrpc(const GrpcTimeout& value) { m_grpcHasBeenSet = true; m_grpc = value; }
    inline void SetGrpc(GrpcTimeout&& value) { m_grpcHasBeenSet = true; m_grpc = std::move(value); }
    inline ListenerTimeout& WithGrpc(const GrpcTimeout& value) { SetGrpc(value); return *this;}
    inline ListenerTimeout& WithGrpc(GrpcTimeout&& value) { SetGrpc(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const HttpTimeout& GetHttp() const{ return m_http; }
    inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }
    inline void SetHttp(const HttpTimeout& value) { m_httpHasBeenSet = true; m_http = value; }
    inline void SetHttp(HttpTimeout&& value) { m_httpHasBeenSet = true; m_http = std::move(value); }
    inline ListenerTimeout& WithHttp(const HttpTimeout& value) { SetHttp(value); return *this;}
    inline ListenerTimeout& WithHttp(HttpTimeout&& value) { SetHttp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const HttpTimeout& GetHttp2() const{ return m_http2; }
    inline bool Http2HasBeenSet() const { return m_http2HasBeenSet; }
    inline void SetHttp2(const HttpTimeout& value) { m_http2HasBeenSet = true; m_http2 = value; }
    inline void SetHttp2(HttpTimeout&& value) { m_http2HasBeenSet = true; m_http2 = std::move(value); }
    inline ListenerTimeout& WithHttp2(const HttpTimeout& value) { SetHttp2(value); return *this;}
    inline ListenerTimeout& WithHttp2(HttpTimeout&& value) { SetHttp2(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const TcpTimeout& GetTcp() const{ return m_tcp; }
    inline bool TcpHasBeenSet() const { return m_tcpHasBeenSet; }
    inline void SetTcp(const TcpTimeout& value) { m_tcpHasBeenSet = true; m_tcp = value; }
    inline void SetTcp(TcpTimeout&& value) { m_tcpHasBeenSet = true; m_tcp = std::move(value); }
    inline ListenerTimeout& WithTcp(const TcpTimeout& value) { SetTcp(value); return *this;}
    inline ListenerTimeout& WithTcp(TcpTimeout&& value) { SetTcp(std::move(value)); return *this;}
    ///@}
  private:

    GrpcTimeout m_grpc;
    bool m_grpcHasBeenSet = false;

    HttpTimeout m_http;
    bool m_httpHasBeenSet = false;

    HttpTimeout m_http2;
    bool m_http2HasBeenSet = false;

    TcpTimeout m_tcp;
    bool m_tcpHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
