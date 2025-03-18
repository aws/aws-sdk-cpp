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
   * <p>Inventory data for installed discovery agents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CustomerAgentInfo">AWS
   * API Reference</a></p>
   */
  class CustomerAgentInfo
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerAgentInfo() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerAgentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerAgentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Number of active discovery agents.</p>
     */
    inline int GetActiveAgents() const { return m_activeAgents; }
    inline bool ActiveAgentsHasBeenSet() const { return m_activeAgentsHasBeenSet; }
    inline void SetActiveAgents(int value) { m_activeAgentsHasBeenSet = true; m_activeAgents = value; }
    inline CustomerAgentInfo& WithActiveAgents(int value) { SetActiveAgents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of healthy discovery agents</p>
     */
    inline int GetHealthyAgents() const { return m_healthyAgents; }
    inline bool HealthyAgentsHasBeenSet() const { return m_healthyAgentsHasBeenSet; }
    inline void SetHealthyAgents(int value) { m_healthyAgentsHasBeenSet = true; m_healthyAgents = value; }
    inline CustomerAgentInfo& WithHealthyAgents(int value) { SetHealthyAgents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of blacklisted discovery agents.</p>
     */
    inline int GetBlackListedAgents() const { return m_blackListedAgents; }
    inline bool BlackListedAgentsHasBeenSet() const { return m_blackListedAgentsHasBeenSet; }
    inline void SetBlackListedAgents(int value) { m_blackListedAgentsHasBeenSet = true; m_blackListedAgents = value; }
    inline CustomerAgentInfo& WithBlackListedAgents(int value) { SetBlackListedAgents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of discovery agents with status SHUTDOWN.</p>
     */
    inline int GetShutdownAgents() const { return m_shutdownAgents; }
    inline bool ShutdownAgentsHasBeenSet() const { return m_shutdownAgentsHasBeenSet; }
    inline void SetShutdownAgents(int value) { m_shutdownAgentsHasBeenSet = true; m_shutdownAgents = value; }
    inline CustomerAgentInfo& WithShutdownAgents(int value) { SetShutdownAgents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of unhealthy discovery agents.</p>
     */
    inline int GetUnhealthyAgents() const { return m_unhealthyAgents; }
    inline bool UnhealthyAgentsHasBeenSet() const { return m_unhealthyAgentsHasBeenSet; }
    inline void SetUnhealthyAgents(int value) { m_unhealthyAgentsHasBeenSet = true; m_unhealthyAgents = value; }
    inline CustomerAgentInfo& WithUnhealthyAgents(int value) { SetUnhealthyAgents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of discovery agents.</p>
     */
    inline int GetTotalAgents() const { return m_totalAgents; }
    inline bool TotalAgentsHasBeenSet() const { return m_totalAgentsHasBeenSet; }
    inline void SetTotalAgents(int value) { m_totalAgentsHasBeenSet = true; m_totalAgents = value; }
    inline CustomerAgentInfo& WithTotalAgents(int value) { SetTotalAgents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of unknown discovery agents.</p>
     */
    inline int GetUnknownAgents() const { return m_unknownAgents; }
    inline bool UnknownAgentsHasBeenSet() const { return m_unknownAgentsHasBeenSet; }
    inline void SetUnknownAgents(int value) { m_unknownAgentsHasBeenSet = true; m_unknownAgents = value; }
    inline CustomerAgentInfo& WithUnknownAgents(int value) { SetUnknownAgents(value); return *this;}
    ///@}
  private:

    int m_activeAgents{0};
    bool m_activeAgentsHasBeenSet = false;

    int m_healthyAgents{0};
    bool m_healthyAgentsHasBeenSet = false;

    int m_blackListedAgents{0};
    bool m_blackListedAgentsHasBeenSet = false;

    int m_shutdownAgents{0};
    bool m_shutdownAgentsHasBeenSet = false;

    int m_unhealthyAgents{0};
    bool m_unhealthyAgentsHasBeenSet = false;

    int m_totalAgents{0};
    bool m_totalAgentsHasBeenSet = false;

    int m_unknownAgents{0};
    bool m_unknownAgentsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
