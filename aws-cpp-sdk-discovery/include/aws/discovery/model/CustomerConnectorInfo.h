/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPLICATIONDISCOVERYSERVICE_API CustomerConnectorInfo
  {
  public:
    CustomerConnectorInfo();
    CustomerConnectorInfo(Aws::Utils::Json::JsonView jsonValue);
    CustomerConnectorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of active discovery connectors.</p>
     */
    inline int GetActiveConnectors() const{ return m_activeConnectors; }

    /**
     * <p>Number of active discovery connectors.</p>
     */
    inline bool ActiveConnectorsHasBeenSet() const { return m_activeConnectorsHasBeenSet; }

    /**
     * <p>Number of active discovery connectors.</p>
     */
    inline void SetActiveConnectors(int value) { m_activeConnectorsHasBeenSet = true; m_activeConnectors = value; }

    /**
     * <p>Number of active discovery connectors.</p>
     */
    inline CustomerConnectorInfo& WithActiveConnectors(int value) { SetActiveConnectors(value); return *this;}


    /**
     * <p>Number of healthy discovery connectors.</p>
     */
    inline int GetHealthyConnectors() const{ return m_healthyConnectors; }

    /**
     * <p>Number of healthy discovery connectors.</p>
     */
    inline bool HealthyConnectorsHasBeenSet() const { return m_healthyConnectorsHasBeenSet; }

    /**
     * <p>Number of healthy discovery connectors.</p>
     */
    inline void SetHealthyConnectors(int value) { m_healthyConnectorsHasBeenSet = true; m_healthyConnectors = value; }

    /**
     * <p>Number of healthy discovery connectors.</p>
     */
    inline CustomerConnectorInfo& WithHealthyConnectors(int value) { SetHealthyConnectors(value); return *this;}


    /**
     * <p>Number of blacklisted discovery connectors.</p>
     */
    inline int GetBlackListedConnectors() const{ return m_blackListedConnectors; }

    /**
     * <p>Number of blacklisted discovery connectors.</p>
     */
    inline bool BlackListedConnectorsHasBeenSet() const { return m_blackListedConnectorsHasBeenSet; }

    /**
     * <p>Number of blacklisted discovery connectors.</p>
     */
    inline void SetBlackListedConnectors(int value) { m_blackListedConnectorsHasBeenSet = true; m_blackListedConnectors = value; }

    /**
     * <p>Number of blacklisted discovery connectors.</p>
     */
    inline CustomerConnectorInfo& WithBlackListedConnectors(int value) { SetBlackListedConnectors(value); return *this;}


    /**
     * <p>Number of discovery connectors with status SHUTDOWN,</p>
     */
    inline int GetShutdownConnectors() const{ return m_shutdownConnectors; }

    /**
     * <p>Number of discovery connectors with status SHUTDOWN,</p>
     */
    inline bool ShutdownConnectorsHasBeenSet() const { return m_shutdownConnectorsHasBeenSet; }

    /**
     * <p>Number of discovery connectors with status SHUTDOWN,</p>
     */
    inline void SetShutdownConnectors(int value) { m_shutdownConnectorsHasBeenSet = true; m_shutdownConnectors = value; }

    /**
     * <p>Number of discovery connectors with status SHUTDOWN,</p>
     */
    inline CustomerConnectorInfo& WithShutdownConnectors(int value) { SetShutdownConnectors(value); return *this;}


    /**
     * <p>Number of unhealthy discovery connectors.</p>
     */
    inline int GetUnhealthyConnectors() const{ return m_unhealthyConnectors; }

    /**
     * <p>Number of unhealthy discovery connectors.</p>
     */
    inline bool UnhealthyConnectorsHasBeenSet() const { return m_unhealthyConnectorsHasBeenSet; }

    /**
     * <p>Number of unhealthy discovery connectors.</p>
     */
    inline void SetUnhealthyConnectors(int value) { m_unhealthyConnectorsHasBeenSet = true; m_unhealthyConnectors = value; }

    /**
     * <p>Number of unhealthy discovery connectors.</p>
     */
    inline CustomerConnectorInfo& WithUnhealthyConnectors(int value) { SetUnhealthyConnectors(value); return *this;}


    /**
     * <p>Total number of discovery connectors.</p>
     */
    inline int GetTotalConnectors() const{ return m_totalConnectors; }

    /**
     * <p>Total number of discovery connectors.</p>
     */
    inline bool TotalConnectorsHasBeenSet() const { return m_totalConnectorsHasBeenSet; }

    /**
     * <p>Total number of discovery connectors.</p>
     */
    inline void SetTotalConnectors(int value) { m_totalConnectorsHasBeenSet = true; m_totalConnectors = value; }

    /**
     * <p>Total number of discovery connectors.</p>
     */
    inline CustomerConnectorInfo& WithTotalConnectors(int value) { SetTotalConnectors(value); return *this;}


    /**
     * <p>Number of unknown discovery connectors.</p>
     */
    inline int GetUnknownConnectors() const{ return m_unknownConnectors; }

    /**
     * <p>Number of unknown discovery connectors.</p>
     */
    inline bool UnknownConnectorsHasBeenSet() const { return m_unknownConnectorsHasBeenSet; }

    /**
     * <p>Number of unknown discovery connectors.</p>
     */
    inline void SetUnknownConnectors(int value) { m_unknownConnectorsHasBeenSet = true; m_unknownConnectors = value; }

    /**
     * <p>Number of unknown discovery connectors.</p>
     */
    inline CustomerConnectorInfo& WithUnknownConnectors(int value) { SetUnknownConnectors(value); return *this;}

  private:

    int m_activeConnectors;
    bool m_activeConnectorsHasBeenSet;

    int m_healthyConnectors;
    bool m_healthyConnectorsHasBeenSet;

    int m_blackListedConnectors;
    bool m_blackListedConnectorsHasBeenSet;

    int m_shutdownConnectors;
    bool m_shutdownConnectorsHasBeenSet;

    int m_unhealthyConnectors;
    bool m_unhealthyConnectorsHasBeenSet;

    int m_totalConnectors;
    bool m_totalConnectorsHasBeenSet;

    int m_unknownConnectors;
    bool m_unknownConnectorsHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
