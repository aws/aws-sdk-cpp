/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/LexRuntimeV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-runtime/model/SessionState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-runtime/model/Message.h>
#include <utility>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

  /**
   */
  class PutSessionRequest : public LexRuntimeV2Request
  {
  public:
    AWS_LEXRUNTIMEV2_API PutSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSession"; }

    AWS_LEXRUNTIMEV2_API Aws::String SerializePayload() const override;

    AWS_LEXRUNTIMEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the bot that receives the session data.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that receives the session data.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot that receives the session data.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot that receives the session data.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that receives the session data.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that receives the session data.</p>
     */
    inline PutSessionRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that receives the session data.</p>
     */
    inline PutSessionRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that receives the session data.</p>
     */
    inline PutSessionRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The alias identifier of the bot that receives the session data.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The alias identifier of the bot that receives the session data.</p>
     */
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }

    /**
     * <p>The alias identifier of the bot that receives the session data.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }

    /**
     * <p>The alias identifier of the bot that receives the session data.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }

    /**
     * <p>The alias identifier of the bot that receives the session data.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }

    /**
     * <p>The alias identifier of the bot that receives the session data.</p>
     */
    inline PutSessionRequest& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The alias identifier of the bot that receives the session data.</p>
     */
    inline PutSessionRequest& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The alias identifier of the bot that receives the session data.</p>
     */
    inline PutSessionRequest& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The locale where the session is in use.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline PutSessionRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline PutSessionRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale where the session is in use.</p>
     */
    inline PutSessionRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The identifier of the session that receives the session data.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The identifier of the session that receives the session data.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The identifier of the session that receives the session data.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The identifier of the session that receives the session data.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The identifier of the session that receives the session data.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The identifier of the session that receives the session data.</p>
     */
    inline PutSessionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the session that receives the session data.</p>
     */
    inline PutSessionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the session that receives the session data.</p>
     */
    inline PutSessionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>A list of messages to send to the user. Messages are sent in the order that
     * they are defined in the list.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>A list of messages to send to the user. Messages are sent in the order that
     * they are defined in the list.</p>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p>A list of messages to send to the user. Messages are sent in the order that
     * they are defined in the list.</p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>A list of messages to send to the user. Messages are sent in the order that
     * they are defined in the list.</p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>A list of messages to send to the user. Messages are sent in the order that
     * they are defined in the list.</p>
     */
    inline PutSessionRequest& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>A list of messages to send to the user. Messages are sent in the order that
     * they are defined in the list.</p>
     */
    inline PutSessionRequest& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>A list of messages to send to the user. Messages are sent in the order that
     * they are defined in the list.</p>
     */
    inline PutSessionRequest& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>A list of messages to send to the user. Messages are sent in the order that
     * they are defined in the list.</p>
     */
    inline PutSessionRequest& AddMessages(Message&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p>
     */
    inline const SessionState& GetSessionState() const{ return m_sessionState; }

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p>
     */
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p>
     */
    inline void SetSessionState(const SessionState& value) { m_sessionStateHasBeenSet = true; m_sessionState = value; }

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p>
     */
    inline void SetSessionState(SessionState&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::move(value); }

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p>
     */
    inline PutSessionRequest& WithSessionState(const SessionState& value) { SetSessionState(value); return *this;}

    /**
     * <p>Sets the state of the session with the user. You can use this to set the
     * current intent, attributes, context, and dialog action. Use the dialog action to
     * determine the next step that Amazon Lex V2 should use in the conversation with
     * the user.</p>
     */
    inline PutSessionRequest& WithSessionState(SessionState&& value) { SetSessionState(std::move(value)); return *this;}


    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const{ return m_requestAttributes; }

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline void SetRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = value; }

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline void SetRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::move(value); }

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline PutSessionRequest& WithRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestAttributes(value); return *this;}

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline PutSessionRequest& WithRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestAttributes(std::move(value)); return *this;}

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline PutSessionRequest& AddRequestAttributes(const Aws::String& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline PutSessionRequest& AddRequestAttributes(Aws::String&& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline PutSessionRequest& AddRequestAttributes(const Aws::String& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline PutSessionRequest& AddRequestAttributes(Aws::String&& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline PutSessionRequest& AddRequestAttributes(const char* key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline PutSessionRequest& AddRequestAttributes(Aws::String&& key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex V2 and the client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p>
     */
    inline PutSessionRequest& AddRequestAttributes(const char* key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }


    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech depending on the value of this parameter. </p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex V2 returns text in the
     * response.</p> </li> </ul>
     */
    inline const Aws::String& GetResponseContentType() const{ return m_responseContentType; }

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech depending on the value of this parameter. </p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex V2 returns text in the
     * response.</p> </li> </ul>
     */
    inline bool ResponseContentTypeHasBeenSet() const { return m_responseContentTypeHasBeenSet; }

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech depending on the value of this parameter. </p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex V2 returns text in the
     * response.</p> </li> </ul>
     */
    inline void SetResponseContentType(const Aws::String& value) { m_responseContentTypeHasBeenSet = true; m_responseContentType = value; }

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech depending on the value of this parameter. </p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex V2 returns text in the
     * response.</p> </li> </ul>
     */
    inline void SetResponseContentType(Aws::String&& value) { m_responseContentTypeHasBeenSet = true; m_responseContentType = std::move(value); }

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech depending on the value of this parameter. </p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex V2 returns text in the
     * response.</p> </li> </ul>
     */
    inline void SetResponseContentType(const char* value) { m_responseContentTypeHasBeenSet = true; m_responseContentType.assign(value); }

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech depending on the value of this parameter. </p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex V2 returns text in the
     * response.</p> </li> </ul>
     */
    inline PutSessionRequest& WithResponseContentType(const Aws::String& value) { SetResponseContentType(value); return *this;}

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech depending on the value of this parameter. </p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex V2 returns text in the
     * response.</p> </li> </ul>
     */
    inline PutSessionRequest& WithResponseContentType(Aws::String&& value) { SetResponseContentType(std::move(value)); return *this;}

    /**
     * <p>The message that Amazon Lex V2 returns in the response can be either text or
     * speech depending on the value of this parameter. </p> <ul> <li> <p>If the value
     * is <code>text/plain; charset=utf-8</code>, Amazon Lex V2 returns text in the
     * response.</p> </li> </ul>
     */
    inline PutSessionRequest& WithResponseContentType(const char* value) { SetResponseContentType(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet = false;

    SessionState m_sessionState;
    bool m_sessionStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestAttributes;
    bool m_requestAttributesHasBeenSet = false;

    Aws::String m_responseContentType;
    bool m_responseContentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
