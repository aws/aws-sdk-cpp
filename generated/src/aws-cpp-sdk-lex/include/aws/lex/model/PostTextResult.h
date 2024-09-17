/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex/model/IntentConfidence.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lex/model/SentimentResponse.h>
#include <aws/lex/model/MessageFormatType.h>
#include <aws/lex/model/DialogState.h>
#include <aws/lex/model/ResponseCard.h>
#include <aws/lex/model/PredictedIntent.h>
#include <aws/lex/model/ActiveContext.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexRuntimeService
{
namespace Model
{
  class PostTextResult
  {
  public:
    AWS_LEXRUNTIMESERVICE_API PostTextResult();
    AWS_LEXRUNTIMESERVICE_API PostTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXRUNTIMESERVICE_API PostTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current user intent that Amazon Lex is aware of.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }
    inline void SetIntentName(const Aws::String& value) { m_intentName = value; }
    inline void SetIntentName(Aws::String&& value) { m_intentName = std::move(value); }
    inline void SetIntentName(const char* value) { m_intentName.assign(value); }
    inline PostTextResult& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}
    inline PostTextResult& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}
    inline PostTextResult& WithIntentName(const char* value) { SetIntentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a score that indicates how confident Amazon Lex is that the returned
     * intent is the one that matches the user's intent. The score is between 0.0 and
     * 1.0. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/confidence-scores.html">Confidence
     * Scores</a>.</p> <p>The score is a relative score, not an absolute score. The
     * score may change based on improvements to Amazon Lex.</p>
     */
    inline const IntentConfidence& GetNluIntentConfidence() const{ return m_nluIntentConfidence; }
    inline void SetNluIntentConfidence(const IntentConfidence& value) { m_nluIntentConfidence = value; }
    inline void SetNluIntentConfidence(IntentConfidence&& value) { m_nluIntentConfidence = std::move(value); }
    inline PostTextResult& WithNluIntentConfidence(const IntentConfidence& value) { SetNluIntentConfidence(value); return *this;}
    inline PostTextResult& WithNluIntentConfidence(IntentConfidence&& value) { SetNluIntentConfidence(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One to four alternative intents that may be applicable to the user's
     * intent.</p> <p>Each alternative includes a score that indicates how confident
     * Amazon Lex is that the intent matches the user's intent. The intents are sorted
     * by the confidence score.</p>
     */
    inline const Aws::Vector<PredictedIntent>& GetAlternativeIntents() const{ return m_alternativeIntents; }
    inline void SetAlternativeIntents(const Aws::Vector<PredictedIntent>& value) { m_alternativeIntents = value; }
    inline void SetAlternativeIntents(Aws::Vector<PredictedIntent>&& value) { m_alternativeIntents = std::move(value); }
    inline PostTextResult& WithAlternativeIntents(const Aws::Vector<PredictedIntent>& value) { SetAlternativeIntents(value); return *this;}
    inline PostTextResult& WithAlternativeIntents(Aws::Vector<PredictedIntent>&& value) { SetAlternativeIntents(std::move(value)); return *this;}
    inline PostTextResult& AddAlternativeIntents(const PredictedIntent& value) { m_alternativeIntents.push_back(value); return *this; }
    inline PostTextResult& AddAlternativeIntents(PredictedIntent&& value) { m_alternativeIntents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSlots() const{ return m_slots; }
    inline void SetSlots(const Aws::Map<Aws::String, Aws::String>& value) { m_slots = value; }
    inline void SetSlots(Aws::Map<Aws::String, Aws::String>&& value) { m_slots = std::move(value); }
    inline PostTextResult& WithSlots(const Aws::Map<Aws::String, Aws::String>& value) { SetSlots(value); return *this;}
    inline PostTextResult& WithSlots(Aws::Map<Aws::String, Aws::String>&& value) { SetSlots(std::move(value)); return *this;}
    inline PostTextResult& AddSlots(const Aws::String& key, const Aws::String& value) { m_slots.emplace(key, value); return *this; }
    inline PostTextResult& AddSlots(Aws::String&& key, const Aws::String& value) { m_slots.emplace(std::move(key), value); return *this; }
    inline PostTextResult& AddSlots(const Aws::String& key, Aws::String&& value) { m_slots.emplace(key, std::move(value)); return *this; }
    inline PostTextResult& AddSlots(Aws::String&& key, Aws::String&& value) { m_slots.emplace(std::move(key), std::move(value)); return *this; }
    inline PostTextResult& AddSlots(const char* key, Aws::String&& value) { m_slots.emplace(key, std::move(value)); return *this; }
    inline PostTextResult& AddSlots(Aws::String&& key, const char* value) { m_slots.emplace(std::move(key), value); return *this; }
    inline PostTextResult& AddSlots(const char* key, const char* value) { m_slots.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributes = value; }
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributes = std::move(value); }
    inline PostTextResult& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}
    inline PostTextResult& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}
    inline PostTextResult& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributes.emplace(key, value); return *this; }
    inline PostTextResult& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributes.emplace(std::move(key), value); return *this; }
    inline PostTextResult& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributes.emplace(key, std::move(value)); return *this; }
    inline PostTextResult& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline PostTextResult& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributes.emplace(key, std::move(value)); return *this; }
    inline PostTextResult& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributes.emplace(std::move(key), value); return *this; }
    inline PostTextResult& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message to convey to the user. The message can come from the bot's
     * configuration or from a Lambda function.</p> <p>If the intent is not configured
     * with a Lambda function, or if the Lambda function returned <code>Delegate</code>
     * as the <code>dialogAction.type</code> its response, Amazon Lex decides on the
     * next course of action and selects an appropriate message from the bot's
     * configuration based on the current interaction context. For example, if Amazon
     * Lex isn't able to understand user input, it uses a clarification prompt
     * message.</p> <p>When you create an intent you can assign messages to groups.
     * When messages are assigned to groups Amazon Lex returns one message from each
     * group in the response. The message field is an escaped JSON string containing
     * the messages. For more information about the structure of the JSON string
     * returned, see <a>msg-prompts-formats</a>.</p> <p>If the Lambda function returns
     * a message, Amazon Lex passes it to the client in its response.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline PostTextResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline PostTextResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline PostTextResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sentiment expressed in and utterance.</p> <p>When the bot is configured
     * to send utterances to Amazon Comprehend for sentiment analysis, this field
     * contains the result of the analysis.</p>
     */
    inline const SentimentResponse& GetSentimentResponse() const{ return m_sentimentResponse; }
    inline void SetSentimentResponse(const SentimentResponse& value) { m_sentimentResponse = value; }
    inline void SetSentimentResponse(SentimentResponse&& value) { m_sentimentResponse = std::move(value); }
    inline PostTextResult& WithSentimentResponse(const SentimentResponse& value) { SetSentimentResponse(value); return *this;}
    inline PostTextResult& WithSentimentResponse(SentimentResponse&& value) { SetSentimentResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format
     * defined by the Lambda function.</p> </li> <li> <p> <code>SSML</code> - The
     * message contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages from the groups that messages were assigned to when the
     * intent was created.</p> </li> </ul>
     */
    inline const MessageFormatType& GetMessageFormat() const{ return m_messageFormat; }
    inline void SetMessageFormat(const MessageFormatType& value) { m_messageFormat = value; }
    inline void SetMessageFormat(MessageFormatType&& value) { m_messageFormat = std::move(value); }
    inline PostTextResult& WithMessageFormat(const MessageFormatType& value) { SetMessageFormat(value); return *this;}
    inline PostTextResult& WithMessageFormat(MessageFormatType&& value) { SetMessageFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Identifies the current state of the user interaction. Amazon Lex returns one
     * of the following values as <code>dialogState</code>. The client can optionally
     * use this information to customize the user interface. </p> <ul> <li> <p>
     * <code>ElicitIntent</code> - Amazon Lex wants to elicit user intent. </p> <p>For
     * example, a user might utter an intent ("I want to order a pizza"). If Amazon Lex
     * cannot infer the user intent from this utterance, it will return this
     * dialogState.</p> </li> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is
     * expecting a "yes" or "no" response. </p> <p> For example, Amazon Lex wants user
     * confirmation before fulfilling an intent. </p> <p>Instead of a simple "yes" or
     * "no," a user might respond with additional information. For example, "yes, but
     * make it thick crust pizza" or "no, I want to order a drink". Amazon Lex can
     * process such additional information (in these examples, update the crust type
     * slot value, or change intent from OrderPizza to OrderDrink).</p> </li> <li> <p>
     * <code>ElicitSlot</code> - Amazon Lex is expecting a slot value for the current
     * intent. </p> <p>For example, suppose that in the response Amazon Lex sends this
     * message: "What size pizza would you like?". A user might reply with the slot
     * value (e.g., "medium"). The user might also provide additional information in
     * the response (e.g., "medium thick crust pizza"). Amazon Lex can process such
     * additional information appropriately. </p> </li> <li> <p> <code>Fulfilled</code>
     * - Conveys that the Lambda function configured for the intent has successfully
     * fulfilled the intent. </p> </li> <li> <p> <code>ReadyForFulfillment</code> -
     * Conveys that the client has to fulfill the intent. </p> </li> <li> <p>
     * <code>Failed</code> - Conveys that the conversation with the user failed. </p>
     * <p> This can happen for various reasons including that the user did not provide
     * an appropriate response to prompts from the service (you can configure how many
     * times Amazon Lex can prompt a user for specific information), or the Lambda
     * function failed to fulfill the intent. </p> </li> </ul>
     */
    inline const DialogState& GetDialogState() const{ return m_dialogState; }
    inline void SetDialogState(const DialogState& value) { m_dialogState = value; }
    inline void SetDialogState(DialogState&& value) { m_dialogState = std::move(value); }
    inline PostTextResult& WithDialogState(const DialogState& value) { SetDialogState(value); return *this;}
    inline PostTextResult& WithDialogState(DialogState&& value) { SetDialogState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline const Aws::String& GetSlotToElicit() const{ return m_slotToElicit; }
    inline void SetSlotToElicit(const Aws::String& value) { m_slotToElicit = value; }
    inline void SetSlotToElicit(Aws::String&& value) { m_slotToElicit = std::move(value); }
    inline void SetSlotToElicit(const char* value) { m_slotToElicit.assign(value); }
    inline PostTextResult& WithSlotToElicit(const Aws::String& value) { SetSlotToElicit(value); return *this;}
    inline PostTextResult& WithSlotToElicit(Aws::String&& value) { SetSlotToElicit(std::move(value)); return *this;}
    inline PostTextResult& WithSlotToElicit(const char* value) { SetSlotToElicit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Response Card can come from the bot configuration (in the Amazon Lex console,
     * choose the settings button next to a slot) or from a code hook (Lambda
     * function). </p>
     */
    inline const ResponseCard& GetResponseCard() const{ return m_responseCard; }
    inline void SetResponseCard(const ResponseCard& value) { m_responseCard = value; }
    inline void SetResponseCard(ResponseCard&& value) { m_responseCard = std::move(value); }
    inline PostTextResult& WithResponseCard(const ResponseCard& value) { SetResponseCard(value); return *this;}
    inline PostTextResult& WithResponseCard(ResponseCard&& value) { SetResponseCard(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline PostTextResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline PostTextResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline PostTextResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that responded to the conversation. You can use this
     * information to help determine if one version of a bot is performing better than
     * another version.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline PostTextResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline PostTextResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline PostTextResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const{ return m_activeContexts; }
    inline void SetActiveContexts(const Aws::Vector<ActiveContext>& value) { m_activeContexts = value; }
    inline void SetActiveContexts(Aws::Vector<ActiveContext>&& value) { m_activeContexts = std::move(value); }
    inline PostTextResult& WithActiveContexts(const Aws::Vector<ActiveContext>& value) { SetActiveContexts(value); return *this;}
    inline PostTextResult& WithActiveContexts(Aws::Vector<ActiveContext>&& value) { SetActiveContexts(std::move(value)); return *this;}
    inline PostTextResult& AddActiveContexts(const ActiveContext& value) { m_activeContexts.push_back(value); return *this; }
    inline PostTextResult& AddActiveContexts(ActiveContext&& value) { m_activeContexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PostTextResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PostTextResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PostTextResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_intentName;

    IntentConfidence m_nluIntentConfidence;

    Aws::Vector<PredictedIntent> m_alternativeIntents;

    Aws::Map<Aws::String, Aws::String> m_slots;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;

    Aws::String m_message;

    SentimentResponse m_sentimentResponse;

    MessageFormatType m_messageFormat;

    DialogState m_dialogState;

    Aws::String m_slotToElicit;

    ResponseCard m_responseCard;

    Aws::String m_sessionId;

    Aws::String m_botVersion;

    Aws::Vector<ActiveContext> m_activeContexts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
