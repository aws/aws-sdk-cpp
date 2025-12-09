/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DeviceInfo.h>
#include <aws/connect/model/HierarchyGroups.h>
#include <aws/connect/model/ParticipantCapabilities.h>
#include <aws/connect/model/StateTransition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about the agent who accepted the contact.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentInfo">AWS
 * API Reference</a></p>
 */
class AgentInfo {
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
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AgentInfo& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the contact was accepted by the agent.</p>
   */
  inline const Aws::Utils::DateTime& GetAcceptedByAgentTimestamp() const { return m_acceptedByAgentTimestamp; }
  inline bool AcceptedByAgentTimestampHasBeenSet() const { return m_acceptedByAgentTimestampHasBeenSet; }
  template <typename AcceptedByAgentTimestampT = Aws::Utils::DateTime>
  void SetAcceptedByAgentTimestamp(AcceptedByAgentTimestampT&& value) {
    m_acceptedByAgentTimestampHasBeenSet = true;
    m_acceptedByAgentTimestamp = std::forward<AcceptedByAgentTimestampT>(value);
  }
  template <typename AcceptedByAgentTimestampT = Aws::Utils::DateTime>
  AgentInfo& WithAcceptedByAgentTimestamp(AcceptedByAgentTimestampT&& value) {
    SetAcceptedByAgentTimestamp(std::forward<AcceptedByAgentTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the agent finished previewing the contact.</p>
   */
  inline const Aws::Utils::DateTime& GetPreviewEndTimestamp() const { return m_previewEndTimestamp; }
  inline bool PreviewEndTimestampHasBeenSet() const { return m_previewEndTimestampHasBeenSet; }
  template <typename PreviewEndTimestampT = Aws::Utils::DateTime>
  void SetPreviewEndTimestamp(PreviewEndTimestampT&& value) {
    m_previewEndTimestampHasBeenSet = true;
    m_previewEndTimestamp = std::forward<PreviewEndTimestampT>(value);
  }
  template <typename PreviewEndTimestampT = Aws::Utils::DateTime>
  AgentInfo& WithPreviewEndTimestamp(PreviewEndTimestampT&& value) {
    SetPreviewEndTimestamp(std::forward<PreviewEndTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the contact was connected to the agent.</p>
   */
  inline const Aws::Utils::DateTime& GetConnectedToAgentTimestamp() const { return m_connectedToAgentTimestamp; }
  inline bool ConnectedToAgentTimestampHasBeenSet() const { return m_connectedToAgentTimestampHasBeenSet; }
  template <typename ConnectedToAgentTimestampT = Aws::Utils::DateTime>
  void SetConnectedToAgentTimestamp(ConnectedToAgentTimestampT&& value) {
    m_connectedToAgentTimestampHasBeenSet = true;
    m_connectedToAgentTimestamp = std::forward<ConnectedToAgentTimestampT>(value);
  }
  template <typename ConnectedToAgentTimestampT = Aws::Utils::DateTime>
  AgentInfo& WithConnectedToAgentTimestamp(ConnectedToAgentTimestampT&& value) {
    SetConnectedToAgentTimestamp(std::forward<ConnectedToAgentTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Agent pause duration for a contact in seconds.</p>
   */
  inline int GetAgentPauseDurationInSeconds() const { return m_agentPauseDurationInSeconds; }
  inline bool AgentPauseDurationInSecondsHasBeenSet() const { return m_agentPauseDurationInSecondsHasBeenSet; }
  inline void SetAgentPauseDurationInSeconds(int value) {
    m_agentPauseDurationInSecondsHasBeenSet = true;
    m_agentPauseDurationInSeconds = value;
  }
  inline AgentInfo& WithAgentPauseDurationInSeconds(int value) {
    SetAgentPauseDurationInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agent hierarchy groups for the agent.</p>
   */
  inline const HierarchyGroups& GetHierarchyGroups() const { return m_hierarchyGroups; }
  inline bool HierarchyGroupsHasBeenSet() const { return m_hierarchyGroupsHasBeenSet; }
  template <typename HierarchyGroupsT = HierarchyGroups>
  void SetHierarchyGroups(HierarchyGroupsT&& value) {
    m_hierarchyGroupsHasBeenSet = true;
    m_hierarchyGroups = std::forward<HierarchyGroupsT>(value);
  }
  template <typename HierarchyGroupsT = HierarchyGroups>
  AgentInfo& WithHierarchyGroups(HierarchyGroupsT&& value) {
    SetHierarchyGroups(std::forward<HierarchyGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information regarding Agent’s device.</p>
   */
  inline const DeviceInfo& GetDeviceInfo() const { return m_deviceInfo; }
  inline bool DeviceInfoHasBeenSet() const { return m_deviceInfoHasBeenSet; }
  template <typename DeviceInfoT = DeviceInfo>
  void SetDeviceInfo(DeviceInfoT&& value) {
    m_deviceInfoHasBeenSet = true;
    m_deviceInfo = std::forward<DeviceInfoT>(value);
  }
  template <typename DeviceInfoT = DeviceInfo>
  AgentInfo& WithDeviceInfo(DeviceInfoT&& value) {
    SetDeviceInfo(std::forward<DeviceInfoT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ParticipantCapabilities& GetCapabilities() const { return m_capabilities; }
  inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
  template <typename CapabilitiesT = ParticipantCapabilities>
  void SetCapabilities(CapabilitiesT&& value) {
    m_capabilitiesHasBeenSet = true;
    m_capabilities = std::forward<CapabilitiesT>(value);
  }
  template <typename CapabilitiesT = ParticipantCapabilities>
  AgentInfo& WithCapabilities(CapabilitiesT&& value) {
    SetCapabilities(std::forward<CapabilitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The difference in time, in whole seconds, between
   * <code>AfterContactWorkStartTimestamp</code> and
   * <code>AfterContactWorkEndTimestamp</code>.</p>
   */
  inline int GetAfterContactWorkDuration() const { return m_afterContactWorkDuration; }
  inline bool AfterContactWorkDurationHasBeenSet() const { return m_afterContactWorkDurationHasBeenSet; }
  inline void SetAfterContactWorkDuration(int value) {
    m_afterContactWorkDurationHasBeenSet = true;
    m_afterContactWorkDuration = value;
  }
  inline AgentInfo& WithAfterContactWorkDuration(int value) {
    SetAfterContactWorkDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the agent started doing After Contact Work for the
   * contact, in UTC time.</p>
   */
  inline const Aws::Utils::DateTime& GetAfterContactWorkStartTimestamp() const { return m_afterContactWorkStartTimestamp; }
  inline bool AfterContactWorkStartTimestampHasBeenSet() const { return m_afterContactWorkStartTimestampHasBeenSet; }
  template <typename AfterContactWorkStartTimestampT = Aws::Utils::DateTime>
  void SetAfterContactWorkStartTimestamp(AfterContactWorkStartTimestampT&& value) {
    m_afterContactWorkStartTimestampHasBeenSet = true;
    m_afterContactWorkStartTimestamp = std::forward<AfterContactWorkStartTimestampT>(value);
  }
  template <typename AfterContactWorkStartTimestampT = Aws::Utils::DateTime>
  AgentInfo& WithAfterContactWorkStartTimestamp(AfterContactWorkStartTimestampT&& value) {
    SetAfterContactWorkStartTimestamp(std::forward<AfterContactWorkStartTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the agent ended After Contact Work for the contact, in
   * UTC time. In cases when agent finishes doing <code>AfterContactWork</code> for
   * chat contacts and switches their activity status to offline or equivalent
   * without clearing the contact in CCP, discrepancies may be noticed for
   * <code>AfterContactWorkEndTimestamp</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetAfterContactWorkEndTimestamp() const { return m_afterContactWorkEndTimestamp; }
  inline bool AfterContactWorkEndTimestampHasBeenSet() const { return m_afterContactWorkEndTimestampHasBeenSet; }
  template <typename AfterContactWorkEndTimestampT = Aws::Utils::DateTime>
  void SetAfterContactWorkEndTimestamp(AfterContactWorkEndTimestampT&& value) {
    m_afterContactWorkEndTimestampHasBeenSet = true;
    m_afterContactWorkEndTimestamp = std::forward<AfterContactWorkEndTimestampT>(value);
  }
  template <typename AfterContactWorkEndTimestampT = Aws::Utils::DateTime>
  AgentInfo& WithAfterContactWorkEndTimestamp(AfterContactWorkEndTimestampT&& value) {
    SetAfterContactWorkEndTimestamp(std::forward<AfterContactWorkEndTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total hold duration in seconds initiated by the agent.</p>
   */
  inline int GetAgentInitiatedHoldDuration() const { return m_agentInitiatedHoldDuration; }
  inline bool AgentInitiatedHoldDurationHasBeenSet() const { return m_agentInitiatedHoldDurationHasBeenSet; }
  inline void SetAgentInitiatedHoldDuration(int value) {
    m_agentInitiatedHoldDurationHasBeenSet = true;
    m_agentInitiatedHoldDuration = value;
  }
  inline AgentInfo& WithAgentInitiatedHoldDuration(int value) {
    SetAgentInitiatedHoldDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of <code>StateTransition</code> for a supervisor.</p>
   */
  inline const Aws::Vector<StateTransition>& GetStateTransitions() const { return m_stateTransitions; }
  inline bool StateTransitionsHasBeenSet() const { return m_stateTransitionsHasBeenSet; }
  template <typename StateTransitionsT = Aws::Vector<StateTransition>>
  void SetStateTransitions(StateTransitionsT&& value) {
    m_stateTransitionsHasBeenSet = true;
    m_stateTransitions = std::forward<StateTransitionsT>(value);
  }
  template <typename StateTransitionsT = Aws::Vector<StateTransition>>
  AgentInfo& WithStateTransitions(StateTransitionsT&& value) {
    SetStateTransitions(std::forward<StateTransitionsT>(value));
    return *this;
  }
  template <typename StateTransitionsT = StateTransition>
  AgentInfo& AddStateTransitions(StateTransitionsT&& value) {
    m_stateTransitionsHasBeenSet = true;
    m_stateTransitions.emplace_back(std::forward<StateTransitionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::Utils::DateTime m_acceptedByAgentTimestamp{};

  Aws::Utils::DateTime m_previewEndTimestamp{};

  Aws::Utils::DateTime m_connectedToAgentTimestamp{};

  int m_agentPauseDurationInSeconds{0};

  HierarchyGroups m_hierarchyGroups;

  DeviceInfo m_deviceInfo;

  ParticipantCapabilities m_capabilities;

  int m_afterContactWorkDuration{0};

  Aws::Utils::DateTime m_afterContactWorkStartTimestamp{};

  Aws::Utils::DateTime m_afterContactWorkEndTimestamp{};

  int m_agentInitiatedHoldDuration{0};

  Aws::Vector<StateTransition> m_stateTransitions;
  bool m_idHasBeenSet = false;
  bool m_acceptedByAgentTimestampHasBeenSet = false;
  bool m_previewEndTimestampHasBeenSet = false;
  bool m_connectedToAgentTimestampHasBeenSet = false;
  bool m_agentPauseDurationInSecondsHasBeenSet = false;
  bool m_hierarchyGroupsHasBeenSet = false;
  bool m_deviceInfoHasBeenSet = false;
  bool m_capabilitiesHasBeenSet = false;
  bool m_afterContactWorkDurationHasBeenSet = false;
  bool m_afterContactWorkStartTimestampHasBeenSet = false;
  bool m_afterContactWorkEndTimestampHasBeenSet = false;
  bool m_agentInitiatedHoldDurationHasBeenSet = false;
  bool m_stateTransitionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
