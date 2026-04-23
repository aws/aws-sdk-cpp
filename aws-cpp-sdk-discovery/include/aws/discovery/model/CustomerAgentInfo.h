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
   * <p>Inventory data for installed discovery agents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CustomerAgentInfo">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API CustomerAgentInfo
  {
  public:
    CustomerAgentInfo();
    CustomerAgentInfo(Aws::Utils::Json::JsonView jsonValue);
    CustomerAgentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of active discovery agents.</p>
     */
    inline int GetActiveAgents() const{ return m_activeAgents; }

    /**
     * <p>Number of active discovery agents.</p>
     */
    inline bool ActiveAgentsHasBeenSet() const { return m_activeAgentsHasBeenSet; }

    /**
     * <p>Number of active discovery agents.</p>
     */
    inline void SetActiveAgents(int value) { m_activeAgentsHasBeenSet = true; m_activeAgents = value; }

    /**
     * <p>Number of active discovery agents.</p>
     */
    inline CustomerAgentInfo& WithActiveAgents(int value) { SetActiveAgents(value); return *this;}


    /**
     * <p>Number of healthy discovery agents</p>
     */
    inline int GetHealthyAgents() const{ return m_healthyAgents; }

    /**
     * <p>Number of healthy discovery agents</p>
     */
    inline bool HealthyAgentsHasBeenSet() const { return m_healthyAgentsHasBeenSet; }

    /**
     * <p>Number of healthy discovery agents</p>
     */
    inline void SetHealthyAgents(int value) { m_healthyAgentsHasBeenSet = true; m_healthyAgents = value; }

    /**
     * <p>Number of healthy discovery agents</p>
     */
    inline CustomerAgentInfo& WithHealthyAgents(int value) { SetHealthyAgents(value); return *this;}


    /**
     * <p>Number of blacklisted discovery agents.</p>
     */
    inline int GetBlackListedAgents() const{ return m_blackListedAgents; }

    /**
     * <p>Number of blacklisted discovery agents.</p>
     */
    inline bool BlackListedAgentsHasBeenSet() const { return m_blackListedAgentsHasBeenSet; }

    /**
     * <p>Number of blacklisted discovery agents.</p>
     */
    inline void SetBlackListedAgents(int value) { m_blackListedAgentsHasBeenSet = true; m_blackListedAgents = value; }

    /**
     * <p>Number of blacklisted discovery agents.</p>
     */
    inline CustomerAgentInfo& WithBlackListedAgents(int value) { SetBlackListedAgents(value); return *this;}


    /**
     * <p>Number of discovery agents with status SHUTDOWN.</p>
     */
    inline int GetShutdownAgents() const{ return m_shutdownAgents; }

    /**
     * <p>Number of discovery agents with status SHUTDOWN.</p>
     */
    inline bool ShutdownAgentsHasBeenSet() const { return m_shutdownAgentsHasBeenSet; }

    /**
     * <p>Number of discovery agents with status SHUTDOWN.</p>
     */
    inline void SetShutdownAgents(int value) { m_shutdownAgentsHasBeenSet = true; m_shutdownAgents = value; }

    /**
     * <p>Number of discovery agents with status SHUTDOWN.</p>
     */
    inline CustomerAgentInfo& WithShutdownAgents(int value) { SetShutdownAgents(value); return *this;}


    /**
     * <p>Number of unhealthy discovery agents.</p>
     */
    inline int GetUnhealthyAgents() const{ return m_unhealthyAgents; }

    /**
     * <p>Number of unhealthy discovery agents.</p>
     */
    inline bool UnhealthyAgentsHasBeenSet() const { return m_unhealthyAgentsHasBeenSet; }

    /**
     * <p>Number of unhealthy discovery agents.</p>
     */
    inline void SetUnhealthyAgents(int value) { m_unhealthyAgentsHasBeenSet = true; m_unhealthyAgents = value; }

    /**
     * <p>Number of unhealthy discovery agents.</p>
     */
    inline CustomerAgentInfo& WithUnhealthyAgents(int value) { SetUnhealthyAgents(value); return *this;}


    /**
     * <p>Total number of discovery agents.</p>
     */
    inline int GetTotalAgents() const{ return m_totalAgents; }

    /**
     * <p>Total number of discovery agents.</p>
     */
    inline bool TotalAgentsHasBeenSet() const { return m_totalAgentsHasBeenSet; }

    /**
     * <p>Total number of discovery agents.</p>
     */
    inline void SetTotalAgents(int value) { m_totalAgentsHasBeenSet = true; m_totalAgents = value; }

    /**
     * <p>Total number of discovery agents.</p>
     */
    inline CustomerAgentInfo& WithTotalAgents(int value) { SetTotalAgents(value); return *this;}


    /**
     * <p>Number of unknown discovery agents.</p>
     */
    inline int GetUnknownAgents() const{ return m_unknownAgents; }

    /**
     * <p>Number of unknown discovery agents.</p>
     */
    inline bool UnknownAgentsHasBeenSet() const { return m_unknownAgentsHasBeenSet; }

    /**
     * <p>Number of unknown discovery agents.</p>
     */
    inline void SetUnknownAgents(int value) { m_unknownAgentsHasBeenSet = true; m_unknownAgents = value; }

    /**
     * <p>Number of unknown discovery agents.</p>
     */
    inline CustomerAgentInfo& WithUnknownAgents(int value) { SetUnknownAgents(value); return *this;}

  private:

    int m_activeAgents;
    bool m_activeAgentsHasBeenSet;

    int m_healthyAgents;
    bool m_healthyAgentsHasBeenSet;

    int m_blackListedAgents;
    bool m_blackListedAgentsHasBeenSet;

    int m_shutdownAgents;
    bool m_shutdownAgentsHasBeenSet;

    int m_unhealthyAgents;
    bool m_unhealthyAgentsHasBeenSet;

    int m_totalAgents;
    bool m_totalAgentsHasBeenSet;

    int m_unknownAgents;
    bool m_unknownAgentsHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
