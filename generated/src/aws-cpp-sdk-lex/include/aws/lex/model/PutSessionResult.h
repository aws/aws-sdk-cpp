/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex/model/MessageFormatType.h>
#include <aws/lex/model/DialogState.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace LexRuntimeService
{
namespace Model
{
  class PutSessionResult
  {
  public:
    AWS_LEXRUNTIMESERVICE_API PutSessionResult() = default;
    AWS_LEXRUNTIMESERVICE_API PutSessionResult(PutSessionResult&&) = default;
    AWS_LEXRUNTIMESERVICE_API PutSessionResult& operator=(PutSessionResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    PutSessionResult(const PutSessionResult&) = delete;
    PutSessionResult& operator=(const PutSessionResult&) = delete;


    AWS_LEXRUNTIMESERVICE_API PutSessionResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LEXRUNTIMESERVICE_API PutSessionResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Content type as specified in the <code>Accept</code> HTTP header in the
     * request.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    PutSessionResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the current intent.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    PutSessionResult& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of zero or more intent slots Amazon Lex detected from the user input
     * during the conversation.</p> <p>Amazon Lex creates a resolution list containing
     * likely values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code> the default is <code>ORIGINAL_VALUE</code>.
     * </p>
     */
    inline const Aws::String& GetSlots() const { return m_slots; }
    template<typename SlotsT = Aws::String>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::String>
    PutSessionResult& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of key/value pairs representing session-specific context information.</p>
     */
    inline const Aws::String& GetSessionAttributes() const { return m_sessionAttributes; }
    template<typename SessionAttributesT = Aws::String>
    void SetSessionAttributes(SessionAttributesT&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::forward<SessionAttributesT>(value); }
    template<typename SessionAttributesT = Aws::String>
    PutSessionResult& WithSessionAttributes(SessionAttributesT&& value) { SetSessionAttributes(std::forward<SessionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next message that should be presented to the user.</p> <p>The
     * <code>encodedMessage</code> field is base-64 encoded. You must decode the field
     * before you can use the value.</p>
     */
    inline const Aws::String& GetEncodedMessage() const { return m_encodedMessage; }
    template<typename EncodedMessageT = Aws::String>
    void SetEncodedMessage(EncodedMessageT&& value) { m_encodedMessageHasBeenSet = true; m_encodedMessage = std::forward<EncodedMessageT>(value); }
    template<typename EncodedMessageT = Aws::String>
    PutSessionResult& WithEncodedMessage(EncodedMessageT&& value) { SetEncodedMessage(std::forward<EncodedMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format for
     * the client.</p> </li> <li> <p> <code>SSML</code> - The message contains text
     * formatted for voice output.</p> </li> <li> <p> <code>Composite</code> - The
     * message contains an escaped JSON object containing one or more messages from the
     * groups that messages were assigned to when the intent was created.</p> </li>
     * </ul>
     */
    inline MessageFormatType GetMessageFormat() const { return m_messageFormat; }
    inline void SetMessageFormat(MessageFormatType value) { m_messageFormatHasBeenSet = true; m_messageFormat = value; }
    inline PutSessionResult& WithMessageFormat(MessageFormatType value) { SetMessageFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/> <ul> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is expecting a "yes"
     * or "no" response to confirm the intent before fulfilling an intent.</p> </li>
     * <li> <p> <code>ElicitIntent</code> - Amazon Lex wants to elicit the user's
     * intent.</p> </li> <li> <p> <code>ElicitSlot</code> - Amazon Lex is expecting the
     * value of a slot for the current intent.</p> </li> <li> <p> <code>Failed</code> -
     * Conveys that the conversation with the user has failed. This can happen for
     * various reasons, including the user does not provide an appropriate response to
     * prompts from the service, or if the Lambda function fails to fulfill the
     * intent.</p> </li> <li> <p> <code>Fulfilled</code> - Conveys that the Lambda
     * function has sucessfully fulfilled the intent.</p> </li> <li> <p>
     * <code>ReadyForFulfillment</code> - Conveys that the client has to fulfill the
     * intent.</p> </li> </ul>
     */
    inline DialogState GetDialogState() const { return m_dialogState; }
    inline void SetDialogState(DialogState value) { m_dialogStateHasBeenSet = true; m_dialogState = value; }
    inline PutSessionResult& WithDialogState(DialogState value) { SetDialogState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>dialogState</code> is <code>ElicitSlot</code>, returns the name
     * of the slot for which Amazon Lex is eliciting a value.</p>
     */
    inline const Aws::String& GetSlotToElicit() const { return m_slotToElicit; }
    template<typename SlotToElicitT = Aws::String>
    void SetSlotToElicit(SlotToElicitT&& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = std::forward<SlotToElicitT>(value); }
    template<typename SlotToElicitT = Aws::String>
    PutSessionResult& WithSlotToElicit(SlotToElicitT&& value) { SetSlotToElicit(std::forward<SlotToElicitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audio version of the message to convey to the user.</p>
     */
    inline Aws::IOStream& GetAudioStream() const { return m_audioStream.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_audioStream = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>A unique identifier for the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    PutSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of active contexts for the session.</p>
     */
    inline const Aws::String& GetActiveContexts() const { return m_activeContexts; }
    template<typename ActiveContextsT = Aws::String>
    void SetActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::forward<ActiveContextsT>(value); }
    template<typename ActiveContextsT = Aws::String>
    PutSessionResult& WithActiveContexts(ActiveContextsT&& value) { SetActiveContexts(std::forward<ActiveContextsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::String m_slots;
    bool m_slotsHasBeenSet = false;

    Aws::String m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;

    Aws::String m_encodedMessage;
    bool m_encodedMessageHasBeenSet = false;

    MessageFormatType m_messageFormat{MessageFormatType::NOT_SET};
    bool m_messageFormatHasBeenSet = false;

    DialogState m_dialogState{DialogState::NOT_SET};
    bool m_dialogStateHasBeenSet = false;

    Aws::String m_slotToElicit;
    bool m_slotToElicitHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_audioStream{};
    bool m_audioStreamHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_activeContexts;
    bool m_activeContextsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
