/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/HierarchyGroups.h>
#include <aws/connect/model/DeviceInfo.h>
#include <aws/connect/model/ParticipantCapabilities.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the agent who accepted the contact.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentInfo">AWS
   * API Reference</a></p>
   */
  class AgentInfo
  {
  public:
    AWS_CONNECT_API AgentInfo() = default;
    AWS_CONNECT_API AgentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AgentInfo& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedToAgentTimestamp() const { return m_connectedToAgentTimestamp; }
    inline bool ConnectedToAgentTimestampHasBeenSet() const { return m_connectedToAgentTimestampHasBeenSet; }
    template<typename ConnectedToAgentTimestampT = Aws::Utils::DateTime>
    void SetConnectedToAgentTimestamp(ConnectedToAgentTimestampT&& value) { m_connectedToAgentTimestampHasBeenSet = true; m_connectedToAgentTimestamp = std::forward<ConnectedToAgentTimestampT>(value); }
    template<typename ConnectedToAgentTimestampT = Aws::Utils::DateTime>
    AgentInfo& WithConnectedToAgentTimestamp(ConnectedToAgentTimestampT&& value) { SetConnectedToAgentTimestamp(std::forward<ConnectedToAgentTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Agent pause duration for a contact in seconds.</p>
     */
    inline int GetAgentPauseDurationInSeconds() const { return m_agentPauseDurationInSeconds; }
    inline bool AgentPauseDurationInSecondsHasBeenSet() const { return m_agentPauseDurationInSecondsHasBeenSet; }
    inline void SetAgentPauseDurationInSeconds(int value) { m_agentPauseDurationInSecondsHasBeenSet = true; m_agentPauseDurationInSeconds = value; }
    inline AgentInfo& WithAgentPauseDurationInSeconds(int value) { SetAgentPauseDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent hierarchy groups for the agent.</p>
     */
    inline const HierarchyGroups& GetHierarchyGroups() const { return m_hierarchyGroups; }
    inline bool HierarchyGroupsHasBeenSet() const { return m_hierarchyGroupsHasBeenSet; }
    template<typename HierarchyGroupsT = HierarchyGroups>
    void SetHierarchyGroups(HierarchyGroupsT&& value) { m_hierarchyGroupsHasBeenSet = true; m_hierarchyGroups = std::forward<HierarchyGroupsT>(value); }
    template<typename HierarchyGroupsT = HierarchyGroups>
    AgentInfo& WithHierarchyGroups(HierarchyGroupsT&& value) { SetHierarchyGroups(std::forward<HierarchyGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information regarding Agent’s device.</p>
     */
    inline const DeviceInfo& GetDeviceInfo() const { return m_deviceInfo; }
    inline bool DeviceInfoHasBeenSet() const { return m_deviceInfoHasBeenSet; }
    template<typename DeviceInfoT = DeviceInfo>
    void SetDeviceInfo(DeviceInfoT&& value) { m_deviceInfoHasBeenSet = true; m_deviceInfo = std::forward<DeviceInfoT>(value); }
    template<typename DeviceInfoT = DeviceInfo>
    AgentInfo& WithDeviceInfo(DeviceInfoT&& value) { SetDeviceInfo(std::forward<DeviceInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ParticipantCapabilities& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = ParticipantCapabilities>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = ParticipantCapabilities>
    AgentInfo& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_connectedToAgentTimestamp{};
    bool m_connectedToAgentTimestampHasBeenSet = false;

    int m_agentPauseDurationInSeconds{0};
    bool m_agentPauseDurationInSecondsHasBeenSet = false;

    HierarchyGroups m_hierarchyGroups;
    bool m_hierarchyGroupsHasBeenSet = false;

    DeviceInfo m_deviceInfo;
    bool m_deviceInfoHasBeenSet = false;

    ParticipantCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
