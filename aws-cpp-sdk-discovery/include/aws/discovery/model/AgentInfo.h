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
   * <p>Information about agents or connectors associated with the user’s AWS
   * account. Information includes agent or connector IDs, IP addresses, media access
   * control (MAC) addresses, agent or connector health, hostname where the agent or
   * connector resides, and agent version for each agent.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/AgentInfo">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API AgentInfo
  {
  public:
    AgentInfo();
    AgentInfo(Aws::Utils::Json::JsonView jsonValue);
    AgentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The agent or connector ID.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The agent or connector ID.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The agent or connector ID.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The agent or connector ID.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The agent or connector ID.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The agent or connector ID.</p>
     */
    inline AgentInfo& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The agent or connector ID.</p>
     */
    inline AgentInfo& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The agent or connector ID.</p>
     */
    inline AgentInfo& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The name of the host where the agent or connector resides. The host can be a
     * server or virtual machine.</p>
     */
    inline const Aws::String& GetHostName() const{ return m_hostName; }

    /**
     * <p>The name of the host where the agent or connector resides. The host can be a
     * server or virtual machine.</p>
     */
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }

    /**
     * <p>The name of the host where the agent or connector resides. The host can be a
     * server or virtual machine.</p>
     */
    inline void SetHostName(const Aws::String& value) { m_hostNameHasBeenSet = true; m_hostName = value; }

    /**
     * <p>The name of the host where the agent or connector resides. The host can be a
     * server or virtual machine.</p>
     */
    inline void SetHostName(Aws::String&& value) { m_hostNameHasBeenSet = true; m_hostName = std::move(value); }

    /**
     * <p>The name of the host where the agent or connector resides. The host can be a
     * server or virtual machine.</p>
     */
    inline void SetHostName(const char* value) { m_hostNameHasBeenSet = true; m_hostName.assign(value); }

    /**
     * <p>The name of the host where the agent or connector resides. The host can be a
     * server or virtual machine.</p>
     */
    inline AgentInfo& WithHostName(const Aws::String& value) { SetHostName(value); return *this;}

    /**
     * <p>The name of the host where the agent or connector resides. The host can be a
     * server or virtual machine.</p>
     */
    inline AgentInfo& WithHostName(Aws::String&& value) { SetHostName(std::move(value)); return *this;}

    /**
     * <p>The name of the host where the agent or connector resides. The host can be a
     * server or virtual machine.</p>
     */
    inline AgentInfo& WithHostName(const char* value) { SetHostName(value); return *this;}


    /**
     * <p>Network details about the host where the agent or connector resides.</p>
     */
    inline const Aws::Vector<AgentNetworkInfo>& GetAgentNetworkInfoList() const{ return m_agentNetworkInfoList; }

    /**
     * <p>Network details about the host where the agent or connector resides.</p>
     */
    inline bool AgentNetworkInfoListHasBeenSet() const { return m_agentNetworkInfoListHasBeenSet; }

    /**
     * <p>Network details about the host where the agent or connector resides.</p>
     */
    inline void SetAgentNetworkInfoList(const Aws::Vector<AgentNetworkInfo>& value) { m_agentNetworkInfoListHasBeenSet = true; m_agentNetworkInfoList = value; }

    /**
     * <p>Network details about the host where the agent or connector resides.</p>
     */
    inline void SetAgentNetworkInfoList(Aws::Vector<AgentNetworkInfo>&& value) { m_agentNetworkInfoListHasBeenSet = true; m_agentNetworkInfoList = std::move(value); }

    /**
     * <p>Network details about the host where the agent or connector resides.</p>
     */
    inline AgentInfo& WithAgentNetworkInfoList(const Aws::Vector<AgentNetworkInfo>& value) { SetAgentNetworkInfoList(value); return *this;}

    /**
     * <p>Network details about the host where the agent or connector resides.</p>
     */
    inline AgentInfo& WithAgentNetworkInfoList(Aws::Vector<AgentNetworkInfo>&& value) { SetAgentNetworkInfoList(std::move(value)); return *this;}

    /**
     * <p>Network details about the host where the agent or connector resides.</p>
     */
    inline AgentInfo& AddAgentNetworkInfoList(const AgentNetworkInfo& value) { m_agentNetworkInfoListHasBeenSet = true; m_agentNetworkInfoList.push_back(value); return *this; }

    /**
     * <p>Network details about the host where the agent or connector resides.</p>
     */
    inline AgentInfo& AddAgentNetworkInfoList(AgentNetworkInfo&& value) { m_agentNetworkInfoListHasBeenSet = true; m_agentNetworkInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }

    /**
     * <p>The ID of the connector.</p>
     */
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }

    /**
     * <p>The ID of the connector.</p>
     */
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }

    /**
     * <p>The ID of the connector.</p>
     */
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }

    /**
     * <p>The ID of the connector.</p>
     */
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }

    /**
     * <p>The ID of the connector.</p>
     */
    inline AgentInfo& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}

    /**
     * <p>The ID of the connector.</p>
     */
    inline AgentInfo& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the connector.</p>
     */
    inline AgentInfo& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}


    /**
     * <p>The agent or connector version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The agent or connector version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The agent or connector version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The agent or connector version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The agent or connector version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The agent or connector version.</p>
     */
    inline AgentInfo& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The agent or connector version.</p>
     */
    inline AgentInfo& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The agent or connector version.</p>
     */
    inline AgentInfo& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The health of the agent or connector.</p>
     */
    inline const AgentStatus& GetHealth() const{ return m_health; }

    /**
     * <p>The health of the agent or connector.</p>
     */
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }

    /**
     * <p>The health of the agent or connector.</p>
     */
    inline void SetHealth(const AgentStatus& value) { m_healthHasBeenSet = true; m_health = value; }

    /**
     * <p>The health of the agent or connector.</p>
     */
    inline void SetHealth(AgentStatus&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }

    /**
     * <p>The health of the agent or connector.</p>
     */
    inline AgentInfo& WithHealth(const AgentStatus& value) { SetHealth(value); return *this;}

    /**
     * <p>The health of the agent or connector.</p>
     */
    inline AgentInfo& WithHealth(AgentStatus&& value) { SetHealth(std::move(value)); return *this;}


    /**
     * <p>Time since agent or connector health was reported.</p>
     */
    inline const Aws::String& GetLastHealthPingTime() const{ return m_lastHealthPingTime; }

    /**
     * <p>Time since agent or connector health was reported.</p>
     */
    inline bool LastHealthPingTimeHasBeenSet() const { return m_lastHealthPingTimeHasBeenSet; }

    /**
     * <p>Time since agent or connector health was reported.</p>
     */
    inline void SetLastHealthPingTime(const Aws::String& value) { m_lastHealthPingTimeHasBeenSet = true; m_lastHealthPingTime = value; }

    /**
     * <p>Time since agent or connector health was reported.</p>
     */
    inline void SetLastHealthPingTime(Aws::String&& value) { m_lastHealthPingTimeHasBeenSet = true; m_lastHealthPingTime = std::move(value); }

    /**
     * <p>Time since agent or connector health was reported.</p>
     */
    inline void SetLastHealthPingTime(const char* value) { m_lastHealthPingTimeHasBeenSet = true; m_lastHealthPingTime.assign(value); }

    /**
     * <p>Time since agent or connector health was reported.</p>
     */
    inline AgentInfo& WithLastHealthPingTime(const Aws::String& value) { SetLastHealthPingTime(value); return *this;}

    /**
     * <p>Time since agent or connector health was reported.</p>
     */
    inline AgentInfo& WithLastHealthPingTime(Aws::String&& value) { SetLastHealthPingTime(std::move(value)); return *this;}

    /**
     * <p>Time since agent or connector health was reported.</p>
     */
    inline AgentInfo& WithLastHealthPingTime(const char* value) { SetLastHealthPingTime(value); return *this;}


    /**
     * <p>Status of the collection process for an agent or connector.</p>
     */
    inline const Aws::String& GetCollectionStatus() const{ return m_collectionStatus; }

    /**
     * <p>Status of the collection process for an agent or connector.</p>
     */
    inline bool CollectionStatusHasBeenSet() const { return m_collectionStatusHasBeenSet; }

    /**
     * <p>Status of the collection process for an agent or connector.</p>
     */
    inline void SetCollectionStatus(const Aws::String& value) { m_collectionStatusHasBeenSet = true; m_collectionStatus = value; }

    /**
     * <p>Status of the collection process for an agent or connector.</p>
     */
    inline void SetCollectionStatus(Aws::String&& value) { m_collectionStatusHasBeenSet = true; m_collectionStatus = std::move(value); }

    /**
     * <p>Status of the collection process for an agent or connector.</p>
     */
    inline void SetCollectionStatus(const char* value) { m_collectionStatusHasBeenSet = true; m_collectionStatus.assign(value); }

    /**
     * <p>Status of the collection process for an agent or connector.</p>
     */
    inline AgentInfo& WithCollectionStatus(const Aws::String& value) { SetCollectionStatus(value); return *this;}

    /**
     * <p>Status of the collection process for an agent or connector.</p>
     */
    inline AgentInfo& WithCollectionStatus(Aws::String&& value) { SetCollectionStatus(std::move(value)); return *this;}

    /**
     * <p>Status of the collection process for an agent or connector.</p>
     */
    inline AgentInfo& WithCollectionStatus(const char* value) { SetCollectionStatus(value); return *this;}


    /**
     * <p>Type of agent.</p>
     */
    inline const Aws::String& GetAgentType() const{ return m_agentType; }

    /**
     * <p>Type of agent.</p>
     */
    inline bool AgentTypeHasBeenSet() const { return m_agentTypeHasBeenSet; }

    /**
     * <p>Type of agent.</p>
     */
    inline void SetAgentType(const Aws::String& value) { m_agentTypeHasBeenSet = true; m_agentType = value; }

    /**
     * <p>Type of agent.</p>
     */
    inline void SetAgentType(Aws::String&& value) { m_agentTypeHasBeenSet = true; m_agentType = std::move(value); }

    /**
     * <p>Type of agent.</p>
     */
    inline void SetAgentType(const char* value) { m_agentTypeHasBeenSet = true; m_agentType.assign(value); }

    /**
     * <p>Type of agent.</p>
     */
    inline AgentInfo& WithAgentType(const Aws::String& value) { SetAgentType(value); return *this;}

    /**
     * <p>Type of agent.</p>
     */
    inline AgentInfo& WithAgentType(Aws::String&& value) { SetAgentType(std::move(value)); return *this;}

    /**
     * <p>Type of agent.</p>
     */
    inline AgentInfo& WithAgentType(const char* value) { SetAgentType(value); return *this;}


    /**
     * <p>Agent's first registration timestamp in UTC.</p>
     */
    inline const Aws::String& GetRegisteredTime() const{ return m_registeredTime; }

    /**
     * <p>Agent's first registration timestamp in UTC.</p>
     */
    inline bool RegisteredTimeHasBeenSet() const { return m_registeredTimeHasBeenSet; }

    /**
     * <p>Agent's first registration timestamp in UTC.</p>
     */
    inline void SetRegisteredTime(const Aws::String& value) { m_registeredTimeHasBeenSet = true; m_registeredTime = value; }

    /**
     * <p>Agent's first registration timestamp in UTC.</p>
     */
    inline void SetRegisteredTime(Aws::String&& value) { m_registeredTimeHasBeenSet = true; m_registeredTime = std::move(value); }

    /**
     * <p>Agent's first registration timestamp in UTC.</p>
     */
    inline void SetRegisteredTime(const char* value) { m_registeredTimeHasBeenSet = true; m_registeredTime.assign(value); }

    /**
     * <p>Agent's first registration timestamp in UTC.</p>
     */
    inline AgentInfo& WithRegisteredTime(const Aws::String& value) { SetRegisteredTime(value); return *this;}

    /**
     * <p>Agent's first registration timestamp in UTC.</p>
     */
    inline AgentInfo& WithRegisteredTime(Aws::String&& value) { SetRegisteredTime(std::move(value)); return *this;}

    /**
     * <p>Agent's first registration timestamp in UTC.</p>
     */
    inline AgentInfo& WithRegisteredTime(const char* value) { SetRegisteredTime(value); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet;

    Aws::String m_hostName;
    bool m_hostNameHasBeenSet;

    Aws::Vector<AgentNetworkInfo> m_agentNetworkInfoList;
    bool m_agentNetworkInfoListHasBeenSet;

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    AgentStatus m_health;
    bool m_healthHasBeenSet;

    Aws::String m_lastHealthPingTime;
    bool m_lastHealthPingTimeHasBeenSet;

    Aws::String m_collectionStatus;
    bool m_collectionStatusHasBeenSet;

    Aws::String m_agentType;
    bool m_agentTypeHasBeenSet;

    Aws::String m_registeredTime;
    bool m_registeredTimeHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
