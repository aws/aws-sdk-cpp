/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualNodeConnectionPool.h>
#include <aws/appmesh/model/HealthCheckPolicy.h>
#include <aws/appmesh/model/OutlierDetection.h>
#include <aws/appmesh/model/PortMapping.h>
#include <aws/appmesh/model/ListenerTimeout.h>
#include <aws/appmesh/model/ListenerTls.h>
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
   * <p>An object that represents a listener for a virtual node.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/Listener">AWS
   * API Reference</a></p>
   */
  class Listener
  {
  public:
    AWS_APPMESH_API Listener() = default;
    AWS_APPMESH_API Listener(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Listener& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connection pool information for the listener.</p>
     */
    inline const VirtualNodeConnectionPool& GetConnectionPool() const { return m_connectionPool; }
    inline bool ConnectionPoolHasBeenSet() const { return m_connectionPoolHasBeenSet; }
    template<typename ConnectionPoolT = VirtualNodeConnectionPool>
    void SetConnectionPool(ConnectionPoolT&& value) { m_connectionPoolHasBeenSet = true; m_connectionPool = std::forward<ConnectionPoolT>(value); }
    template<typename ConnectionPoolT = VirtualNodeConnectionPool>
    Listener& WithConnectionPool(ConnectionPoolT&& value) { SetConnectionPool(std::forward<ConnectionPoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health check information for the listener.</p>
     */
    inline const HealthCheckPolicy& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = HealthCheckPolicy>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = HealthCheckPolicy>
    Listener& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outlier detection information for the listener.</p>
     */
    inline const OutlierDetection& GetOutlierDetection() const { return m_outlierDetection; }
    inline bool OutlierDetectionHasBeenSet() const { return m_outlierDetectionHasBeenSet; }
    template<typename OutlierDetectionT = OutlierDetection>
    void SetOutlierDetection(OutlierDetectionT&& value) { m_outlierDetectionHasBeenSet = true; m_outlierDetection = std::forward<OutlierDetectionT>(value); }
    template<typename OutlierDetectionT = OutlierDetection>
    Listener& WithOutlierDetection(OutlierDetectionT&& value) { SetOutlierDetection(std::forward<OutlierDetectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline const PortMapping& GetPortMapping() const { return m_portMapping; }
    inline bool PortMappingHasBeenSet() const { return m_portMappingHasBeenSet; }
    template<typename PortMappingT = PortMapping>
    void SetPortMapping(PortMappingT&& value) { m_portMappingHasBeenSet = true; m_portMapping = std::forward<PortMappingT>(value); }
    template<typename PortMappingT = PortMapping>
    Listener& WithPortMapping(PortMappingT&& value) { SetPortMapping(std::forward<PortMappingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents timeouts for different protocols.</p>
     */
    inline const ListenerTimeout& GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    template<typename TimeoutT = ListenerTimeout>
    void SetTimeout(TimeoutT&& value) { m_timeoutHasBeenSet = true; m_timeout = std::forward<TimeoutT>(value); }
    template<typename TimeoutT = ListenerTimeout>
    Listener& WithTimeout(TimeoutT&& value) { SetTimeout(std::forward<TimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents the Transport Layer Security (TLS)
     * properties for a listener.</p>
     */
    inline const ListenerTls& GetTls() const { return m_tls; }
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }
    template<typename TlsT = ListenerTls>
    void SetTls(TlsT&& value) { m_tlsHasBeenSet = true; m_tls = std::forward<TlsT>(value); }
    template<typename TlsT = ListenerTls>
    Listener& WithTls(TlsT&& value) { SetTls(std::forward<TlsT>(value)); return *this;}
    ///@}
  private:

    VirtualNodeConnectionPool m_connectionPool;
    bool m_connectionPoolHasBeenSet = false;

    HealthCheckPolicy m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    OutlierDetection m_outlierDetection;
    bool m_outlierDetectionHasBeenSet = false;

    PortMapping m_portMapping;
    bool m_portMappingHasBeenSet = false;

    ListenerTimeout m_timeout;
    bool m_timeoutHasBeenSet = false;

    ListenerTls m_tls;
    bool m_tlsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
