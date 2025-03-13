/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ChatEvent.h>
#include <aws/connect/model/NewSessionDetails.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class SendChatIntegrationEventRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API SendChatIntegrationEventRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendChatIntegrationEvent"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>External identifier of chat customer participant, used in part to uniquely
     * identify a chat. For SMS, this is the E164 phone number of the chat customer
     * participant.</p>
     */
    inline const Aws::String& GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    template<typename SourceIdT = Aws::String>
    void SetSourceId(SourceIdT&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::forward<SourceIdT>(value); }
    template<typename SourceIdT = Aws::String>
    SendChatIntegrationEventRequest& WithSourceId(SourceIdT&& value) { SetSourceId(std::forward<SourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Chat system identifier, used in part to uniquely identify chat. This is
     * associated with the Amazon Connect instance and flow to be used to start chats.
     * For Server Migration Service, this is the phone number destination of inbound
     * Server Migration Service messages represented by an Amazon Web Services End User
     * Messaging phone number ARN.</p>
     */
    inline const Aws::String& GetDestinationId() const { return m_destinationId; }
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }
    template<typename DestinationIdT = Aws::String>
    void SetDestinationId(DestinationIdT&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::forward<DestinationIdT>(value); }
    template<typename DestinationIdT = Aws::String>
    SendChatIntegrationEventRequest& WithDestinationId(DestinationIdT&& value) { SetDestinationId(std::forward<DestinationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Classification of a channel. This is used in part to uniquely identify chat.
     * </p> <p>Valid value: <code>["connect:sms", connect:"WhatsApp"]</code> </p>
     */
    inline const Aws::String& GetSubtype() const { return m_subtype; }
    inline bool SubtypeHasBeenSet() const { return m_subtypeHasBeenSet; }
    template<typename SubtypeT = Aws::String>
    void SetSubtype(SubtypeT&& value) { m_subtypeHasBeenSet = true; m_subtype = std::forward<SubtypeT>(value); }
    template<typename SubtypeT = Aws::String>
    SendChatIntegrationEventRequest& WithSubtype(SubtypeT&& value) { SetSubtype(std::forward<SubtypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Chat integration event payload</p>
     */
    inline const ChatEvent& GetEvent() const { return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    template<typename EventT = ChatEvent>
    void SetEvent(EventT&& value) { m_eventHasBeenSet = true; m_event = std::forward<EventT>(value); }
    template<typename EventT = ChatEvent>
    SendChatIntegrationEventRequest& WithEvent(EventT&& value) { SetEvent(std::forward<EventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contact properties to apply when starting a new chat. If the integration
     * event is handled with an existing chat, this is ignored.</p>
     */
    inline const NewSessionDetails& GetNewSessionDetails() const { return m_newSessionDetails; }
    inline bool NewSessionDetailsHasBeenSet() const { return m_newSessionDetailsHasBeenSet; }
    template<typename NewSessionDetailsT = NewSessionDetails>
    void SetNewSessionDetails(NewSessionDetailsT&& value) { m_newSessionDetailsHasBeenSet = true; m_newSessionDetails = std::forward<NewSessionDetailsT>(value); }
    template<typename NewSessionDetailsT = NewSessionDetails>
    SendChatIntegrationEventRequest& WithNewSessionDetails(NewSessionDetailsT&& value) { SetNewSessionDetails(std::forward<NewSessionDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet = false;

    Aws::String m_subtype;
    bool m_subtypeHasBeenSet = false;

    ChatEvent m_event;
    bool m_eventHasBeenSet = false;

    NewSessionDetails m_newSessionDetails;
    bool m_newSessionDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
