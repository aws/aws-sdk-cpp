/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/Message.h>
#include <utility>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

  /**
   */
  class BatchPutMessageRequest : public IoTEventsDataRequest
  {
  public:
    AWS_IOTEVENTSDATA_API BatchPutMessageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutMessage"; }

    AWS_IOTEVENTSDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of messages to send. Each message has the following format: <code>'{
     * "messageId": "string", "inputName": "string", "payload": "string"}'</code> </p>
     */
    inline const Aws::Vector<Message>& GetMessages() const { return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    template<typename MessagesT = Aws::Vector<Message>>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::Vector<Message>>
    BatchPutMessageRequest& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    template<typename MessagesT = Message>
    BatchPutMessageRequest& AddMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages.emplace_back(std::forward<MessagesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
