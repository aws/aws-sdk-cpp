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
  class PostContentResult
  {
  public:
    AWS_LEXRUNTIMESERVICE_API PostContentResult() = default;
    AWS_LEXRUNTIMESERVICE_API PostContentResult(PostContentResult&&) = default;
    AWS_LEXRUNTIMESERVICE_API PostContentResult& operator=(PostContentResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    PostContentResult(const PostContentResult&) = delete;
    PostContentResult& operator=(const PostContentResult&) = delete;


    AWS_LEXRUNTIMESERVICE_API PostContentResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LEXRUNTIMESERVICE_API PostContentResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Content type as specified in the <code>Accept</code> HTTP header in the
     * request.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    PostContentResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current user intent that Amazon Lex is aware of.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    PostContentResult& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a score that indicates how confident Amazon Lex is that the returned
     * intent is the one that matches the user's intent. The score is between 0.0 and
     * 1.0.</p> <p>The score is a relative score, not an absolute score. The score may
     * change based on improvements to Amazon Lex. </p>
     */
    inline const Aws::String& GetNluIntentConfidence() const { return m_nluIntentConfidence; }
    template<typename NluIntentConfidenceT = Aws::String>
    void SetNluIntentConfidence(NluIntentConfidenceT&& value) { m_nluIntentConfidenceHasBeenSet = true; m_nluIntentConfidence = std::forward<NluIntentConfidenceT>(value); }
    template<typename NluIntentConfidenceT = Aws::String>
    PostContentResult& WithNluIntentConfidence(NluIntentConfidenceT&& value) { SetNluIntentConfidence(std::forward<NluIntentConfidenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One to four alternative intents that may be applicable to the user's
     * intent.</p> <p>Each alternative includes a score that indicates how confident
     * Amazon Lex is that the intent matches the user's intent. The intents are sorted
     * by the confidence score.</p>
     */
    inline const Aws::String& GetAlternativeIntents() const { return m_alternativeIntents; }
    template<typename AlternativeIntentsT = Aws::String>
    void SetAlternativeIntents(AlternativeIntentsT&& value) { m_alternativeIntentsHasBeenSet = true; m_alternativeIntents = std::forward<AlternativeIntentsT>(value); }
    template<typename AlternativeIntentsT = Aws::String>
    PostContentResult& WithAlternativeIntents(AlternativeIntentsT&& value) { SetAlternativeIntents(std::forward<AlternativeIntentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of zero or more intent slots (name/value pairs) Amazon Lex detected from
     * the user input during the conversation. The field is base-64 encoded.</p>
     * <p>Amazon Lex creates a resolution list containing likely values for a slot. The
     * value that it returns is determined by the <code>valueSelectionStrategy</code>
     * selected when the slot type was created or updated. If
     * <code>valueSelectionStrategy</code> is set to <code>ORIGINAL_VALUE</code>, the
     * value provided by the user is returned, if the user value is similar to the slot
     * values. If <code>valueSelectionStrategy</code> is set to
     * <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the resolution
     * list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline const Aws::String& GetSlots() const { return m_slots; }
    template<typename SlotsT = Aws::String>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::String>
    PostContentResult& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Map of key/value pairs representing the session-specific context
     * information. </p>
     */
    inline const Aws::String& GetSessionAttributes() const { return m_sessionAttributes; }
    template<typename SessionAttributesT = Aws::String>
    void SetSessionAttributes(SessionAttributesT&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::forward<SessionAttributesT>(value); }
    template<typename SessionAttributesT = Aws::String>
    PostContentResult& WithSessionAttributes(SessionAttributesT&& value) { SetSessionAttributes(std::forward<SessionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sentiment expressed in an utterance.</p> <p>When the bot is configured to
     * send utterances to Amazon Comprehend for sentiment analysis, this field contains
     * the result of the analysis.</p>
     */
    inline const Aws::String& GetSentimentResponse() const { return m_sentimentResponse; }
    template<typename SentimentResponseT = Aws::String>
    void SetSentimentResponse(SentimentResponseT&& value) { m_sentimentResponseHasBeenSet = true; m_sentimentResponse = std::forward<SentimentResponseT>(value); }
    template<typename SentimentResponseT = Aws::String>
    PostContentResult& WithSentimentResponse(SentimentResponseT&& value) { SetSentimentResponse(std::forward<SentimentResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to convey to the user. The message can come from the bot's
     * configuration or from a Lambda function.</p> <p>If the intent is not configured
     * with a Lambda function, or if the Lambda function returned <code>Delegate</code>
     * as the <code>dialogAction.type</code> in its response, Amazon Lex decides on the
     * next course of action and selects an appropriate message from the bot's
     * configuration based on the current interaction context. For example, if Amazon
     * Lex isn't able to understand user input, it uses a clarification prompt
     * message.</p> <p>When you create an intent you can assign messages to groups.
     * When messages are assigned to groups Amazon Lex returns one message from each
     * group in the response. The message field is an escaped JSON string containing
     * the messages. For more information about the structure of the JSON string
     * returned, see <a>msg-prompts-formats</a>.</p> <p>If the Lambda function returns
     * a message, Amazon Lex passes it to the client in its response.</p> <p>The
     * <code>encodedMessage</code> field is base-64 encoded. You must decode the field
     * before you can use the value.</p>
     */
    inline const Aws::String& GetEncodedMessage() const { return m_encodedMessage; }
    template<typename EncodedMessageT = Aws::String>
    void SetEncodedMessage(EncodedMessageT&& value) { m_encodedMessageHasBeenSet = true; m_encodedMessage = std::forward<EncodedMessageT>(value); }
    template<typename EncodedMessageT = Aws::String>
    PostContentResult& WithEncodedMessage(EncodedMessageT&& value) { SetEncodedMessage(std::forward<EncodedMessageT>(value)); return *this;}
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
    inline PostContentResult& WithMessageFormat(MessageFormatType value) { SetMessageFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the current state of the user interaction. Amazon Lex returns one
     * of the following values as <code>dialogState</code>. The client can optionally
     * use this information to customize the user interface. </p> <ul> <li> <p>
     * <code>ElicitIntent</code> - Amazon Lex wants to elicit the user's intent.
     * Consider the following examples: </p> <p> For example, a user might utter an
     * intent ("I want to order a pizza"). If Amazon Lex cannot infer the user intent
     * from this utterance, it will return this dialog state. </p> </li> <li> <p>
     * <code>ConfirmIntent</code> - Amazon Lex is expecting a "yes" or "no" response.
     * </p> <p>For example, Amazon Lex wants user confirmation before fulfilling an
     * intent. Instead of a simple "yes" or "no" response, a user might respond with
     * additional information. For example, "yes, but make it a thick crust pizza" or
     * "no, I want to order a drink." Amazon Lex can process such additional
     * information (in these examples, update the crust type slot or change the intent
     * from OrderPizza to OrderDrink). </p> </li> <li> <p> <code>ElicitSlot</code> -
     * Amazon Lex is expecting the value of a slot for the current intent. </p> <p> For
     * example, suppose that in the response Amazon Lex sends this message: "What size
     * pizza would you like?". A user might reply with the slot value (e.g., "medium").
     * The user might also provide additional information in the response (e.g.,
     * "medium thick crust pizza"). Amazon Lex can process such additional information
     * appropriately. </p> </li> <li> <p> <code>Fulfilled</code> - Conveys that the
     * Lambda function has successfully fulfilled the intent. </p> </li> <li> <p>
     * <code>ReadyForFulfillment</code> - Conveys that the client has to fulfill the
     * request. </p> </li> <li> <p> <code>Failed</code> - Conveys that the conversation
     * with the user failed. </p> <p> This can happen for various reasons, including
     * that the user does not provide an appropriate response to prompts from the
     * service (you can configure how many times Amazon Lex can prompt a user for
     * specific information), or if the Lambda function fails to fulfill the intent.
     * </p> </li> </ul>
     */
    inline DialogState GetDialogState() const { return m_dialogState; }
    inline void SetDialogState(DialogState value) { m_dialogStateHasBeenSet = true; m_dialogState = value; }
    inline PostContentResult& WithDialogState(DialogState value) { SetDialogState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the <code>dialogState</code> value is <code>ElicitSlot</code>, returns
     * the name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline const Aws::String& GetSlotToElicit() const { return m_slotToElicit; }
    template<typename SlotToElicitT = Aws::String>
    void SetSlotToElicit(SlotToElicitT&& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = std::forward<SlotToElicitT>(value); }
    template<typename SlotToElicitT = Aws::String>
    PostContentResult& WithSlotToElicit(SlotToElicitT&& value) { SetSlotToElicit(std::forward<SlotToElicitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text used to process the request.</p> <p>If the input was an audio
     * stream, the <code>encodedInputTranscript</code> field contains the text
     * extracted from the audio stream. This is the text that is actually processed to
     * recognize intents and slot values. You can use this information to determine if
     * Amazon Lex is correctly processing the audio that you send.</p> <p>The
     * <code>encodedInputTranscript</code> field is base-64 encoded. You must decode
     * the field before you can use the value.</p>
     */
    inline const Aws::String& GetEncodedInputTranscript() const { return m_encodedInputTranscript; }
    template<typename EncodedInputTranscriptT = Aws::String>
    void SetEncodedInputTranscript(EncodedInputTranscriptT&& value) { m_encodedInputTranscriptHasBeenSet = true; m_encodedInputTranscript = std::forward<EncodedInputTranscriptT>(value); }
    template<typename EncodedInputTranscriptT = Aws::String>
    PostContentResult& WithEncodedInputTranscript(EncodedInputTranscriptT&& value) { SetEncodedInputTranscript(std::forward<EncodedInputTranscriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt (or statement) to convey to the user. This is based on the bot
     * configuration and context. For example, if Amazon Lex did not understand the
     * user intent, it sends the <code>clarificationPrompt</code> configured for the
     * bot. If the intent requires confirmation before taking the fulfillment action,
     * it sends the <code>confirmationPrompt</code>. Another example: Suppose that the
     * Lambda function successfully fulfilled the intent, and sent a message to convey
     * to the user. Then Amazon Lex sends that message in the response. </p>
     */
    inline Aws::IOStream& GetAudioStream() const { return m_audioStream.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_audioStream = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The version of the bot that responded to the conversation. You can use this
     * information to help determine if one version of a bot is performing better than
     * another version.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    PostContentResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    PostContentResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline const Aws::String& GetActiveContexts() const { return m_activeContexts; }
    template<typename ActiveContextsT = Aws::String>
    void SetActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::forward<ActiveContextsT>(value); }
    template<typename ActiveContextsT = Aws::String>
    PostContentResult& WithActiveContexts(ActiveContextsT&& value) { SetActiveContexts(std::forward<ActiveContextsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PostContentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::String m_nluIntentConfidence;
    bool m_nluIntentConfidenceHasBeenSet = false;

    Aws::String m_alternativeIntents;
    bool m_alternativeIntentsHasBeenSet = false;

    Aws::String m_slots;
    bool m_slotsHasBeenSet = false;

    Aws::String m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;

    Aws::String m_sentimentResponse;
    bool m_sentimentResponseHasBeenSet = false;

    Aws::String m_encodedMessage;
    bool m_encodedMessageHasBeenSet = false;

    MessageFormatType m_messageFormat{MessageFormatType::NOT_SET};
    bool m_messageFormatHasBeenSet = false;

    DialogState m_dialogState{DialogState::NOT_SET};
    bool m_dialogStateHasBeenSet = false;

    Aws::String m_slotToElicit;
    bool m_slotToElicitHasBeenSet = false;

    Aws::String m_encodedInputTranscript;
    bool m_encodedInputTranscriptHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_audioStream{};
    bool m_audioStreamHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

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
