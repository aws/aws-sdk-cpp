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
    AWS_CONNECT_API AgentContactReference();
    AWS_CONNECT_API AgentContactReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentContactReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline AgentContactReference& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline AgentContactReference& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline AgentContactReference& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The channel of the contact.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }

    /**
     * <p>The channel of the contact.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>The channel of the contact.</p>
     */
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>The channel of the contact.</p>
     */
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>The channel of the contact.</p>
     */
    inline AgentContactReference& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    /**
     * <p>The channel of the contact.</p>
     */
    inline AgentContactReference& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p>How the contact was initiated.</p>
     */
    inline const ContactInitiationMethod& GetInitiationMethod() const{ return m_initiationMethod; }

    /**
     * <p>How the contact was initiated.</p>
     */
    inline bool InitiationMethodHasBeenSet() const { return m_initiationMethodHasBeenSet; }

    /**
     * <p>How the contact was initiated.</p>
     */
    inline void SetInitiationMethod(const ContactInitiationMethod& value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = value; }

    /**
     * <p>How the contact was initiated.</p>
     */
    inline void SetInitiationMethod(ContactInitiationMethod&& value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = std::move(value); }

    /**
     * <p>How the contact was initiated.</p>
     */
    inline AgentContactReference& WithInitiationMethod(const ContactInitiationMethod& value) { SetInitiationMethod(value); return *this;}

    /**
     * <p>How the contact was initiated.</p>
     */
    inline AgentContactReference& WithInitiationMethod(ContactInitiationMethod&& value) { SetInitiationMethod(std::move(value)); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">state
     * of the contact</a>.</p>
     */
    inline const ContactState& GetAgentContactState() const{ return m_agentContactState; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">state
     * of the contact</a>.</p>
     */
    inline bool AgentContactStateHasBeenSet() const { return m_agentContactStateHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">state
     * of the contact</a>.</p>
     */
    inline void SetAgentContactState(const ContactState& value) { m_agentContactStateHasBeenSet = true; m_agentContactState = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">state
     * of the contact</a>.</p>
     */
    inline void SetAgentContactState(ContactState&& value) { m_agentContactStateHasBeenSet = true; m_agentContactState = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">state
     * of the contact</a>.</p>
     */
    inline AgentContactReference& WithAgentContactState(const ContactState& value) { SetAgentContactState(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">state
     * of the contact</a>.</p>
     */
    inline AgentContactReference& WithAgentContactState(ContactState&& value) { SetAgentContactState(std::move(value)); return *this;}


    /**
     * <p>The epoch timestamp when the contact state started.</p>
     */
    inline const Aws::Utils::DateTime& GetStateStartTimestamp() const{ return m_stateStartTimestamp; }

    /**
     * <p>The epoch timestamp when the contact state started.</p>
     */
    inline bool StateStartTimestampHasBeenSet() const { return m_stateStartTimestampHasBeenSet; }

    /**
     * <p>The epoch timestamp when the contact state started.</p>
     */
    inline void SetStateStartTimestamp(const Aws::Utils::DateTime& value) { m_stateStartTimestampHasBeenSet = true; m_stateStartTimestamp = value; }

    /**
     * <p>The epoch timestamp when the contact state started.</p>
     */
    inline void SetStateStartTimestamp(Aws::Utils::DateTime&& value) { m_stateStartTimestampHasBeenSet = true; m_stateStartTimestamp = std::move(value); }

    /**
     * <p>The epoch timestamp when the contact state started.</p>
     */
    inline AgentContactReference& WithStateStartTimestamp(const Aws::Utils::DateTime& value) { SetStateStartTimestamp(value); return *this;}

    /**
     * <p>The epoch timestamp when the contact state started.</p>
     */
    inline AgentContactReference& WithStateStartTimestamp(Aws::Utils::DateTime&& value) { SetStateStartTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the contact was connected to an agent.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedToAgentTimestamp() const{ return m_connectedToAgentTimestamp; }

    /**
     * <p>The time at which the contact was connected to an agent.</p>
     */
    inline bool ConnectedToAgentTimestampHasBeenSet() const { return m_connectedToAgentTimestampHasBeenSet; }

    /**
     * <p>The time at which the contact was connected to an agent.</p>
     */
    inline void SetConnectedToAgentTimestamp(const Aws::Utils::DateTime& value) { m_connectedToAgentTimestampHasBeenSet = true; m_connectedToAgentTimestamp = value; }

    /**
     * <p>The time at which the contact was connected to an agent.</p>
     */
    inline void SetConnectedToAgentTimestamp(Aws::Utils::DateTime&& value) { m_connectedToAgentTimestampHasBeenSet = true; m_connectedToAgentTimestamp = std::move(value); }

    /**
     * <p>The time at which the contact was connected to an agent.</p>
     */
    inline AgentContactReference& WithConnectedToAgentTimestamp(const Aws::Utils::DateTime& value) { SetConnectedToAgentTimestamp(value); return *this;}

    /**
     * <p>The time at which the contact was connected to an agent.</p>
     */
    inline AgentContactReference& WithConnectedToAgentTimestamp(Aws::Utils::DateTime&& value) { SetConnectedToAgentTimestamp(std::move(value)); return *this;}


    
    inline const QueueReference& GetQueue() const{ return m_queue; }

    
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }

    
    inline void SetQueue(const QueueReference& value) { m_queueHasBeenSet = true; m_queue = value; }

    
    inline void SetQueue(QueueReference&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    
    inline AgentContactReference& WithQueue(const QueueReference& value) { SetQueue(value); return *this;}

    
    inline AgentContactReference& WithQueue(QueueReference&& value) { SetQueue(std::move(value)); return *this;}

  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Channel m_channel;
    bool m_channelHasBeenSet = false;

    ContactInitiationMethod m_initiationMethod;
    bool m_initiationMethodHasBeenSet = false;

    ContactState m_agentContactState;
    bool m_agentContactStateHasBeenSet = false;

    Aws::Utils::DateTime m_stateStartTimestamp;
    bool m_stateStartTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_connectedToAgentTimestamp;
    bool m_connectedToAgentTimestampHasBeenSet = false;

    QueueReference m_queue;
    bool m_queueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
