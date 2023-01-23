/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/lex/LexRuntimeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lex/model/DialogAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex/model/IntentSummary.h>
#include <aws/lex/model/ActiveContext.h>
#include <utility>

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

  /**
   */
  class PutSessionRequest : public LexRuntimeServiceRequest
  {
  public:
    AWS_LEXRUNTIMESERVICE_API PutSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSession"; }

    AWS_LEXRUNTIMESERVICE_API Aws::String SerializePayload() const override;

    AWS_LEXRUNTIMESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(const Aws::String& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::move(value); }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline PutSessionRequest& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}


    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline PutSessionRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline PutSessionRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline PutSessionRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::move(value); }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key/value pairs representing the session-specific context information.
     * It contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline PutSessionRequest& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }


    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline const DialogAction& GetDialogAction() const{ return m_dialogAction; }

    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline bool DialogActionHasBeenSet() const { return m_dialogActionHasBeenSet; }

    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline void SetDialogAction(const DialogAction& value) { m_dialogActionHasBeenSet = true; m_dialogAction = value; }

    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline void SetDialogAction(DialogAction&& value) { m_dialogActionHasBeenSet = true; m_dialogAction = std::move(value); }

    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline PutSessionRequest& WithDialogAction(const DialogAction& value) { SetDialogAction(value); return *this;}

    /**
     * <p>Sets the next action that the bot should take to fulfill the
     * conversation.</p>
     */
    inline PutSessionRequest& WithDialogAction(DialogAction&& value) { SetDialogAction(std::move(value)); return *this;}


    /**
     * <p>A summary of the recent intents for the bot. You can use the intent summary
     * view to set a checkpoint label on an intent and modify attributes of intents.
     * You can also use it to remove or add intent summary objects to the list.</p>
     * <p>An intent that you modify or add to the list must make sense for the bot. For
     * example, the intent name must be valid for the bot. You must provide valid
     * values for:</p> <ul> <li> <p> <code>intentName</code> </p> </li> <li> <p>slot
     * names</p> </li> <li> <p> <code>slotToElict</code> </p> </li> </ul> <p>If you
     * send the <code>recentIntentSummaryView</code> parameter in a
     * <code>PutSession</code> request, the contents of the new summary view replaces
     * the old summary view. For example, if a <code>GetSession</code> request returns
     * three intents in the summary view and you call <code>PutSession</code> with one
     * intent in the summary view, the next call to <code>GetSession</code> will only
     * return one intent.</p>
     */
    inline const Aws::Vector<IntentSummary>& GetRecentIntentSummaryView() const{ return m_recentIntentSummaryView; }

    /**
     * <p>A summary of the recent intents for the bot. You can use the intent summary
     * view to set a checkpoint label on an intent and modify attributes of intents.
     * You can also use it to remove or add intent summary objects to the list.</p>
     * <p>An intent that you modify or add to the list must make sense for the bot. For
     * example, the intent name must be valid for the bot. You must provide valid
     * values for:</p> <ul> <li> <p> <code>intentName</code> </p> </li> <li> <p>slot
     * names</p> </li> <li> <p> <code>slotToElict</code> </p> </li> </ul> <p>If you
     * send the <code>recentIntentSummaryView</code> parameter in a
     * <code>PutSession</code> request, the contents of the new summary view replaces
     * the old summary view. For example, if a <code>GetSession</code> request returns
     * three intents in the summary view and you call <code>PutSession</code> with one
     * intent in the summary view, the next call to <code>GetSession</code> will only
     * return one intent.</p>
     */
    inline bool RecentIntentSummaryViewHasBeenSet() const { return m_recentIntentSummaryViewHasBeenSet; }

    /**
     * <p>A summary of the recent intents for the bot. You can use the intent summary
     * view to set a checkpoint label on an intent and modify attributes of intents.
     * You can also use it to remove or add intent summary objects to the list.</p>
     * <p>An intent that you modify or add to the list must make sense for the bot. For
     * example, the intent name must be valid for the bot. You must provide valid
     * values for:</p> <ul> <li> <p> <code>intentName</code> </p> </li> <li> <p>slot
     * names</p> </li> <li> <p> <code>slotToElict</code> </p> </li> </ul> <p>If you
     * send the <code>recentIntentSummaryView</code> parameter in a
     * <code>PutSession</code> request, the contents of the new summary view replaces
     * the old summary view. For example, if a <code>GetSession</code> request returns
     * three intents in the summary view and you call <code>PutSession</code> with one
     * intent in the summary view, the next call to <code>GetSession</code> will only
     * return one intent.</p>
     */
    inline void SetRecentIntentSummaryView(const Aws::Vector<IntentSummary>& value) { m_recentIntentSummaryViewHasBeenSet = true; m_recentIntentSummaryView = value; }

    /**
     * <p>A summary of the recent intents for the bot. You can use the intent summary
     * view to set a checkpoint label on an intent and modify attributes of intents.
     * You can also use it to remove or add intent summary objects to the list.</p>
     * <p>An intent that you modify or add to the list must make sense for the bot. For
     * example, the intent name must be valid for the bot. You must provide valid
     * values for:</p> <ul> <li> <p> <code>intentName</code> </p> </li> <li> <p>slot
     * names</p> </li> <li> <p> <code>slotToElict</code> </p> </li> </ul> <p>If you
     * send the <code>recentIntentSummaryView</code> parameter in a
     * <code>PutSession</code> request, the contents of the new summary view replaces
     * the old summary view. For example, if a <code>GetSession</code> request returns
     * three intents in the summary view and you call <code>PutSession</code> with one
     * intent in the summary view, the next call to <code>GetSession</code> will only
     * return one intent.</p>
     */
    inline void SetRecentIntentSummaryView(Aws::Vector<IntentSummary>&& value) { m_recentIntentSummaryViewHasBeenSet = true; m_recentIntentSummaryView = std::move(value); }

    /**
     * <p>A summary of the recent intents for the bot. You can use the intent summary
     * view to set a checkpoint label on an intent and modify attributes of intents.
     * You can also use it to remove or add intent summary objects to the list.</p>
     * <p>An intent that you modify or add to the list must make sense for the bot. For
     * example, the intent name must be valid for the bot. You must provide valid
     * values for:</p> <ul> <li> <p> <code>intentName</code> </p> </li> <li> <p>slot
     * names</p> </li> <li> <p> <code>slotToElict</code> </p> </li> </ul> <p>If you
     * send the <code>recentIntentSummaryView</code> parameter in a
     * <code>PutSession</code> request, the contents of the new summary view replaces
     * the old summary view. For example, if a <code>GetSession</code> request returns
     * three intents in the summary view and you call <code>PutSession</code> with one
     * intent in the summary view, the next call to <code>GetSession</code> will only
     * return one intent.</p>
     */
    inline PutSessionRequest& WithRecentIntentSummaryView(const Aws::Vector<IntentSummary>& value) { SetRecentIntentSummaryView(value); return *this;}

    /**
     * <p>A summary of the recent intents for the bot. You can use the intent summary
     * view to set a checkpoint label on an intent and modify attributes of intents.
     * You can also use it to remove or add intent summary objects to the list.</p>
     * <p>An intent that you modify or add to the list must make sense for the bot. For
     * example, the intent name must be valid for the bot. You must provide valid
     * values for:</p> <ul> <li> <p> <code>intentName</code> </p> </li> <li> <p>slot
     * names</p> </li> <li> <p> <code>slotToElict</code> </p> </li> </ul> <p>If you
     * send the <code>recentIntentSummaryView</code> parameter in a
     * <code>PutSession</code> request, the contents of the new summary view replaces
     * the old summary view. For example, if a <code>GetSession</code> request returns
     * three intents in the summary view and you call <code>PutSession</code> with one
     * intent in the summary view, the next call to <code>GetSession</code> will only
     * return one intent.</p>
     */
    inline PutSessionRequest& WithRecentIntentSummaryView(Aws::Vector<IntentSummary>&& value) { SetRecentIntentSummaryView(std::move(value)); return *this;}

    /**
     * <p>A summary of the recent intents for the bot. You can use the intent summary
     * view to set a checkpoint label on an intent and modify attributes of intents.
     * You can also use it to remove or add intent summary objects to the list.</p>
     * <p>An intent that you modify or add to the list must make sense for the bot. For
     * example, the intent name must be valid for the bot. You must provide valid
     * values for:</p> <ul> <li> <p> <code>intentName</code> </p> </li> <li> <p>slot
     * names</p> </li> <li> <p> <code>slotToElict</code> </p> </li> </ul> <p>If you
     * send the <code>recentIntentSummaryView</code> parameter in a
     * <code>PutSession</code> request, the contents of the new summary view replaces
     * the old summary view. For example, if a <code>GetSession</code> request returns
     * three intents in the summary view and you call <code>PutSession</code> with one
     * intent in the summary view, the next call to <code>GetSession</code> will only
     * return one intent.</p>
     */
    inline PutSessionRequest& AddRecentIntentSummaryView(const IntentSummary& value) { m_recentIntentSummaryViewHasBeenSet = true; m_recentIntentSummaryView.push_back(value); return *this; }

    /**
     * <p>A summary of the recent intents for the bot. You can use the intent summary
     * view to set a checkpoint label on an intent and modify attributes of intents.
     * You can also use it to remove or add intent summary objects to the list.</p>
     * <p>An intent that you modify or add to the list must make sense for the bot. For
     * example, the intent name must be valid for the bot. You must provide valid
     * values for:</p> <ul> <li> <p> <code>intentName</code> </p> </li> <li> <p>slot
     * names</p> </li> <li> <p> <code>slotToElict</code> </p> </li> </ul> <p>If you
     * send the <code>recentIntentSummaryView</code> parameter in a
     * <code>PutSession</code> request, the contents of the new summary view replaces
     * the old summary view. For example, if a <code>GetSession</code> request returns
     * three intents in the summary view and you call <code>PutSession</code> with one
     * intent in the summary view, the next call to <code>GetSession</code> will only
     * return one intent.</p>
     */
    inline PutSessionRequest& AddRecentIntentSummaryView(IntentSummary&& value) { m_recentIntentSummaryViewHasBeenSet = true; m_recentIntentSummaryView.push_back(std::move(value)); return *this; }


    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetAccept() const{ return m_accept; }

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline PutSessionRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline PutSessionRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}

    /**
     * <p>The message that Amazon Lex returns in the response can be either text or
     * speech based depending on the value of this field.</p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in the
     * response.</p> </li> <li> <p>If the value begins with <code>audio/</code>, Amazon
     * Lex returns speech in the response. Amazon Lex uses Amazon Polly to generate the
     * speech in the configuration that you specify. For example, if you specify
     * <code>audio/mpeg</code> as the value, Amazon Lex returns speech in the MPEG
     * format.</p> </li> <li> <p>If the value is <code>audio/pcm</code>, the speech is
     * returned as <code>audio/pcm</code> in 16-bit, little endian format.</p> </li>
     * <li> <p>The following are the accepted values:</p> <ul> <li> <p>
     * <code>audio/mpeg</code> </p> </li> <li> <p> <code>audio/ogg</code> </p> </li>
     * <li> <p> <code>audio/pcm</code> </p> </li> <li> <p> <code>audio/ *</code>
     * (defaults to mpeg)</p> </li> <li> <p> <code>text/plain; charset=utf-8</code>
     * </p> </li> </ul> </li> </ul>
     */
    inline PutSessionRequest& WithAccept(const char* value) { SetAccept(value); return *this;}


    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request,</p>
     * <p>If you don't specify a list of contexts, Amazon Lex will use the current list
     * of contexts for the session. If you specify an empty list, all contexts for the
     * session are cleared.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const{ return m_activeContexts; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request,</p>
     * <p>If you don't specify a list of contexts, Amazon Lex will use the current list
     * of contexts for the session. If you specify an empty list, all contexts for the
     * session are cleared.</p>
     */
    inline bool ActiveContextsHasBeenSet() const { return m_activeContextsHasBeenSet; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request,</p>
     * <p>If you don't specify a list of contexts, Amazon Lex will use the current list
     * of contexts for the session. If you specify an empty list, all contexts for the
     * session are cleared.</p>
     */
    inline void SetActiveContexts(const Aws::Vector<ActiveContext>& value) { m_activeContextsHasBeenSet = true; m_activeContexts = value; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request,</p>
     * <p>If you don't specify a list of contexts, Amazon Lex will use the current list
     * of contexts for the session. If you specify an empty list, all contexts for the
     * session are cleared.</p>
     */
    inline void SetActiveContexts(Aws::Vector<ActiveContext>&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::move(value); }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request,</p>
     * <p>If you don't specify a list of contexts, Amazon Lex will use the current list
     * of contexts for the session. If you specify an empty list, all contexts for the
     * session are cleared.</p>
     */
    inline PutSessionRequest& WithActiveContexts(const Aws::Vector<ActiveContext>& value) { SetActiveContexts(value); return *this;}

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request,</p>
     * <p>If you don't specify a list of contexts, Amazon Lex will use the current list
     * of contexts for the session. If you specify an empty list, all contexts for the
     * session are cleared.</p>
     */
    inline PutSessionRequest& WithActiveContexts(Aws::Vector<ActiveContext>&& value) { SetActiveContexts(std::move(value)); return *this;}

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request,</p>
     * <p>If you don't specify a list of contexts, Amazon Lex will use the current list
     * of contexts for the session. If you specify an empty list, all contexts for the
     * session are cleared.</p>
     */
    inline PutSessionRequest& AddActiveContexts(const ActiveContext& value) { m_activeContextsHasBeenSet = true; m_activeContexts.push_back(value); return *this; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request,</p>
     * <p>If you don't specify a list of contexts, Amazon Lex will use the current list
     * of contexts for the session. If you specify an empty list, all contexts for the
     * session are cleared.</p>
     */
    inline PutSessionRequest& AddActiveContexts(ActiveContext&& value) { m_activeContextsHasBeenSet = true; m_activeContexts.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;

    DialogAction m_dialogAction;
    bool m_dialogActionHasBeenSet = false;

    Aws::Vector<IntentSummary> m_recentIntentSummaryView;
    bool m_recentIntentSummaryViewHasBeenSet = false;

    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::Vector<ActiveContext> m_activeContexts;
    bool m_activeContextsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
