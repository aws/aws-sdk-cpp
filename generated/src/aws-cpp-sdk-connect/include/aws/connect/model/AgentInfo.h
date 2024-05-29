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
    AWS_CONNECT_API AgentInfo();
    AWS_CONNECT_API AgentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline AgentInfo& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline AgentInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline AgentInfo& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedToAgentTimestamp() const{ return m_connectedToAgentTimestamp; }

    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline bool ConnectedToAgentTimestampHasBeenSet() const { return m_connectedToAgentTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline void SetConnectedToAgentTimestamp(const Aws::Utils::DateTime& value) { m_connectedToAgentTimestampHasBeenSet = true; m_connectedToAgentTimestamp = value; }

    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline void SetConnectedToAgentTimestamp(Aws::Utils::DateTime&& value) { m_connectedToAgentTimestampHasBeenSet = true; m_connectedToAgentTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline AgentInfo& WithConnectedToAgentTimestamp(const Aws::Utils::DateTime& value) { SetConnectedToAgentTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline AgentInfo& WithConnectedToAgentTimestamp(Aws::Utils::DateTime&& value) { SetConnectedToAgentTimestamp(std::move(value)); return *this;}


    /**
     * <p>Agent pause duration for a contact in seconds.</p>
     */
    inline int GetAgentPauseDurationInSeconds() const{ return m_agentPauseDurationInSeconds; }

    /**
     * <p>Agent pause duration for a contact in seconds.</p>
     */
    inline bool AgentPauseDurationInSecondsHasBeenSet() const { return m_agentPauseDurationInSecondsHasBeenSet; }

    /**
     * <p>Agent pause duration for a contact in seconds.</p>
     */
    inline void SetAgentPauseDurationInSeconds(int value) { m_agentPauseDurationInSecondsHasBeenSet = true; m_agentPauseDurationInSeconds = value; }

    /**
     * <p>Agent pause duration for a contact in seconds.</p>
     */
    inline AgentInfo& WithAgentPauseDurationInSeconds(int value) { SetAgentPauseDurationInSeconds(value); return *this;}


    /**
     * <p>The agent hierarchy groups for the agent.</p>
     */
    inline const HierarchyGroups& GetHierarchyGroups() const{ return m_hierarchyGroups; }

    /**
     * <p>The agent hierarchy groups for the agent.</p>
     */
    inline bool HierarchyGroupsHasBeenSet() const { return m_hierarchyGroupsHasBeenSet; }

    /**
     * <p>The agent hierarchy groups for the agent.</p>
     */
    inline void SetHierarchyGroups(const HierarchyGroups& value) { m_hierarchyGroupsHasBeenSet = true; m_hierarchyGroups = value; }

    /**
     * <p>The agent hierarchy groups for the agent.</p>
     */
    inline void SetHierarchyGroups(HierarchyGroups&& value) { m_hierarchyGroupsHasBeenSet = true; m_hierarchyGroups = std::move(value); }

    /**
     * <p>The agent hierarchy groups for the agent.</p>
     */
    inline AgentInfo& WithHierarchyGroups(const HierarchyGroups& value) { SetHierarchyGroups(value); return *this;}

    /**
     * <p>The agent hierarchy groups for the agent.</p>
     */
    inline AgentInfo& WithHierarchyGroups(HierarchyGroups&& value) { SetHierarchyGroups(std::move(value)); return *this;}


    /**
     * <p>Information regarding Agent’s device.</p>
     */
    inline const DeviceInfo& GetDeviceInfo() const{ return m_deviceInfo; }

    /**
     * <p>Information regarding Agent’s device.</p>
     */
    inline bool DeviceInfoHasBeenSet() const { return m_deviceInfoHasBeenSet; }

    /**
     * <p>Information regarding Agent’s device.</p>
     */
    inline void SetDeviceInfo(const DeviceInfo& value) { m_deviceInfoHasBeenSet = true; m_deviceInfo = value; }

    /**
     * <p>Information regarding Agent’s device.</p>
     */
    inline void SetDeviceInfo(DeviceInfo&& value) { m_deviceInfoHasBeenSet = true; m_deviceInfo = std::move(value); }

    /**
     * <p>Information regarding Agent’s device.</p>
     */
    inline AgentInfo& WithDeviceInfo(const DeviceInfo& value) { SetDeviceInfo(value); return *this;}

    /**
     * <p>Information regarding Agent’s device.</p>
     */
    inline AgentInfo& WithDeviceInfo(DeviceInfo&& value) { SetDeviceInfo(std::move(value)); return *this;}


    
    inline const ParticipantCapabilities& GetCapabilities() const{ return m_capabilities; }

    
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    
    inline void SetCapabilities(const ParticipantCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    
    inline void SetCapabilities(ParticipantCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    
    inline AgentInfo& WithCapabilities(const ParticipantCapabilities& value) { SetCapabilities(value); return *this;}

    
    inline AgentInfo& WithCapabilities(ParticipantCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_connectedToAgentTimestamp;
    bool m_connectedToAgentTimestampHasBeenSet = false;

    int m_agentPauseDurationInSeconds;
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
