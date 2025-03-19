/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayConnectionPool.h>
#include <aws/appmesh/model/VirtualGatewayHealthCheckPolicy.h>
#include <aws/appmesh/model/VirtualGatewayPortMapping.h>
#include <aws/appmesh/model/VirtualGatewayListenerTls.h>
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
   * <p>An object that represents a listener for a virtual gateway.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayListener">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayListener
  {
  public:
    AWS_APPMESH_API VirtualGatewayListener() = default;
    AWS_APPMESH_API VirtualGatewayListener(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayListener& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connection pool information for the virtual gateway listener.</p>
     */
    inline const VirtualGatewayConnectionPool& GetConnectionPool() const { return m_connectionPool; }
    inline bool ConnectionPoolHasBeenSet() const { return m_connectionPoolHasBeenSet; }
    template<typename ConnectionPoolT = VirtualGatewayConnectionPool>
    void SetConnectionPool(ConnectionPoolT&& value) { m_connectionPoolHasBeenSet = true; m_connectionPool = std::forward<ConnectionPoolT>(value); }
    template<typename ConnectionPoolT = VirtualGatewayConnectionPool>
    VirtualGatewayListener& WithConnectionPool(ConnectionPoolT&& value) { SetConnectionPool(std::forward<ConnectionPoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health check information for the listener.</p>
     */
    inline const VirtualGatewayHealthCheckPolicy& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = VirtualGatewayHealthCheckPolicy>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = VirtualGatewayHealthCheckPolicy>
    VirtualGatewayListener& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline const VirtualGatewayPortMapping& GetPortMapping() const { return m_portMapping; }
    inline bool PortMappingHasBeenSet() const { return m_portMappingHasBeenSet; }
    template<typename PortMappingT = VirtualGatewayPortMapping>
    void SetPortMapping(PortMappingT&& value) { m_portMappingHasBeenSet = true; m_portMapping = std::forward<PortMappingT>(value); }
    template<typename PortMappingT = VirtualGatewayPortMapping>
    VirtualGatewayListener& WithPortMapping(PortMappingT&& value) { SetPortMapping(std::forward<PortMappingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents the Transport Layer Security (TLS)
     * properties for the listener.</p>
     */
    inline const VirtualGatewayListenerTls& GetTls() const { return m_tls; }
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }
    template<typename TlsT = VirtualGatewayListenerTls>
    void SetTls(TlsT&& value) { m_tlsHasBeenSet = true; m_tls = std::forward<TlsT>(value); }
    template<typename TlsT = VirtualGatewayListenerTls>
    VirtualGatewayListener& WithTls(TlsT&& value) { SetTls(std::forward<TlsT>(value)); return *this;}
    ///@}
  private:

    VirtualGatewayConnectionPool m_connectionPool;
    bool m_connectionPoolHasBeenSet = false;

    VirtualGatewayHealthCheckPolicy m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    VirtualGatewayPortMapping m_portMapping;
    bool m_portMappingHasBeenSet = false;

    VirtualGatewayListenerTls m_tls;
    bool m_tlsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
