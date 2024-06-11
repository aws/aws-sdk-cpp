﻿/**
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
    AWS_APPLICATIONDISCOVERYSERVICE_API AgentInfo();
    AWS_APPLICATIONDISCOVERYSERVICE_API AgentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API AgentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The agent or collector ID.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline AgentInfo& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline AgentInfo& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline AgentInfo& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the host where the agent or collector resides. The host can be a
     * server or virtual machine.</p>
     */
    inline const Aws::String& GetHostName() const{ return m_hostName; }
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }
    inline void SetHostName(const Aws::String& value) { m_hostNameHasBeenSet = true; m_hostName = value; }
    inline void SetHostName(Aws::String&& value) { m_hostNameHasBeenSet = true; m_hostName = std::move(value); }
    inline void SetHostName(const char* value) { m_hostNameHasBeenSet = true; m_hostName.assign(value); }
    inline AgentInfo& WithHostName(const Aws::String& value) { SetHostName(value); return *this;}
    inline AgentInfo& WithHostName(Aws::String&& value) { SetHostName(std::move(value)); return *this;}
    inline AgentInfo& WithHostName(const char* value) { SetHostName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network details about the host where the agent or collector resides.</p>
     */
    inline const Aws::Vector<AgentNetworkInfo>& GetAgentNetworkInfoList() const{ return m_agentNetworkInfoList; }
    inline bool AgentNetworkInfoListHasBeenSet() const { return m_agentNetworkInfoListHasBeenSet; }
    inline void SetAgentNetworkInfoList(const Aws::Vector<AgentNetworkInfo>& value) { m_agentNetworkInfoListHasBeenSet = true; m_agentNetworkInfoList = value; }
    inline void SetAgentNetworkInfoList(Aws::Vector<AgentNetworkInfo>&& value) { m_agentNetworkInfoListHasBeenSet = true; m_agentNetworkInfoList = std::move(value); }
    inline AgentInfo& WithAgentNetworkInfoList(const Aws::Vector<AgentNetworkInfo>& value) { SetAgentNetworkInfoList(value); return *this;}
    inline AgentInfo& WithAgentNetworkInfoList(Aws::Vector<AgentNetworkInfo>&& value) { SetAgentNetworkInfoList(std::move(value)); return *this;}
    inline AgentInfo& AddAgentNetworkInfoList(const AgentNetworkInfo& value) { m_agentNetworkInfoListHasBeenSet = true; m_agentNetworkInfoList.push_back(value); return *this; }
    inline AgentInfo& AddAgentNetworkInfoList(AgentNetworkInfo&& value) { m_agentNetworkInfoListHasBeenSet = true; m_agentNetworkInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }
    inline AgentInfo& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}
    inline AgentInfo& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}
    inline AgentInfo& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent or collector version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline AgentInfo& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline AgentInfo& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline AgentInfo& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health of the agent.</p>
     */
    inline const AgentStatus& GetHealth() const{ return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    inline void SetHealth(const AgentStatus& value) { m_healthHasBeenSet = true; m_health = value; }
    inline void SetHealth(AgentStatus&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }
    inline AgentInfo& WithHealth(const AgentStatus& value) { SetHealth(value); return *this;}
    inline AgentInfo& WithHealth(AgentStatus&& value) { SetHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time since agent health was reported.</p>
     */
    inline const Aws::String& GetLastHealthPingTime() const{ return m_lastHealthPingTime; }
    inline bool LastHealthPingTimeHasBeenSet() const { return m_lastHealthPingTimeHasBeenSet; }
    inline void SetLastHealthPingTime(const Aws::String& value) { m_lastHealthPingTimeHasBeenSet = true; m_lastHealthPingTime = value; }
    inline void SetLastHealthPingTime(Aws::String&& value) { m_lastHealthPingTimeHasBeenSet = true; m_lastHealthPingTime = std::move(value); }
    inline void SetLastHealthPingTime(const char* value) { m_lastHealthPingTimeHasBeenSet = true; m_lastHealthPingTime.assign(value); }
    inline AgentInfo& WithLastHealthPingTime(const Aws::String& value) { SetLastHealthPingTime(value); return *this;}
    inline AgentInfo& WithLastHealthPingTime(Aws::String&& value) { SetLastHealthPingTime(std::move(value)); return *this;}
    inline AgentInfo& WithLastHealthPingTime(const char* value) { SetLastHealthPingTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the collection process for an agent.</p>
     */
    inline const Aws::String& GetCollectionStatus() const{ return m_collectionStatus; }
    inline bool CollectionStatusHasBeenSet() const { return m_collectionStatusHasBeenSet; }
    inline void SetCollectionStatus(const Aws::String& value) { m_collectionStatusHasBeenSet = true; m_collectionStatus = value; }
    inline void SetCollectionStatus(Aws::String&& value) { m_collectionStatusHasBeenSet = true; m_collectionStatus = std::move(value); }
    inline void SetCollectionStatus(const char* value) { m_collectionStatusHasBeenSet = true; m_collectionStatus.assign(value); }
    inline AgentInfo& WithCollectionStatus(const Aws::String& value) { SetCollectionStatus(value); return *this;}
    inline AgentInfo& WithCollectionStatus(Aws::String&& value) { SetCollectionStatus(std::move(value)); return *this;}
    inline AgentInfo& WithCollectionStatus(const char* value) { SetCollectionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of agent.</p>
     */
    inline const Aws::String& GetAgentType() const{ return m_agentType; }
    inline bool AgentTypeHasBeenSet() const { return m_agentTypeHasBeenSet; }
    inline void SetAgentType(const Aws::String& value) { m_agentTypeHasBeenSet = true; m_agentType = value; }
    inline void SetAgentType(Aws::String&& value) { m_agentTypeHasBeenSet = true; m_agentType = std::move(value); }
    inline void SetAgentType(const char* value) { m_agentTypeHasBeenSet = true; m_agentType.assign(value); }
    inline AgentInfo& WithAgentType(const Aws::String& value) { SetAgentType(value); return *this;}
    inline AgentInfo& WithAgentType(Aws::String&& value) { SetAgentType(std::move(value)); return *this;}
    inline AgentInfo& WithAgentType(const char* value) { SetAgentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Agent's first registration timestamp in UTC.</p>
     */
    inline const Aws::String& GetRegisteredTime() const{ return m_registeredTime; }
    inline bool RegisteredTimeHasBeenSet() const { return m_registeredTimeHasBeenSet; }
    inline void SetRegisteredTime(const Aws::String& value) { m_registeredTimeHasBeenSet = true; m_registeredTime = value; }
    inline void SetRegisteredTime(Aws::String&& value) { m_registeredTimeHasBeenSet = true; m_registeredTime = std::move(value); }
    inline void SetRegisteredTime(const char* value) { m_registeredTimeHasBeenSet = true; m_registeredTime.assign(value); }
    inline AgentInfo& WithRegisteredTime(const Aws::String& value) { SetRegisteredTime(value); return *this;}
    inline AgentInfo& WithRegisteredTime(Aws::String&& value) { SetRegisteredTime(std::move(value)); return *this;}
    inline AgentInfo& WithRegisteredTime(const char* value) { SetRegisteredTime(value); return *this;}
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

    AgentStatus m_health;
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
