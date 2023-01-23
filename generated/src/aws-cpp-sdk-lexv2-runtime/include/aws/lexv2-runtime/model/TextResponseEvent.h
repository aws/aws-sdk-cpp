/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-runtime/model/Message.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>The event sent from Amazon Lex V2 to your application with text to present to
   * the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/TextResponseEvent">AWS
   * API Reference</a></p>
   */
  class TextResponseEvent
  {
  public:
    AWS_LEXRUNTIMEV2_API TextResponseEvent();
    AWS_LEXRUNTIMEV2_API TextResponseEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API TextResponseEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of messages to send to the user. Messages are ordered based on the
     * order that you returned the messages from your Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>A list of messages to send to the user. Messages are ordered based on the
     * order that you returned the messages from your Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p>A list of messages to send to the user. Messages are ordered based on the
     * order that you returned the messages from your Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>A list of messages to send to the user. Messages are ordered based on the
     * order that you returned the messages from your Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>A list of messages to send to the user. Messages are ordered based on the
     * order that you returned the messages from your Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline TextResponseEvent& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>A list of messages to send to the user. Messages are ordered based on the
     * order that you returned the messages from your Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline TextResponseEvent& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>A list of messages to send to the user. Messages are ordered based on the
     * order that you returned the messages from your Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline TextResponseEvent& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>A list of messages to send to the user. Messages are ordered based on the
     * order that you returned the messages from your Lambda function or the order that
     * the messages are defined in the bot.</p>
     */
    inline TextResponseEvent& AddMessages(Message&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline TextResponseEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline TextResponseEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline TextResponseEvent& WithEventId(const char* value) { SetEventId(value); return *this;}

  private:

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
