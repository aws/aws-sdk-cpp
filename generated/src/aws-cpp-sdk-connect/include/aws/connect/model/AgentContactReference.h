/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/ContactInitiationMethod.h>
#include <aws/connect/model/ContactState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/QueueReference.h>
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
   * <p>Information about the <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_Contact.html">contact</a>
   * associated to the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentContactReference">AWS
   * API Reference</a></p>
   */
  class AgentContactReference
  {
  public:
    AWS_CONNECT_API AgentContactReference() = default;
    AWS_CONNECT_API AgentContactReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentContactReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    AgentContactReference& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel of the contact.</p>
     */
    inline Channel GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(Channel value) { m_channelHasBeenSet = true; m_channel = value; }
    inline AgentContactReference& WithChannel(Channel value) { SetChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the contact was initiated.</p>
     */
    inline ContactInitiationMethod GetInitiationMethod() const { return m_initiationMethod; }
    inline bool InitiationMethodHasBeenSet() const { return m_initiationMethodHasBeenSet; }
    inline void SetInitiationMethod(ContactInitiationMethod value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = value; }
    inline AgentContactReference& WithInitiationMethod(ContactInitiationMethod value) { SetInitiationMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">state
     * of the contact</a>.</p>  <p>When <code>AgentContactState</code> is set to
     * <code>CONNECTED_ONHOLD</code>, <code>StateStartTimestamp</code> is not changed.
     * Instead, <code>StateStartTimestamp</code> reflects the time the contact was
     * <code>CONNECTED</code> to the agent.</p> 
     */
    inline ContactState GetAgentContactState() const { return m_agentContactState; }
    inline bool AgentContactStateHasBeenSet() const { return m_agentContactStateHasBeenSet; }
    inline void SetAgentContactState(ContactState value) { m_agentContactStateHasBeenSet = true; m_agentContactState = value; }
    inline AgentContactReference& WithAgentContactState(ContactState value) { SetAgentContactState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch timestamp when the contact state started.</p>
     */
    inline const Aws::Utils::DateTime& GetStateStartTimestamp() const { return m_stateStartTimestamp; }
    inline bool StateStartTimestampHasBeenSet() const { return m_stateStartTimestampHasBeenSet; }
    template<typename StateStartTimestampT = Aws::Utils::DateTime>
    void SetStateStartTimestamp(StateStartTimestampT&& value) { m_stateStartTimestampHasBeenSet = true; m_stateStartTimestamp = std::forward<StateStartTimestampT>(value); }
    template<typename StateStartTimestampT = Aws::Utils::DateTime>
    AgentContactReference& WithStateStartTimestamp(StateStartTimestampT&& value) { SetStateStartTimestamp(std::forward<StateStartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the contact was connected to an agent.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedToAgentTimestamp() const { return m_connectedToAgentTimestamp; }
    inline bool ConnectedToAgentTimestampHasBeenSet() const { return m_connectedToAgentTimestampHasBeenSet; }
    template<typename ConnectedToAgentTimestampT = Aws::Utils::DateTime>
    void SetConnectedToAgentTimestamp(ConnectedToAgentTimestampT&& value) { m_connectedToAgentTimestampHasBeenSet = true; m_connectedToAgentTimestamp = std::forward<ConnectedToAgentTimestampT>(value); }
    template<typename ConnectedToAgentTimestampT = Aws::Utils::DateTime>
    AgentContactReference& WithConnectedToAgentTimestamp(ConnectedToAgentTimestampT&& value) { SetConnectedToAgentTimestamp(std::forward<ConnectedToAgentTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const QueueReference& GetQueue() const { return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    template<typename QueueT = QueueReference>
    void SetQueue(QueueT&& value) { m_queueHasBeenSet = true; m_queue = std::forward<QueueT>(value); }
    template<typename QueueT = QueueReference>
    AgentContactReference& WithQueue(QueueT&& value) { SetQueue(std::forward<QueueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Channel m_channel{Channel::NOT_SET};
    bool m_channelHasBeenSet = false;

    ContactInitiationMethod m_initiationMethod{ContactInitiationMethod::NOT_SET};
    bool m_initiationMethodHasBeenSet = false;

    ContactState m_agentContactState{ContactState::NOT_SET};
    bool m_agentContactStateHasBeenSet = false;

    Aws::Utils::DateTime m_stateStartTimestamp{};
    bool m_stateStartTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_connectedToAgentTimestamp{};
    bool m_connectedToAgentTimestampHasBeenSet = false;

    QueueReference m_queue;
    bool m_queueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
