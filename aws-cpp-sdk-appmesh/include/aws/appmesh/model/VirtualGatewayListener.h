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
    AWS_APPMESH_API VirtualGatewayListener();
    AWS_APPMESH_API VirtualGatewayListener(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayListener& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The connection pool information for the virtual gateway listener.</p>
     */
    inline const VirtualGatewayConnectionPool& GetConnectionPool() const{ return m_connectionPool; }

    /**
     * <p>The connection pool information for the virtual gateway listener.</p>
     */
    inline bool ConnectionPoolHasBeenSet() const { return m_connectionPoolHasBeenSet; }

    /**
     * <p>The connection pool information for the virtual gateway listener.</p>
     */
    inline void SetConnectionPool(const VirtualGatewayConnectionPool& value) { m_connectionPoolHasBeenSet = true; m_connectionPool = value; }

    /**
     * <p>The connection pool information for the virtual gateway listener.</p>
     */
    inline void SetConnectionPool(VirtualGatewayConnectionPool&& value) { m_connectionPoolHasBeenSet = true; m_connectionPool = std::move(value); }

    /**
     * <p>The connection pool information for the virtual gateway listener.</p>
     */
    inline VirtualGatewayListener& WithConnectionPool(const VirtualGatewayConnectionPool& value) { SetConnectionPool(value); return *this;}

    /**
     * <p>The connection pool information for the virtual gateway listener.</p>
     */
    inline VirtualGatewayListener& WithConnectionPool(VirtualGatewayConnectionPool&& value) { SetConnectionPool(std::move(value)); return *this;}


    /**
     * <p>The health check information for the listener.</p>
     */
    inline const VirtualGatewayHealthCheckPolicy& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>The health check information for the listener.</p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>The health check information for the listener.</p>
     */
    inline void SetHealthCheck(const VirtualGatewayHealthCheckPolicy& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>The health check information for the listener.</p>
     */
    inline void SetHealthCheck(VirtualGatewayHealthCheckPolicy&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>The health check information for the listener.</p>
     */
    inline VirtualGatewayListener& WithHealthCheck(const VirtualGatewayHealthCheckPolicy& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>The health check information for the listener.</p>
     */
    inline VirtualGatewayListener& WithHealthCheck(VirtualGatewayHealthCheckPolicy&& value) { SetHealthCheck(std::move(value)); return *this;}


    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline const VirtualGatewayPortMapping& GetPortMapping() const{ return m_portMapping; }

    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline bool PortMappingHasBeenSet() const { return m_portMappingHasBeenSet; }

    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline void SetPortMapping(const VirtualGatewayPortMapping& value) { m_portMappingHasBeenSet = true; m_portMapping = value; }

    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline void SetPortMapping(VirtualGatewayPortMapping&& value) { m_portMappingHasBeenSet = true; m_portMapping = std::move(value); }

    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline VirtualGatewayListener& WithPortMapping(const VirtualGatewayPortMapping& value) { SetPortMapping(value); return *this;}

    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline VirtualGatewayListener& WithPortMapping(VirtualGatewayPortMapping&& value) { SetPortMapping(std::move(value)); return *this;}


    /**
     * <p>A reference to an object that represents the Transport Layer Security (TLS)
     * properties for the listener.</p>
     */
    inline const VirtualGatewayListenerTls& GetTls() const{ return m_tls; }

    /**
     * <p>A reference to an object that represents the Transport Layer Security (TLS)
     * properties for the listener.</p>
     */
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }

    /**
     * <p>A reference to an object that represents the Transport Layer Security (TLS)
     * properties for the listener.</p>
     */
    inline void SetTls(const VirtualGatewayListenerTls& value) { m_tlsHasBeenSet = true; m_tls = value; }

    /**
     * <p>A reference to an object that represents the Transport Layer Security (TLS)
     * properties for the listener.</p>
     */
    inline void SetTls(VirtualGatewayListenerTls&& value) { m_tlsHasBeenSet = true; m_tls = std::move(value); }

    /**
     * <p>A reference to an object that represents the Transport Layer Security (TLS)
     * properties for the listener.</p>
     */
    inline VirtualGatewayListener& WithTls(const VirtualGatewayListenerTls& value) { SetTls(value); return *this;}

    /**
     * <p>A reference to an object that represents the Transport Layer Security (TLS)
     * properties for the listener.</p>
     */
    inline VirtualGatewayListener& WithTls(VirtualGatewayListenerTls&& value) { SetTls(std::move(value)); return *this;}

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
