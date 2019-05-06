/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/Prompt.h>
#include <aws/lex-models/model/Statement.h>
#include <aws/lex-models/model/ProcessBehavior.h>
#include <aws/lex-models/model/Locale.h>
#include <aws/lex-models/model/Intent.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELBUILDINGSERVICE_API PutBotRequest : public LexModelBuildingServiceRequest
  {
  public:
    PutBotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBot"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline PutBotRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline PutBotRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot. The name is <i>not</i> case sensitive. </p>
     */
    inline PutBotRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the bot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the bot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the bot.</p>
     */
    inline PutBotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the bot.</p>
     */
    inline PutBotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the bot.</p>
     */
    inline PutBotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline const Aws::Vector<Intent>& GetIntents() const{ return m_intents; }

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline bool IntentsHasBeenSet() const { return m_intentsHasBeenSet; }

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline void SetIntents(const Aws::Vector<Intent>& value) { m_intentsHasBeenSet = true; m_intents = value; }

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline void SetIntents(Aws::Vector<Intent>&& value) { m_intentsHasBeenSet = true; m_intents = std::move(value); }

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline PutBotRequest& WithIntents(const Aws::Vector<Intent>& value) { SetIntents(value); return *this;}

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline PutBotRequest& WithIntents(Aws::Vector<Intent>&& value) { SetIntents(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline PutBotRequest& AddIntents(const Intent& value) { m_intentsHasBeenSet = true; m_intents.push_back(value); return *this; }

    /**
     * <p>An array of <code>Intent</code> objects. Each intent represents a command
     * that a user can express. For example, a pizza ordering bot might support an
     * OrderPizza intent. For more information, see <a>how-it-works</a>.</p>
     */
    inline PutBotRequest& AddIntents(Intent&& value) { m_intentsHasBeenSet = true; m_intents.push_back(std::move(value)); return *this; }


    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeate the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p>
     */
    inline const Prompt& GetClarificationPrompt() const{ return m_clarificationPrompt; }

    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeate the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p>
     */
    inline bool ClarificationPromptHasBeenSet() const { return m_clarificationPromptHasBeenSet; }

    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeate the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p>
     */
    inline void SetClarificationPrompt(const Prompt& value) { m_clarificationPromptHasBeenSet = true; m_clarificationPrompt = value; }

    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeate the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p>
     */
    inline void SetClarificationPrompt(Prompt&& value) { m_clarificationPromptHasBeenSet = true; m_clarificationPrompt = std::move(value); }

    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeate the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p>
     */
    inline PutBotRequest& WithClarificationPrompt(const Prompt& value) { SetClarificationPrompt(value); return *this;}

    /**
     * <p>When Amazon Lex doesn't understand the user's intent, it uses this message to
     * get clarification. To specify how many times Amazon Lex should repeate the
     * clarification prompt, use the <code>maxAttempts</code> field. If Amazon Lex
     * still doesn't understand, it sends the message in the
     * <code>abortStatement</code> field. </p> <p>When you create a clarification
     * prompt, make sure that it suggests the correct response from the user. for
     * example, for a bot that orders pizza and drinks, you might create this
     * clarification prompt: "What would you like to do? You can say 'Order a pizza' or
     * 'Order a drink.'"</p>
     */
    inline PutBotRequest& WithClarificationPrompt(Prompt&& value) { SetClarificationPrompt(std::move(value)); return *this;}


    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then aborts the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p>
     */
    inline const Statement& GetAbortStatement() const{ return m_abortStatement; }

    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then aborts the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p>
     */
    inline bool AbortStatementHasBeenSet() const { return m_abortStatementHasBeenSet; }

    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then aborts the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p>
     */
    inline void SetAbortStatement(const Statement& value) { m_abortStatementHasBeenSet = true; m_abortStatement = value; }

    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then aborts the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p>
     */
    inline void SetAbortStatement(Statement&& value) { m_abortStatementHasBeenSet = true; m_abortStatement = std::move(value); }

    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then aborts the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p>
     */
    inline PutBotRequest& WithAbortStatement(const Statement& value) { SetAbortStatement(value); return *this;}

    /**
     * <p>When Amazon Lex can't understand the user's input in context, it tries to
     * elicit the information a few times. After that, Amazon Lex sends the message
     * defined in <code>abortStatement</code> to the user, and then aborts the
     * conversation. To set the number of retries, use the
     * <code>valueElicitationPrompt</code> field for the slot type. </p> <p>For
     * example, in a pizza ordering bot, Amazon Lex might ask a user "What type of
     * crust would you like?" If the user's response is not one of the expected
     * responses (for example, "thin crust, "deep dish," etc.), Amazon Lex tries to
     * elicit a correct response a few more times. </p> <p>For example, in a pizza
     * ordering application, <code>OrderPizza</code> might be one of the intents. This
     * intent might require the <code>CrustType</code> slot. You specify the
     * <code>valueElicitationPrompt</code> field when you create the
     * <code>CrustType</code> slot.</p>
     */
    inline PutBotRequest& WithAbortStatement(Statement&& value) { SetAbortStatement(std::move(value)); return *this;}


    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p> <p>A user interaction session remains active for the amount of
     * time specified. If no conversation occurs during this time, the session expires
     * and Amazon Lex deletes any data provided before the timeout.</p> <p>For example,
     * suppose that a user chooses the OrderPizza intent, but gets sidetracked halfway
     * through placing an order. If the user doesn't complete the order within the
     * specified time, Amazon Lex discards the slot information that it gathered, and
     * the user must start over.</p> <p>If you don't include the
     * <code>idleSessionTTLInSeconds</code> element in a <code>PutBot</code> operation
     * request, Amazon Lex uses the default value. This is also true if the request
     * replaces an existing bot.</p> <p>The default is 300 seconds (5 minutes).</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }

    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p> <p>A user interaction session remains active for the amount of
     * time specified. If no conversation occurs during this time, the session expires
     * and Amazon Lex deletes any data provided before the timeout.</p> <p>For example,
     * suppose that a user chooses the OrderPizza intent, but gets sidetracked halfway
     * through placing an order. If the user doesn't complete the order within the
     * specified time, Amazon Lex discards the slot information that it gathered, and
     * the user must start over.</p> <p>If you don't include the
     * <code>idleSessionTTLInSeconds</code> element in a <code>PutBot</code> operation
     * request, Amazon Lex uses the default value. This is also true if the request
     * replaces an existing bot.</p> <p>The default is 300 seconds (5 minutes).</p>
     */
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }

    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p> <p>A user interaction session remains active for the amount of
     * time specified. If no conversation occurs during this time, the session expires
     * and Amazon Lex deletes any data provided before the timeout.</p> <p>For example,
     * suppose that a user chooses the OrderPizza intent, but gets sidetracked halfway
     * through placing an order. If the user doesn't complete the order within the
     * specified time, Amazon Lex discards the slot information that it gathered, and
     * the user must start over.</p> <p>If you don't include the
     * <code>idleSessionTTLInSeconds</code> element in a <code>PutBot</code> operation
     * request, Amazon Lex uses the default value. This is also true if the request
     * replaces an existing bot.</p> <p>The default is 300 seconds (5 minutes).</p>
     */
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }

    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p> <p>A user interaction session remains active for the amount of
     * time specified. If no conversation occurs during this time, the session expires
     * and Amazon Lex deletes any data provided before the timeout.</p> <p>For example,
     * suppose that a user chooses the OrderPizza intent, but gets sidetracked halfway
     * through placing an order. If the user doesn't complete the order within the
     * specified time, Amazon Lex discards the slot information that it gathered, and
     * the user must start over.</p> <p>If you don't include the
     * <code>idleSessionTTLInSeconds</code> element in a <code>PutBot</code> operation
     * request, Amazon Lex uses the default value. This is also true if the request
     * replaces an existing bot.</p> <p>The default is 300 seconds (5 minutes).</p>
     */
    inline PutBotRequest& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}


    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline const Aws::String& GetVoiceId() const{ return m_voiceId; }

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline void SetVoiceId(const Aws::String& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline void SetVoiceId(Aws::String&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::move(value); }

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline void SetVoiceId(const char* value) { m_voiceIdHasBeenSet = true; m_voiceId.assign(value); }

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline PutBotRequest& WithVoiceId(const Aws::String& value) { SetVoiceId(value); return *this;}

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline PutBotRequest& WithVoiceId(Aws::String&& value) { SetVoiceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Polly voice ID that you want Amazon Lex to use for voice
     * interactions with the user. The locale configured for the voice must match the
     * locale of the bot. For more information, see <a
     * href="http://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a> in the <i>Amazon Polly Developer Guide</i>.</p>
     */
    inline PutBotRequest& WithVoiceId(const char* value) { SetVoiceId(value); return *this;}


    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutBotRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutBotRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a bot, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutBotRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline const ProcessBehavior& GetProcessBehavior() const{ return m_processBehavior; }

    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline bool ProcessBehaviorHasBeenSet() const { return m_processBehaviorHasBeenSet; }

    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline void SetProcessBehavior(const ProcessBehavior& value) { m_processBehaviorHasBeenSet = true; m_processBehavior = value; }

    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline void SetProcessBehavior(ProcessBehavior&& value) { m_processBehaviorHasBeenSet = true; m_processBehavior = std::move(value); }

    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline PutBotRequest& WithProcessBehavior(const ProcessBehavior& value) { SetProcessBehavior(value); return *this;}

    /**
     * <p>If you set the <code>processBehavior</code> element to <code>BUILD</code>,
     * Amazon Lex builds the bot so that it can be run. If you set the element to
     * <code>SAVE</code> Amazon Lex saves the bot, but doesn't build it. </p> <p>If you
     * don't specify this value, the default value is <code>BUILD</code>.</p>
     */
    inline PutBotRequest& WithProcessBehavior(ProcessBehavior&& value) { SetProcessBehavior(std::move(value)); return *this;}


    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline PutBotRequest& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p> Specifies the target locale for the bot. Any intent used in the bot must be
     * compatible with the locale of the bot. </p> <p>The default is
     * <code>en-US</code>.</p>
     */
    inline PutBotRequest& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}


    /**
     * <p>For each Amazon Lex bot created with the Amazon Lex Model Building Service,
     * you must specify whether your use of Amazon Lex is related to a website,
     * program, or other application that is directed or targeted, in whole or in part,
     * to children under age 13 and subject to the Children's Online Privacy Protection
     * Act (COPPA) by specifying <code>true</code> or <code>false</code> in the
     * <code>childDirected</code> field. By specifying <code>true</code> in the
     * <code>childDirected</code> field, you confirm that your use of Amazon Lex
     * <b>is</b> related to a website, program, or other application that is directed
     * or targeted, in whole or in part, to children under age 13 and subject to COPPA.
     * By specifying <code>false</code> in the <code>childDirected</code> field, you
     * confirm that your use of Amazon Lex <b>is not</b> related to a website, program,
     * or other application that is directed or targeted, in whole or in part, to
     * children under age 13 and subject to COPPA. You may not specify a default value
     * for the <code>childDirected</code> field that does not accurately reflect
     * whether your use of Amazon Lex is related to a website, program, or other
     * application that is directed or targeted, in whole or in part, to children under
     * age 13 and subject to COPPA.</p> <p>If your use of Amazon Lex relates to a
     * website, program, or other application that is directed in whole or in part, to
     * children under age 13, you must obtain any required verifiable parental consent
     * under COPPA. For information regarding the use of Amazon Lex in connection with
     * websites, programs, or other applications that are directed or targeted, in
     * whole or in part, to children under age 13, see the <a
     * href="https://aws.amazon.com/lex/faqs#data-security">Amazon Lex FAQ.</a> </p>
     */
    inline bool GetChildDirected() const{ return m_childDirected; }

    /**
     * <p>For each Amazon Lex bot created with the Amazon Lex Model Building Service,
     * you must specify whether your use of Amazon Lex is related to a website,
     * program, or other application that is directed or targeted, in whole or in part,
     * to children under age 13 and subject to the Children's Online Privacy Protection
     * Act (COPPA) by specifying <code>true</code> or <code>false</code> in the
     * <code>childDirected</code> field. By specifying <code>true</code> in the
     * <code>childDirected</code> field, you confirm that your use of Amazon Lex
     * <b>is</b> related to a website, program, or other application that is directed
     * or targeted, in whole or in part, to children under age 13 and subject to COPPA.
     * By specifying <code>false</code> in the <code>childDirected</code> field, you
     * confirm that your use of Amazon Lex <b>is not</b> related to a website, program,
     * or other application that is directed or targeted, in whole or in part, to
     * children under age 13 and subject to COPPA. You may not specify a default value
     * for the <code>childDirected</code> field that does not accurately reflect
     * whether your use of Amazon Lex is related to a website, program, or other
     * application that is directed or targeted, in whole or in part, to children under
     * age 13 and subject to COPPA.</p> <p>If your use of Amazon Lex relates to a
     * website, program, or other application that is directed in whole or in part, to
     * children under age 13, you must obtain any required verifiable parental consent
     * under COPPA. For information regarding the use of Amazon Lex in connection with
     * websites, programs, or other applications that are directed or targeted, in
     * whole or in part, to children under age 13, see the <a
     * href="https://aws.amazon.com/lex/faqs#data-security">Amazon Lex FAQ.</a> </p>
     */
    inline bool ChildDirectedHasBeenSet() const { return m_childDirectedHasBeenSet; }

    /**
     * <p>For each Amazon Lex bot created with the Amazon Lex Model Building Service,
     * you must specify whether your use of Amazon Lex is related to a website,
     * program, or other application that is directed or targeted, in whole or in part,
     * to children under age 13 and subject to the Children's Online Privacy Protection
     * Act (COPPA) by specifying <code>true</code> or <code>false</code> in the
     * <code>childDirected</code> field. By specifying <code>true</code> in the
     * <code>childDirected</code> field, you confirm that your use of Amazon Lex
     * <b>is</b> related to a website, program, or other application that is directed
     * or targeted, in whole or in part, to children under age 13 and subject to COPPA.
     * By specifying <code>false</code> in the <code>childDirected</code> field, you
     * confirm that your use of Amazon Lex <b>is not</b> related to a website, program,
     * or other application that is directed or targeted, in whole or in part, to
     * children under age 13 and subject to COPPA. You may not specify a default value
     * for the <code>childDirected</code> field that does not accurately reflect
     * whether your use of Amazon Lex is related to a website, program, or other
     * application that is directed or targeted, in whole or in part, to children under
     * age 13 and subject to COPPA.</p> <p>If your use of Amazon Lex relates to a
     * website, program, or other application that is directed in whole or in part, to
     * children under age 13, you must obtain any required verifiable parental consent
     * under COPPA. For information regarding the use of Amazon Lex in connection with
     * websites, programs, or other applications that are directed or targeted, in
     * whole or in part, to children under age 13, see the <a
     * href="https://aws.amazon.com/lex/faqs#data-security">Amazon Lex FAQ.</a> </p>
     */
    inline void SetChildDirected(bool value) { m_childDirectedHasBeenSet = true; m_childDirected = value; }

    /**
     * <p>For each Amazon Lex bot created with the Amazon Lex Model Building Service,
     * you must specify whether your use of Amazon Lex is related to a website,
     * program, or other application that is directed or targeted, in whole or in part,
     * to children under age 13 and subject to the Children's Online Privacy Protection
     * Act (COPPA) by specifying <code>true</code> or <code>false</code> in the
     * <code>childDirected</code> field. By specifying <code>true</code> in the
     * <code>childDirected</code> field, you confirm that your use of Amazon Lex
     * <b>is</b> related to a website, program, or other application that is directed
     * or targeted, in whole or in part, to children under age 13 and subject to COPPA.
     * By specifying <code>false</code> in the <code>childDirected</code> field, you
     * confirm that your use of Amazon Lex <b>is not</b> related to a website, program,
     * or other application that is directed or targeted, in whole or in part, to
     * children under age 13 and subject to COPPA. You may not specify a default value
     * for the <code>childDirected</code> field that does not accurately reflect
     * whether your use of Amazon Lex is related to a website, program, or other
     * application that is directed or targeted, in whole or in part, to children under
     * age 13 and subject to COPPA.</p> <p>If your use of Amazon Lex relates to a
     * website, program, or other application that is directed in whole or in part, to
     * children under age 13, you must obtain any required verifiable parental consent
     * under COPPA. For information regarding the use of Amazon Lex in connection with
     * websites, programs, or other applications that are directed or targeted, in
     * whole or in part, to children under age 13, see the <a
     * href="https://aws.amazon.com/lex/faqs#data-security">Amazon Lex FAQ.</a> </p>
     */
    inline PutBotRequest& WithChildDirected(bool value) { SetChildDirected(value); return *this;}


    
    inline bool GetCreateVersion() const{ return m_createVersion; }

    
    inline bool CreateVersionHasBeenSet() const { return m_createVersionHasBeenSet; }

    
    inline void SetCreateVersion(bool value) { m_createVersionHasBeenSet = true; m_createVersion = value; }

    
    inline PutBotRequest& WithCreateVersion(bool value) { SetCreateVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Intent> m_intents;
    bool m_intentsHasBeenSet;

    Prompt m_clarificationPrompt;
    bool m_clarificationPromptHasBeenSet;

    Statement m_abortStatement;
    bool m_abortStatementHasBeenSet;

    int m_idleSessionTTLInSeconds;
    bool m_idleSessionTTLInSecondsHasBeenSet;

    Aws::String m_voiceId;
    bool m_voiceIdHasBeenSet;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet;

    ProcessBehavior m_processBehavior;
    bool m_processBehaviorHasBeenSet;

    Locale m_locale;
    bool m_localeHasBeenSet;

    bool m_childDirected;
    bool m_childDirectedHasBeenSet;

    bool m_createVersion;
    bool m_createVersionHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
