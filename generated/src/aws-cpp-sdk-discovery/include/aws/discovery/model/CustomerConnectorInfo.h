/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>

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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>Inventory data for installed discovery connectors.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CustomerConnectorInfo">AWS
   * API Reference</a></p>
   */
  class CustomerConnectorInfo
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerConnectorInfo() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerConnectorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerConnectorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Number of active discovery connectors.</p>
     */
    inline int GetActiveConnectors() const { return m_activeConnectors; }
    inline bool ActiveConnectorsHasBeenSet() const { return m_activeConnectorsHasBeenSet; }
    inline void SetActiveConnectors(int value) { m_activeConnectorsHasBeenSet = true; m_activeConnectors = value; }
    inline CustomerConnectorInfo& WithActiveConnectors(int value) { SetActiveConnectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of healthy discovery connectors.</p>
     */
    inline int GetHealthyConnectors() const { return m_healthyConnectors; }
    inline bool HealthyConnectorsHasBeenSet() const { return m_healthyConnectorsHasBeenSet; }
    inline void SetHealthyConnectors(int value) { m_healthyConnectorsHasBeenSet = true; m_healthyConnectors = value; }
    inline CustomerConnectorInfo& WithHealthyConnectors(int value) { SetHealthyConnectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of blacklisted discovery connectors.</p>
     */
    inline int GetBlackListedConnectors() const { return m_blackListedConnectors; }
    inline bool BlackListedConnectorsHasBeenSet() const { return m_blackListedConnectorsHasBeenSet; }
    inline void SetBlackListedConnectors(int value) { m_blackListedConnectorsHasBeenSet = true; m_blackListedConnectors = value; }
    inline CustomerConnectorInfo& WithBlackListedConnectors(int value) { SetBlackListedConnectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of discovery connectors with status SHUTDOWN,</p>
     */
    inline int GetShutdownConnectors() const { return m_shutdownConnectors; }
    inline bool ShutdownConnectorsHasBeenSet() const { return m_shutdownConnectorsHasBeenSet; }
    inline void SetShutdownConnectors(int value) { m_shutdownConnectorsHasBeenSet = true; m_shutdownConnectors = value; }
    inline CustomerConnectorInfo& WithShutdownConnectors(int value) { SetShutdownConnectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of unhealthy discovery connectors.</p>
     */
    inline int GetUnhealthyConnectors() const { return m_unhealthyConnectors; }
    inline bool UnhealthyConnectorsHasBeenSet() const { return m_unhealthyConnectorsHasBeenSet; }
    inline void SetUnhealthyConnectors(int value) { m_unhealthyConnectorsHasBeenSet = true; m_unhealthyConnectors = value; }
    inline CustomerConnectorInfo& WithUnhealthyConnectors(int value) { SetUnhealthyConnectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of discovery connectors.</p>
     */
    inline int GetTotalConnectors() const { return m_totalConnectors; }
    inline bool TotalConnectorsHasBeenSet() const { return m_totalConnectorsHasBeenSet; }
    inline void SetTotalConnectors(int value) { m_totalConnectorsHasBeenSet = true; m_totalConnectors = value; }
    inline CustomerConnectorInfo& WithTotalConnectors(int value) { SetTotalConnectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of unknown discovery connectors.</p>
     */
    inline int GetUnknownConnectors() const { return m_unknownConnectors; }
    inline bool UnknownConnectorsHasBeenSet() const { return m_unknownConnectorsHasBeenSet; }
    inline void SetUnknownConnectors(int value) { m_unknownConnectorsHasBeenSet = true; m_unknownConnectors = value; }
    inline CustomerConnectorInfo& WithUnknownConnectors(int value) { SetUnknownConnectors(value); return *this;}
    ///@}
  private:

    int m_activeConnectors{0};
    bool m_activeConnectorsHasBeenSet = false;

    int m_healthyConnectors{0};
    bool m_healthyConnectorsHasBeenSet = false;

    int m_blackListedConnectors{0};
    bool m_blackListedConnectorsHasBeenSet = false;

    int m_shutdownConnectors{0};
    bool m_shutdownConnectorsHasBeenSet = false;

    int m_unhealthyConnectors{0};
    bool m_unhealthyConnectorsHasBeenSet = false;

    int m_totalConnectors{0};
    bool m_totalConnectorsHasBeenSet = false;

    int m_unknownConnectors{0};
    bool m_unknownConnectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
