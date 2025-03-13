/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/discovery/model/AgentStatus.h>
#include <aws/discovery/model/AgentNetworkInfo.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>Information about agents associated with the user’s Amazon Web Services
   * account. Information includes agent IDs, IP addresses, media access control
   * (MAC) addresses, agent or collector status, hostname where the agent resides,
   * and agent version for each agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/AgentInfo">AWS
   * API Reference</a></p>
   */
  class AgentInfo
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API AgentInfo() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API AgentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API AgentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The agent or collector ID.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    AgentInfo& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the host where the agent or collector resides. The host can be a
     * server or virtual machine.</p>
     */
    inline const Aws::String& GetHostName() const { return m_hostName; }
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }
    template<typename HostNameT = Aws::String>
    void SetHostName(HostNameT&& value) { m_hostNameHasBeenSet = true; m_hostName = std::forward<HostNameT>(value); }
    template<typename HostNameT = Aws::String>
    AgentInfo& WithHostName(HostNameT&& value) { SetHostName(std::forward<HostNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network details about the host where the agent or collector resides.</p>
     */
    inline const Aws::Vector<AgentNetworkInfo>& GetAgentNetworkInfoList() const { return m_agentNetworkInfoList; }
    inline bool AgentNetworkInfoListHasBeenSet() const { return m_agentNetworkInfoListHasBeenSet; }
    template<typename AgentNetworkInfoListT = Aws::Vector<AgentNetworkInfo>>
    void SetAgentNetworkInfoList(AgentNetworkInfoListT&& value) { m_agentNetworkInfoListHasBeenSet = true; m_agentNetworkInfoList = std::forward<AgentNetworkInfoListT>(value); }
    template<typename AgentNetworkInfoListT = Aws::Vector<AgentNetworkInfo>>
    AgentInfo& WithAgentNetworkInfoList(AgentNetworkInfoListT&& value) { SetAgentNetworkInfoList(std::forward<AgentNetworkInfoListT>(value)); return *this;}
    template<typename AgentNetworkInfoListT = AgentNetworkInfo>
    AgentInfo& AddAgentNetworkInfoList(AgentNetworkInfoListT&& value) { m_agentNetworkInfoListHasBeenSet = true; m_agentNetworkInfoList.emplace_back(std::forward<AgentNetworkInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const { return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    template<typename ConnectorIdT = Aws::String>
    void SetConnectorId(ConnectorIdT&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::forward<ConnectorIdT>(value); }
    template<typename ConnectorIdT = Aws::String>
    AgentInfo& WithConnectorId(ConnectorIdT&& value) { SetConnectorId(std::forward<ConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent or collector version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    AgentInfo& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health of the agent.</p>
     */
    inline AgentStatus GetHealth() const { return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    inline void SetHealth(AgentStatus value) { m_healthHasBeenSet = true; m_health = value; }
    inline AgentInfo& WithHealth(AgentStatus value) { SetHealth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time since agent health was reported.</p>
     */
    inline const Aws::String& GetLastHealthPingTime() const { return m_lastHealthPingTime; }
    inline bool LastHealthPingTimeHasBeenSet() const { return m_lastHealthPingTimeHasBeenSet; }
    template<typename LastHealthPingTimeT = Aws::String>
    void SetLastHealthPingTime(LastHealthPingTimeT&& value) { m_lastHealthPingTimeHasBeenSet = true; m_lastHealthPingTime = std::forward<LastHealthPingTimeT>(value); }
    template<typename LastHealthPingTimeT = Aws::String>
    AgentInfo& WithLastHealthPingTime(LastHealthPingTimeT&& value) { SetLastHealthPingTime(std::forward<LastHealthPingTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the collection process for an agent.</p>
     */
    inline const Aws::String& GetCollectionStatus() const { return m_collectionStatus; }
    inline bool CollectionStatusHasBeenSet() const { return m_collectionStatusHasBeenSet; }
    template<typename CollectionStatusT = Aws::String>
    void SetCollectionStatus(CollectionStatusT&& value) { m_collectionStatusHasBeenSet = true; m_collectionStatus = std::forward<CollectionStatusT>(value); }
    template<typename CollectionStatusT = Aws::String>
    AgentInfo& WithCollectionStatus(CollectionStatusT&& value) { SetCollectionStatus(std::forward<CollectionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of agent.</p>
     */
    inline const Aws::String& GetAgentType() const { return m_agentType; }
    inline bool AgentTypeHasBeenSet() const { return m_agentTypeHasBeenSet; }
    template<typename AgentTypeT = Aws::String>
    void SetAgentType(AgentTypeT&& value) { m_agentTypeHasBeenSet = true; m_agentType = std::forward<AgentTypeT>(value); }
    template<typename AgentTypeT = Aws::String>
    AgentInfo& WithAgentType(AgentTypeT&& value) { SetAgentType(std::forward<AgentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Agent's first registration timestamp in UTC.</p>
     */
    inline const Aws::String& GetRegisteredTime() const { return m_registeredTime; }
    inline bool RegisteredTimeHasBeenSet() const { return m_registeredTimeHasBeenSet; }
    template<typename RegisteredTimeT = Aws::String>
    void SetRegisteredTime(RegisteredTimeT&& value) { m_registeredTimeHasBeenSet = true; m_registeredTime = std::forward<RegisteredTimeT>(value); }
    template<typename RegisteredTimeT = Aws::String>
    AgentInfo& WithRegisteredTime(RegisteredTimeT&& value) { SetRegisteredTime(std::forward<RegisteredTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_hostName;
    bool m_hostNameHasBeenSet = false;

    Aws::Vector<AgentNetworkInfo> m_agentNetworkInfoList;
    bool m_agentNetworkInfoListHasBeenSet = false;

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    AgentStatus m_health{AgentStatus::NOT_SET};
    bool m_healthHasBeenSet = false;

    Aws::String m_lastHealthPingTime;
    bool m_lastHealthPingTimeHasBeenSet = false;

    Aws::String m_collectionStatus;
    bool m_collectionStatusHasBeenSet = false;

    Aws::String m_agentType;
    bool m_agentTypeHasBeenSet = false;

    Aws::String m_registeredTime;
    bool m_registeredTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
