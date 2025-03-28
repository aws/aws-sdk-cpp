﻿/**
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
   * <p>The inventory data for installed Agentless Collector collectors.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CustomerAgentlessCollectorInfo">AWS
   * API Reference</a></p>
   */
  class CustomerAgentlessCollectorInfo
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerAgentlessCollectorInfo() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerAgentlessCollectorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerAgentlessCollectorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of active Agentless Collector collectors. </p>
     */
    inline int GetActiveAgentlessCollectors() const { return m_activeAgentlessCollectors; }
    inline bool ActiveAgentlessCollectorsHasBeenSet() const { return m_activeAgentlessCollectorsHasBeenSet; }
    inline void SetActiveAgentlessCollectors(int value) { m_activeAgentlessCollectorsHasBeenSet = true; m_activeAgentlessCollectors = value; }
    inline CustomerAgentlessCollectorInfo& WithActiveAgentlessCollectors(int value) { SetActiveAgentlessCollectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of healthy Agentless Collector collectors. </p>
     */
    inline int GetHealthyAgentlessCollectors() const { return m_healthyAgentlessCollectors; }
    inline bool HealthyAgentlessCollectorsHasBeenSet() const { return m_healthyAgentlessCollectorsHasBeenSet; }
    inline void SetHealthyAgentlessCollectors(int value) { m_healthyAgentlessCollectorsHasBeenSet = true; m_healthyAgentlessCollectors = value; }
    inline CustomerAgentlessCollectorInfo& WithHealthyAgentlessCollectors(int value) { SetHealthyAgentlessCollectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of deny-listed Agentless Collector collectors. </p>
     */
    inline int GetDenyListedAgentlessCollectors() const { return m_denyListedAgentlessCollectors; }
    inline bool DenyListedAgentlessCollectorsHasBeenSet() const { return m_denyListedAgentlessCollectorsHasBeenSet; }
    inline void SetDenyListedAgentlessCollectors(int value) { m_denyListedAgentlessCollectorsHasBeenSet = true; m_denyListedAgentlessCollectors = value; }
    inline CustomerAgentlessCollectorInfo& WithDenyListedAgentlessCollectors(int value) { SetDenyListedAgentlessCollectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Agentless Collector collectors with <code>SHUTDOWN</code>
     * status. </p>
     */
    inline int GetShutdownAgentlessCollectors() const { return m_shutdownAgentlessCollectors; }
    inline bool ShutdownAgentlessCollectorsHasBeenSet() const { return m_shutdownAgentlessCollectorsHasBeenSet; }
    inline void SetShutdownAgentlessCollectors(int value) { m_shutdownAgentlessCollectorsHasBeenSet = true; m_shutdownAgentlessCollectors = value; }
    inline CustomerAgentlessCollectorInfo& WithShutdownAgentlessCollectors(int value) { SetShutdownAgentlessCollectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of unhealthy Agentless Collector collectors. </p>
     */
    inline int GetUnhealthyAgentlessCollectors() const { return m_unhealthyAgentlessCollectors; }
    inline bool UnhealthyAgentlessCollectorsHasBeenSet() const { return m_unhealthyAgentlessCollectorsHasBeenSet; }
    inline void SetUnhealthyAgentlessCollectors(int value) { m_unhealthyAgentlessCollectorsHasBeenSet = true; m_unhealthyAgentlessCollectors = value; }
    inline CustomerAgentlessCollectorInfo& WithUnhealthyAgentlessCollectors(int value) { SetUnhealthyAgentlessCollectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of Agentless Collector collectors. </p>
     */
    inline int GetTotalAgentlessCollectors() const { return m_totalAgentlessCollectors; }
    inline bool TotalAgentlessCollectorsHasBeenSet() const { return m_totalAgentlessCollectorsHasBeenSet; }
    inline void SetTotalAgentlessCollectors(int value) { m_totalAgentlessCollectorsHasBeenSet = true; m_totalAgentlessCollectors = value; }
    inline CustomerAgentlessCollectorInfo& WithTotalAgentlessCollectors(int value) { SetTotalAgentlessCollectors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of unknown Agentless Collector collectors. </p>
     */
    inline int GetUnknownAgentlessCollectors() const { return m_unknownAgentlessCollectors; }
    inline bool UnknownAgentlessCollectorsHasBeenSet() const { return m_unknownAgentlessCollectorsHasBeenSet; }
    inline void SetUnknownAgentlessCollectors(int value) { m_unknownAgentlessCollectorsHasBeenSet = true; m_unknownAgentlessCollectors = value; }
    inline CustomerAgentlessCollectorInfo& WithUnknownAgentlessCollectors(int value) { SetUnknownAgentlessCollectors(value); return *this;}
    ///@}
  private:

    int m_activeAgentlessCollectors{0};
    bool m_activeAgentlessCollectorsHasBeenSet = false;

    int m_healthyAgentlessCollectors{0};
    bool m_healthyAgentlessCollectorsHasBeenSet = false;

    int m_denyListedAgentlessCollectors{0};
    bool m_denyListedAgentlessCollectorsHasBeenSet = false;

    int m_shutdownAgentlessCollectors{0};
    bool m_shutdownAgentlessCollectorsHasBeenSet = false;

    int m_unhealthyAgentlessCollectors{0};
    bool m_unhealthyAgentlessCollectorsHasBeenSet = false;

    int m_totalAgentlessCollectors{0};
    bool m_totalAgentlessCollectorsHasBeenSet = false;

    int m_unknownAgentlessCollectors{0};
    bool m_unknownAgentlessCollectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
