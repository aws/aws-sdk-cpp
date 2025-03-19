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
    AWS_LEXRUNTIMESERVICE_API PostTextResult() = default;
    AWS_LEXRUNTIMESERVICE_API PostTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXRUNTIMESERVICE_API PostTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current user intent that Amazon Lex is aware of.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    PostTextResult& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
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
    inline const IntentConfidence& GetNluIntentConfidence() const { return m_nluIntentConfidence; }
    template<typename NluIntentConfidenceT = IntentConfidence>
    void SetNluIntentConfidence(NluIntentConfidenceT&& value) { m_nluIntentConfidenceHasBeenSet = true; m_nluIntentConfidence = std::forward<NluIntentConfidenceT>(value); }
    template<typename NluIntentConfidenceT = IntentConfidence>
    PostTextResult& WithNluIntentConfidence(NluIntentConfidenceT&& value) { SetNluIntentConfidence(std::forward<NluIntentConfidenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One to four alternative intents that may be applicable to the user's
     * intent.</p> <p>Each alternative includes a score that indicates how confident
     * Amazon Lex is that the intent matches the user's intent. The intents are sorted
     * by the confidence score.</p>
     */
    inline const Aws::Vector<PredictedIntent>& GetAlternativeIntents() const { return m_alternativeIntents; }
    template<typename AlternativeIntentsT = Aws::Vector<PredictedIntent>>
    void SetAlternativeIntents(AlternativeIntentsT&& value) { m_alternativeIntentsHasBeenSet = true; m_alternativeIntents = std::forward<AlternativeIntentsT>(value); }
    template<typename AlternativeIntentsT = Aws::Vector<PredictedIntent>>
    PostTextResult& WithAlternativeIntents(AlternativeIntentsT&& value) { SetAlternativeIntents(std::forward<AlternativeIntentsT>(value)); return *this;}
    template<typename AlternativeIntentsT = PredictedIntent>
    PostTextResult& AddAlternativeIntents(AlternativeIntentsT&& value) { m_alternativeIntentsHasBeenSet = true; m_alternativeIntents.emplace_back(std::forward<AlternativeIntentsT>(value)); return *this; }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetSlots() const { return m_slots; }
    template<typename SlotsT = Aws::Map<Aws::String, Aws::String>>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::Map<Aws::String, Aws::String>>
    PostTextResult& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    template<typename SlotsKeyT = Aws::String, typename SlotsValueT = Aws::String>
    PostTextResult& AddSlots(SlotsKeyT&& key, SlotsValueT&& value) {
      m_slotsHasBeenSet = true; m_slots.emplace(std::forward<SlotsKeyT>(key), std::forward<SlotsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const { return m_sessionAttributes; }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetSessionAttributes(SessionAttributesT&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::forward<SessionAttributesT>(value); }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    PostTextResult& WithSessionAttributes(SessionAttributesT&& value) { SetSessionAttributes(std::forward<SessionAttributesT>(value)); return *this;}
    template<typename SessionAttributesKeyT = Aws::String, typename SessionAttributesValueT = Aws::String>
    PostTextResult& AddSessionAttributes(SessionAttributesKeyT&& key, SessionAttributesValueT&& value) {
      m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::forward<SessionAttributesKeyT>(key), std::forward<SessionAttributesValueT>(value)); return *this;
    }
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
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    PostTextResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sentiment expressed in and utterance.</p> <p>When the bot is configured
     * to send utterances to Amazon Comprehend for sentiment analysis, this field
     * contains the result of the analysis.</p>
     */
    inline const SentimentResponse& GetSentimentResponse() const { return m_sentimentResponse; }
    template<typename SentimentResponseT = SentimentResponse>
    void SetSentimentResponse(SentimentResponseT&& value) { m_sentimentResponseHasBeenSet = true; m_sentimentResponse = std::forward<SentimentResponseT>(value); }
    template<typename SentimentResponseT = SentimentResponse>
    PostTextResult& WithSentimentResponse(SentimentResponseT&& value) { SetSentimentResponse(std::forward<SentimentResponseT>(value)); return *this;}
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
    inline MessageFormatType GetMessageFormat() const { return m_messageFormat; }
    inline void SetMessageFormat(MessageFormatType value) { m_messageFormatHasBeenSet = true; m_messageFormat = value; }
    inline PostTextResult& WithMessageFormat(MessageFormatType value) { SetMessageFormat(value); return *this;}
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
    inline DialogState GetDialogState() const { return m_dialogState; }
    inline void SetDialogState(DialogState value) { m_dialogStateHasBeenSet = true; m_dialogState = value; }
    inline PostTextResult& WithDialogState(DialogState value) { SetDialogState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline const Aws::String& GetSlotToElicit() const { return m_slotToElicit; }
    template<typename SlotToElicitT = Aws::String>
    void SetSlotToElicit(SlotToElicitT&& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = std::forward<SlotToElicitT>(value); }
    template<typename SlotToElicitT = Aws::String>
    PostTextResult& WithSlotToElicit(SlotToElicitT&& value) { SetSlotToElicit(std::forward<SlotToElicitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Response Card can come from the bot configuration (in the Amazon Lex console,
     * choose the settings button next to a slot) or from a code hook (Lambda
     * function). </p>
     */
    inline const ResponseCard& GetResponseCard() const { return m_responseCard; }
    template<typename ResponseCardT = ResponseCard>
    void SetResponseCard(ResponseCardT&& value) { m_responseCardHasBeenSet = true; m_responseCard = std::forward<ResponseCardT>(value); }
    template<typename ResponseCardT = ResponseCard>
    PostTextResult& WithResponseCard(ResponseCardT&& value) { SetResponseCard(std::forward<ResponseCardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    PostTextResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
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
    PostTextResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of active contexts for the session. A context can be set when an
     * intent is fulfilled or by calling the <code>PostContent</code>,
     * <code>PostText</code>, or <code>PutSession</code> operation.</p> <p>You can use
     * a context to control the intents that can follow up an intent, or to modify the
     * operation of your application.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const { return m_activeContexts; }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    void SetActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::forward<ActiveContextsT>(value); }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    PostTextResult& WithActiveContexts(ActiveContextsT&& value) { SetActiveContexts(std::forward<ActiveContextsT>(value)); return *this;}
    template<typename ActiveContextsT = ActiveContext>
    PostTextResult& AddActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts.emplace_back(std::forward<ActiveContextsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PostTextResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    IntentConfidence m_nluIntentConfidence;
    bool m_nluIntentConfidenceHasBeenSet = false;

    Aws::Vector<PredictedIntent> m_alternativeIntents;
    bool m_alternativeIntentsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_slots;
    bool m_slotsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    SentimentResponse m_sentimentResponse;
    bool m_sentimentResponseHasBeenSet = false;

    MessageFormatType m_messageFormat{MessageFormatType::NOT_SET};
    bool m_messageFormatHasBeenSet = false;

    DialogState m_dialogState{DialogState::NOT_SET};
    bool m_dialogStateHasBeenSet = false;

    Aws::String m_slotToElicit;
    bool m_slotToElicitHasBeenSet = false;

    ResponseCard m_responseCard;
    bool m_responseCardHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::Vector<ActiveContext> m_activeContexts;
    bool m_activeContextsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
