/**
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
    AWS_APPMESH_API ListenerTimeout() = default;
    AWS_APPMESH_API ListenerTimeout(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API ListenerTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const GrpcTimeout& GetGrpc() const { return m_grpc; }
    inline bool GrpcHasBeenSet() const { return m_grpcHasBeenSet; }
    template<typename GrpcT = GrpcTimeout>
    void SetGrpc(GrpcT&& value) { m_grpcHasBeenSet = true; m_grpc = std::forward<GrpcT>(value); }
    template<typename GrpcT = GrpcTimeout>
    ListenerTimeout& WithGrpc(GrpcT&& value) { SetGrpc(std::forward<GrpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const HttpTimeout& GetHttp() const { return m_http; }
    inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }
    template<typename HttpT = HttpTimeout>
    void SetHttp(HttpT&& value) { m_httpHasBeenSet = true; m_http = std::forward<HttpT>(value); }
    template<typename HttpT = HttpTimeout>
    ListenerTimeout& WithHttp(HttpT&& value) { SetHttp(std::forward<HttpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const HttpTimeout& GetHttp2() const { return m_http2; }
    inline bool Http2HasBeenSet() const { return m_http2HasBeenSet; }
    template<typename Http2T = HttpTimeout>
    void SetHttp2(Http2T&& value) { m_http2HasBeenSet = true; m_http2 = std::forward<Http2T>(value); }
    template<typename Http2T = HttpTimeout>
    ListenerTimeout& WithHttp2(Http2T&& value) { SetHttp2(std::forward<Http2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const TcpTimeout& GetTcp() const { return m_tcp; }
    inline bool TcpHasBeenSet() const { return m_tcpHasBeenSet; }
    template<typename TcpT = TcpTimeout>
    void SetTcp(TcpT&& value) { m_tcpHasBeenSet = true; m_tcp = std::forward<TcpT>(value); }
    template<typename TcpT = TcpTimeout>
    ListenerTimeout& WithTcp(TcpT&& value) { SetTcp(std::forward<TcpT>(value)); return *this;}
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
